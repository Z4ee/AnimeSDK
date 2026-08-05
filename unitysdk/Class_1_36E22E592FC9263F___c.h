#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_1_36E22E592FC9263F___C_METHOD_1_6E793510D10B5A80_OFFSET UNITYSDK_OFFSET(0x14C85D40)
#define CLASS_1_36E22E592FC9263F___C_METHOD_1_AEA9C9A097916025_OFFSET UNITYSDK_OFFSET(0x14C85C00)
#define CLASS_1_36E22E592FC9263F___C_METHOD_1_D60598A5700EA616_OFFSET UNITYSDK_OFFSET(0x14C85CB0)
#define CLASS_1_36E22E592FC9263F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14C85BB0)
#define CLASS_1_36E22E592FC9263F___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14C85BF0)

inline static constexpr unsigned int Class_1_36E22E592FC9263F___c_TypeDefinitionIndex = 44362;

class Class_1_36E22E592FC9263F___c : public ::System::Object
{
public:
	static ::Class_1_36E22E592FC9263F___c** StaticGet___9()
	{
		return (::Class_1_36E22E592FC9263F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_36E22E592FC9263F___c_TypeDefinitionIndex)->GetStaticField(0x3EF90);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_36E22E592FC9263F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36E22E592FC9263F___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_AEA9C9A097916025(::System::Int32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_36E22E592FC9263F___C_METHOD_1_AEA9C9A097916025_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IList_1<::System::Int32>* Method_1_D60598A5700EA616()
	{
		return ((::System::Collections::Generic::IList_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36E22E592FC9263F___C_METHOD_1_D60598A5700EA616_OFFSET))(this);
	}

	::System::Boolean Method_1_6E793510D10B5A80(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_36E22E592FC9263F___C_METHOD_1_6E793510D10B5A80_OFFSET))(this, a1, a2);
	}
};
