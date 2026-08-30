#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_3_3681BF1EBD4A4770_METHOD_3_8C07A6A51F854693_OFFSET UNITYSDK_OFFSET(0x1CEA3B10)
#define CLASS_3_3681BF1EBD4A4770_METHOD_3_C6AAD90EBB6BB822_OFFSET UNITYSDK_OFFSET(0x1CEA3AC0)
#define CLASS_3_3681BF1EBD4A4770__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEA3B00)

inline static constexpr unsigned int Class_3_3681BF1EBD4A4770_TypeDefinitionIndex = 22133;

class Class_3_3681BF1EBD4A4770 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* GJKFNFEBDKJ; // 0x18
	::System::String* HIJAJMAFHKA; // 0x20
	::System::Single AHGHKEIDBLN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3681BF1EBD4A4770__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_C6AAD90EBB6BB822(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_3681BF1EBD4A4770*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_3681BF1EBD4A4770*&))((::PBYTE)hIl2Cpp + CLASS_3_3681BF1EBD4A4770_METHOD_3_C6AAD90EBB6BB822_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_8C07A6A51F854693(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_3681BF1EBD4A4770* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_3681BF1EBD4A4770*))((::PBYTE)hIl2Cpp + CLASS_3_3681BF1EBD4A4770_METHOD_3_8C07A6A51F854693_OFFSET))(a1, a2);
	}
};
