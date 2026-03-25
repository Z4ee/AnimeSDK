#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityHipplen { class ActivityHipplenGiftData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLETRIALGAMESTATE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8F2DFD0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLETRIALGAMESTATE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8F2E010)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLETRIALGAMESTATE___C___CTOR_B__2_0_OFFSET UNITYSDK_OFFSET(0x8F2E020)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenSettleTrialGameState___c_TypeDefinitionIndex = 61675;

	class ActivityHipplenSettleTrialGameState___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::RPG::Client::ActivityHipplen::ActivityHipplenGiftData*>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::ActivityHipplen::ActivityHipplenGiftData*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityHipplenSettleTrialGameState___c_TypeDefinitionIndex)->GetStaticField(0x2B1E0);
		}
		static ::RPG::Client::ActivityHipplen::ActivityHipplenSettleTrialGameState___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityHipplen::ActivityHipplenSettleTrialGameState___c**)Il2CppClass::FromTypeDefinitionIndex(ActivityHipplenSettleTrialGameState___c_TypeDefinitionIndex)->GetStaticField(0x2B1E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLETRIALGAMESTATE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLETRIALGAMESTATE___C__CTOR_OFFSET))(this);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenGiftData* __ctor_b__2_0(::System::UInt32 g)
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenGiftData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLETRIALGAMESTATE___C___CTOR_B__2_0_OFFSET))(this, g);
		}
	};
}
