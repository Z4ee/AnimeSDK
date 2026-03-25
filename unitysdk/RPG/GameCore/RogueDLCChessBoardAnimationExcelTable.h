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

#define RPG_GAMECORE_ROGUEDLCCHESSBOARDANIMATIONEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x175FB360)
#define RPG_GAMECORE_ROGUEDLCCHESSBOARDANIMATIONEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x175FB1B0)
#define RPG_GAMECORE_ROGUEDLCCHESSBOARDANIMATIONEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x175FAE80)
#define RPG_GAMECORE_ROGUEDLCCHESSBOARDANIMATIONEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x175FB150)
#define RPG_GAMECORE_ROGUEDLCCHESSBOARDANIMATIONEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x175FB570)
#define RPG_GAMECORE_ROGUEDLCCHESSBOARDANIMATIONEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x175FAF00)
#define RPG_GAMECORE_ROGUEDLCCHESSBOARDANIMATIONEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x175FB5B0)
#define RPG_GAMECORE_ROGUEDLCCHESSBOARDANIMATIONEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x175FB790)
#define RPG_GAMECORE_ROGUEDLCCHESSBOARDANIMATIONEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x175FB9D0)
#define RPG_GAMECORE_ROGUEDLCCHESSBOARDANIMATIONEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x175FBD80)
#define RPG_GAMECORE_ROGUEDLCCHESSBOARDANIMATIONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x175FB6F0)
#define RPG_GAMECORE_ROGUEDLCCHESSBOARDANIMATIONEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x175FB650)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCChessBoardAnimationExcelTable_TypeDefinitionIndex = 13504;

	class RogueDLCChessBoardAnimationExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCChessBoardAnimationExcelTable_TypeDefinitionIndex)->GetStaticField(0x34D50);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCChessBoardAnimationExcelTable_TypeDefinitionIndex)->GetStaticField(0x34D58);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCChessBoardAnimationRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCChessBoardAnimationRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCChessBoardAnimationExcelTable_TypeDefinitionIndex)->GetStaticField(0x34D60);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueDLCChessBoardAnimationExcelTable_TypeDefinitionIndex)->GetStaticField(0x10890);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueDLCChessBoardAnimationExcelTable_TypeDefinitionIndex)->GetStaticField(0x10891);
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

		static ::RPG::GameCore::RogueDLCChessBoardAnimationRow* GetData(::RPG::GameCore::ModifierEffectType ModifierType, ::RPG::GameCore::RogueSubMode RogueSubMode)
		{
			return ((::RPG::GameCore::RogueDLCChessBoardAnimationRow*(*)(::RPG::GameCore::ModifierEffectType, ::RPG::GameCore::RogueSubMode))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCCHESSBOARDANIMATIONEXCELTABLE_GETDATA_OFFSET))(ModifierType, RogueSubMode);
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

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCCHESSBOARDANIMATIONEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCCHESSBOARDANIMATIONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCCHESSBOARDANIMATIONEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueDLCChessBoardAnimationRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueDLCChessBoardAnimationRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCCHESSBOARDANIMATIONEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
