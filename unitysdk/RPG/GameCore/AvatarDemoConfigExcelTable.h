#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AvatarDemoConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_AVATARDEMOCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x186BAF40)
#define RPG_GAMECORE_AVATARDEMOCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x186BAD90)
#define RPG_GAMECORE_AVATARDEMOCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x186BAA60)
#define RPG_GAMECORE_AVATARDEMOCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x186BAD30)
#define RPG_GAMECORE_AVATARDEMOCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x186BB0C0)
#define RPG_GAMECORE_AVATARDEMOCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x186BAAE0)
#define RPG_GAMECORE_AVATARDEMOCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x186BB100)
#define RPG_GAMECORE_AVATARDEMOCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x186BB2E0)
#define RPG_GAMECORE_AVATARDEMOCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x186BBAC0)
#define RPG_GAMECORE_AVATARDEMOCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x186BBDD0)
#define RPG_GAMECORE_AVATARDEMOCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x186BB240)
#define RPG_GAMECORE_AVATARDEMOCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x186BB1A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarDemoConfigExcelTable_TypeDefinitionIndex = 12075;

	class AvatarDemoConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarDemoConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarDemoConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarDemoConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x27A30);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarDemoConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x27A38);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarDemoConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x27A40);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AvatarDemoConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xA7C0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AvatarDemoConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xA7C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDEMOCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarDemoConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarDemoConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDEMOCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDEMOCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarDemoConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarDemoConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDEMOCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AvatarDemoConfigRow* GetData(::System::UInt32 StageID)
		{
			return ((::RPG::GameCore::AvatarDemoConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDEMOCONFIGEXCELTABLE_GETDATA_OFFSET))(StageID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDEMOCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDEMOCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDEMOCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDEMOCONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDEMOCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDEMOCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AvatarDemoConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::AvatarDemoConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDEMOCONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
