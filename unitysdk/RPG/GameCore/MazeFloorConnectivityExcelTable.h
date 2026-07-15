#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MazeFloorConnectivityRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MAZEFLOORCONNECTIVITYEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1AF496A0)
#define RPG_GAMECORE_MAZEFLOORCONNECTIVITYEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1AF49570)
#define RPG_GAMECORE_MAZEFLOORCONNECTIVITYEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1AF49260)
#define RPG_GAMECORE_MAZEFLOORCONNECTIVITYEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1AF49510)
#define RPG_GAMECORE_MAZEFLOORCONNECTIVITYEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1AF49870)
#define RPG_GAMECORE_MAZEFLOORCONNECTIVITYEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1AF492E0)
#define RPG_GAMECORE_MAZEFLOORCONNECTIVITYEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1AF498B0)
#define RPG_GAMECORE_MAZEFLOORCONNECTIVITYEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1AF49A80)
#define RPG_GAMECORE_MAZEFLOORCONNECTIVITYEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1AF49C90)
#define RPG_GAMECORE_MAZEFLOORCONNECTIVITYEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF49FF0)
#define RPG_GAMECORE_MAZEFLOORCONNECTIVITYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1AF499E0)
#define RPG_GAMECORE_MAZEFLOORCONNECTIVITYEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1AF49940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazeFloorConnectivityExcelTable_TypeDefinitionIndex = 13531;

	class MazeFloorConnectivityExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazeFloorConnectivityRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazeFloorConnectivityRow*>**)Il2CppClass::FromTypeDefinitionIndex(MazeFloorConnectivityExcelTable_TypeDefinitionIndex)->GetStaticField(0x40600);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MazeFloorConnectivityExcelTable_TypeDefinitionIndex)->GetStaticField(0x40608);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MazeFloorConnectivityExcelTable_TypeDefinitionIndex)->GetStaticField(0x40610);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MazeFloorConnectivityExcelTable_TypeDefinitionIndex)->GetStaticField(0xACB0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MazeFloorConnectivityExcelTable_TypeDefinitionIndex)->GetStaticField(0xACB1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEFLOORCONNECTIVITYEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazeFloorConnectivityRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazeFloorConnectivityRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEFLOORCONNECTIVITYEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEFLOORCONNECTIVITYEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazeFloorConnectivityRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazeFloorConnectivityRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEFLOORCONNECTIVITYEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MazeFloorConnectivityRow* GetData(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::MazeFloorConnectivityRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEFLOORCONNECTIVITYEXCELTABLE_GETDATA_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEFLOORCONNECTIVITYEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEFLOORCONNECTIVITYEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEFLOORCONNECTIVITYEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEFLOORCONNECTIVITYEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEFLOORCONNECTIVITYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEFLOORCONNECTIVITYEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MazeFloorConnectivityRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MazeFloorConnectivityRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEFLOORCONNECTIVITYEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
