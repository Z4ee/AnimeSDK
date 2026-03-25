#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueTournHexAvatarBaseTypeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUETOURNHEXAVATARBASETYPEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x17669220)
#define RPG_GAMECORE_ROGUETOURNHEXAVATARBASETYPEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17669070)
#define RPG_GAMECORE_ROGUETOURNHEXAVATARBASETYPEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x17668D40)
#define RPG_GAMECORE_ROGUETOURNHEXAVATARBASETYPEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x17669010)
#define RPG_GAMECORE_ROGUETOURNHEXAVATARBASETYPEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x176693F0)
#define RPG_GAMECORE_ROGUETOURNHEXAVATARBASETYPEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x17668DC0)
#define RPG_GAMECORE_ROGUETOURNHEXAVATARBASETYPEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x17669430)
#define RPG_GAMECORE_ROGUETOURNHEXAVATARBASETYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x17669610)
#define RPG_GAMECORE_ROGUETOURNHEXAVATARBASETYPEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x17669890)
#define RPG_GAMECORE_ROGUETOURNHEXAVATARBASETYPEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17669BF0)
#define RPG_GAMECORE_ROGUETOURNHEXAVATARBASETYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x17669570)
#define RPG_GAMECORE_ROGUETOURNHEXAVATARBASETYPEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x176694D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournHexAvatarBaseTypeExcelTable_TypeDefinitionIndex = 13769;

	class RogueTournHexAvatarBaseTypeExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournHexAvatarBaseTypeRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournHexAvatarBaseTypeRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournHexAvatarBaseTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x60F0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournHexAvatarBaseTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x60F8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournHexAvatarBaseTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x6100);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueTournHexAvatarBaseTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x3AC0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueTournHexAvatarBaseTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x3AC1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNHEXAVATARBASETYPEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournHexAvatarBaseTypeRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournHexAvatarBaseTypeRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNHEXAVATARBASETYPEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNHEXAVATARBASETYPEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournHexAvatarBaseTypeRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournHexAvatarBaseTypeRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNHEXAVATARBASETYPEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueTournHexAvatarBaseTypeRow* GetData(::System::UInt32 MiracleID)
		{
			return ((::RPG::GameCore::RogueTournHexAvatarBaseTypeRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNHEXAVATARBASETYPEEXCELTABLE_GETDATA_OFFSET))(MiracleID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNHEXAVATARBASETYPEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNHEXAVATARBASETYPEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNHEXAVATARBASETYPEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNHEXAVATARBASETYPEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNHEXAVATARBASETYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNHEXAVATARBASETYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueTournHexAvatarBaseTypeRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueTournHexAvatarBaseTypeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNHEXAVATARBASETYPEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
