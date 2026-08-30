#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelEffectParam.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelEventType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELEVENTEFFECTPARAM_METHOD_3_1041FB1B97D3BCCB_OFFSET UNITYSDK_OFFSET(0x1CFC5800)
#define RPG_GAMECORE_CHIMERADUELEVENTEFFECTPARAM_METHOD_3_1731330F123D09FB_OFFSET UNITYSDK_OFFSET(0x1CFC5860)
#define RPG_GAMECORE_CHIMERADUELEVENTEFFECTPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFC5850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelEventEffectParam_TypeDefinitionIndex = 15843;

	class ChimeraDuelEventEffectParam : public ::RPG::GameCore::BaseChimeraDuelEffectParam
	{
	public:
		::RPG::GameCore::ChimeraDuelEventType EventType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELEVENTEFFECTPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1041FB1B97D3BCCB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelEventEffectParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelEventEffectParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELEVENTEFFECTPARAM_METHOD_3_1041FB1B97D3BCCB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1731330F123D09FB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelEventEffectParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelEventEffectParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELEVENTEFFECTPARAM_METHOD_3_1731330F123D09FB_OFFSET))(a1, a2);
		}
	};
}
