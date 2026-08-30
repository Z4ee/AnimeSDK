#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_169.h"

class Class_2_DBD3DACDC098E4CB;

#define CLASS_2_646F0E7387B47537_ONENTERBEGIN_OFFSET UNITYSDK_OFFSET(0x134D4E40)
#define CLASS_2_646F0E7387B47537_ONENTEREND_OFFSET UNITYSDK_OFFSET(0x134D4F10)
#define CLASS_2_646F0E7387B47537_ONEXITBEGIN_OFFSET UNITYSDK_OFFSET(0x134D4D90)
#define CLASS_2_646F0E7387B47537__CTOR_OFFSET UNITYSDK_OFFSET(0x134D4D80)

inline static constexpr unsigned int Class_2_646F0E7387B47537_TypeDefinitionIndex = 73028;

class Class_2_646F0E7387B47537 : public ::Class_1_43BD383C98B4C0C5_169
{
public:
	::Class_2_DBD3DACDC098E4CB* KPEIDIGNAMA; // 0x10
	::System::Boolean BPLPEPBNLCO; // 0x18
	::System::Boolean GIKHJLDIKPJ; // 0x19

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

	::System::Void OnEnterEnd()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_646F0E7387B47537_ONENTEREND_OFFSET))(this);
	}
};
