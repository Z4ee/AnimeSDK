#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarSkillTreeAnchorType.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AvatarSpecialSkillTreeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_AVATARSPECIALSKILLTREEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x16FBD1E0)
#define RPG_GAMECORE_AVATARSPECIALSKILLTREEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16FBD030)
#define RPG_GAMECORE_AVATARSPECIALSKILLTREEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x16FBCD00)
#define RPG_GAMECORE_AVATARSPECIALSKILLTREEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x16FBCFD0)
#define RPG_GAMECORE_AVATARSPECIALSKILLTREEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x16FBD3B0)
#define RPG_GAMECORE_AVATARSPECIALSKILLTREEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x16FBCD80)
#define RPG_GAMECORE_AVATARSPECIALSKILLTREEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x16FBD3F0)
#define RPG_GAMECORE_AVATARSPECIALSKILLTREEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16FBD5D0)
#define RPG_GAMECORE_AVATARSPECIALSKILLTREEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x16FBD7B0)
#define RPG_GAMECORE_AVATARSPECIALSKILLTREEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16FBDB10)
#define RPG_GAMECORE_AVATARSPECIALSKILLTREEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x16FBD530)
#define RPG_GAMECORE_AVATARSPECIALSKILLTREEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x16FBD490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarSpecialSkillTreeExcelTable_TypeDefinitionIndex = 11618;

	class AvatarSpecialSkillTreeExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarSpecialSkillTreeRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarSpecialSkillTreeRow*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarSpecialSkillTreeExcelTable_TypeDefinitionIndex)->GetStaticField(0x213B0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarSpecialSkillTreeExcelTable_TypeDefinitionIndex)->GetStaticField(0x213B8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarSpecialSkillTreeExcelTable_TypeDefinitionIndex)->GetStaticField(0x213C0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AvatarSpecialSkillTreeExcelTable_TypeDefinitionIndex)->GetStaticField(0x8CA0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AvatarSpecialSkillTreeExcelTable_TypeDefinitionIndex)->GetStaticField(0x8CA1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSPECIALSKILLTREEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarSpecialSkillTreeRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarSpecialSkillTreeRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSPECIALSKILLTREEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSPECIALSKILLTREEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarSpecialSkillTreeRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarSpecialSkillTreeRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSPECIALSKILLTREEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AvatarSpecialSkillTreeRow* GetData(::System::UInt32 AvatarID, ::RPG::GameCore::AvatarSkillTreeAnchorType AnchorType)
		{
			return ((::RPG::GameCore::AvatarSpecialSkillTreeRow*(*)(::System::UInt32, ::RPG::GameCore::AvatarSkillTreeAnchorType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSPECIALSKILLTREEEXCELTABLE_GETDATA_OFFSET))(AvatarID, AnchorType);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSPECIALSKILLTREEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSPECIALSKILLTREEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSPECIALSKILLTREEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSPECIALSKILLTREEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSPECIALSKILLTREEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSPECIALSKILLTREEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AvatarSpecialSkillTreeRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::AvatarSpecialSkillTreeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSPECIALSKILLTREEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
