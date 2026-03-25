#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SwordTrainingPartnerRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SWORDTRAININGPARTNEREXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1779E790)
#define RPG_GAMECORE_SWORDTRAININGPARTNEREXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1779E5E0)
#define RPG_GAMECORE_SWORDTRAININGPARTNEREXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1779E2B0)
#define RPG_GAMECORE_SWORDTRAININGPARTNEREXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1779E580)
#define RPG_GAMECORE_SWORDTRAININGPARTNEREXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1779E960)
#define RPG_GAMECORE_SWORDTRAININGPARTNEREXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1779E330)
#define RPG_GAMECORE_SWORDTRAININGPARTNEREXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1779E9A0)
#define RPG_GAMECORE_SWORDTRAININGPARTNEREXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1779EB80)
#define RPG_GAMECORE_SWORDTRAININGPARTNEREXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1779EE70)
#define RPG_GAMECORE_SWORDTRAININGPARTNEREXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1779F1D0)
#define RPG_GAMECORE_SWORDTRAININGPARTNEREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1779EAE0)
#define RPG_GAMECORE_SWORDTRAININGPARTNEREXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1779EA40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingPartnerExcelTable_TypeDefinitionIndex = 11366;

	class SwordTrainingPartnerExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingPartnerRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingPartnerRow*>**)Il2CppClass::FromTypeDefinitionIndex(SwordTrainingPartnerExcelTable_TypeDefinitionIndex)->GetStaticField(0x13010);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SwordTrainingPartnerExcelTable_TypeDefinitionIndex)->GetStaticField(0x13018);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(SwordTrainingPartnerExcelTable_TypeDefinitionIndex)->GetStaticField(0x13020);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SwordTrainingPartnerExcelTable_TypeDefinitionIndex)->GetStaticField(0x59E0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(SwordTrainingPartnerExcelTable_TypeDefinitionIndex)->GetStaticField(0x59E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGPARTNEREXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingPartnerRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingPartnerRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGPARTNEREXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGPARTNEREXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingPartnerRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingPartnerRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGPARTNEREXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::SwordTrainingPartnerRow* GetData(::System::UInt32 PartnerID)
		{
			return ((::RPG::GameCore::SwordTrainingPartnerRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGPARTNEREXCELTABLE_GETDATA_OFFSET))(PartnerID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGPARTNEREXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGPARTNEREXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGPARTNEREXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGPARTNEREXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGPARTNEREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGPARTNEREXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::SwordTrainingPartnerRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::SwordTrainingPartnerRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGPARTNEREXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
