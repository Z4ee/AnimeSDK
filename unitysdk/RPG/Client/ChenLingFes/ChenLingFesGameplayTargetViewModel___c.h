#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ChenLingFes { class ChenLingFesGameplayTargetItemViewModel; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETVIEWMODEL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A4CB900)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETVIEWMODEL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4CB940)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETVIEWMODEL___C__GET_PROGRESSBEFORE_B__22_0_OFFSET UNITYSDK_OFFSET(0x1A4CB990)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETVIEWMODEL___C__GET_PROGRESS_B__20_0_OFFSET UNITYSDK_OFFSET(0x1A4CB970)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETVIEWMODEL___C___SYNCGAMEWEEKDATA_B__2_0_OFFSET UNITYSDK_OFFSET(0x1A4CB950)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesGameplayTargetViewModel___c_TypeDefinitionIndex = 76430;

	class ChenLingFesGameplayTargetViewModel___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::RPG::Client::ChenLingFes::ChenLingFesGameplayTargetItemViewModel*>** StaticGet___9__2_0()
		{
			return (::System::Predicate_1<::RPG::Client::ChenLingFes::ChenLingFesGameplayTargetItemViewModel*>**)Il2CppClass::FromTypeDefinitionIndex(ChenLingFesGameplayTargetViewModel___c_TypeDefinitionIndex)->GetStaticField(0x669D0);
		}
		static ::RPG::Client::ChenLingFes::ChenLingFesGameplayTargetViewModel___c** StaticGet___9()
		{
			return (::RPG::Client::ChenLingFes::ChenLingFesGameplayTargetViewModel___c**)Il2CppClass::FromTypeDefinitionIndex(ChenLingFesGameplayTargetViewModel___c_TypeDefinitionIndex)->GetStaticField(0x669D8);
		}
		static ::System::Predicate_1<::RPG::Client::ChenLingFes::ChenLingFesGameplayTargetItemViewModel*>** StaticGet___9__22_0()
		{
			return (::System::Predicate_1<::RPG::Client::ChenLingFes::ChenLingFesGameplayTargetItemViewModel*>**)Il2CppClass::FromTypeDefinitionIndex(ChenLingFesGameplayTargetViewModel___c_TypeDefinitionIndex)->GetStaticField(0x669E0);
		}
		static ::System::Predicate_1<::RPG::Client::ChenLingFes::ChenLingFesGameplayTargetItemViewModel*>** StaticGet___9__20_0()
		{
			return (::System::Predicate_1<::RPG::Client::ChenLingFes::ChenLingFesGameplayTargetItemViewModel*>**)Il2CppClass::FromTypeDefinitionIndex(ChenLingFesGameplayTargetViewModel___c_TypeDefinitionIndex)->GetStaticField(0x669E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETVIEWMODEL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETVIEWMODEL___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __SyncGameWeekData_b__2_0(::RPG::Client::ChenLingFes::ChenLingFesGameplayTargetItemViewModel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChenLingFes::ChenLingFesGameplayTargetItemViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETVIEWMODEL___C___SYNCGAMEWEEKDATA_B__2_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_Progress_b__20_0(::RPG::Client::ChenLingFes::ChenLingFesGameplayTargetItemViewModel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChenLingFes::ChenLingFesGameplayTargetItemViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETVIEWMODEL___C__GET_PROGRESS_B__20_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_ProgressBefore_b__22_0(::RPG::Client::ChenLingFes::ChenLingFesGameplayTargetItemViewModel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChenLingFes::ChenLingFesGameplayTargetItemViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETVIEWMODEL___C__GET_PROGRESSBEFORE_B__22_0_OFFSET))(this, a1);
		}
	};
}
