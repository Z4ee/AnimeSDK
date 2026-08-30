#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define CLASS_3_388FEF520FE50C83_METHOD_3_56AA6EAE795B6969_OFFSET UNITYSDK_OFFSET(0x1DC72A80)
#define CLASS_3_388FEF520FE50C83_METHOD_3_70D89F22B6EB766C_OFFSET UNITYSDK_OFFSET(0x1DC72AC0)
#define CLASS_3_388FEF520FE50C83__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC72AB0)

inline static constexpr unsigned int Class_3_388FEF520FE50C83_TypeDefinitionIndex = 10180;

class Class_3_388FEF520FE50C83 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* GFNAPNFFGPJ; // 0x18
	::RPG::GameCore::DynamicFloat* FMLGGKAFMKC; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_388FEF520FE50C83__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_56AA6EAE795B6969(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_388FEF520FE50C83*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_388FEF520FE50C83*&))((::PBYTE)hIl2Cpp + CLASS_3_388FEF520FE50C83_METHOD_3_56AA6EAE795B6969_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_70D89F22B6EB766C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_388FEF520FE50C83* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_388FEF520FE50C83*))((::PBYTE)hIl2Cpp + CLASS_3_388FEF520FE50C83_METHOD_3_70D89F22B6EB766C_OFFSET))(a1, a2);
	}
};
