#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HipplenBuilderBuffAsset_BuffConfig;
class HipplenBuilderUIMan;

#define HIPPLENBUILDERUIMAN___C__DISPLAYCLASS42_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18DD7C50)
#define HIPPLENBUILDERUIMAN___C__DISPLAYCLASS42_0__OPENBUFFSELECTIONPANEL_B__0_OFFSET UNITYSDK_OFFSET(0x18DD9390)

inline static constexpr unsigned int HipplenBuilderUIMan___c__DisplayClass42_0_TypeDefinitionIndex = 47678;

class HipplenBuilderUIMan___c__DisplayClass42_0 : public ::System::Object
{
public:
	::HipplenBuilderBuffAsset_BuffConfig* buff; // 0x10
	::HipplenBuilderUIMan* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERUIMAN___C__DISPLAYCLASS42_0__CTOR_OFFSET))(this);
	}

	::System::Void _OpenBuffSelectionPanel_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERUIMAN___C__DISPLAYCLASS42_0__OPENBUFFSELECTIONPANEL_B__0_OFFSET))(this);
	}
};
