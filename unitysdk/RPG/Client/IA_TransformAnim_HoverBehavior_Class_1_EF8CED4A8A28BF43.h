#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_D5302483370BD7FF;
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_CLASS_1_EF8CED4A8A28BF43__CTOR_OFFSET UNITYSDK_OFFSET(0x19828B80)

namespace RPG::Client
{
	inline static constexpr unsigned int IA_TransformAnim_HoverBehavior_Class_1_EF8CED4A8A28BF43_TypeDefinitionIndex = 70804;

	class IA_TransformAnim_HoverBehavior_Class_1_EF8CED4A8A28BF43 : public ::System::Object
	{
	public:
		::UnityEngine::Transform* DICDJJOJKGF; // 0x10
		::Class_1_D5302483370BD7FF* CNLHCKELLBE; // 0x18
		::System::Boolean HCNJIBHDLJM; // 0x20
		::UnityEngine::Vector3 CPDBBEMHDGF; // 0x24
		::UnityEngine::Vector3 BCANAGEHIJH; // 0x30
		::UnityEngine::Quaternion PKKHOMMKEHJ; // 0x3C
		::UnityEngine::Quaternion IHOKNOKAHNE; // 0x4C
		::UnityEngine::Vector3 KJLPJPHLAGC; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_CLASS_1_EF8CED4A8A28BF43__CTOR_OFFSET))(this);
		}
	};
}
