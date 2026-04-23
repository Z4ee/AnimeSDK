#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_318;
class Class_1_AAFD4F462EFCCE4D;
class Class_2_6A75EA4A76790B33;
namespace RPG { template <typename T> class PoolList_1; }

#define CLASS_2_6A75EA4A76790B33___C__DISPLAYCLASS59_0__CTOR_OFFSET UNITYSDK_OFFSET(0x904B6A0)
#define CLASS_2_6A75EA4A76790B33___C__DISPLAYCLASS59_0__PRELOADPROPERTYRESOURCES1_B__0_OFFSET UNITYSDK_OFFSET(0x904F0E0)
#define CLASS_2_6A75EA4A76790B33___C__DISPLAYCLASS59_0__PRELOADPROPERTYRESOURCES1_B__1_OFFSET UNITYSDK_OFFSET(0x904F370)
#define CLASS_2_6A75EA4A76790B33___C__DISPLAYCLASS59_0__PRELOADPROPERTYRESOURCES1_B__2_OFFSET UNITYSDK_OFFSET(0x904F480)

inline static constexpr unsigned int Class_2_6A75EA4A76790B33___c__DisplayClass59_0_TypeDefinitionIndex = 46030;

class Class_2_6A75EA4A76790B33___c__DisplayClass59_0 : public ::System::Object
{
public:
	::RPG::PoolList_1<::Class_0_16E4307DCC419505_318*>* preloadedHandles; // 0x10
	::Class_1_AAFD4F462EFCCE4D* asyncResLoadingHandle; // 0x18
	::Class_2_6A75EA4A76790B33* __4__this; // 0x20
	::Class_0_16E4307DCC419505_318* allHandle; // 0x28
	::System::Int32 h; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33___C__DISPLAYCLASS59_0__CTOR_OFFSET))(this);
	}

	::System::Void _PreloadPropertyResources1_b__0(::System::Boolean allFinished)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33___C__DISPLAYCLASS59_0__PRELOADPROPERTYRESOURCES1_B__0_OFFSET))(this, allFinished);
	}

	::System::Void _PreloadPropertyResources1_b__1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33___C__DISPLAYCLASS59_0__PRELOADPROPERTYRESOURCES1_B__1_OFFSET))(this);
	}

	::System::Void _PreloadPropertyResources1_b__2(::System::Boolean v)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33___C__DISPLAYCLASS59_0__PRELOADPROPERTYRESOURCES1_B__2_OFFSET))(this, v);
	}
};
