#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETERAFLIPSPOTOUTLINEEDGEPARAM_METHOD_3_22F075A7B3FB57F0_OFFSET UNITYSDK_OFFSET(0x18E301D0)
#define RPG_GAMECORE_SETERAFLIPSPOTOUTLINEEDGEPARAM_METHOD_3_6ABBF351B362AAA5_OFFSET UNITYSDK_OFFSET(0x18E30130)
#define RPG_GAMECORE_SETERAFLIPSPOTOUTLINEEDGEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x18E30190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetEraFlipSpotOutlineEdgeParam_TypeDefinitionIndex = 21216;

	class SetEraFlipSpotOutlineEdgeParam : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single EdgeIntensity; // 0x18
		::System::Single EdgeWidth; // 0x1C
		::System::Single EdgeSharpness; // 0x20
		::System::Single EdgeNoise; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETERAFLIPSPOTOUTLINEEDGEPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6ABBF351B362AAA5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetEraFlipSpotOutlineEdgeParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetEraFlipSpotOutlineEdgeParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETERAFLIPSPOTOUTLINEEDGEPARAM_METHOD_3_6ABBF351B362AAA5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_22F075A7B3FB57F0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetEraFlipSpotOutlineEdgeParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetEraFlipSpotOutlineEdgeParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETERAFLIPSPOTOUTLINEEDGEPARAM_METHOD_3_22F075A7B3FB57F0_OFFSET))(a1, a2);
		}
	};
}
