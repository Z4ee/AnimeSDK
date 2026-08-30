#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_2_B35C6E695A702FAB_METHOD_2_A52E1F2EB3C607F5_OFFSET UNITYSDK_OFFSET(0x1A3F2F50)
#define CLASS_2_B35C6E695A702FAB__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3F3190)

inline static constexpr unsigned int Class_2_B35C6E695A702FAB_TypeDefinitionIndex = 22467;

class Class_2_B35C6E695A702FAB : public ::RPG::GameCore::JsonConfig
{
public:
	::RPG::GameCore::DynamicFloat* NDNIILALBOP; // 0x10
	::RPG::GameCore::DynamicFloat* NPBJDGCDBAE; // 0x18
	::System::Single JGNLDDCGADA; // 0x20
	::System::Boolean LCNEPFHOJKE; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B35C6E695A702FAB__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_2_A52E1F2EB3C607F5(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_B35C6E695A702FAB*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_B35C6E695A702FAB*&))((::PBYTE)hIl2Cpp + CLASS_2_B35C6E695A702FAB_METHOD_2_A52E1F2EB3C607F5_OFFSET))(a1, a2);
	}
};
