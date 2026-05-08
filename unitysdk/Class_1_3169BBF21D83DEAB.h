#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MonsterFunctionType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define CLASS_1_3169BBF21D83DEAB__CCTOR_OFFSET UNITYSDK_OFFSET(0x139C4780)
#define CLASS_1_3169BBF21D83DEAB__CTOR_OFFSET UNITYSDK_OFFSET(0x139C4760)

inline static constexpr unsigned int Class_1_3169BBF21D83DEAB_TypeDefinitionIndex = 60861;

class Class_1_3169BBF21D83DEAB : public ::System::Object
{
public:
	static ::Il2CppArray<::MoleMole::Config::MonsterFunctionType>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::MoleMole::Config::MonsterFunctionType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3169BBF21D83DEAB_TypeDefinitionIndex)->GetStaticField(0x30680);
	}
	::Il2CppArray<::MoleMole::Config::MonsterFunctionType>* Field_1_5; // 0x10
	::System::String* Field_1_6; // 0x18
	::System::Boolean Field_1_2; // 0x20
	::System::Boolean Field_1_1; // 0x21
	::System::Boolean Field_1_7; // 0x22
	::System::Boolean Field_1_13; // 0x23
	::System::Boolean Field_1_8; // 0x24
	::System::Single Field_1_11; // 0x28
	::System::Boolean Field_1_4; // 0x2C
	::System::Boolean Field_1_12; // 0x2D
	::System::Boolean Field_1_3; // 0x2E
	::System::Boolean Field_1_9; // 0x2F
	::UnityEngine::Vector3 Field_1_10; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3169BBF21D83DEAB__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3169BBF21D83DEAB__CCTOR_OFFSET))();
	}
};
