#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MazeFloorRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MAZEFLOOREXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x19900550)
#define RPG_GAMECORE_MAZEFLOOREXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x199003E0)
#define RPG_GAMECORE_MAZEFLOOREXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x199000D0)
#define RPG_GAMECORE_MAZEFLOOREXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x19900380)
#define RPG_GAMECORE_MAZEFLOOREXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x199006A0)
#define RPG_GAMECORE_MAZEFLOOREXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x19900150)
#define RPG_GAMECORE_MAZEFLOOREXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x199006E0)
#define RPG_GAMECORE_MAZEFLOOREXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x199008B0)
#define RPG_GAMECORE_MAZEFLOOREXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x19900EC0)
#define RPG_GAMECORE_MAZEFLOOREXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x199011F0)
#define RPG_GAMECORE_MAZEFLOOREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x19900810)
#define RPG_GAMECORE_MAZEFLOOREXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x19900770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazeFloorExcelTable_TypeDefinitionIndex = 13377;

	class MazeFloorExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MazeFloorExcelTable_TypeDefinitionIndex)->GetStaticField(0x2C0C0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MazeFloorExcelTable_TypeDefinitionIndex)->GetStaticField(0x2C0C8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazeFloorRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazeFloorRow*>**)Il2CppClass::FromTypeDefinitionIndex(MazeFloorExcelTable_TypeDefinitionIndex)->GetStaticField(0x2C0D0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MazeFloorExcelTable_TypeDefinitionIndex)->GetStaticField(0x9B40);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MazeFloorExcelTable_TypeDefinitionIndex)->GetStaticField(0x9B41);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEFLOOREXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazeFloorRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazeFloorRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEFLOOREXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEFLOOREXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazeFloorRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazeFloorRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEFLOOREXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MazeFloorRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MazeFloorRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEFLOOREXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEFLOOREXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEFLOOREXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEFLOOREXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEFLOOREXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEFLOOREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEFLOOREXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MazeFloorRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MazeFloorRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEFLOOREXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
