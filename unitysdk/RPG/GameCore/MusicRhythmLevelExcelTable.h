#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MusicRhythmLevelRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MUSICRHYTHMLEVELEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1CE83FA0)
#define RPG_GAMECORE_MUSICRHYTHMLEVELEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1CE83E70)
#define RPG_GAMECORE_MUSICRHYTHMLEVELEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1CE83B60)
#define RPG_GAMECORE_MUSICRHYTHMLEVELEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1CE83E10)
#define RPG_GAMECORE_MUSICRHYTHMLEVELEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1CE840F0)
#define RPG_GAMECORE_MUSICRHYTHMLEVELEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1CE83BE0)
#define RPG_GAMECORE_MUSICRHYTHMLEVELEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1CE84130)
#define RPG_GAMECORE_MUSICRHYTHMLEVELEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CE84300)
#define RPG_GAMECORE_MUSICRHYTHMLEVELEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1CE84690)
#define RPG_GAMECORE_MUSICRHYTHMLEVELEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE849B0)
#define RPG_GAMECORE_MUSICRHYTHMLEVELEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1CE84260)
#define RPG_GAMECORE_MUSICRHYTHMLEVELEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1CE841C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MusicRhythmLevelExcelTable_TypeDefinitionIndex = 14155;

	class MusicRhythmLevelExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MusicRhythmLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0x40750);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MusicRhythmLevelRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MusicRhythmLevelRow*>**)Il2CppClass::FromTypeDefinitionIndex(MusicRhythmLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0x40758);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MusicRhythmLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0x40760);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MusicRhythmLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0xFDF0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MusicRhythmLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0xFDF1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMLEVELEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MusicRhythmLevelRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MusicRhythmLevelRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMLEVELEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMLEVELEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MusicRhythmLevelRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MusicRhythmLevelRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMLEVELEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MusicRhythmLevelRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MusicRhythmLevelRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMLEVELEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMLEVELEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMLEVELEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMLEVELEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMLEVELEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMLEVELEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMLEVELEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MusicRhythmLevelRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MusicRhythmLevelRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMLEVELEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
