#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SpaceZooQuestRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SPACEZOOQUESTEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x19C95FC0)
#define RPG_GAMECORE_SPACEZOOQUESTEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19C95E90)
#define RPG_GAMECORE_SPACEZOOQUESTEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x19C95B80)
#define RPG_GAMECORE_SPACEZOOQUESTEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x19C95E30)
#define RPG_GAMECORE_SPACEZOOQUESTEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x19C96150)
#define RPG_GAMECORE_SPACEZOOQUESTEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x19C95C00)
#define RPG_GAMECORE_SPACEZOOQUESTEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x19C96190)
#define RPG_GAMECORE_SPACEZOOQUESTEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19C96360)
#define RPG_GAMECORE_SPACEZOOQUESTEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x19C965B0)
#define RPG_GAMECORE_SPACEZOOQUESTEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19C968D0)
#define RPG_GAMECORE_SPACEZOOQUESTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x19C962C0)
#define RPG_GAMECORE_SPACEZOOQUESTEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x19C96220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpaceZooQuestExcelTable_TypeDefinitionIndex = 11807;

	class SpaceZooQuestExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooQuestRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooQuestRow*>**)Il2CppClass::FromTypeDefinitionIndex(SpaceZooQuestExcelTable_TypeDefinitionIndex)->GetStaticField(0x4E020);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SpaceZooQuestExcelTable_TypeDefinitionIndex)->GetStaticField(0x4E028);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(SpaceZooQuestExcelTable_TypeDefinitionIndex)->GetStaticField(0x4E030);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SpaceZooQuestExcelTable_TypeDefinitionIndex)->GetStaticField(0xF030);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(SpaceZooQuestExcelTable_TypeDefinitionIndex)->GetStaticField(0xF031);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOQUESTEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooQuestRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooQuestRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOQUESTEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOQUESTEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooQuestRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooQuestRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOQUESTEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::SpaceZooQuestRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::SpaceZooQuestRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOQUESTEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOQUESTEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOQUESTEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOQUESTEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOQUESTEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOQUESTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOQUESTEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::SpaceZooQuestRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::SpaceZooQuestRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOQUESTEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
