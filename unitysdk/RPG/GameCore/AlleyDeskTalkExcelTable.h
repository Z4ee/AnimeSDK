#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AlleyDeskTalkRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ALLEYDESKTALKEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x16F6F180)
#define RPG_GAMECORE_ALLEYDESKTALKEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16F6EFD0)
#define RPG_GAMECORE_ALLEYDESKTALKEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x16F6ECA0)
#define RPG_GAMECORE_ALLEYDESKTALKEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x16F6EF70)
#define RPG_GAMECORE_ALLEYDESKTALKEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x16F6F350)
#define RPG_GAMECORE_ALLEYDESKTALKEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x16F6ED20)
#define RPG_GAMECORE_ALLEYDESKTALKEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x16F6F390)
#define RPG_GAMECORE_ALLEYDESKTALKEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F6F570)
#define RPG_GAMECORE_ALLEYDESKTALKEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x16F6F840)
#define RPG_GAMECORE_ALLEYDESKTALKEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F6FBA0)
#define RPG_GAMECORE_ALLEYDESKTALKEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x16F6F4D0)
#define RPG_GAMECORE_ALLEYDESKTALKEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x16F6F430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyDeskTalkExcelTable_TypeDefinitionIndex = 11527;

	class AlleyDeskTalkExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AlleyDeskTalkExcelTable_TypeDefinitionIndex)->GetStaticField(0x1EF20);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AlleyDeskTalkExcelTable_TypeDefinitionIndex)->GetStaticField(0x1EF28);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyDeskTalkRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyDeskTalkRow*>**)Il2CppClass::FromTypeDefinitionIndex(AlleyDeskTalkExcelTable_TypeDefinitionIndex)->GetStaticField(0x1EF30);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AlleyDeskTalkExcelTable_TypeDefinitionIndex)->GetStaticField(0x7F90);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AlleyDeskTalkExcelTable_TypeDefinitionIndex)->GetStaticField(0x7F91);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYDESKTALKEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyDeskTalkRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyDeskTalkRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYDESKTALKEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYDESKTALKEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyDeskTalkRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyDeskTalkRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYDESKTALKEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AlleyDeskTalkRow* GetData(::System::UInt32 TalkID)
		{
			return ((::RPG::GameCore::AlleyDeskTalkRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYDESKTALKEXCELTABLE_GETDATA_OFFSET))(TalkID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYDESKTALKEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYDESKTALKEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYDESKTALKEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYDESKTALKEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYDESKTALKEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYDESKTALKEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AlleyDeskTalkRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::AlleyDeskTalkRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYDESKTALKEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
