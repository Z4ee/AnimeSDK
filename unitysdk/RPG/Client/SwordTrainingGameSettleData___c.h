#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class SwordTrainingPowerRankConfigRow; }
namespace System { class Action; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B488E20)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B488E60)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA___C__DONEXT_B__56_0_OFFSET UNITYSDK_OFFSET(0x1B488EA0)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA___C___INITALLPOWERRANKROW_B__11_0_OFFSET UNITYSDK_OFFSET(0x1B488E70)

namespace RPG::Client
{
	inline static constexpr unsigned int SwordTrainingGameSettleData___c_TypeDefinitionIndex = 62043;

	class SwordTrainingGameSettleData___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::GameCore::SwordTrainingPowerRankConfigRow*>** StaticGet___9__11_0()
		{
			return (::System::Comparison_1<::RPG::GameCore::SwordTrainingPowerRankConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(SwordTrainingGameSettleData___c_TypeDefinitionIndex)->GetStaticField(0x39030);
		}
		static ::RPG::Client::SwordTrainingGameSettleData___c** StaticGet___9()
		{
			return (::RPG::Client::SwordTrainingGameSettleData___c**)Il2CppClass::FromTypeDefinitionIndex(SwordTrainingGameSettleData___c_TypeDefinitionIndex)->GetStaticField(0x39038);
		}
		static ::System::Action** StaticGet___9__56_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(SwordTrainingGameSettleData___c_TypeDefinitionIndex)->GetStaticField(0x39040);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __InitAllPowerRankRow_b__11_0(::RPG::GameCore::SwordTrainingPowerRankConfigRow* a1, ::RPG::GameCore::SwordTrainingPowerRankConfigRow* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::SwordTrainingPowerRankConfigRow*, ::RPG::GameCore::SwordTrainingPowerRankConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA___C___INITALLPOWERRANKROW_B__11_0_OFFSET))(this, a1, a2);
		}

		::System::Void _DoNext_b__56_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA___C__DONEXT_B__56_0_OFFSET))(this);
		}
	};
}
