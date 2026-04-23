#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValueEvaluatorConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_VE_RTGRIDDISTANCE_METHOD_3_899A42678A7824E1_OFFSET UNITYSDK_OFFSET(0x190EF330)
#define RPG_GAMECORE_VE_RTGRIDDISTANCE_METHOD_3_CF638B643C80F77C_OFFSET UNITYSDK_OFFSET(0x190EF2F0)
#define RPG_GAMECORE_VE_RTGRIDDISTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x190EF320)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VE_RtGridDistance_TypeDefinitionIndex = 23270;

	class VE_RtGridDistance : public ::RPG::GameCore::ValueEvaluatorConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* From; // 0x20
		::RPG::GameCore::TargetEvaluator* To; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTGRIDDISTANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CF638B643C80F77C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_RtGridDistance*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_RtGridDistance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTGRIDDISTANCE_METHOD_3_CF638B643C80F77C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_899A42678A7824E1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_RtGridDistance* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_RtGridDistance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTGRIDDISTANCE_METHOD_3_899A42678A7824E1_OFFSET))(a1, a2);
		}
	};
}
