#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MonsterTemplateRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MONSTERTEMPLATEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x199AE2F0)
#define RPG_GAMECORE_MONSTERTEMPLATEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x199B12B0)
#define RPG_GAMECORE_MONSTERTEMPLATEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x199B0FA0)
#define RPG_GAMECORE_MONSTERTEMPLATEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x199B1250)
#define RPG_GAMECORE_MONSTERTEMPLATEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x199B13E0)
#define RPG_GAMECORE_MONSTERTEMPLATEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x199B1020)
#define RPG_GAMECORE_MONSTERTEMPLATEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x199B1420)
#define RPG_GAMECORE_MONSTERTEMPLATEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x199B15F0)
#define RPG_GAMECORE_MONSTERTEMPLATEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x199B2390)
#define RPG_GAMECORE_MONSTERTEMPLATEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x199B26C0)
#define RPG_GAMECORE_MONSTERTEMPLATEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x199B1550)
#define RPG_GAMECORE_MONSTERTEMPLATEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x199B14B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterTemplateExcelTable_TypeDefinitionIndex = 13506;

	class MonsterTemplateExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MonsterTemplateExcelTable_TypeDefinitionIndex)->GetStaticField(0x2FF70);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MonsterTemplateExcelTable_TypeDefinitionIndex)->GetStaticField(0x2FF78);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterTemplateRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterTemplateRow*>**)Il2CppClass::FromTypeDefinitionIndex(MonsterTemplateExcelTable_TypeDefinitionIndex)->GetStaticField(0x2FF80);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonsterTemplateExcelTable_TypeDefinitionIndex)->GetStaticField(0x9FA0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MonsterTemplateExcelTable_TypeDefinitionIndex)->GetStaticField(0x9FA1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERTEMPLATEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterTemplateRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterTemplateRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERTEMPLATEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERTEMPLATEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterTemplateRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterTemplateRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERTEMPLATEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MonsterTemplateRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MonsterTemplateRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERTEMPLATEEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERTEMPLATEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERTEMPLATEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERTEMPLATEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERTEMPLATEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERTEMPLATEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERTEMPLATEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MonsterTemplateRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MonsterTemplateRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERTEMPLATEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
