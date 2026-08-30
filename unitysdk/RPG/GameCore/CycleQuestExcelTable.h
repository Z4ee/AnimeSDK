#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CycleQuestRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CYCLEQUESTEXCELTABLE_GETCYCLEIDBYQUESTID_OFFSET UNITYSDK_OFFSET(0x1D00FF70)
#define RPG_GAMECORE_CYCLEQUESTEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D00F540)
#define RPG_GAMECORE_CYCLEQUESTEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D00F3D0)
#define RPG_GAMECORE_CYCLEQUESTEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D00F0C0)
#define RPG_GAMECORE_CYCLEQUESTEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D00F370)
#define RPG_GAMECORE_CYCLEQUESTEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D00F690)
#define RPG_GAMECORE_CYCLEQUESTEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D00F140)
#define RPG_GAMECORE_CYCLEQUESTEXCELTABLE_UNLOADALL_OFFSET UNITYSDK_OFFSET(0x1D010470)
#define RPG_GAMECORE_CYCLEQUESTEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D00F6D0)
#define RPG_GAMECORE_CYCLEQUESTEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D00F8A0)
#define RPG_GAMECORE_CYCLEQUESTEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D00FC50)
#define RPG_GAMECORE_CYCLEQUESTEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D010500)
#define RPG_GAMECORE_CYCLEQUESTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D00F800)
#define RPG_GAMECORE_CYCLEQUESTEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D00F760)
#define RPG_GAMECORE_CYCLEQUESTEXCELTABLE__SAFEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1D00FFF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CycleQuestExcelTable_TypeDefinitionIndex = 14410;

	class CycleQuestExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CycleQuestRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CycleQuestRow*>**)Il2CppClass::FromTypeDefinitionIndex(CycleQuestExcelTable_TypeDefinitionIndex)->GetStaticField(0x1F810);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CycleQuestExcelTable_TypeDefinitionIndex)->GetStaticField(0x1F818);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>** StaticGet__QuestToCycle()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(CycleQuestExcelTable_TypeDefinitionIndex)->GetStaticField(0x1F820);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(CycleQuestExcelTable_TypeDefinitionIndex)->GetStaticField(0x1F828);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CycleQuestExcelTable_TypeDefinitionIndex)->GetStaticField(0xA650);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(CycleQuestExcelTable_TypeDefinitionIndex)->GetStaticField(0xA651);
		}
		static ::System::Boolean* StaticGet__IsInitialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CycleQuestExcelTable_TypeDefinitionIndex)->GetStaticField(0xA652);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CYCLEQUESTEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CycleQuestRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CycleQuestRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CYCLEQUESTEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CYCLEQUESTEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CycleQuestRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CycleQuestRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CYCLEQUESTEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::CycleQuestRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::CycleQuestRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CYCLEQUESTEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CYCLEQUESTEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CYCLEQUESTEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CYCLEQUESTEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CYCLEQUESTEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CYCLEQUESTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CYCLEQUESTEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::CycleQuestRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::CycleQuestRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CYCLEQUESTEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::System::UInt32 GetCycleIDByQuestID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CYCLEQUESTEXCELTABLE_GETCYCLEIDBYQUESTID_OFFSET))(a1);
		}

		static ::System::Void _SafeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CYCLEQUESTEXCELTABLE__SAFEINITIALIZE_OFFSET))();
		}

		static ::System::Void UnloadAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CYCLEQUESTEXCELTABLE_UNLOADALL_OFFSET))();
		}
	};
}
