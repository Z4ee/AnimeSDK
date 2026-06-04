#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MazePuzzleSpecialUIInfoRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MAZEPUZZLESPECIALUIINFOEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x19907B00)
#define RPG_GAMECORE_MAZEPUZZLESPECIALUIINFOEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19907990)
#define RPG_GAMECORE_MAZEPUZZLESPECIALUIINFOEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x19907730)
#define RPG_GAMECORE_MAZEPUZZLESPECIALUIINFOEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x19907930)
#define RPG_GAMECORE_MAZEPUZZLESPECIALUIINFOEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x19907C90)
#define RPG_GAMECORE_MAZEPUZZLESPECIALUIINFOEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x199077B0)
#define RPG_GAMECORE_MAZEPUZZLESPECIALUIINFOEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x19907CD0)
#define RPG_GAMECORE_MAZEPUZZLESPECIALUIINFOEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19907EA0)
#define RPG_GAMECORE_MAZEPUZZLESPECIALUIINFOEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x19908190)
#define RPG_GAMECORE_MAZEPUZZLESPECIALUIINFOEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19908500)
#define RPG_GAMECORE_MAZEPUZZLESPECIALUIINFOEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x19907E00)
#define RPG_GAMECORE_MAZEPUZZLESPECIALUIINFOEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x19907D60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazePuzzleSpecialUIInfoExcelTable_TypeDefinitionIndex = 13366;

	class MazePuzzleSpecialUIInfoExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MazePuzzleSpecialUIInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x64F0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleSpecialUIInfoRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleSpecialUIInfoRow*>**)Il2CppClass::FromTypeDefinitionIndex(MazePuzzleSpecialUIInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x64F8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MazePuzzleSpecialUIInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x6500);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MazePuzzleSpecialUIInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x31C0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MazePuzzleSpecialUIInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x31C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLESPECIALUIINFOEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleSpecialUIInfoRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleSpecialUIInfoRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLESPECIALUIINFOEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLESPECIALUIINFOEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleSpecialUIInfoRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleSpecialUIInfoRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLESPECIALUIINFOEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MazePuzzleSpecialUIInfoRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MazePuzzleSpecialUIInfoRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLESPECIALUIINFOEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLESPECIALUIINFOEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLESPECIALUIINFOEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLESPECIALUIINFOEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLESPECIALUIINFOEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLESPECIALUIINFOEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLESPECIALUIINFOEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MazePuzzleSpecialUIInfoRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MazePuzzleSpecialUIInfoRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLESPECIALUIINFOEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
