#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }

#define CLASS_3_393193F449A4766C_METHOD_3_77BC119BD93E2767_OFFSET UNITYSDK_OFFSET(0x1C8B1010)
#define CLASS_3_393193F449A4766C_METHOD_3_92AC418AB3CED05A_OFFSET UNITYSDK_OFFSET(0x1C8B1050)
#define CLASS_3_393193F449A4766C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8B1040)

inline static constexpr unsigned int Class_3_393193F449A4766C_TypeDefinitionIndex = 21216;

class Class_3_393193F449A4766C : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* DHMDAEKJENF; // 0x18
	::RPG::GameCore::DynamicString* CIHDMACAGPN; // 0x20
	::System::Boolean PPONJDIBNBB; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_393193F449A4766C__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_77BC119BD93E2767(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_393193F449A4766C*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_393193F449A4766C*&))((::PBYTE)hIl2Cpp + CLASS_3_393193F449A4766C_METHOD_3_77BC119BD93E2767_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_92AC418AB3CED05A(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_393193F449A4766C* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_393193F449A4766C*))((::PBYTE)hIl2Cpp + CLASS_3_393193F449A4766C_METHOD_3_92AC418AB3CED05A_OFFSET))(a1, a2);
	}
};
