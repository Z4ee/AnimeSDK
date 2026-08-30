#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class StarFightQuestConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_STARFIGHTQUESTCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1CAF2F90)
#define RPG_GAMECORE_STARFIGHTQUESTCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1CAF2E20)
#define RPG_GAMECORE_STARFIGHTQUESTCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1CAF2B10)
#define RPG_GAMECORE_STARFIGHTQUESTCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1CAF2DC0)
#define RPG_GAMECORE_STARFIGHTQUESTCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1CAF3120)
#define RPG_GAMECORE_STARFIGHTQUESTCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1CAF2B90)
#define RPG_GAMECORE_STARFIGHTQUESTCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1CAF3160)
#define RPG_GAMECORE_STARFIGHTQUESTCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CAF3330)
#define RPG_GAMECORE_STARFIGHTQUESTCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1CAF34A0)
#define RPG_GAMECORE_STARFIGHTQUESTCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CAF3810)
#define RPG_GAMECORE_STARFIGHTQUESTCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1CAF3290)
#define RPG_GAMECORE_STARFIGHTQUESTCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1CAF31F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StarFightQuestConfigExcelTable_TypeDefinitionIndex = 12309;

	class StarFightQuestConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StarFightQuestConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StarFightQuestConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(StarFightQuestConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x22030);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(StarFightQuestConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x22038);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(StarFightQuestConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x22040);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(StarFightQuestConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xADF0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(StarFightQuestConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xADF1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARFIGHTQUESTCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StarFightQuestConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StarFightQuestConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARFIGHTQUESTCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARFIGHTQUESTCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StarFightQuestConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StarFightQuestConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARFIGHTQUESTCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::StarFightQuestConfigRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::StarFightQuestConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARFIGHTQUESTCONFIGEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARFIGHTQUESTCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARFIGHTQUESTCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARFIGHTQUESTCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARFIGHTQUESTCONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARFIGHTQUESTCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARFIGHTQUESTCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::StarFightQuestConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::StarFightQuestConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARFIGHTQUESTCONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
