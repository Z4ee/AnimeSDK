#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_RTGRIDTRANSMITTOPOS_METHOD_3_7960CDF2188F249E_OFFSET UNITYSDK_OFFSET(0x18DD09B0)
#define RPG_GAMECORE_RTGRIDTRANSMITTOPOS_METHOD_3_A0EBE269FAEFB8AA_OFFSET UNITYSDK_OFFSET(0x18DD0A80)
#define RPG_GAMECORE_RTGRIDTRANSMITTOPOS__CTOR_OFFSET UNITYSDK_OFFSET(0x18DD0A30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtGridTransmitToPos_TypeDefinitionIndex = 23113;

	class RtGridTransmitToPos : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* PosTargetType; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSuccess; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnAbort; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTGRIDTRANSMITTOPOS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7960CDF2188F249E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtGridTransmitToPos*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtGridTransmitToPos*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTGRIDTRANSMITTOPOS_METHOD_3_7960CDF2188F249E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A0EBE269FAEFB8AA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtGridTransmitToPos* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtGridTransmitToPos*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTGRIDTRANSMITTOPOS_METHOD_3_A0EBE269FAEFB8AA_OFFSET))(a1, a2);
		}
	};
}
