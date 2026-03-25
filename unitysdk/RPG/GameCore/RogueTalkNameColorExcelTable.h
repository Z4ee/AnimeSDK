#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/RogueTalkNameColorExcelTable_IndexKey.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueTalkNameColorRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUETALKNAMECOLOREXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1765BA20)
#define RPG_GAMECORE_ROGUETALKNAMECOLOREXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1765B860)
#define RPG_GAMECORE_ROGUETALKNAMECOLOREXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1765B540)
#define RPG_GAMECORE_ROGUETALKNAMECOLOREXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1765B800)
#define RPG_GAMECORE_ROGUETALKNAMECOLOREXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1765BB60)
#define RPG_GAMECORE_ROGUETALKNAMECOLOREXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1765B5C0)
#define RPG_GAMECORE_ROGUETALKNAMECOLOREXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1765BBA0)
#define RPG_GAMECORE_ROGUETALKNAMECOLOREXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1765BD80)
#define RPG_GAMECORE_ROGUETALKNAMECOLOREXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1765BF40)
#define RPG_GAMECORE_ROGUETALKNAMECOLOREXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1765C470)
#define RPG_GAMECORE_ROGUETALKNAMECOLOREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1765BCE0)
#define RPG_GAMECORE_ROGUETALKNAMECOLOREXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1765BC40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTalkNameColorExcelTable_TypeDefinitionIndex = 13543;

	class RogueTalkNameColorExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTalkNameColorExcelTable_TypeDefinitionIndex)->GetStaticField(0x5FD0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTalkNameColorExcelTable_TypeDefinitionIndex)->GetStaticField(0x5FD8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RogueTalkNameColorExcelTable_IndexKey, ::RPG::GameCore::RogueTalkNameColorRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RogueTalkNameColorExcelTable_IndexKey, ::RPG::GameCore::RogueTalkNameColorRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTalkNameColorExcelTable_TypeDefinitionIndex)->GetStaticField(0x5FE0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueTalkNameColorExcelTable_TypeDefinitionIndex)->GetStaticField(0x3A40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETALKNAMECOLOREXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RogueTalkNameColorExcelTable_IndexKey, ::RPG::GameCore::RogueTalkNameColorRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RogueTalkNameColorExcelTable_IndexKey, ::RPG::GameCore::RogueTalkNameColorRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETALKNAMECOLOREXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETALKNAMECOLOREXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::RogueTalkNameColorExcelTable_IndexKey, ::RPG::GameCore::RogueTalkNameColorRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::RogueTalkNameColorExcelTable_IndexKey, ::RPG::GameCore::RogueTalkNameColorRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETALKNAMECOLOREXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueTalkNameColorRow* GetData(::RPG::Client::TextID TextmapID)
		{
			return ((::RPG::GameCore::RogueTalkNameColorRow*(*)(::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETALKNAMECOLOREXCELTABLE_GETDATA_OFFSET))(TextmapID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETALKNAMECOLOREXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETALKNAMECOLOREXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETALKNAMECOLOREXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETALKNAMECOLOREXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETALKNAMECOLOREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETALKNAMECOLOREXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueTalkNameColorRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueTalkNameColorRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETALKNAMECOLOREXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
