#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_EXTRAREWRADINFO_METHOD_2_FB59FB140C136A03_OFFSET UNITYSDK_OFFSET(0x1D087730)
#define RPG_GAMECORE_EXTRAREWRADINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D087770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExtraRewradInfo_TypeDefinitionIndex = 17552;

	class ExtraRewradInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXTRAREWRADINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_FB59FB140C136A03(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ExtraRewradInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ExtraRewradInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXTRAREWRADINFO_METHOD_2_FB59FB140C136A03_OFFSET))(a1, a2);
		}
	};
}
