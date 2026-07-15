#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace EnviromentSystemV2Space { class EnvProfileV2; }
namespace RPG::Client { template <typename T1, typename T2> class LRUCache_2_CacheOperation; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }

#define CLASS_2_B3BCC9AA95120603___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16A31D80)
#define CLASS_2_B3BCC9AA95120603___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16A31DB0)
#define CLASS_2_B3BCC9AA95120603___C__INIT_B__37_0_OFFSET UNITYSDK_OFFSET(0x16A31DC0)

inline static constexpr unsigned int Class_2_B3BCC9AA95120603___c_TypeDefinitionIndex = 47573;

class Class_2_B3BCC9AA95120603___c : public ::System::Object
{
public:
	static ::RPG::Client::LRUCache_2_CacheOperation<::System::String*, ::System::Tuple_2<::System::String*, ::EnviromentSystemV2Space::EnvProfileV2*>*>** StaticGet___9__37_0()
	{
		return (::RPG::Client::LRUCache_2_CacheOperation<::System::String*, ::System::Tuple_2<::System::String*, ::EnviromentSystemV2Space::EnvProfileV2*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B3BCC9AA95120603___c_TypeDefinitionIndex)->GetStaticField(0x68890);
	}
	static ::Class_2_B3BCC9AA95120603___c** StaticGet___9()
	{
		return (::Class_2_B3BCC9AA95120603___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B3BCC9AA95120603___c_TypeDefinitionIndex)->GetStaticField(0x68898);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603___C__CTOR_OFFSET))(this);
	}

	::System::Void _Init_b__37_0(::System::Tuple_2<::System::String*, ::EnviromentSystemV2Space::EnvProfileV2*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Tuple_2<::System::String*, ::EnviromentSystemV2Space::EnvProfileV2*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603___C__INIT_B__37_0_OFFSET))(this, a1);
	}
};
