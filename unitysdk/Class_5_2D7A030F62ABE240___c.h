#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F24A790D52CF0024;
class Class_3_D9B8A457D8A4B7BB_10;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_5_2D7A030F62ABE240___C_METHOD_1_29F61CACAB3B2436_OFFSET UNITYSDK_OFFSET(0x15642290)
#define CLASS_5_2D7A030F62ABE240___C_METHOD_1_4C24F3B85D6DC348_OFFSET UNITYSDK_OFFSET(0x156421B0)
#define CLASS_5_2D7A030F62ABE240___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15642160)
#define CLASS_5_2D7A030F62ABE240___C__CTOR_OFFSET UNITYSDK_OFFSET(0x156421A0)

inline static constexpr unsigned int Class_5_2D7A030F62ABE240___c_TypeDefinitionIndex = 49876;

class Class_5_2D7A030F62ABE240___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_3_D9B8A457D8A4B7BB_10*, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*>** StaticGet___9__34_0()
	{
		return (::System::Func_2<::Class_3_D9B8A457D8A4B7BB_10*, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_5_2D7A030F62ABE240___c_TypeDefinitionIndex)->GetStaticField(0x39090);
	}
	static ::Class_5_2D7A030F62ABE240___c** StaticGet___9()
	{
		return (::Class_5_2D7A030F62ABE240___c**)Il2CppClass::FromTypeDefinitionIndex(Class_5_2D7A030F62ABE240___c_TypeDefinitionIndex)->GetStaticField(0x39098);
	}
	static ::System::Comparison_1<::Class_1_F24A790D52CF0024*>** StaticGet___9__63_0()
	{
		return (::System::Comparison_1<::Class_1_F24A790D52CF0024*>**)Il2CppClass::FromTypeDefinitionIndex(Class_5_2D7A030F62ABE240___c_TypeDefinitionIndex)->GetStaticField(0x390A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_5_2D7A030F62ABE240___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2D7A030F62ABE240___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_4C24F3B85D6DC348(::Class_1_F24A790D52CF0024* a1, ::Class_1_F24A790D52CF0024* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_F24A790D52CF0024*, ::Class_1_F24A790D52CF0024*))((::PBYTE)hIl2Cpp + CLASS_5_2D7A030F62ABE240___C_METHOD_1_4C24F3B85D6DC348_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IEnumerable_1<::System::UInt32>* Method_1_29F61CACAB3B2436(::Class_3_D9B8A457D8A4B7BB_10* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::PVOID, ::Class_3_D9B8A457D8A4B7BB_10*))((::PBYTE)hIl2Cpp + CLASS_5_2D7A030F62ABE240___C_METHOD_1_29F61CACAB3B2436_OFFSET))(this, a1);
	}
};
