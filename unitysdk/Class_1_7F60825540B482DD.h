#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarSkinType.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class AvatarSkin; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_7F60825540B482DD_GET_DRESSEDSKIN_OFFSET UNITYSDK_OFFSET(0x17229570)
#define CLASS_1_7F60825540B482DD_GET_SKINIDS_OFFSET UNITYSDK_OFFSET(0x17229590)
#define CLASS_1_7F60825540B482DD_SET_DRESSEDSKIN_OFFSET UNITYSDK_OFFSET(0x17229580)
#define CLASS_1_7F60825540B482DD_SET_SKINIDS_OFFSET UNITYSDK_OFFSET(0x172295A0)
#define CLASS_1_7F60825540B482DD__CTOR_OFFSET UNITYSDK_OFFSET(0x172295B0)

inline static constexpr unsigned int Class_1_7F60825540B482DD_TypeDefinitionIndex = 52211;

class Class_1_7F60825540B482DD : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::GameCore::AvatarSkinType, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*>* _SkinIDs_k__BackingField; // 0x10
	::RPG::AvatarSystem::AvatarSkin* _DressedSkin_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F60825540B482DD__CTOR_OFFSET))(this);
	}

	::RPG::AvatarSystem::AvatarSkin* get_DressedSkin()
	{
		return ((::RPG::AvatarSystem::AvatarSkin*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F60825540B482DD_GET_DRESSEDSKIN_OFFSET))(this);
	}

	::System::Void set_DressedSkin(::RPG::AvatarSystem::AvatarSkin* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::AvatarSkin*))((::PBYTE)hIl2Cpp + CLASS_1_7F60825540B482DD_SET_DRESSEDSKIN_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::GameCore::AvatarSkinType, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*>* get_SkinIDs()
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::GameCore::AvatarSkinType, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F60825540B482DD_GET_SKINIDS_OFFSET))(this);
	}

	::System::Void set_SkinIDs(::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::GameCore::AvatarSkinType, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::GameCore::AvatarSkinType, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*>*))((::PBYTE)hIl2Cpp + CLASS_1_7F60825540B482DD_SET_SKINIDS_OFFSET))(this, a1);
	}
};
