#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AvatarBaseTypeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_AVATARBASETYPEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x16F94EA0)
#define RPG_GAMECORE_AVATARBASETYPEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16F94CF0)
#define RPG_GAMECORE_AVATARBASETYPEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x16F949C0)
#define RPG_GAMECORE_AVATARBASETYPEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x16F94C90)
#define RPG_GAMECORE_AVATARBASETYPEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x16F95030)
#define RPG_GAMECORE_AVATARBASETYPEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x16F94A40)
#define RPG_GAMECORE_AVATARBASETYPEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x16F95070)
#define RPG_GAMECORE_AVATARBASETYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F95250)
#define RPG_GAMECORE_AVATARBASETYPEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x16F95710)
#define RPG_GAMECORE_AVATARBASETYPEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F95A20)
#define RPG_GAMECORE_AVATARBASETYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x16F951B0)
#define RPG_GAMECORE_AVATARBASETYPEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x16F95110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarBaseTypeExcelTable_TypeDefinitionIndex = 11637;

	class AvatarBaseTypeExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarBaseTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x1FF90);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarBaseTypeRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarBaseTypeRow*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarBaseTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x1FF98);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarBaseTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x1FFA0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AvatarBaseTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x8650);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AvatarBaseTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x8651);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARBASETYPEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarBaseTypeRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarBaseTypeRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARBASETYPEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARBASETYPEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarBaseTypeRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarBaseTypeRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARBASETYPEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AvatarBaseTypeRow* GetData(::RPG::GameCore::AvatarBaseType ID)
		{
			return ((::RPG::GameCore::AvatarBaseTypeRow*(*)(::RPG::GameCore::AvatarBaseType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARBASETYPEEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARBASETYPEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARBASETYPEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARBASETYPEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARBASETYPEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARBASETYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARBASETYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AvatarBaseTypeRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::AvatarBaseTypeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARBASETYPEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
