#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DamageTypeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_DAMAGETYPEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1C0F9C00)
#define RPG_GAMECORE_DAMAGETYPEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C0F9A90)
#define RPG_GAMECORE_DAMAGETYPEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1C0F9780)
#define RPG_GAMECORE_DAMAGETYPEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1C0F9A30)
#define RPG_GAMECORE_DAMAGETYPEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1C0F9D50)
#define RPG_GAMECORE_DAMAGETYPEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1C0F9800)
#define RPG_GAMECORE_DAMAGETYPEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1C0F9D90)
#define RPG_GAMECORE_DAMAGETYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C0F9F60)
#define RPG_GAMECORE_DAMAGETYPEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1C0FA7D0)
#define RPG_GAMECORE_DAMAGETYPEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C0FAAF0)
#define RPG_GAMECORE_DAMAGETYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1C0F9EC0)
#define RPG_GAMECORE_DAMAGETYPEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1C0F9E20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DamageTypeExcelTable_TypeDefinitionIndex = 12629;

	class DamageTypeExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DamageTypeRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DamageTypeRow*>**)Il2CppClass::FromTypeDefinitionIndex(DamageTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x10BC0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DamageTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x10BC8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(DamageTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x10BD0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(DamageTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x59B0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DamageTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x59B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGETYPEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DamageTypeRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DamageTypeRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGETYPEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGETYPEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DamageTypeRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DamageTypeRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGETYPEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::DamageTypeRow* GetData(::RPG::GameCore::AttackDamageType a1)
		{
			return ((::RPG::GameCore::DamageTypeRow*(*)(::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGETYPEEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGETYPEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGETYPEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGETYPEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGETYPEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGETYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGETYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::DamageTypeRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::DamageTypeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGETYPEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
