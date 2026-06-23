#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_790D3A797AC9F57C___C_METHOD_1_82ECC72D992D12DD_OFFSET UNITYSDK_OFFSET(0x16392770)
#define CLASS_1_790D3A797AC9F57C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16392720)
#define CLASS_1_790D3A797AC9F57C___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16392760)

inline static constexpr unsigned int Class_1_790D3A797AC9F57C___c_TypeDefinitionIndex = 83377;

class Class_1_790D3A797AC9F57C___c : public ::System::Object
{
public:
	static ::Class_1_790D3A797AC9F57C___c** StaticGet___9()
	{
		return (::Class_1_790D3A797AC9F57C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_790D3A797AC9F57C___c_TypeDefinitionIndex)->GetStaticField(0x47290);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_790D3A797AC9F57C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_790D3A797AC9F57C___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_82ECC72D992D12DD(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_790D3A797AC9F57C___C_METHOD_1_82ECC72D992D12DD_OFFSET))(this, a1, a2);
	}
};
