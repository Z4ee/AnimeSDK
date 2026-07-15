#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_355;
class Class_1_B1BC6A4125A00322;
class Class_2_B3BCC9AA95120603;
namespace RPG { template <typename T> class PoolList_1; }

#define CLASS_2_B3BCC9AA95120603___C__DISPLAYCLASS59_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16A2DE20)
#define CLASS_2_B3BCC9AA95120603___C__DISPLAYCLASS59_0__PRELOADPROPERTYRESOURCES1_B__0_OFFSET UNITYSDK_OFFSET(0x16A32000)
#define CLASS_2_B3BCC9AA95120603___C__DISPLAYCLASS59_0__PRELOADPROPERTYRESOURCES1_B__1_OFFSET UNITYSDK_OFFSET(0x16A32380)
#define CLASS_2_B3BCC9AA95120603___C__DISPLAYCLASS59_0__PRELOADPROPERTYRESOURCES1_B__2_OFFSET UNITYSDK_OFFSET(0x16A32520)

inline static constexpr unsigned int Class_2_B3BCC9AA95120603___c__DisplayClass59_0_TypeDefinitionIndex = 47578;

class Class_2_B3BCC9AA95120603___c__DisplayClass59_0 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_355* allHandle; // 0x10
	::RPG::PoolList_1<::Class_0_16E4307DCC419505_355*>* preloadedHandles; // 0x18
	::Class_1_B1BC6A4125A00322* asyncResLoadingHandle; // 0x20
	::Class_2_B3BCC9AA95120603* __4__this; // 0x28
	::System::Int32 h; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603___C__DISPLAYCLASS59_0__CTOR_OFFSET))(this);
	}

	::System::Void _PreloadPropertyResources1_b__0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603___C__DISPLAYCLASS59_0__PRELOADPROPERTYRESOURCES1_B__0_OFFSET))(this, a1);
	}

	::System::Void _PreloadPropertyResources1_b__1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603___C__DISPLAYCLASS59_0__PRELOADPROPERTYRESOURCES1_B__1_OFFSET))(this);
	}

	::System::Void _PreloadPropertyResources1_b__2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603___C__DISPLAYCLASS59_0__PRELOADPROPERTYRESOURCES1_B__2_OFFSET))(this, a1);
	}
};
