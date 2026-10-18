#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_123;
class Class_0_16E4307DCC419505_1495;
class Class_0_16E4307DCC419505_1497;
class Class_0_16E4307DCC419505_397;
namespace R3 { template <typename T> class Observable_1; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_160DDE4A01CB1A2C_GET_ATTRIBUTE1_OFFSET UNITYSDK_OFFSET(0xE4DE630)
#define CLASS_1_160DDE4A01CB1A2C_GET_ATTRIBUTE2_OFFSET UNITYSDK_OFFSET(0xE4DE650)
#define CLASS_1_160DDE4A01CB1A2C_GET_EXITCOMMAND_OFFSET UNITYSDK_OFFSET(0xE4DE680)
#define CLASS_1_160DDE4A01CB1A2C_GET_HASANYTRAIT_OFFSET UNITYSDK_OFFSET(0xE4DE660)
#define CLASS_1_160DDE4A01CB1A2C_GET_HASATLEASTONEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0xE4DE620)
#define CLASS_1_160DDE4A01CB1A2C_GET_HASATLEASTTWOATTRIBUTE_OFFSET UNITYSDK_OFFSET(0xE4DE640)
#define CLASS_1_160DDE4A01CB1A2C_GET_TRAITSTEXT_OFFSET UNITYSDK_OFFSET(0xE4DE670)
#define CLASS_1_160DDE4A01CB1A2C_METHOD_1_B5314DA1B59E0EA0_OFFSET UNITYSDK_OFFSET(0xE4DEFA0)
#define CLASS_1_160DDE4A01CB1A2C__CTOR_OFFSET UNITYSDK_OFFSET(0xE4DE690)

inline static constexpr unsigned int Class_1_160DDE4A01CB1A2C_TypeDefinitionIndex = 79594;

class Class_1_160DDE4A01CB1A2C : public ::System::Object
{
public:
	::R3::Observable_1<::System::Boolean>* _HasAnyTrait_k__BackingField; // 0x10
	::Class_0_16E4307DCC419505_1495* _Attribute1_k__BackingField; // 0x18
	::R3::Observable_1<::System::String*>* _TraitsText_k__BackingField; // 0x20
	::R3::Observable_1<::System::Boolean>* _HasAtLeastOneAttribute_k__BackingField; // 0x28
	::Class_0_16E4307DCC419505_397* _ExitCommand_k__BackingField; // 0x30
	::Class_0_16E4307DCC419505_1495* _Attribute2_k__BackingField; // 0x38
	::R3::Observable_1<::System::Boolean>* _HasAtLeastTwoAttribute_k__BackingField; // 0x40

	::System::Void _ctor(::Class_0_16E4307DCC419505_1497* a1, ::System::Action* a2, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_1495*>* a3, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_123*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1497*, ::System::Action*, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_1495*>*, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_123*>*))((::PBYTE)hIl2Cpp + CLASS_1_160DDE4A01CB1A2C__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::R3::Observable_1<::System::Boolean>* get_HasAtLeastOneAttribute()
	{
		return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_160DDE4A01CB1A2C_GET_HASATLEASTONEATTRIBUTE_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_1495* get_Attribute1()
	{
		return ((::Class_0_16E4307DCC419505_1495*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_160DDE4A01CB1A2C_GET_ATTRIBUTE1_OFFSET))(this);
	}

	::R3::Observable_1<::System::Boolean>* get_HasAtLeastTwoAttribute()
	{
		return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_160DDE4A01CB1A2C_GET_HASATLEASTTWOATTRIBUTE_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_1495* get_Attribute2()
	{
		return ((::Class_0_16E4307DCC419505_1495*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_160DDE4A01CB1A2C_GET_ATTRIBUTE2_OFFSET))(this);
	}

	::R3::Observable_1<::System::Boolean>* get_HasAnyTrait()
	{
		return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_160DDE4A01CB1A2C_GET_HASANYTRAIT_OFFSET))(this);
	}

	::R3::Observable_1<::System::String*>* get_TraitsText()
	{
		return ((::R3::Observable_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_160DDE4A01CB1A2C_GET_TRAITSTEXT_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_397* get_ExitCommand()
	{
		return ((::Class_0_16E4307DCC419505_397*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_160DDE4A01CB1A2C_GET_EXITCOMMAND_OFFSET))(this);
	}

	static ::System::String* Method_1_B5314DA1B59E0EA0(::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_123*>* a1)
	{
		return ((::System::String*(*)(::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_123*>*))((::PBYTE)hIl2Cpp + CLASS_1_160DDE4A01CB1A2C_METHOD_1_B5314DA1B59E0EA0_OFFSET))(a1);
	}
};
