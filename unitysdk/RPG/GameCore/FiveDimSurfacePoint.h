#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSURFACEPOINT_METHOD_2_5FA074A2489E2062_OFFSET UNITYSDK_OFFSET(0x1D6B1FE0)
#define RPG_GAMECORE_FIVEDIMSURFACEPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B2D20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSurfacePoint_TypeDefinitionIndex = 16722;

	class FiveDimSurfacePoint : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector3 Position; // 0x10
		::RPG::MVector3 Rotation; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSURFACEPOINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_5FA074A2489E2062(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSurfacePoint*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSurfacePoint*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSURFACEPOINT_METHOD_2_5FA074A2489E2062_OFFSET))(a1, a2);
		}
	};
}
