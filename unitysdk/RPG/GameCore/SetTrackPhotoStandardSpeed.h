#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_SETTRACKPHOTOSTANDARDSPEED_METHOD_3_9A65B1F8FF91E5CE_OFFSET UNITYSDK_OFFSET(0x19C65690)
#define RPG_GAMECORE_SETTRACKPHOTOSTANDARDSPEED_METHOD_3_C93933A9063A72E2_OFFSET UNITYSDK_OFFSET(0x19C65610)
#define RPG_GAMECORE_SETTRACKPHOTOSTANDARDSPEED__CTOR_OFFSET UNITYSDK_OFFSET(0x19C65660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetTrackPhotoStandardSpeed_TypeDefinitionIndex = 20430;

	class SetTrackPhotoStandardSpeed : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* Speed; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTRACKPHOTOSTANDARDSPEED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C93933A9063A72E2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTrackPhotoStandardSpeed*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTrackPhotoStandardSpeed*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTRACKPHOTOSTANDARDSPEED_METHOD_3_C93933A9063A72E2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9A65B1F8FF91E5CE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTrackPhotoStandardSpeed* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTrackPhotoStandardSpeed*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTRACKPHOTOSTANDARDSPEED_METHOD_3_9A65B1F8FF91E5CE_OFFSET))(a1, a2);
		}
	};
}
