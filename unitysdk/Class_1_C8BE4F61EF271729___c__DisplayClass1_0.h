#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C8BE4F61EF271729_Class_1_8C333BC50B0013E4;
namespace System { class String; }

#define CLASS_1_C8BE4F61EF271729___C__DISPLAYCLASS1_0__ADDDYNAMICTARGETALIASLIST_B__0_OFFSET UNITYSDK_OFFSET(0x18515000)
#define CLASS_1_C8BE4F61EF271729___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18514440)

inline static constexpr unsigned int Class_1_C8BE4F61EF271729___c__DisplayClass1_0_TypeDefinitionIndex = 56715;

class Class_1_C8BE4F61EF271729___c__DisplayClass1_0 : public ::System::Object
{
public:
	::System::String* aliasConfigPath; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8BE4F61EF271729___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _AddDynamicTargetAliasList_b__0(::Class_1_C8BE4F61EF271729_Class_1_8C333BC50B0013E4* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C8BE4F61EF271729_Class_1_8C333BC50B0013E4*))((::PBYTE)hIl2Cpp + CLASS_1_C8BE4F61EF271729___C__DISPLAYCLASS1_0__ADDDYNAMICTARGETALIASLIST_B__0_OFFSET))(this, a1);
	}
};
