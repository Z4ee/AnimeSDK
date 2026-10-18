#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_52DF42E136544C98;
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_F28D19080120B73F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xFEC7320)
#define CLASS_2_F28D19080120B73F___C__CTOR_OFFSET UNITYSDK_OFFSET(0xFEC7360)
#define CLASS_2_F28D19080120B73F___C___ONBINDHANDLERS_B__45_0_OFFSET UNITYSDK_OFFSET(0xFEC7370)
#define CLASS_2_F28D19080120B73F___C___SETUPMODIFIERHINTS_B__62_1_OFFSET UNITYSDK_OFFSET(0xFEC7380)

inline static constexpr unsigned int Class_2_F28D19080120B73F___c_TypeDefinitionIndex = 71316;

class Class_2_F28D19080120B73F___c : public ::System::Object
{
public:
	static ::System::Action_1<::System::Object*>** StaticGet___9__45_0()
	{
		return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F28D19080120B73F___c_TypeDefinitionIndex)->GetStaticField(0x5BD80);
	}
	static ::System::Comparison_1<::Class_1_52DF42E136544C98*>** StaticGet___9__62_1()
	{
		return (::System::Comparison_1<::Class_1_52DF42E136544C98*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F28D19080120B73F___c_TypeDefinitionIndex)->GetStaticField(0x5BD88);
	}
	static ::Class_2_F28D19080120B73F___c** StaticGet___9()
	{
		return (::Class_2_F28D19080120B73F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F28D19080120B73F___c_TypeDefinitionIndex)->GetStaticField(0x5BD90);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_F28D19080120B73F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F28D19080120B73F___C__CTOR_OFFSET))(this);
	}

	::System::Void __OnBindHandlers_b__45_0(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F28D19080120B73F___C___ONBINDHANDLERS_B__45_0_OFFSET))(this, a1);
	}

	::System::Int32 __SetupModifierHints_b__62_1(::Class_1_52DF42E136544C98* a1, ::Class_1_52DF42E136544C98* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_52DF42E136544C98*, ::Class_1_52DF42E136544C98*))((::PBYTE)hIl2Cpp + CLASS_2_F28D19080120B73F___C___SETUPMODIFIERHINTS_B__62_1_OFFSET))(this, a1, a2);
	}
};
