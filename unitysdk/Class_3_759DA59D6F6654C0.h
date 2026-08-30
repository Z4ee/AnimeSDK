#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define CLASS_3_759DA59D6F6654C0_METHOD_3_56AA6EAE795B6969_OFFSET UNITYSDK_OFFSET(0x1D28FAF0)
#define CLASS_3_759DA59D6F6654C0_METHOD_3_70D89F22B6EB766C_OFFSET UNITYSDK_OFFSET(0x1D28FB30)
#define CLASS_3_759DA59D6F6654C0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D28FB20)

inline static constexpr unsigned int Class_3_759DA59D6F6654C0_TypeDefinitionIndex = 21222;

class Class_3_759DA59D6F6654C0 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicString* GFNAPNFFGPJ; // 0x18
	::RPG::GameCore::DynamicString* ANFKEPMIINB; // 0x20
	::RPG::GameCore::DynamicString* MAMNLIOEABC; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_759DA59D6F6654C0__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_56AA6EAE795B6969(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_759DA59D6F6654C0*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_759DA59D6F6654C0*&))((::PBYTE)hIl2Cpp + CLASS_3_759DA59D6F6654C0_METHOD_3_56AA6EAE795B6969_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_70D89F22B6EB766C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_759DA59D6F6654C0* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_759DA59D6F6654C0*))((::PBYTE)hIl2Cpp + CLASS_3_759DA59D6F6654C0_METHOD_3_70D89F22B6EB766C_OFFSET))(a1, a2);
	}
};
