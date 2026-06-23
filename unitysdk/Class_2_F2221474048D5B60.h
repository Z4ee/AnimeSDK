#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EBCA2A4357C4C8BF_43.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_222.h"

class Class_0_16E4307DCC419505_7;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }

#define CLASS_2_F2221474048D5B60_METHOD_2_283DA224BE06DA9F_OFFSET UNITYSDK_OFFSET(0x15513E90)
#define CLASS_2_F2221474048D5B60_METHOD_2_3DFAA1B69665401C_OFFSET UNITYSDK_OFFSET(0x15513E70)
#define CLASS_2_F2221474048D5B60_METHOD_2_F16863977B6B008C_OFFSET UNITYSDK_OFFSET(0x15514240)
#define CLASS_2_F2221474048D5B60__CTOR_OFFSET UNITYSDK_OFFSET(0x15513E60)

inline static constexpr unsigned int Class_2_F2221474048D5B60_TypeDefinitionIndex = 9468;

class Class_2_F2221474048D5B60 : public ::Class_1_EBCA2A4357C4C8BF_43
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Double>* Field_2_0; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_2_1; // 0x50

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_222 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_222, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_F2221474048D5B60__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::String*>* Method_2_3DFAA1B69665401C()
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2221474048D5B60_METHOD_2_3DFAA1B69665401C_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Double>* Method_2_F16863977B6B008C()
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Double>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2221474048D5B60_METHOD_2_F16863977B6B008C_OFFSET))(this);
	}

	::System::Void Method_2_283DA224BE06DA9F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2221474048D5B60_METHOD_2_283DA224BE06DA9F_OFFSET))(this);
	}
};
