#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRYCANCELENTERREGION_METHOD_3_6CB2664263ABAAAC_OFFSET UNITYSDK_OFFSET(0x19E20D00)
#define RPG_GAMECORE_TRYCANCELENTERREGION_METHOD_3_F6D874473C25E338_OFFSET UNITYSDK_OFFSET(0x19E20E10)
#define RPG_GAMECORE_TRYCANCELENTERREGION__CTOR_OFFSET UNITYSDK_OFFSET(0x19E20DE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TryCancelEnterRegion_TypeDefinitionIndex = 19614;

	class TryCancelEnterRegion : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRYCANCELENTERREGION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6CB2664263ABAAAC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TryCancelEnterRegion*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TryCancelEnterRegion*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRYCANCELENTERREGION_METHOD_3_6CB2664263ABAAAC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F6D874473C25E338(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TryCancelEnterRegion* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TryCancelEnterRegion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRYCANCELENTERREGION_METHOD_3_F6D874473C25E338_OFFSET))(a1, a2);
		}
	};
}
