#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitResultRelicInfo; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_9E48D8F7A746A218___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17099270)
#define CLASS_1_9E48D8F7A746A218___C__CTOR_OFFSET UNITYSDK_OFFSET(0x170992B0)
#define CLASS_1_9E48D8F7A746A218___C___TRYUPDATECACHEDPLANRESULTRELICUID_B__14_0_OFFSET UNITYSDK_OFFSET(0x170992C0)

inline static constexpr unsigned int Class_1_9E48D8F7A746A218___c_TypeDefinitionIndex = 74295;

class Class_1_9E48D8F7A746A218___c : public ::System::Object
{
public:
	static ::Class_1_9E48D8F7A746A218___c** StaticGet___9()
	{
		return (::Class_1_9E48D8F7A746A218___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9E48D8F7A746A218___c_TypeDefinitionIndex)->GetStaticField(0x5EBC0);
	}
	static ::System::Func_2<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*, ::System::UInt32>** StaticGet___9__14_0()
	{
		return (::System::Func_2<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9E48D8F7A746A218___c_TypeDefinitionIndex)->GetStaticField(0x5EBC8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9E48D8F7A746A218___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E48D8F7A746A218___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 __TryUpdateCachedPlanResultRelicUID_b__14_0(::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*))((::PBYTE)hIl2Cpp + CLASS_1_9E48D8F7A746A218___C___TRYUPDATECACHEDPLANRESULTRELICUID_B__14_0_OFFSET))(this, a1);
	}
};
