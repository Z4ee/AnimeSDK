#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETMAPPARTOWNERENTITY_METHOD_3_7F63DC0307A52E62_OFFSET UNITYSDK_OFFSET(0x177C3640)
#define RPG_GAMECORE_TARGETMAPPARTOWNERENTITY_METHOD_3_E3F62B146A41C110_OFFSET UNITYSDK_OFFSET(0x177C3560)
#define RPG_GAMECORE_TARGETMAPPARTOWNERENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x177C3620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapPartOwnerEntity_TypeDefinitionIndex = 22297;

	class TargetMapPartOwnerEntity : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPPARTOWNERENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E3F62B146A41C110(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapPartOwnerEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapPartOwnerEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPPARTOWNERENTITY_METHOD_3_E3F62B146A41C110_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7F63DC0307A52E62(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapPartOwnerEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapPartOwnerEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPPARTOWNERENTITY_METHOD_3_7F63DC0307A52E62_OFFSET))(a1, a2);
		}
	};
}
