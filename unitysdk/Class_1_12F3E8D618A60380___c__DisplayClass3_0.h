#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_12F3E8D618A60380_Class_1_FCD5A2C551387744;
namespace System { class String; }

#define CLASS_1_12F3E8D618A60380___C__DISPLAYCLASS3_0__ADDDYNAMICTARGETALIASLIST_B__0_OFFSET UNITYSDK_OFFSET(0x1AF20690)
#define CLASS_1_12F3E8D618A60380___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF1F7D0)

inline static constexpr unsigned int Class_1_12F3E8D618A60380___c__DisplayClass3_0_TypeDefinitionIndex = 56712;

class Class_1_12F3E8D618A60380___c__DisplayClass3_0 : public ::System::Object
{
public:
	::System::String* aliasConfigPath; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12F3E8D618A60380___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _AddDynamicTargetAliasList_b__0(::Class_1_12F3E8D618A60380_Class_1_FCD5A2C551387744* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_12F3E8D618A60380_Class_1_FCD5A2C551387744*))((::PBYTE)hIl2Cpp + CLASS_1_12F3E8D618A60380___C__DISPLAYCLASS3_0__ADDDYNAMICTARGETALIASLIST_B__0_OFFSET))(this, a1);
	}
};
