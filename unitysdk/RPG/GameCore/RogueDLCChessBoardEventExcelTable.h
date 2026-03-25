#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueDLCChessBoardEventRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEDLCCHESSBOARDEVENTEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x175FC3B0)
#define RPG_GAMECORE_ROGUEDLCCHESSBOARDEVENTEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x175FC200)
#define RPG_GAMECORE_ROGUEDLCCHESSBOARDEVENTEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x175FBED0)
#define RPG_GAMECORE_ROGUEDLCCHESSBOARDEVENTEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x175FC1A0)
#define RPG_GAMECORE_ROGUEDLCCHESSBOARDEVENTEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x175FC580)
#define RPG_GAMECORE_ROGUEDLCCHESSBOARDEVENTEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x175FBF50)
#define RPG_GAMECORE_ROGUEDLCCHESSBOARDEVENTEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x175FC5C0)
#define RPG_GAMECORE_ROGUEDLCCHESSBOARDEVENTEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x175FC7A0)
#define RPG_GAMECORE_ROGUEDLCCHESSBOARDEVENTEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x175FCA00)
#define RPG_GAMECORE_ROGUEDLCCHESSBOARDEVENTEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x175FCD60)
#define RPG_GAMECORE_ROGUEDLCCHESSBOARDEVENTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x175FC700)
#define RPG_GAMECORE_ROGUEDLCCHESSBOARDEVENTEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x175FC660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCChessBoardEventExcelTable_TypeDefinitionIndex = 13502;

	class RogueDLCChessBoardEventExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCChessBoardEventRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCChessBoardEventRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCChessBoardEventExcelTable_TypeDefinitionIndex)->GetStaticField(0x34DB0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCChessBoardEventExcelTable_TypeDefinitionIndex)->GetStaticField(0x34DB8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCChessBoardEventExcelTable_TypeDefinitionIndex)->GetStaticField(0x34DC0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueDLCChessBoardEventExcelTable_TypeDefinitionIndex)->GetStaticField(0x108A0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueDLCChessBoardEventExcelTable_TypeDefinitionIndex)->GetStaticField(0x108A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCCHESSBOARDEVENTEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCChessBoardEventRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCChessBoardEventRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCCHESSBOARDEVENTEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCCHESSBOARDEVENTEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCChessBoardEventRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCChessBoardEventRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCCHESSBOARDEVENTEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueDLCChessBoardEventRow* GetData(::System::UInt32 ChessBoardEventID)
		{
			return ((::RPG::GameCore::RogueDLCChessBoardEventRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCCHESSBOARDEVENTEXCELTABLE_GETDATA_OFFSET))(ChessBoardEventID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCCHESSBOARDEVENTEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCCHESSBOARDEVENTEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCCHESSBOARDEVENTEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCCHESSBOARDEVENTEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCCHESSBOARDEVENTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCCHESSBOARDEVENTEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueDLCChessBoardEventRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueDLCChessBoardEventRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCCHESSBOARDEVENTEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
