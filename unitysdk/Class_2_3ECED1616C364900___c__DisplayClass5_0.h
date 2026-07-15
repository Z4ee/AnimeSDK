#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_3ECED1616C364900;
namespace RPG::GameCore { class PropComponent; }

#define CLASS_2_3ECED1616C364900___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15669150)
#define CLASS_2_3ECED1616C364900___C__DISPLAYCLASS5_0___ONGETROLLSHOPINFOSCRSP_B__0_OFFSET UNITYSDK_OFFSET(0x156692F0)

inline static constexpr unsigned int Class_2_3ECED1616C364900___c__DisplayClass5_0_TypeDefinitionIndex = 55753;

class Class_2_3ECED1616C364900___c__DisplayClass5_0 : public ::System::Object
{
public:
	::Class_2_3ECED1616C364900* __4__this; // 0x10
	::RPG::GameCore::PropComponent* propCmpt; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3ECED1616C364900___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::System::Void __OnGetRollShopInfoScRsp_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3ECED1616C364900___C__DISPLAYCLASS5_0___ONGETROLLSHOPINFOSCRSP_B__0_OFFSET))(this);
	}
};
