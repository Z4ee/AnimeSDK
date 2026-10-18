#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTarget.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_1DDBD26A53751A71_2_METHOD_3_3083B6B751BD211F_OFFSET UNITYSDK_OFFSET(0x1D113D60)
#define CLASS_3_1DDBD26A53751A71_2_METHOD_3_663603CA54B70F7F_OFFSET UNITYSDK_OFFSET(0x1D113DC0)
#define CLASS_3_1DDBD26A53751A71_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1D113DB0)

inline static constexpr unsigned int Class_3_1DDBD26A53751A71_2_TypeDefinitionIndex = 16854;

class Class_3_1DDBD26A53751A71_2 : public ::RPG::GameCore::MarbleTaskConfig
{
public:
	::RPG::GameCore::MarbleTarget HILNFHCPEAD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1DDBD26A53751A71_2__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_3083B6B751BD211F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_1DDBD26A53751A71_2*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_1DDBD26A53751A71_2*&))((::PBYTE)hIl2Cpp + CLASS_3_1DDBD26A53751A71_2_METHOD_3_3083B6B751BD211F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_663603CA54B70F7F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_1DDBD26A53751A71_2* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_1DDBD26A53751A71_2*))((::PBYTE)hIl2Cpp + CLASS_3_1DDBD26A53751A71_2_METHOD_3_663603CA54B70F7F_OFFSET))(a1, a2);
	}
};
