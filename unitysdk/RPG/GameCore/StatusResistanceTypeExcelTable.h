#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class StatusResistanceTypeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_STATUSRESISTANCETYPEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18EA14F0)
#define RPG_GAMECORE_STATUSRESISTANCETYPEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18EA1340)
#define RPG_GAMECORE_STATUSRESISTANCETYPEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18EA1010)
#define RPG_GAMECORE_STATUSRESISTANCETYPEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18EA12E0)
#define RPG_GAMECORE_STATUSRESISTANCETYPEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18EA1680)
#define RPG_GAMECORE_STATUSRESISTANCETYPEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18EA1090)
#define RPG_GAMECORE_STATUSRESISTANCETYPEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18EA16C0)
#define RPG_GAMECORE_STATUSRESISTANCETYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18EA18A0)
#define RPG_GAMECORE_STATUSRESISTANCETYPEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18EA1A00)
#define RPG_GAMECORE_STATUSRESISTANCETYPEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18EA1D10)
#define RPG_GAMECORE_STATUSRESISTANCETYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18EA1800)
#define RPG_GAMECORE_STATUSRESISTANCETYPEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18EA1760)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StatusResistanceTypeExcelTable_TypeDefinitionIndex = 13449;

	class StatusResistanceTypeExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StatusResistanceTypeRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StatusResistanceTypeRow*>**)Il2CppClass::FromTypeDefinitionIndex(StatusResistanceTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x547A0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(StatusResistanceTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x547A8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(StatusResistanceTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x547B0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(StatusResistanceTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0xFFE0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(StatusResistanceTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0xFFE1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSRESISTANCETYPEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StatusResistanceTypeRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StatusResistanceTypeRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSRESISTANCETYPEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSRESISTANCETYPEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StatusResistanceTypeRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StatusResistanceTypeRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSRESISTANCETYPEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::StatusResistanceTypeRow* GetData(::RPG::GameCore::ModifierBehaviorFlag Type)
		{
			return ((::RPG::GameCore::StatusResistanceTypeRow*(*)(::RPG::GameCore::ModifierBehaviorFlag))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSRESISTANCETYPEEXCELTABLE_GETDATA_OFFSET))(Type);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSRESISTANCETYPEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSRESISTANCETYPEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSRESISTANCETYPEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSRESISTANCETYPEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSRESISTANCETYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSRESISTANCETYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::StatusResistanceTypeRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::StatusResistanceTypeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSRESISTANCETYPEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
