#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HipplenBuilderActivityAsset_Activity;
class HipplenBuilderUIMan;

#define HIPPLENBUILDERUIMAN___C__DISPLAYCLASS52_0__CREATEACTIVITYITEM_B__0_OFFSET UNITYSDK_OFFSET(0x11E0DFB0)
#define HIPPLENBUILDERUIMAN___C__DISPLAYCLASS52_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11E0D420)

inline static constexpr unsigned int HipplenBuilderUIMan___c__DisplayClass52_0_TypeDefinitionIndex = 44011;

class HipplenBuilderUIMan___c__DisplayClass52_0 : public ::System::Object
{
public:
	::HipplenBuilderActivityAsset_Activity* data; // 0x10
	::HipplenBuilderUIMan* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERUIMAN___C__DISPLAYCLASS52_0__CTOR_OFFSET))(this);
	}

	::System::Void _CreateActivityItem_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERUIMAN___C__DISPLAYCLASS52_0__CREATEACTIVITYITEM_B__0_OFFSET))(this);
	}
};
