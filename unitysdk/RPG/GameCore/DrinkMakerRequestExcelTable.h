#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DrinkMakerRequestRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_DRINKMAKERREQUESTEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x17180ED0)
#define RPG_GAMECORE_DRINKMAKERREQUESTEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17180D20)
#define RPG_GAMECORE_DRINKMAKERREQUESTEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x171809F0)
#define RPG_GAMECORE_DRINKMAKERREQUESTEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x17180CC0)
#define RPG_GAMECORE_DRINKMAKERREQUESTEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x17181050)
#define RPG_GAMECORE_DRINKMAKERREQUESTEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x17180A70)
#define RPG_GAMECORE_DRINKMAKERREQUESTEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x17181090)
#define RPG_GAMECORE_DRINKMAKERREQUESTEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x17181270)
#define RPG_GAMECORE_DRINKMAKERREQUESTEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x17181620)
#define RPG_GAMECORE_DRINKMAKERREQUESTEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17181930)
#define RPG_GAMECORE_DRINKMAKERREQUESTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x171811D0)
#define RPG_GAMECORE_DRINKMAKERREQUESTEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x17181130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerRequestExcelTable_TypeDefinitionIndex = 11996;

	class DrinkMakerRequestExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerRequestExcelTable_TypeDefinitionIndex)->GetStaticField(0x2AE20);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerRequestRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerRequestRow*>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerRequestExcelTable_TypeDefinitionIndex)->GetStaticField(0x2AE28);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerRequestExcelTable_TypeDefinitionIndex)->GetStaticField(0x2AE30);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerRequestExcelTable_TypeDefinitionIndex)->GetStaticField(0xE2B0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerRequestExcelTable_TypeDefinitionIndex)->GetStaticField(0xE2B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERREQUESTEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerRequestRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerRequestRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERREQUESTEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERREQUESTEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerRequestRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerRequestRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERREQUESTEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::DrinkMakerRequestRow* GetData(::System::UInt32 RequestID)
		{
			return ((::RPG::GameCore::DrinkMakerRequestRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERREQUESTEXCELTABLE_GETDATA_OFFSET))(RequestID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERREQUESTEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERREQUESTEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERREQUESTEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERREQUESTEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERREQUESTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERREQUESTEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::DrinkMakerRequestRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::DrinkMakerRequestRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERREQUESTEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
