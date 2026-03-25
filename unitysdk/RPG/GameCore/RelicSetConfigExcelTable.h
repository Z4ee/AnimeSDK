#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RelicSetConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_RELICSETCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x17592C60)
#define RPG_GAMECORE_RELICSETCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17592AE0)
#define RPG_GAMECORE_RELICSETCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x175927B0)
#define RPG_GAMECORE_RELICSETCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x17592A80)
#define RPG_GAMECORE_RELICSETCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x17592DE0)
#define RPG_GAMECORE_RELICSETCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x17592830)
#define RPG_GAMECORE_RELICSETCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x17592E20)
#define RPG_GAMECORE_RELICSETCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x17593000)
#define RPG_GAMECORE_RELICSETCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x17593420)
#define RPG_GAMECORE_RELICSETCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17593730)
#define RPG_GAMECORE_RELICSETCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x17592F60)
#define RPG_GAMECORE_RELICSETCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x17592EC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RelicSetConfigExcelTable_TypeDefinitionIndex = 13362;

	class RelicSetConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RelicSetConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x31C40);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicSetConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicSetConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(RelicSetConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x31C48);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RelicSetConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x31C50);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RelicSetConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x103D0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RelicSetConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x103D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSETCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicSetConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicSetConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSETCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSETCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicSetConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicSetConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSETCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RelicSetConfigRow* GetData(::System::UInt32 SetID)
		{
			return ((::RPG::GameCore::RelicSetConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSETCONFIGEXCELTABLE_GETDATA_OFFSET))(SetID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSETCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSETCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSETCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSETCONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSETCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSETCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RelicSetConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RelicSetConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSETCONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
