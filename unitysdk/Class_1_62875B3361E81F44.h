#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RelicSmartSuit/RankType.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class RelicItemData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_62875B3361E81F44_METHOD_1_286F0D69CE640BED_OFFSET UNITYSDK_OFFSET(0xBAB7B00)
#define CLASS_1_62875B3361E81F44_METHOD_1_82CC5AD0311D7326_OFFSET UNITYSDK_OFFSET(0xBAB79D0)
#define CLASS_1_62875B3361E81F44_METHOD_1_D96CA4C410EE8CB9_OFFSET UNITYSDK_OFFSET(0xBAB7AA0)
#define CLASS_1_62875B3361E81F44__CTOR_OFFSET UNITYSDK_OFFSET(0xBAB7D50)

inline static constexpr unsigned int Class_1_62875B3361E81F44_TypeDefinitionIndex = 66858;

class Class_1_62875B3361E81F44 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62875B3361E81F44__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_1_82CC5AD0311D7326(::RPG::AvatarSystem::IAvatar* a1, ::RPG::Client::RelicItemData* a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + CLASS_1_62875B3361E81F44_METHOD_1_82CC5AD0311D7326_OFFSET))(this, a1, a2);
	}

	::RPG::Client::RelicSmartSuit::RankType Method_1_D96CA4C410EE8CB9(::RPG::AvatarSystem::IAvatar* a1, ::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* a2)
	{
		return ((::RPG::Client::RelicSmartSuit::RankType(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*))((::PBYTE)hIl2Cpp + CLASS_1_62875B3361E81F44_METHOD_1_D96CA4C410EE8CB9_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_286F0D69CE640BED(::RPG::AvatarSystem::IAvatar* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_62875B3361E81F44_METHOD_1_286F0D69CE640BED_OFFSET))(this, a1, a2);
	}
};
