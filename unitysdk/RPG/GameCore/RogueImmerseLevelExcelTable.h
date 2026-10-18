#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueImmerseLevelRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEIMMERSELEVELEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D9A3B20)
#define RPG_GAMECORE_ROGUEIMMERSELEVELEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D9A39B0)
#define RPG_GAMECORE_ROGUEIMMERSELEVELEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D9A36A0)
#define RPG_GAMECORE_ROGUEIMMERSELEVELEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D9A3950)
#define RPG_GAMECORE_ROGUEIMMERSELEVELEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D9A3CB0)
#define RPG_GAMECORE_ROGUEIMMERSELEVELEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D9A3720)
#define RPG_GAMECORE_ROGUEIMMERSELEVELEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D9A3CF0)
#define RPG_GAMECORE_ROGUEIMMERSELEVELEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9A3EC0)
#define RPG_GAMECORE_ROGUEIMMERSELEVELEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D9A4430)
#define RPG_GAMECORE_ROGUEIMMERSELEVELEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D9A47A0)
#define RPG_GAMECORE_ROGUEIMMERSELEVELEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D9A3E20)
#define RPG_GAMECORE_ROGUEIMMERSELEVELEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D9A3D80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueImmerseLevelExcelTable_TypeDefinitionIndex = 14844;

	class RogueImmerseLevelExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueImmerseLevelRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueImmerseLevelRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueImmerseLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0xB520);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueImmerseLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0xB528);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueImmerseLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0xB530);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueImmerseLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0x2710);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueImmerseLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0x2711);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEIMMERSELEVELEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueImmerseLevelRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueImmerseLevelRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEIMMERSELEVELEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEIMMERSELEVELEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueImmerseLevelRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueImmerseLevelRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEIMMERSELEVELEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueImmerseLevelRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueImmerseLevelRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEIMMERSELEVELEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEIMMERSELEVELEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEIMMERSELEVELEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEIMMERSELEVELEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEIMMERSELEVELEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEIMMERSELEVELEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEIMMERSELEVELEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueImmerseLevelRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueImmerseLevelRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEIMMERSELEVELEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
