#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_37399E0EB1AF196F_Class_1_8C333BC50B0013E4;
namespace System { class String; }

#define CLASS_1_37399E0EB1AF196F___C__DISPLAYCLASS1_0__ADDDYNAMICTARGETALIASLIST_B__0_OFFSET UNITYSDK_OFFSET(0x11E18420)
#define CLASS_1_37399E0EB1AF196F___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11E17810)

inline static constexpr unsigned int Class_1_37399E0EB1AF196F___c__DisplayClass1_0_TypeDefinitionIndex = 52109;

class Class_1_37399E0EB1AF196F___c__DisplayClass1_0 : public ::System::Object
{
public:
	::System::String* aliasConfigPath; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37399E0EB1AF196F___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _AddDynamicTargetAliasList_b__0(::Class_1_37399E0EB1AF196F_Class_1_8C333BC50B0013E4* data)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_37399E0EB1AF196F_Class_1_8C333BC50B0013E4*))((::PBYTE)hIl2Cpp + CLASS_1_37399E0EB1AF196F___C__DISPLAYCLASS1_0__ADDDYNAMICTARGETALIASLIST_B__0_OFFSET))(this, data);
	}
};
