#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A047EA5169B6B30F;
class Class_3_C38422C17DA175EB_6;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_5_8B0C1D8C833FA499___C_METHOD_1_29F61CACAB3B2436_OFFSET UNITYSDK_OFFSET(0x11AD8EE0)
#define CLASS_5_8B0C1D8C833FA499___C_METHOD_1_4C24F3B85D6DC348_OFFSET UNITYSDK_OFFSET(0x11AD8E00)
#define CLASS_5_8B0C1D8C833FA499___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11AD8DB0)
#define CLASS_5_8B0C1D8C833FA499___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11AD8DF0)

inline static constexpr unsigned int Class_5_8B0C1D8C833FA499___c_TypeDefinitionIndex = 49120;

class Class_5_8B0C1D8C833FA499___c : public ::System::Object
{
public:
	static ::Class_5_8B0C1D8C833FA499___c** StaticGet___9()
	{
		return (::Class_5_8B0C1D8C833FA499___c**)Il2CppClass::FromTypeDefinitionIndex(Class_5_8B0C1D8C833FA499___c_TypeDefinitionIndex)->GetStaticField(0x38F10);
	}
	static ::System::Comparison_1<::Class_1_A047EA5169B6B30F*>** StaticGet___9__56_0()
	{
		return (::System::Comparison_1<::Class_1_A047EA5169B6B30F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_5_8B0C1D8C833FA499___c_TypeDefinitionIndex)->GetStaticField(0x38F18);
	}
	static ::System::Func_2<::Class_3_C38422C17DA175EB_6*, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*>** StaticGet___9__27_0()
	{
		return (::System::Func_2<::Class_3_C38422C17DA175EB_6*, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_5_8B0C1D8C833FA499___c_TypeDefinitionIndex)->GetStaticField(0x38F20);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_5_8B0C1D8C833FA499___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_8B0C1D8C833FA499___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_4C24F3B85D6DC348(::Class_1_A047EA5169B6B30F* a1, ::Class_1_A047EA5169B6B30F* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_A047EA5169B6B30F*, ::Class_1_A047EA5169B6B30F*))((::PBYTE)hIl2Cpp + CLASS_5_8B0C1D8C833FA499___C_METHOD_1_4C24F3B85D6DC348_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IEnumerable_1<::System::UInt32>* Method_1_29F61CACAB3B2436(::Class_3_C38422C17DA175EB_6* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::PVOID, ::Class_3_C38422C17DA175EB_6*))((::PBYTE)hIl2Cpp + CLASS_5_8B0C1D8C833FA499___C_METHOD_1_29F61CACAB3B2436_OFFSET))(this, a1);
	}
};
