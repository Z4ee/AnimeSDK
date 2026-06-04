#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace HoudiniEngineUnity { class CurveNodeData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HOUDINIENGINEUNITY_HEU_CURVE___C__DISPLAYCLASS90_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17EBD7E0)
#define HOUDINIENGINEUNITY_HEU_CURVE___C__DISPLAYCLASS90_0__UPDATEPOINTS_B__0_OFFSET UNITYSDK_OFFSET(0x17EBEA10)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_Curve___c__DisplayClass90_0_TypeDefinitionIndex = 37423;

	class HEU_Curve___c__DisplayClass90_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* rotations; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* scales; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE___C__DISPLAYCLASS90_0__CTOR_OFFSET))(this);
		}

		::System::Void _UpdatePoints_b__0(::HoudiniEngineUnity::CurveNodeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::CurveNodeData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE___C__DISPLAYCLASS90_0__UPDATEPOINTS_B__0_OFFSET))(this, a1);
		}
	};
}
