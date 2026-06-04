#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRDebugger/Services/ProfilerFrame.h"
#include "unitysdk/SRDebugger/UI/Controls/ProfilerGraphControl_VerticalAlignments.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/UI/Graphic.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace SRDebugger::Services { class IProfilerService; }
namespace SRDebugger::UI::Controls { class ProfilerGraphAxisLabel; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Mesh; }

#define SRDEBUGGER_UI_CONTROLS_PROFILERGRAPHCONTROL_ADDRECT_OFFSET UNITYSDK_OFFSET(0x1AD05CB0)
#define SRDEBUGGER_UI_CONTROLS_PROFILERGRAPHCONTROL_AWAKE_OFFSET UNITYSDK_OFFSET(0x1AD043B0)
#define SRDEBUGGER_UI_CONTROLS_PROFILERGRAPHCONTROL_CALCULATEMAXFRAMETIME_OFFSET UNITYSDK_OFFSET(0x1AD04DF0)
#define SRDEBUGGER_UI_CONTROLS_PROFILERGRAPHCONTROL_CALCULATEVISIBLEDATAPOINTCOUNT_OFFSET UNITYSDK_OFFSET(0x1AD04FA0)
#define SRDEBUGGER_UI_CONTROLS_PROFILERGRAPHCONTROL_DRAWAXIS_OFFSET UNITYSDK_OFFSET(0x1AD05940)
#define SRDEBUGGER_UI_CONTROLS_PROFILERGRAPHCONTROL_DRAWDATAPOINT_OFFSET UNITYSDK_OFFSET(0x1AD05310)
#define SRDEBUGGER_UI_CONTROLS_PROFILERGRAPHCONTROL_GETAXISLABEL_OFFSET UNITYSDK_OFFSET(0x1AD057B0)
#define SRDEBUGGER_UI_CONTROLS_PROFILERGRAPHCONTROL_GETFRAMEBUFFERCURRENTSIZE_OFFSET UNITYSDK_OFFSET(0x1AD05100)
#define SRDEBUGGER_UI_CONTROLS_PROFILERGRAPHCONTROL_GETFRAMEBUFFERMAXSIZE_OFFSET UNITYSDK_OFFSET(0x1AD06280)
#define SRDEBUGGER_UI_CONTROLS_PROFILERGRAPHCONTROL_GETFRAME_OFFSET UNITYSDK_OFFSET(0x1AD051F0)
#define SRDEBUGGER_UI_CONTROLS_PROFILERGRAPHCONTROL_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x1AD04460)
#define SRDEBUGGER_UI_CONTROLS_PROFILERGRAPHCONTROL_START_OFFSET UNITYSDK_OFFSET(0x1AD043F0)
#define SRDEBUGGER_UI_CONTROLS_PROFILERGRAPHCONTROL_UPDATE_OFFSET UNITYSDK_OFFSET(0x1AD04400)
#define SRDEBUGGER_UI_CONTROLS_PROFILERGRAPHCONTROL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AD06500)
#define SRDEBUGGER_UI_CONTROLS_PROFILERGRAPHCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD06380)

namespace SRDebugger::UI::Controls
{
	inline static constexpr unsigned int ProfilerGraphControl_TypeDefinitionIndex = 35704;

	class ProfilerGraphControl : public ::UnityEngine::UI::Graphic
	{
	public:
		static ::Il2CppArray<::System::Single>** StaticGet_ScaleSteps()
		{
			return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ProfilerGraphControl_TypeDefinitionIndex)->GetStaticField(0x63E40);
		}
		// static const ::System::Single DataPointMargin; // 0x0
		// static const ::System::Single DataPointVerticalMargin; // 0x0
		// static const ::System::Single DataPointWidth; // 0x0
		// static const ::System::Int32 LineCount = 0x3; // 0x0
		::SRDebugger::UI::Controls::ProfilerGraphControl_VerticalAlignments VerticalAlignment; // 0xA0
		::System::Boolean FloatingScale; // 0xA4
		::System::Boolean TargetFpsUseApplication; // 0xA5
		::System::Boolean DrawAxes; // 0xA6
		::System::Int32 TargetFps; // 0xA8
		::System::Boolean Clip; // 0xAC
		::System::Int32 VerticalPadding; // 0xB0
		::Il2CppArray<::UnityEngine::Color>* LineColours; // 0xB8
		::SRDebugger::Services::IProfilerService* _profilerService; // 0xC0
		::Il2CppArray<::SRDebugger::UI::Controls::ProfilerGraphAxisLabel*>* _axisLabels; // 0xC8
		::UnityEngine::Rect _clipBounds; // 0xD0
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _meshVertices; // 0xE0
		::System::Collections::Generic::List_1<::UnityEngine::Color32>* _meshVertexColors; // 0xE8
		::System::Collections::Generic::List_1<::System::Int32>* _meshTriangles; // 0xF0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERGRAPHCONTROL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERGRAPHCONTROL__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERGRAPHCONTROL_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERGRAPHCONTROL_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERGRAPHCONTROL_UPDATE_OFFSET))(this);
		}

		::System::Void OnPopulateMesh(::UnityEngine::Mesh* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERGRAPHCONTROL_ONPOPULATEMESH_OFFSET))(this, a1);
		}

		::System::Void DrawDataPoint(::System::Single a1, ::System::Single a2, ::SRDebugger::Services::ProfilerFrame a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::SRDebugger::Services::ProfilerFrame))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERGRAPHCONTROL_DRAWDATAPOINT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DrawAxis(::System::Single a1, ::System::Single a2, ::SRDebugger::UI::Controls::ProfilerGraphAxisLabel* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::SRDebugger::UI::Controls::ProfilerGraphAxisLabel*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERGRAPHCONTROL_DRAWAXIS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AddRect(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Color a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERGRAPHCONTROL_ADDRECT_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::SRDebugger::Services::ProfilerFrame GetFrame(::System::Int32 a1)
		{
			return ((::SRDebugger::Services::ProfilerFrame(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERGRAPHCONTROL_GETFRAME_OFFSET))(this, a1);
		}

		::System::Int32 CalculateVisibleDataPointCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERGRAPHCONTROL_CALCULATEVISIBLEDATAPOINTCOUNT_OFFSET))(this);
		}

		::System::Int32 GetFrameBufferCurrentSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERGRAPHCONTROL_GETFRAMEBUFFERCURRENTSIZE_OFFSET))(this);
		}

		::System::Int32 GetFrameBufferMaxSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERGRAPHCONTROL_GETFRAMEBUFFERMAXSIZE_OFFSET))(this);
		}

		::System::Single CalculateMaxFrameTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERGRAPHCONTROL_CALCULATEMAXFRAMETIME_OFFSET))(this);
		}

		::SRDebugger::UI::Controls::ProfilerGraphAxisLabel* GetAxisLabel(::System::Int32 a1)
		{
			return ((::SRDebugger::UI::Controls::ProfilerGraphAxisLabel*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERGRAPHCONTROL_GETAXISLABEL_OFFSET))(this, a1);
		}
	};
}
