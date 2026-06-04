#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/RogueMagicStyleType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueMagicStyleTypeSelectRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEMAGICSTYLETYPESELECTEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x19B474F0)
#define RPG_GAMECORE_ROGUEMAGICSTYLETYPESELECTEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19B47380)
#define RPG_GAMECORE_ROGUEMAGICSTYLETYPESELECTEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x19B47070)
#define RPG_GAMECORE_ROGUEMAGICSTYLETYPESELECTEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x19B47320)
#define RPG_GAMECORE_ROGUEMAGICSTYLETYPESELECTEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x19B47680)
#define RPG_GAMECORE_ROGUEMAGICSTYLETYPESELECTEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x19B470F0)
#define RPG_GAMECORE_ROGUEMAGICSTYLETYPESELECTEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x19B476C0)
#define RPG_GAMECORE_ROGUEMAGICSTYLETYPESELECTEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19B47890)
#define RPG_GAMECORE_ROGUEMAGICSTYLETYPESELECTEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x19B47B30)
#define RPG_GAMECORE_ROGUEMAGICSTYLETYPESELECTEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19B47EA0)
#define RPG_GAMECORE_ROGUEMAGICSTYLETYPESELECTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x19B477F0)
#define RPG_GAMECORE_ROGUEMAGICSTYLETYPESELECTEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x19B47750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicStyleTypeSelectExcelTable_TypeDefinitionIndex = 14164;

	class RogueMagicStyleTypeSelectExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueMagicStyleTypeSelectExcelTable_TypeDefinitionIndex)->GetStaticField(0x45A60);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueMagicStyleTypeSelectExcelTable_TypeDefinitionIndex)->GetStaticField(0x45A68);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicStyleTypeSelectRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicStyleTypeSelectRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueMagicStyleTypeSelectExcelTable_TypeDefinitionIndex)->GetStaticField(0x45A70);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueMagicStyleTypeSelectExcelTable_TypeDefinitionIndex)->GetStaticField(0xC900);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueMagicStyleTypeSelectExcelTable_TypeDefinitionIndex)->GetStaticField(0xC901);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICSTYLETYPESELECTEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicStyleTypeSelectRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicStyleTypeSelectRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICSTYLETYPESELECTEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICSTYLETYPESELECTEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicStyleTypeSelectRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicStyleTypeSelectRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICSTYLETYPESELECTEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueMagicStyleTypeSelectRow* GetData(::RPG::GameCore::RogueMagicStyleType a1)
		{
			return ((::RPG::GameCore::RogueMagicStyleTypeSelectRow*(*)(::RPG::GameCore::RogueMagicStyleType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICSTYLETYPESELECTEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICSTYLETYPESELECTEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICSTYLETYPESELECTEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICSTYLETYPESELECTEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICSTYLETYPESELECTEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICSTYLETYPESELECTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICSTYLETYPESELECTEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueMagicStyleTypeSelectRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueMagicStyleTypeSelectRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICSTYLETYPESELECTEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
