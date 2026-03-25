#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarSkinType.h"
#include "unitysdk/Struct_2_BC950E36747FB4C9.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_341;
class Class_0_16E4307DCC419505_366;
class Class_1_090AB0EAA610410E;
namespace RPG::AvatarSystem { class AvatarSkin; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_7432AA47CD18C2A2_EXPORTPROFILE_OFFSET UNITYSDK_OFFSET(0xAC3ACC0)
#define CLASS_1_7432AA47CD18C2A2_GET_DRESSEDSKIN_OFFSET UNITYSDK_OFFSET(0xAC3ABD0)
#define CLASS_1_7432AA47CD18C2A2_GET_SKINIDS_OFFSET UNITYSDK_OFFSET(0xAC3ABC0)
#define CLASS_1_7432AA47CD18C2A2_IMPORTPROFILE_OFFSET UNITYSDK_OFFSET(0xAC3AC00)
#define CLASS_1_7432AA47CD18C2A2_SET_DRESSEDSKIN_OFFSET UNITYSDK_OFFSET(0xAC3ABE0)
#define CLASS_1_7432AA47CD18C2A2__CTOR_OFFSET UNITYSDK_OFFSET(0xAC3ABF0)

inline static constexpr unsigned int Class_1_7432AA47CD18C2A2_TypeDefinitionIndex = 41981;

class Class_1_7432AA47CD18C2A2 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_366* Field_1_1; // 0x10
	::RPG::AvatarSystem::AvatarSkin* _DressedSkin_k__BackingField; // 0x18
	::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::GameCore::AvatarSkinType, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*>* _SkinIDs_k__BackingField; // 0x20
	::Struct_2_BC950E36747FB4C9 Field_1_0; // 0x28

	::System::Void _ctor(::Struct_2_BC950E36747FB4C9 a1, ::Class_0_16E4307DCC419505_366* a2, ::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::GameCore::AvatarSkinType, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_BC950E36747FB4C9, ::Class_0_16E4307DCC419505_366*, ::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::GameCore::AvatarSkinType, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*>*))((::PBYTE)hIl2Cpp + CLASS_1_7432AA47CD18C2A2__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::GameCore::AvatarSkinType, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*>* get_SkinIDs()
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::GameCore::AvatarSkinType, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7432AA47CD18C2A2_GET_SKINIDS_OFFSET))(this);
	}

	::RPG::AvatarSystem::AvatarSkin* get_DressedSkin()
	{
		return ((::RPG::AvatarSystem::AvatarSkin*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7432AA47CD18C2A2_GET_DRESSEDSKIN_OFFSET))(this);
	}

	::System::Void set_DressedSkin(::RPG::AvatarSystem::AvatarSkin* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::AvatarSkin*))((::PBYTE)hIl2Cpp + CLASS_1_7432AA47CD18C2A2_SET_DRESSEDSKIN_OFFSET))(this, value);
	}

	::System::Void ImportProfile(::Class_1_090AB0EAA610410E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_090AB0EAA610410E*))((::PBYTE)hIl2Cpp + CLASS_1_7432AA47CD18C2A2_IMPORTPROFILE_OFFSET))(this, a1);
	}

	::System::Void ExportProfile(::Class_0_16E4307DCC419505_341* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_341*))((::PBYTE)hIl2Cpp + CLASS_1_7432AA47CD18C2A2_EXPORTPROFILE_OFFSET))(this, a1);
	}
};
