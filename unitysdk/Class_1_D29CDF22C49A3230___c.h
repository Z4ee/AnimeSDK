#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BlendConfig; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_D29CDF22C49A3230___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13F21F30)
#define CLASS_1_D29CDF22C49A3230___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13F21F70)
#define CLASS_1_D29CDF22C49A3230___C___ENSUREBLENDCONFIGSLOADED_B__13_0_OFFSET UNITYSDK_OFFSET(0x13F21F80)
#define CLASS_1_D29CDF22C49A3230___C___ENSUREBLENDCONFIGSLOADED_B__13_1_OFFSET UNITYSDK_OFFSET(0x13F21FA0)

inline static constexpr unsigned int Class_1_D29CDF22C49A3230___c_TypeDefinitionIndex = 80435;

class Class_1_D29CDF22C49A3230___c : public ::System::Object
{
public:
	static ::System::Func_2<::RPG::Client::BlendConfig*, ::RPG::Client::BlendConfig*>** StaticGet___9__13_1()
	{
		return (::System::Func_2<::RPG::Client::BlendConfig*, ::RPG::Client::BlendConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D29CDF22C49A3230___c_TypeDefinitionIndex)->GetStaticField(0x626D0);
	}
	static ::System::Func_2<::RPG::Client::BlendConfig*, ::System::String*>** StaticGet___9__13_0()
	{
		return (::System::Func_2<::RPG::Client::BlendConfig*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D29CDF22C49A3230___c_TypeDefinitionIndex)->GetStaticField(0x626D8);
	}
	static ::Class_1_D29CDF22C49A3230___c** StaticGet___9()
	{
		return (::Class_1_D29CDF22C49A3230___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D29CDF22C49A3230___c_TypeDefinitionIndex)->GetStaticField(0x626E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D29CDF22C49A3230___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D29CDF22C49A3230___C__CTOR_OFFSET))(this);
	}

	::System::String* __EnsureBlendConfigsLoaded_b__13_0(::RPG::Client::BlendConfig* a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::Client::BlendConfig*))((::PBYTE)hIl2Cpp + CLASS_1_D29CDF22C49A3230___C___ENSUREBLENDCONFIGSLOADED_B__13_0_OFFSET))(this, a1);
	}

	::RPG::Client::BlendConfig* __EnsureBlendConfigsLoaded_b__13_1(::RPG::Client::BlendConfig* a1)
	{
		return ((::RPG::Client::BlendConfig*(*)(::PVOID, ::RPG::Client::BlendConfig*))((::PBYTE)hIl2Cpp + CLASS_1_D29CDF22C49A3230___C___ENSUREBLENDCONFIGSLOADED_B__13_1_OFFSET))(this, a1);
	}
};
