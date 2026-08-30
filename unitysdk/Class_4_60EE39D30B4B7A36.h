#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_4_60EE39D30B4B7A36_METHOD_4_0EE9A132E4098A12_OFFSET UNITYSDK_OFFSET(0x1CC5CB40)
#define CLASS_4_60EE39D30B4B7A36_METHOD_4_BE6C7711392DA568_OFFSET UNITYSDK_OFFSET(0x1CC5CB80)
#define CLASS_4_60EE39D30B4B7A36__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC5CB70)

inline static constexpr unsigned int Class_4_60EE39D30B4B7A36_TypeDefinitionIndex = 22192;

class Class_4_60EE39D30B4B7A36 : public ::RPG::GameCore::STTaskConfig
{
public:
	::System::String* PFDLMJILKBK; // 0x18
	::System::String* KEFNJGCFHGH; // 0x20
	::System::Boolean MHKKCHLPABL; // 0x28
	::System::Boolean CLJEBKODGHK; // 0x29
	::System::Boolean AHEEAFKFALM; // 0x2A
	::System::Boolean HIDPIGLKPFB; // 0x2B

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_60EE39D30B4B7A36__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_0EE9A132E4098A12(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_60EE39D30B4B7A36*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_60EE39D30B4B7A36*&))((::PBYTE)hIl2Cpp + CLASS_4_60EE39D30B4B7A36_METHOD_4_0EE9A132E4098A12_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_BE6C7711392DA568(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_60EE39D30B4B7A36* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_60EE39D30B4B7A36*))((::PBYTE)hIl2Cpp + CLASS_4_60EE39D30B4B7A36_METHOD_4_BE6C7711392DA568_OFFSET))(a1, a2);
	}
};
