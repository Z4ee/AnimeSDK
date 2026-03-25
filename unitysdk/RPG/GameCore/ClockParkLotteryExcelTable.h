#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ClockParkLotteryRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CLOCKPARKLOTTERYEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x170B9FA0)
#define RPG_GAMECORE_CLOCKPARKLOTTERYEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x170B9DF0)
#define RPG_GAMECORE_CLOCKPARKLOTTERYEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x170B9AC0)
#define RPG_GAMECORE_CLOCKPARKLOTTERYEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x170B9D90)
#define RPG_GAMECORE_CLOCKPARKLOTTERYEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x170BA170)
#define RPG_GAMECORE_CLOCKPARKLOTTERYEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x170B9B40)
#define RPG_GAMECORE_CLOCKPARKLOTTERYEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x170BA1B0)
#define RPG_GAMECORE_CLOCKPARKLOTTERYEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x170BA390)
#define RPG_GAMECORE_CLOCKPARKLOTTERYEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x170BA570)
#define RPG_GAMECORE_CLOCKPARKLOTTERYEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x170BA8D0)
#define RPG_GAMECORE_CLOCKPARKLOTTERYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x170BA2F0)
#define RPG_GAMECORE_CLOCKPARKLOTTERYEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x170BA250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkLotteryExcelTable_TypeDefinitionIndex = 10468;

	class ClockParkLotteryExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ClockParkLotteryExcelTable_TypeDefinitionIndex)->GetStaticField(0x27E20);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkLotteryRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkLotteryRow*>**)Il2CppClass::FromTypeDefinitionIndex(ClockParkLotteryExcelTable_TypeDefinitionIndex)->GetStaticField(0x27E28);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ClockParkLotteryExcelTable_TypeDefinitionIndex)->GetStaticField(0x27E30);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ClockParkLotteryExcelTable_TypeDefinitionIndex)->GetStaticField(0xD150);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ClockParkLotteryExcelTable_TypeDefinitionIndex)->GetStaticField(0xD151);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKLOTTERYEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkLotteryRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkLotteryRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKLOTTERYEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKLOTTERYEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkLotteryRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkLotteryRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKLOTTERYEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ClockParkLotteryRow* GetData(::System::UInt32 LotteryID)
		{
			return ((::RPG::GameCore::ClockParkLotteryRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKLOTTERYEXCELTABLE_GETDATA_OFFSET))(LotteryID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKLOTTERYEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKLOTTERYEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKLOTTERYEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKLOTTERYEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKLOTTERYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKLOTTERYEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ClockParkLotteryRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::ClockParkLotteryRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKLOTTERYEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
