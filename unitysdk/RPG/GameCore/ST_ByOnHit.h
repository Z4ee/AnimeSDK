#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_BYONHIT_METHOD_4_5917E1D0D70BF614_OFFSET UNITYSDK_OFFSET(0x17694610)
#define RPG_GAMECORE_ST_BYONHIT_METHOD_4_EDE8AD51B505A71E_OFFSET UNITYSDK_OFFSET(0x176946E0)
#define RPG_GAMECORE_ST_BYONHIT__CTOR_OFFSET UNITYSDK_OFFSET(0x17694690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ByOnHit_TypeDefinitionIndex = 18367;

	class ST_ByOnHit : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYONHIT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_5917E1D0D70BF614(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByOnHit*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByOnHit*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYONHIT_METHOD_4_5917E1D0D70BF614_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EDE8AD51B505A71E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByOnHit* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByOnHit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYONHIT_METHOD_4_EDE8AD51B505A71E_OFFSET))(a1, a2);
		}
	};
}
