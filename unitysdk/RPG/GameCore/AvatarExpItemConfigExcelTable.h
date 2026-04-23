#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AvatarExpItemConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_AVATAREXPITEMCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x186C25A0)
#define RPG_GAMECORE_AVATAREXPITEMCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x186C23F0)
#define RPG_GAMECORE_AVATAREXPITEMCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x186C20C0)
#define RPG_GAMECORE_AVATAREXPITEMCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x186C2390)
#define RPG_GAMECORE_AVATAREXPITEMCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x186C2770)
#define RPG_GAMECORE_AVATAREXPITEMCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x186C2140)
#define RPG_GAMECORE_AVATAREXPITEMCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x186C27B0)
#define RPG_GAMECORE_AVATAREXPITEMCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x186C2990)
#define RPG_GAMECORE_AVATAREXPITEMCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x186C2AD0)
#define RPG_GAMECORE_AVATAREXPITEMCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x186C2DE0)
#define RPG_GAMECORE_AVATAREXPITEMCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x186C28F0)
#define RPG_GAMECORE_AVATAREXPITEMCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x186C2850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarExpItemConfigExcelTable_TypeDefinitionIndex = 12051;

	class AvatarExpItemConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarExpItemConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x27F00);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarExpItemConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarExpItemConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarExpItemConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x27F08);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarExpItemConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x27F10);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AvatarExpItemConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xA900);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AvatarExpItemConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xA901);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATAREXPITEMCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarExpItemConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarExpItemConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATAREXPITEMCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATAREXPITEMCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarExpItemConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarExpItemConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATAREXPITEMCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AvatarExpItemConfigRow* GetData(::System::UInt32 ItemID)
		{
			return ((::RPG::GameCore::AvatarExpItemConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATAREXPITEMCONFIGEXCELTABLE_GETDATA_OFFSET))(ItemID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATAREXPITEMCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATAREXPITEMCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATAREXPITEMCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATAREXPITEMCONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATAREXPITEMCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATAREXPITEMCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AvatarExpItemConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::AvatarExpItemConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATAREXPITEMCONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
