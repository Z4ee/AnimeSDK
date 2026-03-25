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

#define SRDEBUGGER_UI_CONTROLS_PROFILERGRAPHCONTROL_ADDRECT_OFFSET UNITYSDK_OFFSET(0x18454ED0)
#define SRDEBUGGER_UI_CONTROLS_PROFILERGRAPHCONTROL_AWAKE_OFFSET UNITYSDK_OFFSET(0x18453590)
#define SRDEBUGGER_UI_CONTROLS_PROFILERGRAPHCONTROL_CALCULATEMAXFRAMETIME_OFFSET UNITYSDK_OFFSET(0x18454010)
#define SRDEBUGGER_UI_CONTROLS_PROFILERGRAPHCONTROL_CALCULATEVISIBLEDATAPOINTCOUNT_OFFSET UNITYSDK_OFFSET(0x184541D0)
#define SRDEBUGGER_UI_CONTROLS_PROFILERGRAPHCONTROL_DRAWAXIS_OFFSET UNITYSDK_OFFSET(0x18454B60)
#define SRDEBUGGER_UI_CONTROLS_PROFILERGRAPHCONTROL_DRAWDATAPOINT_OFFSET UNITYSDK_OFFSET(0x18454530)
#define SRDEBUGGER_UI_CONTROLS_PROFILERGRAPHCONTROL_GETAXISLABEL_OFFSET UNITYSDK_OFFSET(0x184549D0)
#define SRDEBUGGER_UI_CONTROLS_PROFILERGRAPHCONTROL_GETFRAMEBUFFERCURRENTSIZE_OFFSET UNITYSDK_OFFSET(0x18454330)
#define SRDEBUGGER_UI_CONTROLS_PROFILERGRAPHCONTROL_GETFRAMEBUFFERMAXSIZE_OFFSET UNITYSDK_OFFSET(0x184551E0)
#define SRDEBUGGER_UI_CONTROLS_PROFILERGRAPHCONTROL_GETFRAME_OFFSET UNITYSDK_OFFSET(0x18454420)
#define SRDEBUGGER_UI_CONTROLS_PROFILERGRAPHCONTROL_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x18453630)
#define SRDEBUGGER_UI_CONTROLS_PROFILERGRAPHCONTROL_START_OFFSET UNITYSDK_OFFSET(0x184535D0)
#define SRDEBUGGER_UI_CONTROLS_PROFILERGRAPHCONTROL_UPDATE_OFFSET UNITYSDK_OFFSET(0x184535E0)
#define SRDEBUGGER_UI_CONTROLS_PROFILERGRAPHCONTROL__CCTOR_OFFSET UNITYSDK_OFFSET(0x18455460)
#define SRDEBUGGER_UI_CONTROLS_PROFILERGRAPHCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x184552E0)

namespace SRDebugger::UI::Controls
{
	inline static constexpr unsigned int ProfilerGraphControl_TypeDefinitionIndex = 29684;

	class ProfilerGraphControl : public ::UnityEngine::UI::Graphic
	{
	public:
		static ::Il2CppArray<::System::Single>** StaticGet_ScaleSteps()
		{
			return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ProfilerGraphControl_TypeDefinitionIndex)->GetStaticField(0x344C0);
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

		::System::Void OnPopulateMesh(::UnityEngine::Mesh* m)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERGRAPHCONTROL_ONPOPULATEMESH_OFFSET))(this, m);
		}

		::System::Void DrawDataPoint(::System::Single xPosition, ::System::Single verticalScale, ::SRDebugger::Services::ProfilerFrame frame)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::SRDebugger::Services::ProfilerFrame))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERGRAPHCONTROL_DRAWDATAPOINT_OFFSET))(this, xPosition, verticalScale, frame);
		}

		::System::Void DrawAxis(::System::Single frameTime, ::System::Single yPosition, ::SRDebugger::UI::Controls::ProfilerGraphAxisLabel* label)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::SRDebugger::UI::Controls::ProfilerGraphAxisLabel*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERGRAPHCONTROL_DRAWAXIS_OFFSET))(this, frameTime, yPosition, label);
		}

		::System::Void AddRect(::UnityEngine::Vector3 tl, ::UnityEngine::Vector3 tr, ::UnityEngine::Vector3 bl, ::UnityEngine::Vector3 br, ::UnityEngine::Color c)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERGRAPHCONTROL_ADDRECT_OFFSET))(this, tl, tr, bl, br, c);
		}

		::SRDebugger::Services::ProfilerFrame GetFrame(::System::Int32 i)
		{
			return ((::SRDebugger::Services::ProfilerFrame(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERGRAPHCONTROL_GETFRAME_OFFSET))(this, i);
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

		::SRDebugger::UI::Controls::ProfilerGraphAxisLabel* GetAxisLabel(::System::Int32 index)
		{
			return ((::SRDebugger::UI::Controls::ProfilerGraphAxisLabel*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERGRAPHCONTROL_GETAXISLABEL_OFFSET))(this, index);
		}
	};
}
