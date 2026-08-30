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

#define RPG_GAMECORE_ROGUETALKNAMECOLOREXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D411DA0)
#define RPG_GAMECORE_ROGUETALKNAMECOLOREXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D411C20)
#define RPG_GAMECORE_ROGUETALKNAMECOLOREXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D411910)
#define RPG_GAMECORE_ROGUETALKNAMECOLOREXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D411BC0)
#define RPG_GAMECORE_ROGUETALKNAMECOLOREXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D411EA0)
#define RPG_GAMECORE_ROGUETALKNAMECOLOREXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D411990)
#define RPG_GAMECORE_ROGUETALKNAMECOLOREXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D411EE0)
#define RPG_GAMECORE_ROGUETALKNAMECOLOREXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D4120B0)
#define RPG_GAMECORE_ROGUETALKNAMECOLOREXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D412270)
#define RPG_GAMECORE_ROGUETALKNAMECOLOREXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D412770)
#define RPG_GAMECORE_ROGUETALKNAMECOLOREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D412010)
#define RPG_GAMECORE_ROGUETALKNAMECOLOREXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D411F70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTalkNameColorExcelTable_TypeDefinitionIndex = 14647;

	class RogueTalkNameColorExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RogueTalkNameColorExcelTable_IndexKey, ::RPG::GameCore::RogueTalkNameColorRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RogueTalkNameColorExcelTable_IndexKey, ::RPG::GameCore::RogueTalkNameColorRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTalkNameColorExcelTable_TypeDefinitionIndex)->GetStaticField(0x11570);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTalkNameColorExcelTable_TypeDefinitionIndex)->GetStaticField(0x11578);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTalkNameColorExcelTable_TypeDefinitionIndex)->GetStaticField(0x11580);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueTalkNameColorExcelTable_TypeDefinitionIndex)->GetStaticField(0x7820);
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

		static ::RPG::GameCore::RogueTalkNameColorRow* GetData(::RPG::Client::TextID a1)
		{
			return ((::RPG::GameCore::RogueTalkNameColorRow*(*)(::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETALKNAMECOLOREXCELTABLE_GETDATA_OFFSET))(a1);
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

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETALKNAMECOLOREXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETALKNAMECOLOREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETALKNAMECOLOREXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueTalkNameColorRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueTalkNameColorRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETALKNAMECOLOREXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
