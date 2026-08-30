#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1DB6C02CA182EEBA;
class Class_2_7AA0468CE6C1F3D7_1;
namespace RPG::GameCore { class TurnBasedModifierConfig; }
namespace System { class String; }

#define CLASS_1_B4B0859209F16852_CLASS_1_317CDD276CB8C912__CTOR_OFFSET UNITYSDK_OFFSET(0x1641B930)

inline static constexpr unsigned int Class_1_B4B0859209F16852_Class_1_317CDD276CB8C912_TypeDefinitionIndex = 57052;

class Class_1_B4B0859209F16852_Class_1_317CDD276CB8C912 : public ::System::Object
{
public:
	::Class_2_7AA0468CE6C1F3D7_1* JPHGPKBOHPE; // 0x10
	::Class_2_1DB6C02CA182EEBA* CNPFIPLHOMN; // 0x18
	::System::String* IFNAGLOMHBK; // 0x20
	::RPG::GameCore::TurnBasedModifierConfig* EABKOHGCHFP; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4B0859209F16852_CLASS_1_317CDD276CB8C912__CTOR_OFFSET))(this);
	}
};
