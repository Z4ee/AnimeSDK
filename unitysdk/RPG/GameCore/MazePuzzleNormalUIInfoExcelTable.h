#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MazePuzzleNormalUIInfoRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MAZEPUZZLENORMALUIINFOEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D27F690)
#define RPG_GAMECORE_MAZEPUZZLENORMALUIINFOEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D27F520)
#define RPG_GAMECORE_MAZEPUZZLENORMALUIINFOEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D27F210)
#define RPG_GAMECORE_MAZEPUZZLENORMALUIINFOEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D27F4C0)
#define RPG_GAMECORE_MAZEPUZZLENORMALUIINFOEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D27F820)
#define RPG_GAMECORE_MAZEPUZZLENORMALUIINFOEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D27F290)
#define RPG_GAMECORE_MAZEPUZZLENORMALUIINFOEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D27F860)
#define RPG_GAMECORE_MAZEPUZZLENORMALUIINFOEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D27FA30)
#define RPG_GAMECORE_MAZEPUZZLENORMALUIINFOEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D27FC80)
#define RPG_GAMECORE_MAZEPUZZLENORMALUIINFOEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D27FFF0)
#define RPG_GAMECORE_MAZEPUZZLENORMALUIINFOEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D27F990)
#define RPG_GAMECORE_MAZEPUZZLENORMALUIINFOEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D27F8F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazePuzzleNormalUIInfoExcelTable_TypeDefinitionIndex = 13929;

	class MazePuzzleNormalUIInfoExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleNormalUIInfoRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleNormalUIInfoRow*>**)Il2CppClass::FromTypeDefinitionIndex(MazePuzzleNormalUIInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x38480);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MazePuzzleNormalUIInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x38488);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MazePuzzleNormalUIInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x38490);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MazePuzzleNormalUIInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0xEAE0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MazePuzzleNormalUIInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0xEAE1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLENORMALUIINFOEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleNormalUIInfoRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleNormalUIInfoRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLENORMALUIINFOEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLENORMALUIINFOEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleNormalUIInfoRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleNormalUIInfoRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLENORMALUIINFOEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MazePuzzleNormalUIInfoRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MazePuzzleNormalUIInfoRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLENORMALUIINFOEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLENORMALUIINFOEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLENORMALUIINFOEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLENORMALUIINFOEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLENORMALUIINFOEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLENORMALUIINFOEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLENORMALUIINFOEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MazePuzzleNormalUIInfoRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MazePuzzleNormalUIInfoRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLENORMALUIINFOEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
