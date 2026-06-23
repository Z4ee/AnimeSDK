#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/MoleMole/Config/BuffGroupName.h"

namespace System { class String; }

#define CLASS_2_10C938FADE89F989_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0x131A9630)
#define CLASS_2_10C938FADE89F989_METHOD_2_12B72DF71D815C8A_OFFSET UNITYSDK_OFFSET(0x131A95A0)
#define CLASS_2_10C938FADE89F989_METHOD_2_41F8B8ACD2DFAAFE_OFFSET UNITYSDK_OFFSET(0x131A93D0)
#define CLASS_2_10C938FADE89F989_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x131A9510)
#define CLASS_2_10C938FADE89F989_METHOD_2_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x131A9390)
#define CLASS_2_10C938FADE89F989_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x131A9670)
#define CLASS_2_10C938FADE89F989_TOSTRING_OFFSET UNITYSDK_OFFSET(0x131A9410)
#define CLASS_2_10C938FADE89F989__CCTOR_OFFSET UNITYSDK_OFFSET(0x131A9490)
#define CLASS_2_10C938FADE89F989__CTOR_OFFSET UNITYSDK_OFFSET(0x131A9500)

inline static constexpr unsigned int Class_2_10C938FADE89F989_TypeDefinitionIndex = 50735;

class Class_2_10C938FADE89F989 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_5 = 0x36; // 0x0
	::System::UInt32 Field_2_1; // 0x20
	::MoleMole::Config::BuffGroupName Field_2_2; // 0x24
	::System::Int32 Field_2_3; // 0x28
	::System::Boolean Field_2_4; // 0x2C
	::System::UInt32 Field_2_0; // 0x30

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_10C938FADE89F989__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10C938FADE89F989__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_2_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10C938FADE89F989_METHOD_2_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::MoleMole::Config::BuffGroupName Method_2_41F8B8ACD2DFAAFE()
	{
		return ((::MoleMole::Config::BuffGroupName(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10C938FADE89F989_METHOD_2_41F8B8ACD2DFAAFE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10C938FADE89F989_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10C938FADE89F989_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_12B72DF71D815C8A(::System::UInt32 a1, ::System::UInt32 a2, ::MoleMole::Config::BuffGroupName a3, ::System::Int32 a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::MoleMole::Config::BuffGroupName, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_10C938FADE89F989_METHOD_2_12B72DF71D815C8A_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10C938FADE89F989_METHOD_2_128774387667156B_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10C938FADE89F989_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
