#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueTournContentDisplayRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUETOURNCONTENTDISPLAYEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18D70600)
#define RPG_GAMECORE_ROGUETOURNCONTENTDISPLAYEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18D70450)
#define RPG_GAMECORE_ROGUETOURNCONTENTDISPLAYEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18D70120)
#define RPG_GAMECORE_ROGUETOURNCONTENTDISPLAYEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18D703F0)
#define RPG_GAMECORE_ROGUETOURNCONTENTDISPLAYEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18D70780)
#define RPG_GAMECORE_ROGUETOURNCONTENTDISPLAYEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18D701A0)
#define RPG_GAMECORE_ROGUETOURNCONTENTDISPLAYEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18D707C0)
#define RPG_GAMECORE_ROGUETOURNCONTENTDISPLAYEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D709A0)
#define RPG_GAMECORE_ROGUETOURNCONTENTDISPLAYEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18D70B50)
#define RPG_GAMECORE_ROGUETOURNCONTENTDISPLAYEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18D70E60)
#define RPG_GAMECORE_ROGUETOURNCONTENTDISPLAYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18D70900)
#define RPG_GAMECORE_ROGUETOURNCONTENTDISPLAYEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18D70860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournContentDisplayExcelTable_TypeDefinitionIndex = 14259;

	class RogueTournContentDisplayExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournContentDisplayExcelTable_TypeDefinitionIndex)->GetStaticField(0x48580);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournContentDisplayRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournContentDisplayRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournContentDisplayExcelTable_TypeDefinitionIndex)->GetStaticField(0x48588);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournContentDisplayExcelTable_TypeDefinitionIndex)->GetStaticField(0x48590);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueTournContentDisplayExcelTable_TypeDefinitionIndex)->GetStaticField(0xF860);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueTournContentDisplayExcelTable_TypeDefinitionIndex)->GetStaticField(0xF861);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNCONTENTDISPLAYEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournContentDisplayRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournContentDisplayRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNCONTENTDISPLAYEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNCONTENTDISPLAYEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournContentDisplayRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournContentDisplayRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNCONTENTDISPLAYEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueTournContentDisplayRow* GetData(::System::UInt32 DisplayID)
		{
			return ((::RPG::GameCore::RogueTournContentDisplayRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNCONTENTDISPLAYEXCELTABLE_GETDATA_OFFSET))(DisplayID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNCONTENTDISPLAYEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNCONTENTDISPLAYEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNCONTENTDISPLAYEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNCONTENTDISPLAYEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNCONTENTDISPLAYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNCONTENTDISPLAYEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueTournContentDisplayRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueTournContentDisplayRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNCONTENTDISPLAYEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
