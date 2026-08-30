#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/ModifierEffectType.h"
#include "unitysdk/RPG/GameCore/RogueSubMode.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueDLCChessBoardAnimationRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEDLCCHESSBOARDANIMATIONEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D3D7540)
#define RPG_GAMECORE_ROGUEDLCCHESSBOARDANIMATIONEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D3D73D0)
#define RPG_GAMECORE_ROGUEDLCCHESSBOARDANIMATIONEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D3D70C0)
#define RPG_GAMECORE_ROGUEDLCCHESSBOARDANIMATIONEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D3D7370)
#define RPG_GAMECORE_ROGUEDLCCHESSBOARDANIMATIONEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D3D7720)
#define RPG_GAMECORE_ROGUEDLCCHESSBOARDANIMATIONEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D3D7140)
#define RPG_GAMECORE_ROGUEDLCCHESSBOARDANIMATIONEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D3D7760)
#define RPG_GAMECORE_ROGUEDLCCHESSBOARDANIMATIONEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3D7930)
#define RPG_GAMECORE_ROGUEDLCCHESSBOARDANIMATIONEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D3D7B70)
#define RPG_GAMECORE_ROGUEDLCCHESSBOARDANIMATIONEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D3D7F10)
#define RPG_GAMECORE_ROGUEDLCCHESSBOARDANIMATIONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D3D7890)
#define RPG_GAMECORE_ROGUEDLCCHESSBOARDANIMATIONEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D3D77F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCChessBoardAnimationExcelTable_TypeDefinitionIndex = 14610;

	class RogueDLCChessBoardAnimationExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCChessBoardAnimationRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCChessBoardAnimationRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCChessBoardAnimationExcelTable_TypeDefinitionIndex)->GetStaticField(0xD460);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCChessBoardAnimationExcelTable_TypeDefinitionIndex)->GetStaticField(0xD468);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCChessBoardAnimationExcelTable_TypeDefinitionIndex)->GetStaticField(0xD470);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueDLCChessBoardAnimationExcelTable_TypeDefinitionIndex)->GetStaticField(0x40F0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueDLCChessBoardAnimationExcelTable_TypeDefinitionIndex)->GetStaticField(0x40F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCCHESSBOARDANIMATIONEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCChessBoardAnimationRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCChessBoardAnimationRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCCHESSBOARDANIMATIONEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCCHESSBOARDANIMATIONEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCChessBoardAnimationRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCChessBoardAnimationRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCCHESSBOARDANIMATIONEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueDLCChessBoardAnimationRow* GetData(::RPG::GameCore::ModifierEffectType a1, ::RPG::GameCore::RogueSubMode a2)
		{
			return ((::RPG::GameCore::RogueDLCChessBoardAnimationRow*(*)(::RPG::GameCore::ModifierEffectType, ::RPG::GameCore::RogueSubMode))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCCHESSBOARDANIMATIONEXCELTABLE_GETDATA_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCCHESSBOARDANIMATIONEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCCHESSBOARDANIMATIONEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCCHESSBOARDANIMATIONEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCCHESSBOARDANIMATIONEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCCHESSBOARDANIMATIONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCCHESSBOARDANIMATIONEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueDLCChessBoardAnimationRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueDLCChessBoardAnimationRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCCHESSBOARDANIMATIONEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
