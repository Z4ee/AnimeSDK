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

#define RPG_GAMECORE_DAMAGETYPEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x17149F90)
#define RPG_GAMECORE_DAMAGETYPEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17149DE0)
#define RPG_GAMECORE_DAMAGETYPEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x17149AB0)
#define RPG_GAMECORE_DAMAGETYPEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x17149D80)
#define RPG_GAMECORE_DAMAGETYPEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1714A120)
#define RPG_GAMECORE_DAMAGETYPEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x17149B30)
#define RPG_GAMECORE_DAMAGETYPEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1714A160)
#define RPG_GAMECORE_DAMAGETYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1714A340)
#define RPG_GAMECORE_DAMAGETYPEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1714ABB0)
#define RPG_GAMECORE_DAMAGETYPEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1714AED0)
#define RPG_GAMECORE_DAMAGETYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1714A2A0)
#define RPG_GAMECORE_DAMAGETYPEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1714A200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DamageTypeExcelTable_TypeDefinitionIndex = 11971;

	class DamageTypeExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(DamageTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x29B70);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DamageTypeRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DamageTypeRow*>**)Il2CppClass::FromTypeDefinitionIndex(DamageTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x29B78);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DamageTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x29B80);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(DamageTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0xDBF0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DamageTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0xDBF1);
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

		static ::RPG::GameCore::DamageTypeRow* GetData(::RPG::GameCore::AttackDamageType ID)
		{
			return ((::RPG::GameCore::DamageTypeRow*(*)(::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGETYPEEXCELTABLE_GETDATA_OFFSET))(ID);
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

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGETYPEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGETYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGETYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::DamageTypeRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::DamageTypeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGETYPEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
