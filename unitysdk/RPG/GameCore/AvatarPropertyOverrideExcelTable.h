#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AvatarPropertyOverrideRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_AVATARPROPERTYOVERRIDEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x186CC4F0)
#define RPG_GAMECORE_AVATARPROPERTYOVERRIDEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x186CC340)
#define RPG_GAMECORE_AVATARPROPERTYOVERRIDEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x186CC010)
#define RPG_GAMECORE_AVATARPROPERTYOVERRIDEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x186CC2E0)
#define RPG_GAMECORE_AVATARPROPERTYOVERRIDEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x186CC6C0)
#define RPG_GAMECORE_AVATARPROPERTYOVERRIDEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x186CC090)
#define RPG_GAMECORE_AVATARPROPERTYOVERRIDEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x186CC700)
#define RPG_GAMECORE_AVATARPROPERTYOVERRIDEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x186CC8E0)
#define RPG_GAMECORE_AVATARPROPERTYOVERRIDEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x186CCC90)
#define RPG_GAMECORE_AVATARPROPERTYOVERRIDEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x186CCFF0)
#define RPG_GAMECORE_AVATARPROPERTYOVERRIDEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x186CC840)
#define RPG_GAMECORE_AVATARPROPERTYOVERRIDEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x186CC7A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarPropertyOverrideExcelTable_TypeDefinitionIndex = 12016;

	class AvatarPropertyOverrideExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarPropertyOverrideExcelTable_TypeDefinitionIndex)->GetStaticField(0x28730);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarPropertyOverrideExcelTable_TypeDefinitionIndex)->GetStaticField(0x28738);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarPropertyOverrideRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarPropertyOverrideRow*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarPropertyOverrideExcelTable_TypeDefinitionIndex)->GetStaticField(0x28740);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AvatarPropertyOverrideExcelTable_TypeDefinitionIndex)->GetStaticField(0xABC0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AvatarPropertyOverrideExcelTable_TypeDefinitionIndex)->GetStaticField(0xABC1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROPERTYOVERRIDEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarPropertyOverrideRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarPropertyOverrideRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROPERTYOVERRIDEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROPERTYOVERRIDEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarPropertyOverrideRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarPropertyOverrideRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROPERTYOVERRIDEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AvatarPropertyOverrideRow* GetData(::System::UInt32 AvatarID)
		{
			return ((::RPG::GameCore::AvatarPropertyOverrideRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROPERTYOVERRIDEEXCELTABLE_GETDATA_OFFSET))(AvatarID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROPERTYOVERRIDEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROPERTYOVERRIDEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROPERTYOVERRIDEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROPERTYOVERRIDEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROPERTYOVERRIDEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROPERTYOVERRIDEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AvatarPropertyOverrideRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::AvatarPropertyOverrideRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROPERTYOVERRIDEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
