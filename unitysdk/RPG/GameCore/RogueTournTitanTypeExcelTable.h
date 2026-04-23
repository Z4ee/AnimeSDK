#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/RogueTitanType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueTournTitanTypeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUETOURNTITANTYPEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18D7CC60)
#define RPG_GAMECORE_ROGUETOURNTITANTYPEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18D7CAB0)
#define RPG_GAMECORE_ROGUETOURNTITANTYPEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18D7C780)
#define RPG_GAMECORE_ROGUETOURNTITANTYPEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18D7CA50)
#define RPG_GAMECORE_ROGUETOURNTITANTYPEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18D7CE30)
#define RPG_GAMECORE_ROGUETOURNTITANTYPEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18D7C800)
#define RPG_GAMECORE_ROGUETOURNTITANTYPEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18D7CE70)
#define RPG_GAMECORE_ROGUETOURNTITANTYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D7D050)
#define RPG_GAMECORE_ROGUETOURNTITANTYPEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18D7D460)
#define RPG_GAMECORE_ROGUETOURNTITANTYPEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18D7D7C0)
#define RPG_GAMECORE_ROGUETOURNTITANTYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18D7CFB0)
#define RPG_GAMECORE_ROGUETOURNTITANTYPEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18D7CF10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournTitanTypeExcelTable_TypeDefinitionIndex = 14283;

	class RogueTournTitanTypeExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournTitanTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x490E0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournTitanTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x490E8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournTitanTypeRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournTitanTypeRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournTitanTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x490F0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueTournTitanTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0xF930);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueTournTitanTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0xF931);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNTITANTYPEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournTitanTypeRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournTitanTypeRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNTITANTYPEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNTITANTYPEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournTitanTypeRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournTitanTypeRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNTITANTYPEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueTournTitanTypeRow* GetData(::RPG::GameCore::RogueTitanType RogueTitanType)
		{
			return ((::RPG::GameCore::RogueTournTitanTypeRow*(*)(::RPG::GameCore::RogueTitanType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNTITANTYPEEXCELTABLE_GETDATA_OFFSET))(RogueTitanType);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNTITANTYPEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNTITANTYPEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNTITANTYPEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNTITANTYPEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNTITANTYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNTITANTYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueTournTitanTypeRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueTournTitanTypeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNTITANTYPEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
