#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueDLCAeonDiceRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEDLCAEONDICEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1C4B14C0)
#define RPG_GAMECORE_ROGUEDLCAEONDICEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C4B1390)
#define RPG_GAMECORE_ROGUEDLCAEONDICEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1C4B1080)
#define RPG_GAMECORE_ROGUEDLCAEONDICEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1C4B1330)
#define RPG_GAMECORE_ROGUEDLCAEONDICEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1C4B1650)
#define RPG_GAMECORE_ROGUEDLCAEONDICEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1C4B1100)
#define RPG_GAMECORE_ROGUEDLCAEONDICEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1C4B1690)
#define RPG_GAMECORE_ROGUEDLCAEONDICEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C4B1860)
#define RPG_GAMECORE_ROGUEDLCAEONDICEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1C4B1DD0)
#define RPG_GAMECORE_ROGUEDLCAEONDICEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C4B20F0)
#define RPG_GAMECORE_ROGUEDLCAEONDICEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1C4B17C0)
#define RPG_GAMECORE_ROGUEDLCAEONDICEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1C4B1720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCAeonDiceExcelTable_TypeDefinitionIndex = 14157;

	class RogueDLCAeonDiceExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCAeonDiceExcelTable_TypeDefinitionIndex)->GetStaticField(0x4D3E0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAeonDiceRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAeonDiceRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCAeonDiceExcelTable_TypeDefinitionIndex)->GetStaticField(0x4D3E8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCAeonDiceExcelTable_TypeDefinitionIndex)->GetStaticField(0x4D3F0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueDLCAeonDiceExcelTable_TypeDefinitionIndex)->GetStaticField(0xDAD0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueDLCAeonDiceExcelTable_TypeDefinitionIndex)->GetStaticField(0xDAD1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONDICEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAeonDiceRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAeonDiceRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONDICEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONDICEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAeonDiceRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAeonDiceRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONDICEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueDLCAeonDiceRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueDLCAeonDiceRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONDICEEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONDICEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONDICEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONDICEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONDICEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONDICEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONDICEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueDLCAeonDiceRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueDLCAeonDiceRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONDICEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
