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

#define RPG_GAMECORE_DAMAGETYPEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18851210)
#define RPG_GAMECORE_DAMAGETYPEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18851060)
#define RPG_GAMECORE_DAMAGETYPEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18850D30)
#define RPG_GAMECORE_DAMAGETYPEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18851000)
#define RPG_GAMECORE_DAMAGETYPEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x188513A0)
#define RPG_GAMECORE_DAMAGETYPEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18850DB0)
#define RPG_GAMECORE_DAMAGETYPEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x188513E0)
#define RPG_GAMECORE_DAMAGETYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x188515C0)
#define RPG_GAMECORE_DAMAGETYPEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18851E30)
#define RPG_GAMECORE_DAMAGETYPEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18852150)
#define RPG_GAMECORE_DAMAGETYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18851520)
#define RPG_GAMECORE_DAMAGETYPEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18851480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DamageTypeExcelTable_TypeDefinitionIndex = 12404;

	class DamageTypeExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(DamageTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x2E350);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DamageTypeRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DamageTypeRow*>**)Il2CppClass::FromTypeDefinitionIndex(DamageTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x2E358);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DamageTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x2E360);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(DamageTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0xB780);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DamageTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0xB781);
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
