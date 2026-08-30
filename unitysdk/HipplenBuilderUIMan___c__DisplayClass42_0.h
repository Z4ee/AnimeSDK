#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HipplenBuilderBuffAsset_BuffConfig;
class HipplenBuilderUIMan;

#define HIPPLENBUILDERUIMAN___C__DISPLAYCLASS42_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15ADFF10)
#define HIPPLENBUILDERUIMAN___C__DISPLAYCLASS42_0__OPENBUFFSELECTIONPANEL_B__0_OFFSET UNITYSDK_OFFSET(0x15AE1650)

inline static constexpr unsigned int HipplenBuilderUIMan___c__DisplayClass42_0_TypeDefinitionIndex = 47678;

class HipplenBuilderUIMan___c__DisplayClass42_0 : public ::System::Object
{
public:
	::HipplenBuilderUIMan* __4__this; // 0x10
	::HipplenBuilderBuffAsset_BuffConfig* buff; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERUIMAN___C__DISPLAYCLASS42_0__CTOR_OFFSET))(this);
	}

	::System::Void _OpenBuffSelectionPanel_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERUIMAN___C__DISPLAYCLASS42_0__OPENBUFFSELECTIONPANEL_B__0_OFFSET))(this);
	}
};
