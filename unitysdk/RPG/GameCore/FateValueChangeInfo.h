#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEVALUECHANGEINFO_METHOD_2_129F7217A30C0E13_OFFSET UNITYSDK_OFFSET(0x171CE290)
#define RPG_GAMECORE_FATEVALUECHANGEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x171CE2D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateValueChangeInfo_TypeDefinitionIndex = 17684;

	class FateValueChangeInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEVALUECHANGEINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_129F7217A30C0E13(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateValueChangeInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateValueChangeInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEVALUECHANGEINFO_METHOD_2_129F7217A30C0E13_OFFSET))(a1, a2);
		}
	};
}
