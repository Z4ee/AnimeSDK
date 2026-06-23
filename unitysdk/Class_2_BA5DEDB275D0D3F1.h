#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3595ACF2B25A017E.h"

namespace MoleMole::MiniGame::TartarusHounds::View { class ViewEntityGame; }

#define CLASS_2_BA5DEDB275D0D3F1_METHOD_2_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0xD59FB20)
#define CLASS_2_BA5DEDB275D0D3F1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD59FBE0)
#define CLASS_2_BA5DEDB275D0D3F1__CTOR_OFFSET UNITYSDK_OFFSET(0xD59FB10)

inline static constexpr unsigned int Class_2_BA5DEDB275D0D3F1_TypeDefinitionIndex = 54038;

class Class_2_BA5DEDB275D0D3F1 : public ::Class_1_3595ACF2B25A017E
{
public:
	::System::Void _ctor(::MoleMole::MiniGame::TartarusHounds::View::ViewEntityGame* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MiniGame::TartarusHounds::View::ViewEntityGame*))((::PBYTE)hIl2Cpp + CLASS_2_BA5DEDB275D0D3F1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_60E1F7F58CCF739F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BA5DEDB275D0D3F1_METHOD_2_60E1F7F58CCF739F_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BA5DEDB275D0D3F1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
