#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueTournFormulaDisplayRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUETOURNFORMULADISPLAYEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18D73F20)
#define RPG_GAMECORE_ROGUETOURNFORMULADISPLAYEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18D73D70)
#define RPG_GAMECORE_ROGUETOURNFORMULADISPLAYEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18D73A40)
#define RPG_GAMECORE_ROGUETOURNFORMULADISPLAYEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18D73D10)
#define RPG_GAMECORE_ROGUETOURNFORMULADISPLAYEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18D740A0)
#define RPG_GAMECORE_ROGUETOURNFORMULADISPLAYEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18D73AC0)
#define RPG_GAMECORE_ROGUETOURNFORMULADISPLAYEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18D740E0)
#define RPG_GAMECORE_ROGUETOURNFORMULADISPLAYEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D742C0)
#define RPG_GAMECORE_ROGUETOURNFORMULADISPLAYEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18D74500)
#define RPG_GAMECORE_ROGUETOURNFORMULADISPLAYEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18D74810)
#define RPG_GAMECORE_ROGUETOURNFORMULADISPLAYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18D74220)
#define RPG_GAMECORE_ROGUETOURNFORMULADISPLAYEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18D74180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournFormulaDisplayExcelTable_TypeDefinitionIndex = 14216;

	class RogueTournFormulaDisplayExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournFormulaDisplayExcelTable_TypeDefinitionIndex)->GetStaticField(0x48930);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournFormulaDisplayExcelTable_TypeDefinitionIndex)->GetStaticField(0x48938);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournFormulaDisplayRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournFormulaDisplayRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournFormulaDisplayExcelTable_TypeDefinitionIndex)->GetStaticField(0x48940);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueTournFormulaDisplayExcelTable_TypeDefinitionIndex)->GetStaticField(0xF890);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueTournFormulaDisplayExcelTable_TypeDefinitionIndex)->GetStaticField(0xF891);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFORMULADISPLAYEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournFormulaDisplayRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournFormulaDisplayRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFORMULADISPLAYEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFORMULADISPLAYEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournFormulaDisplayRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournFormulaDisplayRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFORMULADISPLAYEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueTournFormulaDisplayRow* GetData(::System::UInt32 FormulaDisplayID)
		{
			return ((::RPG::GameCore::RogueTournFormulaDisplayRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFORMULADISPLAYEXCELTABLE_GETDATA_OFFSET))(FormulaDisplayID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFORMULADISPLAYEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFORMULADISPLAYEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFORMULADISPLAYEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFORMULADISPLAYEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFORMULADISPLAYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFORMULADISPLAYEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueTournFormulaDisplayRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueTournFormulaDisplayRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFORMULADISPLAYEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
