#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace HoudiniEngineUnity { class CurveNodeData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HOUDINIENGINEUNITY_HEU_CURVE___C__DISPLAYCLASS88_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3DC810)
#define HOUDINIENGINEUNITY_HEU_CURVE___C__DISPLAYCLASS88_0__UPDATECURVEINPUTFORCUSTOMATTRIBUTES_B__0_OFFSET UNITYSDK_OFFSET(0x1B3DED40)
#define HOUDINIENGINEUNITY_HEU_CURVE___C__DISPLAYCLASS88_0__UPDATECURVEINPUTFORCUSTOMATTRIBUTES_B__1_OFFSET UNITYSDK_OFFSET(0x1B3DEF00)
#define HOUDINIENGINEUNITY_HEU_CURVE___C__DISPLAYCLASS88_0__UPDATECURVEINPUTFORCUSTOMATTRIBUTES_B__2_OFFSET UNITYSDK_OFFSET(0x1B3DF250)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_Curve___c__DisplayClass88_0_TypeDefinitionIndex = 39089;

	class HEU_Curve___c__DisplayClass88_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Quaternion>* rotations; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* scales; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* positions; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE___C__DISPLAYCLASS88_0__CTOR_OFFSET))(this);
		}

		::System::Void _UpdateCurveInputForCustomAttributes_b__0(::HoudiniEngineUnity::CurveNodeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::CurveNodeData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE___C__DISPLAYCLASS88_0__UPDATECURVEINPUTFORCUSTOMATTRIBUTES_B__0_OFFSET))(this, a1);
		}

		::System::Void _UpdateCurveInputForCustomAttributes_b__1(::System::Int32 a1, ::System::Int32 a2, ::System::Single a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE___C__DISPLAYCLASS88_0__UPDATECURVEINPUTFORCUSTOMATTRIBUTES_B__1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _UpdateCurveInputForCustomAttributes_b__2(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE___C__DISPLAYCLASS88_0__UPDATECURVEINPUTFORCUSTOMATTRIBUTES_B__2_OFFSET))(this, a1, a2);
		}
	};
}
