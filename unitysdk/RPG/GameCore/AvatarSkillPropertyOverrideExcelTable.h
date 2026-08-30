#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AvatarSkillPropertyOverrideRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_AVATARSKILLPROPERTYOVERRIDEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1B2DA940)
#define RPG_GAMECORE_AVATARSKILLPROPERTYOVERRIDEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B2DA7D0)
#define RPG_GAMECORE_AVATARSKILLPROPERTYOVERRIDEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1B2DA4C0)
#define RPG_GAMECORE_AVATARSKILLPROPERTYOVERRIDEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1B2DA770)
#define RPG_GAMECORE_AVATARSKILLPROPERTYOVERRIDEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1B2DAA90)
#define RPG_GAMECORE_AVATARSKILLPROPERTYOVERRIDEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1B2DA540)
#define RPG_GAMECORE_AVATARSKILLPROPERTYOVERRIDEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1B2DAAD0)
#define RPG_GAMECORE_AVATARSKILLPROPERTYOVERRIDEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B2DACA0)
#define RPG_GAMECORE_AVATARSKILLPROPERTYOVERRIDEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1B2DAF70)
#define RPG_GAMECORE_AVATARSKILLPROPERTYOVERRIDEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B2DB290)
#define RPG_GAMECORE_AVATARSKILLPROPERTYOVERRIDEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1B2DAC00)
#define RPG_GAMECORE_AVATARSKILLPROPERTYOVERRIDEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1B2DAB60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarSkillPropertyOverrideExcelTable_TypeDefinitionIndex = 12631;

	class AvatarSkillPropertyOverrideExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarSkillPropertyOverrideRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarSkillPropertyOverrideRow*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarSkillPropertyOverrideExcelTable_TypeDefinitionIndex)->GetStaticField(0x8060);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarSkillPropertyOverrideExcelTable_TypeDefinitionIndex)->GetStaticField(0x8068);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarSkillPropertyOverrideExcelTable_TypeDefinitionIndex)->GetStaticField(0x8070);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AvatarSkillPropertyOverrideExcelTable_TypeDefinitionIndex)->GetStaticField(0x2200);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AvatarSkillPropertyOverrideExcelTable_TypeDefinitionIndex)->GetStaticField(0x2201);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLPROPERTYOVERRIDEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarSkillPropertyOverrideRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarSkillPropertyOverrideRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLPROPERTYOVERRIDEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLPROPERTYOVERRIDEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarSkillPropertyOverrideRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarSkillPropertyOverrideRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLPROPERTYOVERRIDEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AvatarSkillPropertyOverrideRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AvatarSkillPropertyOverrideRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLPROPERTYOVERRIDEEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLPROPERTYOVERRIDEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLPROPERTYOVERRIDEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLPROPERTYOVERRIDEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLPROPERTYOVERRIDEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLPROPERTYOVERRIDEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLPROPERTYOVERRIDEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AvatarSkillPropertyOverrideRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AvatarSkillPropertyOverrideRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLPROPERTYOVERRIDEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
