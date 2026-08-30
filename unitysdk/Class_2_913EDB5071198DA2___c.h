#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_781;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_913EDB5071198DA2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB939C40)
#define CLASS_2_913EDB5071198DA2___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB939C80)
#define CLASS_2_913EDB5071198DA2___C___ONPLAYERFINISH_B__32_0_OFFSET UNITYSDK_OFFSET(0xB939C90)

inline static constexpr unsigned int Class_2_913EDB5071198DA2___c_TypeDefinitionIndex = 74110;

class Class_2_913EDB5071198DA2___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::Class_1_D17272E82AE804C2_781*>** StaticGet___9__32_0()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::Class_1_D17272E82AE804C2_781*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_913EDB5071198DA2___c_TypeDefinitionIndex)->GetStaticField(0x27F80);
	}
	static ::Class_2_913EDB5071198DA2___c** StaticGet___9()
	{
		return (::Class_2_913EDB5071198DA2___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_913EDB5071198DA2___c_TypeDefinitionIndex)->GetStaticField(0x27F88);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_913EDB5071198DA2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_913EDB5071198DA2___C__CTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_781* __OnPlayerFinish_b__32_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32> a1)
	{
		return ((::Class_1_D17272E82AE804C2_781*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_2_913EDB5071198DA2___C___ONPLAYERFINISH_B__32_0_OFFSET))(this, a1);
	}
};
