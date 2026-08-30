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

#define RPG_GAMECORE_CLOCKPARKLOTTERYEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D9994E0)
#define RPG_GAMECORE_CLOCKPARKLOTTERYEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D999370)
#define RPG_GAMECORE_CLOCKPARKLOTTERYEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D999060)
#define RPG_GAMECORE_CLOCKPARKLOTTERYEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D999310)
#define RPG_GAMECORE_CLOCKPARKLOTTERYEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D999670)
#define RPG_GAMECORE_CLOCKPARKLOTTERYEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D9990E0)
#define RPG_GAMECORE_CLOCKPARKLOTTERYEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D9996B0)
#define RPG_GAMECORE_CLOCKPARKLOTTERYEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D999880)
#define RPG_GAMECORE_CLOCKPARKLOTTERYEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D999A60)
#define RPG_GAMECORE_CLOCKPARKLOTTERYEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D999DD0)
#define RPG_GAMECORE_CLOCKPARKLOTTERYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D9997E0)
#define RPG_GAMECORE_CLOCKPARKLOTTERYEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D999740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkLotteryExcelTable_TypeDefinitionIndex = 11173;

	class ClockParkLotteryExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkLotteryRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkLotteryRow*>**)Il2CppClass::FromTypeDefinitionIndex(ClockParkLotteryExcelTable_TypeDefinitionIndex)->GetStaticField(0x1B5B0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ClockParkLotteryExcelTable_TypeDefinitionIndex)->GetStaticField(0x1B5B8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ClockParkLotteryExcelTable_TypeDefinitionIndex)->GetStaticField(0x1B5C0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ClockParkLotteryExcelTable_TypeDefinitionIndex)->GetStaticField(0x9730);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ClockParkLotteryExcelTable_TypeDefinitionIndex)->GetStaticField(0x9731);
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

		static ::RPG::GameCore::ClockParkLotteryRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ClockParkLotteryRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKLOTTERYEXCELTABLE_GETDATA_OFFSET))(a1);
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

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKLOTTERYEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKLOTTERYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKLOTTERYEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ClockParkLotteryRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ClockParkLotteryRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKLOTTERYEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
