#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSURFACEPOINT_METHOD_2_3F7FD23A4D2C5AF4_OFFSET UNITYSDK_OFFSET(0x1720F150)
#define RPG_GAMECORE_FIVEDIMSURFACEPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1720FAA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSurfacePoint_TypeDefinitionIndex = 15323;

	class FiveDimSurfacePoint : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector3 Position; // 0x10
		::RPG::MVector3 Rotation; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSURFACEPOINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_3F7FD23A4D2C5AF4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSurfacePoint*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSurfacePoint*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSURFACEPOINT_METHOD_2_3F7FD23A4D2C5AF4_OFFSET))(a1, a2);
		}
	};
}
