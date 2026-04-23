#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AvatarAtlasRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_AVATARATLASEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x186B6FD0)
#define RPG_GAMECORE_AVATARATLASEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x186B6E50)
#define RPG_GAMECORE_AVATARATLASEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x186B6B20)
#define RPG_GAMECORE_AVATARATLASEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x186B6DF0)
#define RPG_GAMECORE_AVATARATLASEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x186B7150)
#define RPG_GAMECORE_AVATARATLASEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x186B6BA0)
#define RPG_GAMECORE_AVATARATLASEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x186B7190)
#define RPG_GAMECORE_AVATARATLASEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x186B7370)
#define RPG_GAMECORE_AVATARATLASEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x186B7770)
#define RPG_GAMECORE_AVATARATLASEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x186B7A80)
#define RPG_GAMECORE_AVATARATLASEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x186B72D0)
#define RPG_GAMECORE_AVATARATLASEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x186B7230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarAtlasExcelTable_TypeDefinitionIndex = 11998;

	class AvatarAtlasExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarAtlasRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarAtlasRow*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarAtlasExcelTable_TypeDefinitionIndex)->GetStaticField(0x27630);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarAtlasExcelTable_TypeDefinitionIndex)->GetStaticField(0x27638);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarAtlasExcelTable_TypeDefinitionIndex)->GetStaticField(0x27640);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AvatarAtlasExcelTable_TypeDefinitionIndex)->GetStaticField(0xA6C0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AvatarAtlasExcelTable_TypeDefinitionIndex)->GetStaticField(0xA6C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARATLASEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarAtlasRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarAtlasRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARATLASEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARATLASEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarAtlasRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarAtlasRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARATLASEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AvatarAtlasRow* GetData(::System::UInt32 AvatarID)
		{
			return ((::RPG::GameCore::AvatarAtlasRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARATLASEXCELTABLE_GETDATA_OFFSET))(AvatarID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARATLASEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARATLASEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARATLASEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARATLASEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARATLASEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARATLASEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AvatarAtlasRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::AvatarAtlasRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARATLASEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
