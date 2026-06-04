#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MonopolyReportResultRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MONOPOLYREPORTRESULTEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x199A2C60)
#define RPG_GAMECORE_MONOPOLYREPORTRESULTEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x199A2AF0)
#define RPG_GAMECORE_MONOPOLYREPORTRESULTEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x199A27E0)
#define RPG_GAMECORE_MONOPOLYREPORTRESULTEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x199A2A90)
#define RPG_GAMECORE_MONOPOLYREPORTRESULTEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x199A2DF0)
#define RPG_GAMECORE_MONOPOLYREPORTRESULTEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x199A2860)
#define RPG_GAMECORE_MONOPOLYREPORTRESULTEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x199A2E30)
#define RPG_GAMECORE_MONOPOLYREPORTRESULTEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x199A3000)
#define RPG_GAMECORE_MONOPOLYREPORTRESULTEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x199A34E0)
#define RPG_GAMECORE_MONOPOLYREPORTRESULTEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x199A3850)
#define RPG_GAMECORE_MONOPOLYREPORTRESULTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x199A2F60)
#define RPG_GAMECORE_MONOPOLYREPORTRESULTEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x199A2EC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyReportResultExcelTable_TypeDefinitionIndex = 11508;

	class MonopolyReportResultExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MonopolyReportResultExcelTable_TypeDefinitionIndex)->GetStaticField(0x2F7D0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyReportResultRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyReportResultRow*>**)Il2CppClass::FromTypeDefinitionIndex(MonopolyReportResultExcelTable_TypeDefinitionIndex)->GetStaticField(0x2F7D8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MonopolyReportResultExcelTable_TypeDefinitionIndex)->GetStaticField(0x2F7E0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MonopolyReportResultExcelTable_TypeDefinitionIndex)->GetStaticField(0x9F00);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonopolyReportResultExcelTable_TypeDefinitionIndex)->GetStaticField(0x9F01);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYREPORTRESULTEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyReportResultRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyReportResultRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYREPORTRESULTEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYREPORTRESULTEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyReportResultRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyReportResultRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYREPORTRESULTEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MonopolyReportResultRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MonopolyReportResultRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYREPORTRESULTEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYREPORTRESULTEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYREPORTRESULTEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYREPORTRESULTEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYREPORTRESULTEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYREPORTRESULTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYREPORTRESULTEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MonopolyReportResultRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MonopolyReportResultRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYREPORTRESULTEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
