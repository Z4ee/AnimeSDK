#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueTournLayerRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUETOURNLAYEREXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D48AFB0)
#define RPG_GAMECORE_ROGUETOURNLAYEREXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D48AE40)
#define RPG_GAMECORE_ROGUETOURNLAYEREXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D48AB30)
#define RPG_GAMECORE_ROGUETOURNLAYEREXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D48ADE0)
#define RPG_GAMECORE_ROGUETOURNLAYEREXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D48B100)
#define RPG_GAMECORE_ROGUETOURNLAYEREXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D48ABB0)
#define RPG_GAMECORE_ROGUETOURNLAYEREXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D48B140)
#define RPG_GAMECORE_ROGUETOURNLAYEREXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D48B310)
#define RPG_GAMECORE_ROGUETOURNLAYEREXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D48B450)
#define RPG_GAMECORE_ROGUETOURNLAYEREXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D48B770)
#define RPG_GAMECORE_ROGUETOURNLAYEREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D48B270)
#define RPG_GAMECORE_ROGUETOURNLAYEREXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D48B1D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournLayerExcelTable_TypeDefinitionIndex = 14792;

	class RogueTournLayerExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournLayerRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournLayerRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournLayerExcelTable_TypeDefinitionIndex)->GetStaticField(0xBEC0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournLayerExcelTable_TypeDefinitionIndex)->GetStaticField(0xBEC8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournLayerExcelTable_TypeDefinitionIndex)->GetStaticField(0xBED0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueTournLayerExcelTable_TypeDefinitionIndex)->GetStaticField(0x2880);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueTournLayerExcelTable_TypeDefinitionIndex)->GetStaticField(0x2881);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNLAYEREXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournLayerRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournLayerRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNLAYEREXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNLAYEREXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournLayerRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournLayerRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNLAYEREXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueTournLayerRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueTournLayerRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNLAYEREXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNLAYEREXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNLAYEREXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNLAYEREXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNLAYEREXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNLAYEREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNLAYEREXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueTournLayerRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueTournLayerRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNLAYEREXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
