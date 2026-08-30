#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5F1B5D6380BD40EB;
namespace RPG::Client { class TabView; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_1_0361E2D6D6845F40_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB60A8F0)
#define CLASS_1_0361E2D6D6845F40__CTOR_OFFSET UNITYSDK_OFFSET(0xB60A8B0)

inline static constexpr unsigned int Class_1_0361E2D6D6845F40_TypeDefinitionIndex = 50191;

class Class_1_0361E2D6D6845F40 : public ::System::Object
{
public:
	::System::Action_2<::Class_1_5F1B5D6380BD40EB*, ::Class_1_5F1B5D6380BD40EB*>* MBOEDFCNCJF; // 0x10
	::RPG::Client::TabView* PEOHNLJEFLJ; // 0x18
	::System::Action_2<::RPG::Client::TabView*, ::System::Action_2<::Class_1_5F1B5D6380BD40EB*, ::Class_1_5F1B5D6380BD40EB*>*>* GBMLHDDJMJM; // 0x20

	::System::Void _ctor(::RPG::Client::TabView* a1, ::System::Action_2<::Class_1_5F1B5D6380BD40EB*, ::Class_1_5F1B5D6380BD40EB*>* a2, ::System::Action_2<::RPG::Client::TabView*, ::System::Action_2<::Class_1_5F1B5D6380BD40EB*, ::Class_1_5F1B5D6380BD40EB*>*>* a3, ::System::Action_2<::RPG::Client::TabView*, ::System::Action_2<::Class_1_5F1B5D6380BD40EB*, ::Class_1_5F1B5D6380BD40EB*>*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TabView*, ::System::Action_2<::Class_1_5F1B5D6380BD40EB*, ::Class_1_5F1B5D6380BD40EB*>*, ::System::Action_2<::RPG::Client::TabView*, ::System::Action_2<::Class_1_5F1B5D6380BD40EB*, ::Class_1_5F1B5D6380BD40EB*>*>*, ::System::Action_2<::RPG::Client::TabView*, ::System::Action_2<::Class_1_5F1B5D6380BD40EB*, ::Class_1_5F1B5D6380BD40EB*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_0361E2D6D6845F40__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0361E2D6D6845F40_DISPOSE_OFFSET))(this);
	}
};
