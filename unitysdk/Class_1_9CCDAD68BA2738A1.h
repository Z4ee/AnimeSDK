#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/StoryLightCharacterGroup.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PerformanceManager; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9CCDAD68BA2738A1_METHOD_1_5A470A0908DEC939_OFFSET UNITYSDK_OFFSET(0x18C92420)
#define CLASS_1_9CCDAD68BA2738A1_METHOD_1_9CC25E61FEEE1AEA_OFFSET UNITYSDK_OFFSET(0x18C92DC0)
#define CLASS_1_9CCDAD68BA2738A1_METHOD_1_EAC2737A96E071C9_OFFSET UNITYSDK_OFFSET(0x18C92BE0)
#define CLASS_1_9CCDAD68BA2738A1__CTOR_OFFSET UNITYSDK_OFFSET(0x18C92370)

inline static constexpr unsigned int Class_1_9CCDAD68BA2738A1_TypeDefinitionIndex = 60804;

class Class_1_9CCDAD68BA2738A1 : public ::System::Object
{
public:
	::RPG::Client::PerformanceManager* CFKHNPGEAJA; // 0x10
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>* FDEFJJJNGKI; // 0x18

	::System::Void _ctor(::RPG::Client::PerformanceManager* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PerformanceManager*))((::PBYTE)hIl2Cpp + CLASS_1_9CCDAD68BA2738A1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_5A470A0908DEC939(::System::Boolean a1, ::System::Collections::Generic::List_1<::RPGTools::Timeline::StoryLightCharacterGroup>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::List_1<::RPGTools::Timeline::StoryLightCharacterGroup>*))((::PBYTE)hIl2Cpp + CLASS_1_9CCDAD68BA2738A1_METHOD_1_5A470A0908DEC939_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EAC2737A96E071C9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CCDAD68BA2738A1_METHOD_1_EAC2737A96E071C9_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Method_1_9CC25E61FEEE1AEA(::RPGTools::Timeline::StoryLightCharacterGroup a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID, ::RPGTools::Timeline::StoryLightCharacterGroup))((::PBYTE)hIl2Cpp + CLASS_1_9CCDAD68BA2738A1_METHOD_1_9CC25E61FEEE1AEA_OFFSET))(this, a1);
	}
};
