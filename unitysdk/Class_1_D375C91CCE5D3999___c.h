#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_D375C91CCE5D3999___C_METHOD_1_CE3FD378493F8DEF_OFFSET UNITYSDK_OFFSET(0x126A4580)
#define CLASS_1_D375C91CCE5D3999___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x126A4530)
#define CLASS_1_D375C91CCE5D3999___C__CTOR_OFFSET UNITYSDK_OFFSET(0x126A4570)

inline static constexpr unsigned int Class_1_D375C91CCE5D3999___c_TypeDefinitionIndex = 50495;

class Class_1_D375C91CCE5D3999___c : public ::System::Object
{
public:
	static ::Class_1_D375C91CCE5D3999___c** StaticGet___9()
	{
		return (::Class_1_D375C91CCE5D3999___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D375C91CCE5D3999___c_TypeDefinitionIndex)->GetStaticField(0x3B380);
	}
	static ::System::Comparison_1<::System::UInt32>** StaticGet___9__5_0()
	{
		return (::System::Comparison_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D375C91CCE5D3999___c_TypeDefinitionIndex)->GetStaticField(0x3B388);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D375C91CCE5D3999___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D375C91CCE5D3999___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_CE3FD378493F8DEF(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D375C91CCE5D3999___C_METHOD_1_CE3FD378493F8DEF_OFFSET))(this, a1, a2);
	}
};
