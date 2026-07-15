#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_155.h"

class Class_2_DBD3DACDC098E4CB;

#define CLASS_2_646F0E7387B47537_METHOD_2_5587AE4B03E68C58_OFFSET UNITYSDK_OFFSET(0x185DDDC0)
#define CLASS_2_646F0E7387B47537_ONENTERBEGIN_OFFSET UNITYSDK_OFFSET(0x185DDCF0)
#define CLASS_2_646F0E7387B47537_ONEXITBEGIN_OFFSET UNITYSDK_OFFSET(0x185DDC40)
#define CLASS_2_646F0E7387B47537__CTOR_OFFSET UNITYSDK_OFFSET(0x185DDC30)

inline static constexpr unsigned int Class_2_646F0E7387B47537_TypeDefinitionIndex = 69769;

class Class_2_646F0E7387B47537 : public ::Class_1_43BD383C98B4C0C5_155
{
public:
	::Class_2_DBD3DACDC098E4CB* Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x18
	::System::Boolean Field_2_2; // 0x19

	::System::Void _ctor(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_646F0E7387B47537__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnExitBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_646F0E7387B47537_ONEXITBEGIN_OFFSET))(this);
	}

	::System::Void OnEnterBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_646F0E7387B47537_ONENTERBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_5587AE4B03E68C58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_646F0E7387B47537_METHOD_2_5587AE4B03E68C58_OFFSET))(this);
	}
};
