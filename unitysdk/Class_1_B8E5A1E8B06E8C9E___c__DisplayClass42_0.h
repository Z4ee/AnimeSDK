#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_37C86F8E7774C578;
class Class_1_B8E5A1E8B06E8C9E_Class_1_4C9FA13DAC7521AD_2;

#define CLASS_1_B8E5A1E8B06E8C9E___C__DISPLAYCLASS42_0__CTOR_OFFSET UNITYSDK_OFFSET(0x156CD0B0)
#define CLASS_1_B8E5A1E8B06E8C9E___C__DISPLAYCLASS42_0___ONSELECTMOLDMESSAGE_B__0_OFFSET UNITYSDK_OFFSET(0x156CD7E0)

inline static constexpr unsigned int Class_1_B8E5A1E8B06E8C9E___c__DisplayClass42_0_TypeDefinitionIndex = 79468;

class Class_1_B8E5A1E8B06E8C9E___c__DisplayClass42_0 : public ::System::Object
{
public:
	::Class_1_B8E5A1E8B06E8C9E_Class_1_4C9FA13DAC7521AD_2* message; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8E5A1E8B06E8C9E___C__DISPLAYCLASS42_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __OnSelectMoldMessage_b__0(::Class_1_37C86F8E7774C578* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_37C86F8E7774C578*))((::PBYTE)hIl2Cpp + CLASS_1_B8E5A1E8B06E8C9E___C__DISPLAYCLASS42_0___ONSELECTMOLDMESSAGE_B__0_OFFSET))(this, a1);
	}
};
