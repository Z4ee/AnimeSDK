#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_D5302483370BD7FF;
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_CLASS_1_EF8CED4A8A28BF43__CTOR_OFFSET UNITYSDK_OFFSET(0xD32C340)

namespace RPG::Client
{
	inline static constexpr unsigned int IA_TransformAnim_HoverBehavior_Class_1_EF8CED4A8A28BF43_TypeDefinitionIndex = 70842;

	class IA_TransformAnim_HoverBehavior_Class_1_EF8CED4A8A28BF43 : public ::System::Object
	{
	public:
		::Class_1_D5302483370BD7FF* CNLHCKELLBE; // 0x10
		::UnityEngine::Transform* DICDJJOJKGF; // 0x18
		::UnityEngine::Vector3 BCANAGEHIJH; // 0x20
		::System::Boolean HCNJIBHDLJM; // 0x2C
		::UnityEngine::Vector3 KJLPJPHLAGC; // 0x30
		::UnityEngine::Vector3 CPDBBEMHDGF; // 0x3C
		::UnityEngine::Quaternion PKKHOMMKEHJ; // 0x48
		::UnityEngine::Quaternion IHOKNOKAHNE; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_CLASS_1_EF8CED4A8A28BF43__CTOR_OFFSET))(this);
		}
	};
}
