#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarSkinType.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class AvatarSkin; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_2A51C2D91B49A03A_GET_DRESSEDSKIN_OFFSET UNITYSDK_OFFSET(0xB15B190)
#define CLASS_1_2A51C2D91B49A03A_GET_SKINIDS_OFFSET UNITYSDK_OFFSET(0xB15B100)
#define CLASS_1_2A51C2D91B49A03A__CCTOR_OFFSET UNITYSDK_OFFSET(0xB15B1A0)
#define CLASS_1_2A51C2D91B49A03A__CTOR_OFFSET UNITYSDK_OFFSET(0xB15B0F0)

inline static constexpr unsigned int Class_1_2A51C2D91B49A03A_TypeDefinitionIndex = 51990;

class Class_1_2A51C2D91B49A03A : public ::System::Object
{
public:
	static ::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::GameCore::AvatarSkinType, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*>** StaticGet_KHBPHNJPCMM()
	{
		return (::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::GameCore::AvatarSkinType, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2A51C2D91B49A03A_TypeDefinitionIndex)->GetStaticField(0x6E330);
	}
	::RPG::AvatarSystem::AvatarSkin* _DressedSkin_k__BackingField; // 0x10

	::System::Void _ctor(::RPG::AvatarSystem::AvatarSkin* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::AvatarSkin*))((::PBYTE)hIl2Cpp + CLASS_1_2A51C2D91B49A03A__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2A51C2D91B49A03A__CCTOR_OFFSET))();
	}

	::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::GameCore::AvatarSkinType, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*>* get_SkinIDs()
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::GameCore::AvatarSkinType, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A51C2D91B49A03A_GET_SKINIDS_OFFSET))(this);
	}

	::RPG::AvatarSystem::AvatarSkin* get_DressedSkin()
	{
		return ((::RPG::AvatarSystem::AvatarSkin*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A51C2D91B49A03A_GET_DRESSEDSKIN_OFFSET))(this);
	}
};
