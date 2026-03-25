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

#define RPG_GAMECORE_ROGUECOMMONMODETITLEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x175EA490)
#define RPG_GAMECORE_ROGUECOMMONMODETITLEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x175EA2E0)
#define RPG_GAMECORE_ROGUECOMMONMODETITLEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x175E9FB0)
#define RPG_GAMECORE_ROGUECOMMONMODETITLEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x175EA280)
#define RPG_GAMECORE_ROGUECOMMONMODETITLEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x175EA620)
#define RPG_GAMECORE_ROGUECOMMONMODETITLEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x175EA030)
#define RPG_GAMECORE_ROGUECOMMONMODETITLEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x175EA660)
#define RPG_GAMECORE_ROGUECOMMONMODETITLEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x175EA840)
#define RPG_GAMECORE_ROGUECOMMONMODETITLEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x175EAA40)
#define RPG_GAMECORE_ROGUECOMMONMODETITLEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x175EAD50)
#define RPG_GAMECORE_ROGUECOMMONMODETITLEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x175EA7A0)
#define RPG_GAMECORE_ROGUECOMMONMODETITLEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x175EA700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueCommonModeTitleExcelTable_TypeDefinitionIndex = 13408;

	class RogueCommonModeTitleExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueCommonModeTitleExcelTable_TypeDefinitionIndex)->GetStaticField(0x34930);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueCommonModeTitleRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueCommonModeTitleRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueCommonModeTitleExcelTable_TypeDefinitionIndex)->GetStaticField(0x34938);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueCommonModeTitleExcelTable_TypeDefinitionIndex)->GetStaticField(0x34940);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueCommonModeTitleExcelTable_TypeDefinitionIndex)->GetStaticField(0x106D0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueCommonModeTitleExcelTable_TypeDefinitionIndex)->GetStaticField(0x106D1);
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

		static ::RPG::GameCore::RogueCommonModeTitleRow* GetData(::RPG::GameCore::RogueSubMode SubMode)
		{
			return ((::RPG::GameCore::RogueCommonModeTitleRow*(*)(::RPG::GameCore::RogueSubMode))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECOMMONMODETITLEEXCELTABLE_GETDATA_OFFSET))(SubMode);
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

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECOMMONMODETITLEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECOMMONMODETITLEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECOMMONMODETITLEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueCommonModeTitleRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueCommonModeTitleRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECOMMONMODETITLEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
