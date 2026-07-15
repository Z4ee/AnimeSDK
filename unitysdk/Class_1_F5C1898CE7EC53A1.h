#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_331;
namespace RPG::GameCore::ConstValueMapping::Converter { template <typename T> class IDynamicValueConverter_1; }
namespace System { class Type; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_F5C1898CE7EC53A1_METHOD_1_0A157315B6C8F38C_OFFSET UNITYSDK_OFFSET(0x1D2BB530)
#define CLASS_1_F5C1898CE7EC53A1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2BE770)

inline static constexpr unsigned int Class_1_F5C1898CE7EC53A1_TypeDefinitionIndex = 42399;

class Class_1_F5C1898CE7EC53A1 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_0_16E4307DCC419505_331*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_0_16E4307DCC419505_331*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5C1898CE7EC53A1_TypeDefinitionIndex)->GetStaticField(0x1260);
	}
	static ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::Class_0_16E4307DCC419505_331*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::Class_0_16E4307DCC419505_331*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5C1898CE7EC53A1_TypeDefinitionIndex)->GetStaticField(0x1268);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F5C1898CE7EC53A1__CCTOR_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_331* Method_1_0A157315B6C8F38C(::System::Type* a1)
	{
		return ((::Class_0_16E4307DCC419505_331*(*)(::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_F5C1898CE7EC53A1_METHOD_1_0A157315B6C8F38C_OFFSET))(a1);
	}
};
