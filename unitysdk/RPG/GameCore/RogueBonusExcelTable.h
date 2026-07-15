#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueBonusRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEBONUSEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1C4A8390)
#define RPG_GAMECORE_ROGUEBONUSEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C4A8220)
#define RPG_GAMECORE_ROGUEBONUSEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1C4A7F10)
#define RPG_GAMECORE_ROGUEBONUSEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1C4A81C0)
#define RPG_GAMECORE_ROGUEBONUSEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1C4A8520)
#define RPG_GAMECORE_ROGUEBONUSEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1C4A7F90)
#define RPG_GAMECORE_ROGUEBONUSEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1C4A8560)
#define RPG_GAMECORE_ROGUEBONUSEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C4A8730)
#define RPG_GAMECORE_ROGUEBONUSEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1C4A8AB0)
#define RPG_GAMECORE_ROGUEBONUSEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C4A8E20)
#define RPG_GAMECORE_ROGUEBONUSEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1C4A8690)
#define RPG_GAMECORE_ROGUEBONUSEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1C4A85F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueBonusExcelTable_TypeDefinitionIndex = 14103;

	class RogueBonusExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueBonusRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueBonusRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueBonusExcelTable_TypeDefinitionIndex)->GetStaticField(0x4D1B0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueBonusExcelTable_TypeDefinitionIndex)->GetStaticField(0x4D1B8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueBonusExcelTable_TypeDefinitionIndex)->GetStaticField(0x4D1C0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueBonusExcelTable_TypeDefinitionIndex)->GetStaticField(0xDA50);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueBonusExcelTable_TypeDefinitionIndex)->GetStaticField(0xDA51);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBONUSEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueBonusRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueBonusRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBONUSEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBONUSEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueBonusRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueBonusRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBONUSEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueBonusRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueBonusRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBONUSEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBONUSEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBONUSEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBONUSEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBONUSEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBONUSEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBONUSEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueBonusRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueBonusRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBONUSEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
