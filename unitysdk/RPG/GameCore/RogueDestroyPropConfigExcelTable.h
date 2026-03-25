#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueDestroyPropConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEDESTROYPROPCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x17604930)
#define RPG_GAMECORE_ROGUEDESTROYPROPCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17604780)
#define RPG_GAMECORE_ROGUEDESTROYPROPCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x17604450)
#define RPG_GAMECORE_ROGUEDESTROYPROPCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x17604720)
#define RPG_GAMECORE_ROGUEDESTROYPROPCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x17604B00)
#define RPG_GAMECORE_ROGUEDESTROYPROPCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x176044D0)
#define RPG_GAMECORE_ROGUEDESTROYPROPCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x17604B40)
#define RPG_GAMECORE_ROGUEDESTROYPROPCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x17604D20)
#define RPG_GAMECORE_ROGUEDESTROYPROPCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x17604F40)
#define RPG_GAMECORE_ROGUEDESTROYPROPCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x176052A0)
#define RPG_GAMECORE_ROGUEDESTROYPROPCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x17604C80)
#define RPG_GAMECORE_ROGUEDESTROYPROPCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x17604BE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDestroyPropConfigExcelTable_TypeDefinitionIndex = 13394;

	class RogueDestroyPropConfigExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDestroyPropConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x34F90);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDestroyPropConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x34F98);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDestroyPropConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDestroyPropConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDestroyPropConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x34FA0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueDestroyPropConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x10980);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueDestroyPropConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x10981);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDESTROYPROPCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDestroyPropConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDestroyPropConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDESTROYPROPCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDESTROYPROPCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDestroyPropConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDestroyPropConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDESTROYPROPCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueDestroyPropConfigRow* GetData(::System::UInt32 ParamGroupID)
		{
			return ((::RPG::GameCore::RogueDestroyPropConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDESTROYPROPCONFIGEXCELTABLE_GETDATA_OFFSET))(ParamGroupID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDESTROYPROPCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDESTROYPROPCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDESTROYPROPCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDESTROYPROPCONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDESTROYPROPCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDESTROYPROPCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueDestroyPropConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueDestroyPropConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDESTROYPROPCONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
