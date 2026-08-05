#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MonsterFunctionType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define CLASS_1_3169BBF21D83DEAB__CCTOR_OFFSET UNITYSDK_OFFSET(0x13275820)
#define CLASS_1_3169BBF21D83DEAB__CTOR_OFFSET UNITYSDK_OFFSET(0x13275800)

inline static constexpr unsigned int Class_1_3169BBF21D83DEAB_TypeDefinitionIndex = 88570;

class Class_1_3169BBF21D83DEAB : public ::System::Object
{
public:
	static ::Il2CppArray<::MoleMole::Config::MonsterFunctionType>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::MoleMole::Config::MonsterFunctionType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3169BBF21D83DEAB_TypeDefinitionIndex)->GetStaticField(0x3FA50);
	}
	::System::String* Field_1_4; // 0x10
	::Il2CppArray<::MoleMole::Config::MonsterFunctionType>* Field_1_5; // 0x18
	::System::Single Field_1_15; // 0x20
	::System::Boolean Field_1_10; // 0x24
	::System::Boolean Field_1_11; // 0x25
	::System::Boolean Field_1_1; // 0x26
	::System::Boolean Field_1_9; // 0x27
	::System::Boolean Field_1_0; // 0x28
	::System::Boolean Field_1_13; // 0x29
	::System::Boolean Field_1_14; // 0x2A
	::System::Boolean Field_1_7; // 0x2B
	::System::Boolean Field_1_6; // 0x2C
	::UnityEngine::Vector3 Field_1_8; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3169BBF21D83DEAB__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3169BBF21D83DEAB__CCTOR_OFFSET))();
	}
};
