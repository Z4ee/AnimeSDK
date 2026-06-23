#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigNewbie_NewbieInputLogicType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_DBBF6AB516C866C7_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x8193E0)
#define STRUCT_2_DBBF6AB516C866C7_METHOD_2_4F49AC32E99BB202_OFFSET UNITYSDK_OFFSET(0x8192E0)
#define STRUCT_2_DBBF6AB516C866C7_METHOD_2_5E256ABCBB78EAD2_1_OFFSET UNITYSDK_OFFSET(0x819360)
#define STRUCT_2_DBBF6AB516C866C7_METHOD_2_5E256ABCBB78EAD2_OFFSET UNITYSDK_OFFSET(0x819260)
#define STRUCT_2_DBBF6AB516C866C7_METHOD_2_FC545203151D288E_OFFSET UNITYSDK_OFFSET(0x163F8DA0)
#define STRUCT_2_DBBF6AB516C866C7__CCTOR_OFFSET UNITYSDK_OFFSET(0x163F8D60)

inline static constexpr unsigned int Struct_2_DBBF6AB516C866C7_TypeDefinitionIndex = 70537;

struct alignas(8) Struct_2_DBBF6AB516C866C7
{
	static ::Struct_2_DBBF6AB516C866C7* StaticGet_Field_2_11()
	{
		return (::Struct_2_DBBF6AB516C866C7*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_DBBF6AB516C866C7_TypeDefinitionIndex)->GetStaticField(0x43620);
	}
	::System::Single Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x14
	::System::Boolean Field_2_2; // 0x15
	::System::UInt64 Field_2_3; // 0x18
	::System::Single Field_2_4; // 0x20
	::System::Boolean Field_2_5; // 0x24
	::MoleMole::ConfigNewbie_NewbieInputLogicType Field_2_6; // 0x28
	::System::Boolean Field_2_7; // 0x2C
	::System::Boolean Field_2_8; // 0x2D
	::System::String* Field_2_9; // 0x30
	::System::Boolean Field_2_10; // 0x38

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_DBBF6AB516C866C7__CCTOR_OFFSET))();
	}

	::Struct_2_DBBF6AB516C866C7 Method_2_5E256ABCBB78EAD2(::System::Single a1)
	{
		return ((::Struct_2_DBBF6AB516C866C7(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_DBBF6AB516C866C7_METHOD_2_5E256ABCBB78EAD2_OFFSET))(this, a1);
	}

	::Struct_2_DBBF6AB516C866C7 Method_2_4F49AC32E99BB202(::System::Boolean a1)
	{
		return ((::Struct_2_DBBF6AB516C866C7(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_DBBF6AB516C866C7_METHOD_2_4F49AC32E99BB202_OFFSET))(this, a1);
	}

	::Struct_2_DBBF6AB516C866C7 Method_2_5E256ABCBB78EAD2_1(::System::Single a1)
	{
		return ((::Struct_2_DBBF6AB516C866C7(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_DBBF6AB516C866C7_METHOD_2_5E256ABCBB78EAD2_1_OFFSET))(this, a1);
	}

	static ::Struct_2_DBBF6AB516C866C7 Method_2_FC545203151D288E()
	{
		return ((::Struct_2_DBBF6AB516C866C7(*)())((::PBYTE)hIl2Cpp + STRUCT_2_DBBF6AB516C866C7_METHOD_2_FC545203151D288E_OFFSET))();
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_DBBF6AB516C866C7_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}
};
