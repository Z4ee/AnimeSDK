#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_DA77831942E480A9;

#define CLASS_1_87748DF3032F67C8___C_METHOD_1_82ECC72D992D12DD_OFFSET UNITYSDK_OFFSET(0x1C417260)
#define CLASS_1_87748DF3032F67C8___C_METHOD_1_F87BCCC99DF9A3E7_OFFSET UNITYSDK_OFFSET(0x1C4170E0)
#define CLASS_1_87748DF3032F67C8___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C417090)
#define CLASS_1_87748DF3032F67C8___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4170D0)

inline static constexpr unsigned int Class_1_87748DF3032F67C8___c_TypeDefinitionIndex = 85226;

class Class_1_87748DF3032F67C8___c : public ::System::Object
{
public:
	static ::Class_1_87748DF3032F67C8___c** StaticGet___9()
	{
		return (::Class_1_87748DF3032F67C8___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_87748DF3032F67C8___c_TypeDefinitionIndex)->GetStaticField(0x49D90);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_87748DF3032F67C8___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87748DF3032F67C8___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_F87BCCC99DF9A3E7(::Class_1_DA77831942E480A9* a1, ::Class_1_DA77831942E480A9* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_DA77831942E480A9*, ::Class_1_DA77831942E480A9*))((::PBYTE)hIl2Cpp + CLASS_1_87748DF3032F67C8___C_METHOD_1_F87BCCC99DF9A3E7_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_82ECC72D992D12DD(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_87748DF3032F67C8___C_METHOD_1_82ECC72D992D12DD_OFFSET))(this, a1, a2);
	}
};
