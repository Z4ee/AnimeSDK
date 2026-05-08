#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A047EA5169B6B30F;
class Class_3_C38422C17DA175EB_10;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_5_E97A173A16CAEC78___C_METHOD_1_29F61CACAB3B2436_OFFSET UNITYSDK_OFFSET(0x156C7F80)
#define CLASS_5_E97A173A16CAEC78___C_METHOD_1_4C24F3B85D6DC348_OFFSET UNITYSDK_OFFSET(0x156C7EA0)
#define CLASS_5_E97A173A16CAEC78___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x156C7E50)
#define CLASS_5_E97A173A16CAEC78___C__CTOR_OFFSET UNITYSDK_OFFSET(0x156C7E90)

inline static constexpr unsigned int Class_5_E97A173A16CAEC78___c_TypeDefinitionIndex = 72782;

class Class_5_E97A173A16CAEC78___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_1_A047EA5169B6B30F*>** StaticGet___9__54_0()
	{
		return (::System::Comparison_1<::Class_1_A047EA5169B6B30F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_5_E97A173A16CAEC78___c_TypeDefinitionIndex)->GetStaticField(0x3BBA0);
	}
	static ::System::Func_2<::Class_3_C38422C17DA175EB_10*, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*>** StaticGet___9__24_0()
	{
		return (::System::Func_2<::Class_3_C38422C17DA175EB_10*, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_5_E97A173A16CAEC78___c_TypeDefinitionIndex)->GetStaticField(0x3BBA8);
	}
	static ::Class_5_E97A173A16CAEC78___c** StaticGet___9()
	{
		return (::Class_5_E97A173A16CAEC78___c**)Il2CppClass::FromTypeDefinitionIndex(Class_5_E97A173A16CAEC78___c_TypeDefinitionIndex)->GetStaticField(0x3BBB0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_5_E97A173A16CAEC78___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_E97A173A16CAEC78___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_4C24F3B85D6DC348(::Class_1_A047EA5169B6B30F* a1, ::Class_1_A047EA5169B6B30F* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_A047EA5169B6B30F*, ::Class_1_A047EA5169B6B30F*))((::PBYTE)hIl2Cpp + CLASS_5_E97A173A16CAEC78___C_METHOD_1_4C24F3B85D6DC348_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IEnumerable_1<::System::UInt32>* Method_1_29F61CACAB3B2436(::Class_3_C38422C17DA175EB_10* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::PVOID, ::Class_3_C38422C17DA175EB_10*))((::PBYTE)hIl2Cpp + CLASS_5_E97A173A16CAEC78___C_METHOD_1_29F61CACAB3B2436_OFFSET))(this, a1);
	}
};
