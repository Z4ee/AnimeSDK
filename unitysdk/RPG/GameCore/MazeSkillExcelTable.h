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

#define RPG_GAMECORE_MAZESKILLEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1990A990)
#define RPG_GAMECORE_MAZESKILLEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1990A820)
#define RPG_GAMECORE_MAZESKILLEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1990A510)
#define RPG_GAMECORE_MAZESKILLEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1990A7C0)
#define RPG_GAMECORE_MAZESKILLEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1990AAE0)
#define RPG_GAMECORE_MAZESKILLEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1990A590)
#define RPG_GAMECORE_MAZESKILLEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1990AB20)
#define RPG_GAMECORE_MAZESKILLEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1990ACF0)
#define RPG_GAMECORE_MAZESKILLEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1990B070)
#define RPG_GAMECORE_MAZESKILLEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1990B390)
#define RPG_GAMECORE_MAZESKILLEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1990AC50)
#define RPG_GAMECORE_MAZESKILLEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1990ABB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazeSkillExcelTable_TypeDefinitionIndex = 11979;

	class MazeSkillExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MazeSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x18C40);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MazeSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x18C48);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazeSkillRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazeSkillRow*>**)Il2CppClass::FromTypeDefinitionIndex(MazeSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x18C50);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MazeSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x8480);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MazeSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x8481);
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
