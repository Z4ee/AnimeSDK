#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETFETCHAIDPROTECTOR_METHOD_4_23214774A509F57A_OFFSET UNITYSDK_OFFSET(0x18EE2C00)
#define RPG_GAMECORE_TARGETFETCHAIDPROTECTOR_METHOD_4_F2E2EE31F3B1AFE8_OFFSET UNITYSDK_OFFSET(0x18EDA700)
#define RPG_GAMECORE_TARGETFETCHAIDPROTECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x18EDA6B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAidProtector_TypeDefinitionIndex = 23000;

	class TargetFetchAidProtector : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAIDPROTECTOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_23214774A509F57A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAidProtector*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAidProtector*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAIDPROTECTOR_METHOD_4_23214774A509F57A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F2E2EE31F3B1AFE8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAidProtector* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAidProtector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAIDPROTECTOR_METHOD_4_F2E2EE31F3B1AFE8_OFFSET))(a1, a2);
		}
	};
}
