#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_FC45B5429438E193_CLASS_1_26A75D9F47C0ADAB_METHOD_1_4E2BCE3C8705DF5E_OFFSET UNITYSDK_OFFSET(0xE9581F0)
#define CLASS_1_FC45B5429438E193_CLASS_1_26A75D9F47C0ADAB_METHOD_1_5EC946237AFF8607_OFFSET UNITYSDK_OFFSET(0xE957EC0)
#define CLASS_1_FC45B5429438E193_CLASS_1_26A75D9F47C0ADAB__CCTOR_OFFSET UNITYSDK_OFFSET(0xE958150)

inline static constexpr unsigned int Class_1_FC45B5429438E193_Class_1_26A75D9F47C0ADAB_TypeDefinitionIndex = 70588;

class Class_1_FC45B5429438E193_Class_1_26A75D9F47C0ADAB : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::UInt32>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FC45B5429438E193_Class_1_26A75D9F47C0ADAB_TypeDefinitionIndex)->GetStaticField(0x3AE30);
	}
	static ::System::UInt32* StaticGet_Field_1_7()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FC45B5429438E193_Class_1_26A75D9F47C0ADAB_TypeDefinitionIndex)->GetStaticField(0xDE40);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FC45B5429438E193_CLASS_1_26A75D9F47C0ADAB__CCTOR_OFFSET))();
	}

	static ::System::UInt32 Method_1_4E2BCE3C8705DF5E()
	{
		return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CLASS_1_FC45B5429438E193_CLASS_1_26A75D9F47C0ADAB_METHOD_1_4E2BCE3C8705DF5E_OFFSET))();
	}

	static ::System::UInt32 Method_1_5EC946237AFF8607(::System::Type* a1)
	{
		return ((::System::UInt32(*)(::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_FC45B5429438E193_CLASS_1_26A75D9F47C0ADAB_METHOD_1_5EC946237AFF8607_OFFSET))(a1);
	}
};
