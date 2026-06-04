#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MonoEffectFlag.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_1_E144C29F214A8F26_CLEAR_OFFSET UNITYSDK_OFFSET(0xAD30050)
#define CLASS_1_E144C29F214A8F26_GET_ISRELEASED_OFFSET UNITYSDK_OFFSET(0xAD30100)
#define CLASS_1_E144C29F214A8F26_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0xAD300B0)
#define CLASS_1_E144C29F214A8F26_SET_ISRELEASED_OFFSET UNITYSDK_OFFSET(0xAD30110)
#define CLASS_1_E144C29F214A8F26__CTOR_OFFSET UNITYSDK_OFFSET(0xAD30120)

inline static constexpr unsigned int Class_1_E144C29F214A8F26_TypeDefinitionIndex = 65372;

class Class_1_E144C29F214A8F26 : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::MonoEffectFlag>* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::String* Field_1_2; // 0x20
	::RPG::GameCore::GameEntity* Field_1_3; // 0x28
	::System::String* Field_1_4; // 0x30
	::System::Boolean _IsReleased_k__BackingField; // 0x38
	::System::Boolean Field_1_6; // 0x39
	::System::Boolean Field_1_7; // 0x3A
	::System::Boolean Field_1_8; // 0x3B
	::System::UInt32 Field_1_9; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E144C29F214A8F26__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E144C29F214A8F26_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E144C29F214A8F26_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Boolean get_IsReleased()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E144C29F214A8F26_GET_ISRELEASED_OFFSET))(this);
	}

	::System::Void set_IsReleased(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E144C29F214A8F26_SET_ISRELEASED_OFFSET))(this, a1);
	}
};
