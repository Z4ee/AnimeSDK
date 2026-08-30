#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarSkinType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_451;
namespace RPG::AvatarSystem { class AvatarSkin; }
namespace RPG::AvatarSystem { class IAvatar; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_93B82696C28F6E47_1_GET_DRESSEDSKIN_OFFSET UNITYSDK_OFFSET(0xC44E640)
#define CLASS_1_93B82696C28F6E47_1_GET_SKINIDS_OFFSET UNITYSDK_OFFSET(0xC44E4C0)
#define CLASS_1_93B82696C28F6E47_1_METHOD_1_FB9879D234A815DE_OFFSET UNITYSDK_OFFSET(0xC44E460)
#define CLASS_1_93B82696C28F6E47_1__CTOR_OFFSET UNITYSDK_OFFSET(0xC44E3F0)

inline static constexpr unsigned int Class_1_93B82696C28F6E47_1_TypeDefinitionIndex = 79885;

class Class_1_93B82696C28F6E47_1 : public ::System::Object
{
public:
	::RPG::AvatarSystem::IAvatar* BPKKKMOCFIP; // 0x10

	::System::Void _ctor(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_93B82696C28F6E47_1__CTOR_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_451* Method_1_FB9879D234A815DE()
	{
		return ((::Class_0_16E4307DCC419505_451*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93B82696C28F6E47_1_METHOD_1_FB9879D234A815DE_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::GameCore::AvatarSkinType, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*>* get_SkinIDs()
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::GameCore::AvatarSkinType, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93B82696C28F6E47_1_GET_SKINIDS_OFFSET))(this);
	}

	::RPG::AvatarSystem::AvatarSkin* get_DressedSkin()
	{
		return ((::RPG::AvatarSystem::AvatarSkin*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93B82696C28F6E47_1_GET_DRESSEDSKIN_OFFSET))(this);
	}
};
