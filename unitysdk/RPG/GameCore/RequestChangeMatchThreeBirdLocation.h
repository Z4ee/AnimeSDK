#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_REQUESTCHANGEMATCHTHREEBIRDLOCATION_METHOD_3_437C9D7856208EFF_OFFSET UNITYSDK_OFFSET(0x19ACCCB0)
#define RPG_GAMECORE_REQUESTCHANGEMATCHTHREEBIRDLOCATION_METHOD_3_6DF162F2D77C616E_OFFSET UNITYSDK_OFFSET(0x19ACCC30)
#define RPG_GAMECORE_REQUESTCHANGEMATCHTHREEBIRDLOCATION__CTOR_OFFSET UNITYSDK_OFFSET(0x19ACCC80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RequestChangeMatchThreeBirdLocation_TypeDefinitionIndex = 19836;

	class RequestChangeMatchThreeBirdLocation : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 BirdID; // 0x18
		::RPG::GameCore::DynamicFloat* LocationID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REQUESTCHANGEMATCHTHREEBIRDLOCATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6DF162F2D77C616E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RequestChangeMatchThreeBirdLocation*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RequestChangeMatchThreeBirdLocation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REQUESTCHANGEMATCHTHREEBIRDLOCATION_METHOD_3_6DF162F2D77C616E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_437C9D7856208EFF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RequestChangeMatchThreeBirdLocation* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RequestChangeMatchThreeBirdLocation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REQUESTCHANGEMATCHTHREEBIRDLOCATION_METHOD_3_437C9D7856208EFF_OFFSET))(a1, a2);
		}
	};
}
