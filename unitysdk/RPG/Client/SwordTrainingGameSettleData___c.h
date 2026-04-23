#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class SwordTrainingPowerRankConfigRow; }
namespace System { class Action; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB257980)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB2579C0)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA___C__DONEXT_B__56_0_OFFSET UNITYSDK_OFFSET(0xB257A00)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA___C___INITALLPOWERRANKROW_B__11_0_OFFSET UNITYSDK_OFFSET(0xB2579D0)

namespace RPG::Client
{
	inline static constexpr unsigned int SwordTrainingGameSettleData___c_TypeDefinitionIndex = 57152;

	class SwordTrainingGameSettleData___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::GameCore::SwordTrainingPowerRankConfigRow*>** StaticGet___9__11_0()
		{
			return (::System::Comparison_1<::RPG::GameCore::SwordTrainingPowerRankConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(SwordTrainingGameSettleData___c_TypeDefinitionIndex)->GetStaticField(0x2ED00);
		}
		static ::System::Action** StaticGet___9__56_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(SwordTrainingGameSettleData___c_TypeDefinitionIndex)->GetStaticField(0x2ED08);
		}
		static ::RPG::Client::SwordTrainingGameSettleData___c** StaticGet___9()
		{
			return (::RPG::Client::SwordTrainingGameSettleData___c**)Il2CppClass::FromTypeDefinitionIndex(SwordTrainingGameSettleData___c_TypeDefinitionIndex)->GetStaticField(0x2ED10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __InitAllPowerRankRow_b__11_0(::RPG::GameCore::SwordTrainingPowerRankConfigRow* a, ::RPG::GameCore::SwordTrainingPowerRankConfigRow* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::SwordTrainingPowerRankConfigRow*, ::RPG::GameCore::SwordTrainingPowerRankConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA___C___INITALLPOWERRANKROW_B__11_0_OFFSET))(this, a, b);
		}

		::System::Void _DoNext_b__56_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA___C__DONEXT_B__56_0_OFFSET))(this);
		}
	};
}
