#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MonopolyEventConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MONOPOLYEVENTCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x17438460)
#define RPG_GAMECORE_MONOPOLYEVENTCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x174382E0)
#define RPG_GAMECORE_MONOPOLYEVENTCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x17437FB0)
#define RPG_GAMECORE_MONOPOLYEVENTCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x17438280)
#define RPG_GAMECORE_MONOPOLYEVENTCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x174385E0)
#define RPG_GAMECORE_MONOPOLYEVENTCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x17438030)
#define RPG_GAMECORE_MONOPOLYEVENTCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x17438620)
#define RPG_GAMECORE_MONOPOLYEVENTCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x17438800)
#define RPG_GAMECORE_MONOPOLYEVENTCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x17438CF0)
#define RPG_GAMECORE_MONOPOLYEVENTCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17439000)
#define RPG_GAMECORE_MONOPOLYEVENTCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x17438760)
#define RPG_GAMECORE_MONOPOLYEVENTCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x174386C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyEventConfigExcelTable_TypeDefinitionIndex = 11020;

	class MonopolyEventConfigExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MonopolyEventConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2C0F0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MonopolyEventConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2C0F8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyEventConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyEventConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(MonopolyEventConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2C100);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonopolyEventConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xEA80);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MonopolyEventConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xEA81);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYEVENTCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyEventConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyEventConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYEVENTCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYEVENTCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyEventConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyEventConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYEVENTCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MonopolyEventConfigRow* GetData(::System::UInt32 EventID)
		{
			return ((::RPG::GameCore::MonopolyEventConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYEVENTCONFIGEXCELTABLE_GETDATA_OFFSET))(EventID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYEVENTCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYEVENTCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYEVENTCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYEVENTCONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYEVENTCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYEVENTCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MonopolyEventConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::MonopolyEventConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYEVENTCONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
