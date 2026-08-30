#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SwordTrainingEndingDataItem; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_SWORDTRAININGENDINGINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE12A460)
#define RPG_CLIENT_SWORDTRAININGENDINGINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE12A4A0)
#define RPG_CLIENT_SWORDTRAININGENDINGINFO___C__GETENDINGFINISHEDCOUNT_B__8_0_OFFSET UNITYSDK_OFFSET(0xE12A4F0)
#define RPG_CLIENT_SWORDTRAININGENDINGINFO___C__ISALLFINISHED_B__6_0_OFFSET UNITYSDK_OFFSET(0xE12A4B0)
#define RPG_CLIENT_SWORDTRAININGENDINGINFO___C__ISANYENDINGFINISHED_B__7_0_OFFSET UNITYSDK_OFFSET(0xE12A4D0)

namespace RPG::Client
{
	inline static constexpr unsigned int SwordTrainingEndingInfo___c_TypeDefinitionIndex = 62022;

	class SwordTrainingEndingInfo___c : public ::System::Object
	{
	public:
		static ::RPG::Client::SwordTrainingEndingInfo___c** StaticGet___9()
		{
			return (::RPG::Client::SwordTrainingEndingInfo___c**)Il2CppClass::FromTypeDefinitionIndex(SwordTrainingEndingInfo___c_TypeDefinitionIndex)->GetStaticField(0x354F0);
		}
		static ::System::Func_2<::RPG::Client::SwordTrainingEndingDataItem*, ::System::Boolean>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::RPG::Client::SwordTrainingEndingDataItem*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(SwordTrainingEndingInfo___c_TypeDefinitionIndex)->GetStaticField(0x354F8);
		}
		static ::System::Func_2<::RPG::Client::SwordTrainingEndingDataItem*, ::System::Boolean>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::RPG::Client::SwordTrainingEndingDataItem*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(SwordTrainingEndingInfo___c_TypeDefinitionIndex)->GetStaticField(0x35500);
		}
		static ::System::Func_2<::RPG::Client::SwordTrainingEndingDataItem*, ::System::Boolean>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::RPG::Client::SwordTrainingEndingDataItem*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(SwordTrainingEndingInfo___c_TypeDefinitionIndex)->GetStaticField(0x35508);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGENDINGINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGENDINGINFO___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsAllFinished_b__6_0(::RPG::Client::SwordTrainingEndingDataItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SwordTrainingEndingDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGENDINGINFO___C__ISALLFINISHED_B__6_0_OFFSET))(this, a1);
		}

		::System::Boolean _IsAnyEndingFinished_b__7_0(::RPG::Client::SwordTrainingEndingDataItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SwordTrainingEndingDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGENDINGINFO___C__ISANYENDINGFINISHED_B__7_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetEndingFinishedCount_b__8_0(::RPG::Client::SwordTrainingEndingDataItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SwordTrainingEndingDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGENDINGINFO___C__GETENDINGFINISHEDCOUNT_B__8_0_OFFSET))(this, a1);
		}
	};
}
