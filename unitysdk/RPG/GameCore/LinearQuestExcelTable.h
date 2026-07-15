#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LinearQuestRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_LINEARQUESTEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1B08F660)
#define RPG_GAMECORE_LINEARQUESTEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B08F4F0)
#define RPG_GAMECORE_LINEARQUESTEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1B08F1E0)
#define RPG_GAMECORE_LINEARQUESTEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1B08F490)
#define RPG_GAMECORE_LINEARQUESTEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1B08F7F0)
#define RPG_GAMECORE_LINEARQUESTEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1B08F260)
#define RPG_GAMECORE_LINEARQUESTEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1B08F830)
#define RPG_GAMECORE_LINEARQUESTEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B08FA00)
#define RPG_GAMECORE_LINEARQUESTEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1B08FC10)
#define RPG_GAMECORE_LINEARQUESTEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B08FF80)
#define RPG_GAMECORE_LINEARQUESTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1B08F960)
#define RPG_GAMECORE_LINEARQUESTEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1B08F8C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LinearQuestExcelTable_TypeDefinitionIndex = 13990;

	class LinearQuestExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(LinearQuestExcelTable_TypeDefinitionIndex)->GetStaticField(0x3C6F0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(LinearQuestExcelTable_TypeDefinitionIndex)->GetStaticField(0x3C6F8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LinearQuestRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LinearQuestRow*>**)Il2CppClass::FromTypeDefinitionIndex(LinearQuestExcelTable_TypeDefinitionIndex)->GetStaticField(0x3C700);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(LinearQuestExcelTable_TypeDefinitionIndex)->GetStaticField(0xA090);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(LinearQuestExcelTable_TypeDefinitionIndex)->GetStaticField(0xA091);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEARQUESTEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LinearQuestRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LinearQuestRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEARQUESTEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEARQUESTEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LinearQuestRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LinearQuestRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEARQUESTEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::LinearQuestRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::LinearQuestRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEARQUESTEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEARQUESTEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEARQUESTEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEARQUESTEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEARQUESTEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEARQUESTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEARQUESTEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::LinearQuestRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::LinearQuestRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEARQUESTEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
