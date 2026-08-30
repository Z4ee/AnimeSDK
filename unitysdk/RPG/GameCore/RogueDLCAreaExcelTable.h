#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueDLCAreaRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEDLCAREAEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D91FD70)
#define RPG_GAMECORE_ROGUEDLCAREAEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D91FC40)
#define RPG_GAMECORE_ROGUEDLCAREAEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D91F930)
#define RPG_GAMECORE_ROGUEDLCAREAEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D91FBE0)
#define RPG_GAMECORE_ROGUEDLCAREAEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D91FF00)
#define RPG_GAMECORE_ROGUEDLCAREAEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D91F9B0)
#define RPG_GAMECORE_ROGUEDLCAREAEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D91FF40)
#define RPG_GAMECORE_ROGUEDLCAREAEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D920110)
#define RPG_GAMECORE_ROGUEDLCAREAEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D920750)
#define RPG_GAMECORE_ROGUEDLCAREAEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D920A70)
#define RPG_GAMECORE_ROGUEDLCAREAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D920070)
#define RPG_GAMECORE_ROGUEDLCAREAEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D91FFD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCAreaExcelTable_TypeDefinitionIndex = 14599;

	class RogueDLCAreaExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCAreaExcelTable_TypeDefinitionIndex)->GetStaticField(0xD4F0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCAreaExcelTable_TypeDefinitionIndex)->GetStaticField(0xD4F8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAreaRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAreaRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCAreaExcelTable_TypeDefinitionIndex)->GetStaticField(0xD500);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueDLCAreaExcelTable_TypeDefinitionIndex)->GetStaticField(0x4090);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueDLCAreaExcelTable_TypeDefinitionIndex)->GetStaticField(0x4091);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAREAEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAreaRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAreaRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAREAEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAREAEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAreaRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAreaRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAREAEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueDLCAreaRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueDLCAreaRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAREAEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAREAEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAREAEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAREAEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAREAEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAREAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAREAEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueDLCAreaRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueDLCAreaRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAREAEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
