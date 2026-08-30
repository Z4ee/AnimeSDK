#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class QuestTimeLimitRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_QUESTTIMELIMITEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D18EF50)
#define RPG_GAMECORE_QUESTTIMELIMITEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D18EDE0)
#define RPG_GAMECORE_QUESTTIMELIMITEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D18EAD0)
#define RPG_GAMECORE_QUESTTIMELIMITEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D18ED80)
#define RPG_GAMECORE_QUESTTIMELIMITEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D18F0E0)
#define RPG_GAMECORE_QUESTTIMELIMITEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D18EB50)
#define RPG_GAMECORE_QUESTTIMELIMITEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D18F120)
#define RPG_GAMECORE_QUESTTIMELIMITEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D18F2F0)
#define RPG_GAMECORE_QUESTTIMELIMITEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D18F690)
#define RPG_GAMECORE_QUESTTIMELIMITEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D18FA00)
#define RPG_GAMECORE_QUESTTIMELIMITEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D18F250)
#define RPG_GAMECORE_QUESTTIMELIMITEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D18F1B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int QuestTimeLimitExcelTable_TypeDefinitionIndex = 12234;

	class QuestTimeLimitExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(QuestTimeLimitExcelTable_TypeDefinitionIndex)->GetStaticField(0x4800);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(QuestTimeLimitExcelTable_TypeDefinitionIndex)->GetStaticField(0x4808);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::QuestTimeLimitRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::QuestTimeLimitRow*>**)Il2CppClass::FromTypeDefinitionIndex(QuestTimeLimitExcelTable_TypeDefinitionIndex)->GetStaticField(0x4810);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(QuestTimeLimitExcelTable_TypeDefinitionIndex)->GetStaticField(0x1730);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(QuestTimeLimitExcelTable_TypeDefinitionIndex)->GetStaticField(0x1731);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUESTTIMELIMITEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::QuestTimeLimitRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::QuestTimeLimitRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUESTTIMELIMITEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUESTTIMELIMITEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::QuestTimeLimitRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::QuestTimeLimitRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUESTTIMELIMITEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::QuestTimeLimitRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::QuestTimeLimitRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUESTTIMELIMITEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUESTTIMELIMITEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUESTTIMELIMITEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUESTTIMELIMITEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUESTTIMELIMITEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUESTTIMELIMITEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUESTTIMELIMITEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::QuestTimeLimitRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::QuestTimeLimitRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUESTTIMELIMITEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
