#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/RogueSubMode.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueCommonModeTitleRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUECOMMONMODETITLEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x19B1A730)
#define RPG_GAMECORE_ROGUECOMMONMODETITLEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19B1A5C0)
#define RPG_GAMECORE_ROGUECOMMONMODETITLEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x19B1A2B0)
#define RPG_GAMECORE_ROGUECOMMONMODETITLEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x19B1A560)
#define RPG_GAMECORE_ROGUECOMMONMODETITLEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x19B1A880)
#define RPG_GAMECORE_ROGUECOMMONMODETITLEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x19B1A330)
#define RPG_GAMECORE_ROGUECOMMONMODETITLEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x19B1A8C0)
#define RPG_GAMECORE_ROGUECOMMONMODETITLEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19B1AA90)
#define RPG_GAMECORE_ROGUECOMMONMODETITLEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x19B1AC90)
#define RPG_GAMECORE_ROGUECOMMONMODETITLEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19B1AFB0)
#define RPG_GAMECORE_ROGUECOMMONMODETITLEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x19B1A9F0)
#define RPG_GAMECORE_ROGUECOMMONMODETITLEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x19B1A950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueCommonModeTitleExcelTable_TypeDefinitionIndex = 13948;

	class RogueCommonModeTitleExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueCommonModeTitleRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueCommonModeTitleRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueCommonModeTitleExcelTable_TypeDefinitionIndex)->GetStaticField(0x44920);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueCommonModeTitleExcelTable_TypeDefinitionIndex)->GetStaticField(0x44928);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueCommonModeTitleExcelTable_TypeDefinitionIndex)->GetStaticField(0x44930);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueCommonModeTitleExcelTable_TypeDefinitionIndex)->GetStaticField(0xC420);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueCommonModeTitleExcelTable_TypeDefinitionIndex)->GetStaticField(0xC421);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECOMMONMODETITLEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueCommonModeTitleRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueCommonModeTitleRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECOMMONMODETITLEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECOMMONMODETITLEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueCommonModeTitleRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueCommonModeTitleRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECOMMONMODETITLEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueCommonModeTitleRow* GetData(::RPG::GameCore::RogueSubMode a1)
		{
			return ((::RPG::GameCore::RogueCommonModeTitleRow*(*)(::RPG::GameCore::RogueSubMode))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECOMMONMODETITLEEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECOMMONMODETITLEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECOMMONMODETITLEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECOMMONMODETITLEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECOMMONMODETITLEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECOMMONMODETITLEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECOMMONMODETITLEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueCommonModeTitleRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueCommonModeTitleRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECOMMONMODETITLEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
