#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_3_3681BF1EBD4A4770_METHOD_3_8C07A6A51F854693_OFFSET UNITYSDK_OFFSET(0x1B570780)
#define CLASS_3_3681BF1EBD4A4770_METHOD_3_C6AAD90EBB6BB822_OFFSET UNITYSDK_OFFSET(0x1B570730)
#define CLASS_3_3681BF1EBD4A4770__CTOR_OFFSET UNITYSDK_OFFSET(0x1B570770)

inline static constexpr unsigned int Class_3_3681BF1EBD4A4770_TypeDefinitionIndex = 21570;

class Class_3_3681BF1EBD4A4770 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* Field_3_0; // 0x18
	::System::String* Field_3_1; // 0x20
	::System::Single Field_3_2; // 0x28

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
