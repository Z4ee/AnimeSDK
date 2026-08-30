#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueDLCEntranceRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEDLCENTRANCEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D9276A0)
#define RPG_GAMECORE_ROGUEDLCENTRANCEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D927530)
#define RPG_GAMECORE_ROGUEDLCENTRANCEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D927220)
#define RPG_GAMECORE_ROGUEDLCENTRANCEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D9274D0)
#define RPG_GAMECORE_ROGUEDLCENTRANCEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D927830)
#define RPG_GAMECORE_ROGUEDLCENTRANCEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D9272A0)
#define RPG_GAMECORE_ROGUEDLCENTRANCEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D927870)
#define RPG_GAMECORE_ROGUEDLCENTRANCEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D927A40)
#define RPG_GAMECORE_ROGUEDLCENTRANCEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D927D80)
#define RPG_GAMECORE_ROGUEDLCENTRANCEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D9280F0)
#define RPG_GAMECORE_ROGUEDLCENTRANCEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D9279A0)
#define RPG_GAMECORE_ROGUEDLCENTRANCEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D927900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCEntranceExcelTable_TypeDefinitionIndex = 14639;

	class RogueDLCEntranceExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCEntranceExcelTable_TypeDefinitionIndex)->GetStaticField(0xD990);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCEntranceExcelTable_TypeDefinitionIndex)->GetStaticField(0xD998);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCEntranceRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCEntranceRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCEntranceExcelTable_TypeDefinitionIndex)->GetStaticField(0xD9A0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueDLCEntranceExcelTable_TypeDefinitionIndex)->GetStaticField(0x41D0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueDLCEntranceExcelTable_TypeDefinitionIndex)->GetStaticField(0x41D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCENTRANCEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCEntranceRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCEntranceRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCENTRANCEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCENTRANCEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCEntranceRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCEntranceRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCENTRANCEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueDLCEntranceRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueDLCEntranceRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCENTRANCEEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCENTRANCEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCENTRANCEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCENTRANCEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCENTRANCEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCENTRANCEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCENTRANCEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueDLCEntranceRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueDLCEntranceRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCENTRANCEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
