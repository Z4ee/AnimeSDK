#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AvatarServantPropertyOverrideRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_AVATARSERVANTPROPERTYOVERRIDEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x186D1900)
#define RPG_GAMECORE_AVATARSERVANTPROPERTYOVERRIDEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x186D1750)
#define RPG_GAMECORE_AVATARSERVANTPROPERTYOVERRIDEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x186D1420)
#define RPG_GAMECORE_AVATARSERVANTPROPERTYOVERRIDEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x186D16F0)
#define RPG_GAMECORE_AVATARSERVANTPROPERTYOVERRIDEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x186D1AD0)
#define RPG_GAMECORE_AVATARSERVANTPROPERTYOVERRIDEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x186D14A0)
#define RPG_GAMECORE_AVATARSERVANTPROPERTYOVERRIDEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x186D1B10)
#define RPG_GAMECORE_AVATARSERVANTPROPERTYOVERRIDEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x186D1CF0)
#define RPG_GAMECORE_AVATARSERVANTPROPERTYOVERRIDEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x186D20D0)
#define RPG_GAMECORE_AVATARSERVANTPROPERTYOVERRIDEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x186D2430)
#define RPG_GAMECORE_AVATARSERVANTPROPERTYOVERRIDEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x186D1C50)
#define RPG_GAMECORE_AVATARSERVANTPROPERTYOVERRIDEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x186D1BB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarServantPropertyOverrideExcelTable_TypeDefinitionIndex = 12109;

	class AvatarServantPropertyOverrideExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarServantPropertyOverrideRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarServantPropertyOverrideRow*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarServantPropertyOverrideExcelTable_TypeDefinitionIndex)->GetStaticField(0x28CE0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarServantPropertyOverrideExcelTable_TypeDefinitionIndex)->GetStaticField(0x28CE8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarServantPropertyOverrideExcelTable_TypeDefinitionIndex)->GetStaticField(0x28CF0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AvatarServantPropertyOverrideExcelTable_TypeDefinitionIndex)->GetStaticField(0xAD40);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AvatarServantPropertyOverrideExcelTable_TypeDefinitionIndex)->GetStaticField(0xAD41);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTPROPERTYOVERRIDEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarServantPropertyOverrideRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarServantPropertyOverrideRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTPROPERTYOVERRIDEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTPROPERTYOVERRIDEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarServantPropertyOverrideRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarServantPropertyOverrideRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTPROPERTYOVERRIDEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AvatarServantPropertyOverrideRow* GetData(::System::UInt32 ServantID)
		{
			return ((::RPG::GameCore::AvatarServantPropertyOverrideRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTPROPERTYOVERRIDEEXCELTABLE_GETDATA_OFFSET))(ServantID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTPROPERTYOVERRIDEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTPROPERTYOVERRIDEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTPROPERTYOVERRIDEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTPROPERTYOVERRIDEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTPROPERTYOVERRIDEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTPROPERTYOVERRIDEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AvatarServantPropertyOverrideRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::AvatarServantPropertyOverrideRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTPROPERTYOVERRIDEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
