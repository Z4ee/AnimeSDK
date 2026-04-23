#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NPCSubType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_1_E6906FDE536EFCD6_CLASS_1_2467155AE5123597_CLEAR_OFFSET UNITYSDK_OFFSET(0x12B43030)
#define CLASS_1_E6906FDE536EFCD6_CLASS_1_2467155AE5123597_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x12B41F10)
#define CLASS_1_E6906FDE536EFCD6_CLASS_1_2467155AE5123597_METHOD_1_48C4907B6B0AF079_OFFSET UNITYSDK_OFFSET(0x12B42C90)
#define CLASS_1_E6906FDE536EFCD6_CLASS_1_2467155AE5123597_METHOD_1_7B5E3B36CA129EB3_OFFSET UNITYSDK_OFFSET(0x12B424F0)
#define CLASS_1_E6906FDE536EFCD6_CLASS_1_2467155AE5123597__CTOR_OFFSET UNITYSDK_OFFSET(0x12B43090)

inline static constexpr unsigned int Class_1_E6906FDE536EFCD6_Class_1_2467155AE5123597_TypeDefinitionIndex = 56007;

class Class_1_E6906FDE536EFCD6_Class_1_2467155AE5123597 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::System::String* Field_1_2; // 0x18
	::UnityEngine::Transform* Field_1_5; // 0x20
	::RPG::GameCore::NPCSubType Field_1_1; // 0x28
	::System::Boolean Field_1_4; // 0x2C
	::System::Int32 Field_1_3; // 0x30
	::System::Single Field_1_6; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6906FDE536EFCD6_CLASS_1_2467155AE5123597__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6906FDE536EFCD6_CLASS_1_2467155AE5123597_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::String* Method_1_48C4907B6B0AF079()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6906FDE536EFCD6_CLASS_1_2467155AE5123597_METHOD_1_48C4907B6B0AF079_OFFSET))(this);
	}

	::System::Void Method_1_7B5E3B36CA129EB3(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_E6906FDE536EFCD6_CLASS_1_2467155AE5123597_METHOD_1_7B5E3B36CA129EB3_OFFSET))(this, a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6906FDE536EFCD6_CLASS_1_2467155AE5123597_CLEAR_OFFSET))(this);
	}
};
