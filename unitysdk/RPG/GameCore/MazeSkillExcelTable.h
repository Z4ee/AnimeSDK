#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MazeSkillRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MAZESKILLEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1AF549F0)
#define RPG_GAMECORE_MAZESKILLEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1AF54880)
#define RPG_GAMECORE_MAZESKILLEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1AF54570)
#define RPG_GAMECORE_MAZESKILLEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1AF54820)
#define RPG_GAMECORE_MAZESKILLEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1AF54B40)
#define RPG_GAMECORE_MAZESKILLEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1AF545F0)
#define RPG_GAMECORE_MAZESKILLEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1AF54B80)
#define RPG_GAMECORE_MAZESKILLEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1AF54D50)
#define RPG_GAMECORE_MAZESKILLEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1AF550D0)
#define RPG_GAMECORE_MAZESKILLEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF553F0)
#define RPG_GAMECORE_MAZESKILLEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1AF54CB0)
#define RPG_GAMECORE_MAZESKILLEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1AF54C10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazeSkillExcelTable_TypeDefinitionIndex = 12111;

	class MazeSkillExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazeSkillRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazeSkillRow*>**)Il2CppClass::FromTypeDefinitionIndex(MazeSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x40920);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MazeSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x40928);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MazeSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x40930);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MazeSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0xAD10);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MazeSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0xAD11);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZESKILLEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazeSkillRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazeSkillRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZESKILLEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZESKILLEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazeSkillRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazeSkillRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZESKILLEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MazeSkillRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MazeSkillRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZESKILLEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZESKILLEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZESKILLEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZESKILLEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZESKILLEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZESKILLEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZESKILLEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MazeSkillRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MazeSkillRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZESKILLEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
