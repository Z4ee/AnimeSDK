#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::MiniGame::TartarusHounds::View { class ViewEntityGame; }

#define CLASS_1_3595ACF2B25A017E_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x1289D350)
#define CLASS_1_3595ACF2B25A017E_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1289D3B0)
#define CLASS_1_3595ACF2B25A017E_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1289D310)
#define CLASS_1_3595ACF2B25A017E_METHOD_1_E5078445A0423A94_OFFSET UNITYSDK_OFFSET(0x1289D1B0)
#define CLASS_1_3595ACF2B25A017E__CTOR_OFFSET UNITYSDK_OFFSET(0x1289D1A0)

inline static constexpr unsigned int Class_1_3595ACF2B25A017E_TypeDefinitionIndex = 69779;

class Class_1_3595ACF2B25A017E : public ::System::Object
{
public:
	::MoleMole::MiniGame::TartarusHounds::View::ViewEntityGame* Field_1_0; // 0x10

	::System::Void _ctor(::MoleMole::MiniGame::TartarusHounds::View::ViewEntityGame* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MiniGame::TartarusHounds::View::ViewEntityGame*))((::PBYTE)hIl2Cpp + CLASS_1_3595ACF2B25A017E__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_E5078445A0423A94(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3595ACF2B25A017E_METHOD_1_E5078445A0423A94_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3595ACF2B25A017E_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3595ACF2B25A017E_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3595ACF2B25A017E_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}
};
