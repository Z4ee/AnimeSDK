#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PVSOptSamplerType.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STAGEPVSOFFLINESAMPLERINFO_METHOD_2_4C34439AF76C97E4_OFFSET UNITYSDK_OFFSET(0x1DAE4620)
#define RPG_GAMECORE_STAGEPVSOFFLINESAMPLERINFO_METHOD_2_C076F0FA64D56D96_OFFSET UNITYSDK_OFFSET(0x1DAE4790)
#define RPG_GAMECORE_STAGEPVSOFFLINESAMPLERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE4780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StagePVSOfflineSamplerInfo_TypeDefinitionIndex = 19178;

	class StagePVSOfflineSamplerInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 ID; // 0x10
		::RPG::MVector3 Position; // 0x14
		::RPG::GameCore::PVSOptSamplerType SamplerType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEPVSOFFLINESAMPLERINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_4C34439AF76C97E4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StagePVSOfflineSamplerInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StagePVSOfflineSamplerInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEPVSOFFLINESAMPLERINFO_METHOD_2_4C34439AF76C97E4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_C076F0FA64D56D96(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StagePVSOfflineSamplerInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StagePVSOfflineSamplerInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEPVSOFFLINESAMPLERINFO_METHOD_2_C076F0FA64D56D96_OFFSET))(a1, a2);
		}
	};
}
