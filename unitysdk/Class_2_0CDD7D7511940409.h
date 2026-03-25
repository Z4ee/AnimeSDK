#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace RPG::GameCore { class BattleInstance; }

#define CLASS_2_0CDD7D7511940409_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x11736100)
#define CLASS_2_0CDD7D7511940409_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x117362E0)
#define CLASS_2_0CDD7D7511940409_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11736210)
#define CLASS_2_0CDD7D7511940409__CTOR_OFFSET UNITYSDK_OFFSET(0x11736250)
#define CLASS_2_0CDD7D7511940409__ONBIND_OFFSET UNITYSDK_OFFSET(0x117360C0)
#define CLASS_2_0CDD7D7511940409___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x11736280)

inline static constexpr unsigned int Class_2_0CDD7D7511940409_TypeDefinitionIndex = 58597;

class Class_2_0CDD7D7511940409 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::RPG::GameCore::BattleInstance* Field_2_0; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0CDD7D7511940409__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0CDD7D7511940409__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0CDD7D7511940409_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0CDD7D7511940409_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0CDD7D7511940409___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0CDD7D7511940409_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
