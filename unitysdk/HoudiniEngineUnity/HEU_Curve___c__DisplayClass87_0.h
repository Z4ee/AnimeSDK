#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace HoudiniEngineUnity { class CurveNodeData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HOUDINIENGINEUNITY_HEU_CURVE___C__DISPLAYCLASS87_0__CTOR_OFFSET UNITYSDK_OFFSET(0x167D6C10)
#define HOUDINIENGINEUNITY_HEU_CURVE___C__DISPLAYCLASS87_0__UPDATECURVEINPUTFORCURVEPARTS_B__0_OFFSET UNITYSDK_OFFSET(0x167D90F0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_Curve___c__DisplayClass87_0_TypeDefinitionIndex = 39088;

	class HEU_Curve___c__DisplayClass87_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* curveCountIndices; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Quaternion>* rotations; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* positions; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* scales; // 0x28
		::System::Boolean hasScales; // 0x30
		::System::Boolean hasRotations; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE___C__DISPLAYCLASS87_0__CTOR_OFFSET))(this);
		}

		::System::Void _UpdateCurveInputForCurveParts_b__0(::HoudiniEngineUnity::CurveNodeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::CurveNodeData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE___C__DISPLAYCLASS87_0__UPDATECURVEINPUTFORCURVEPARTS_B__0_OFFSET))(this, a1);
		}
	};
}
