#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETMAPDAMAGEDEFENDER_METHOD_3_63557D0EBE19C913_OFFSET UNITYSDK_OFFSET(0x18EE87D0)
#define RPG_GAMECORE_TARGETMAPDAMAGEDEFENDER_METHOD_3_D0AA79EC756516BE_OFFSET UNITYSDK_OFFSET(0x18EE8710)
#define RPG_GAMECORE_TARGETMAPDAMAGEDEFENDER__CTOR_OFFSET UNITYSDK_OFFSET(0x18EE87B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapDamageDefender_TypeDefinitionIndex = 23009;

	class TargetMapDamageDefender : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPDAMAGEDEFENDER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D0AA79EC756516BE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapDamageDefender*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapDamageDefender*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPDAMAGEDEFENDER_METHOD_3_D0AA79EC756516BE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_63557D0EBE19C913(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapDamageDefender* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapDamageDefender*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPDAMAGEDEFENDER_METHOD_3_63557D0EBE19C913_OFFSET))(a1, a2);
		}
	};
}
