#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_D8EB8E8CA6E291C3;
namespace RPG { template <typename T> class PoolHashSet_1; }
namespace RPG::Client::Pet { class IPet; }

#define CLASS_2_D8EB8E8CA6E291C3___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB108210)
#define CLASS_2_D8EB8E8CA6E291C3___C__DISPLAYCLASS4_0___REFRESHPETPRELOAD_B__0_OFFSET UNITYSDK_OFFSET(0xB108550)

inline static constexpr unsigned int Class_2_D8EB8E8CA6E291C3___c__DisplayClass4_0_TypeDefinitionIndex = 59719;

class Class_2_D8EB8E8CA6E291C3___c__DisplayClass4_0 : public ::System::Object
{
public:
	::Class_2_D8EB8E8CA6E291C3* __4__this; // 0x10
	::RPG::PoolHashSet_1<::System::UInt32>* toAdd; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8EB8E8CA6E291C3___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
	}

	::System::Void __RefreshPetPreload_b__0(::System::UInt32 a1, ::RPG::Client::Pet::IPet* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::Pet::IPet*))((::PBYTE)hIl2Cpp + CLASS_2_D8EB8E8CA6E291C3___C__DISPLAYCLASS4_0___REFRESHPETPRELOAD_B__0_OFFSET))(this, a1, a2);
	}
};
