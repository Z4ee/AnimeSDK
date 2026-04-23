#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DecalConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_DECALCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18855280)
#define RPG_GAMECORE_DECALCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x188550D0)
#define RPG_GAMECORE_DECALCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18854DA0)
#define RPG_GAMECORE_DECALCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18855070)
#define RPG_GAMECORE_DECALCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18855450)
#define RPG_GAMECORE_DECALCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18854E20)
#define RPG_GAMECORE_DECALCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18855490)
#define RPG_GAMECORE_DECALCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18855670)
#define RPG_GAMECORE_DECALCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18855A60)
#define RPG_GAMECORE_DECALCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18855DC0)
#define RPG_GAMECORE_DECALCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x188555D0)
#define RPG_GAMECORE_DECALCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18855530)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DecalConfigExcelTable_TypeDefinitionIndex = 11684;

	class DecalConfigExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DecalConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x31730);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DecalConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DecalConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(DecalConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x31738);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(DecalConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x31740);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(DecalConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xC640);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DecalConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xC641);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECALCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DecalConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DecalConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECALCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECALCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DecalConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DecalConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECALCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::DecalConfigRow* GetData(::System::UInt32 DecalID)
		{
			return ((::RPG::GameCore::DecalConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECALCONFIGEXCELTABLE_GETDATA_OFFSET))(DecalID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECALCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECALCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECALCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECALCONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECALCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECALCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::DecalConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::DecalConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECALCONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
