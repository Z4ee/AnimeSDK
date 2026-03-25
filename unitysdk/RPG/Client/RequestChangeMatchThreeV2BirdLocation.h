#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_CLIENT_REQUESTCHANGEMATCHTHREEV2BIRDLOCATION_METHOD_3_CFF7579380403101_OFFSET UNITYSDK_OFFSET(0x16E8C0E0)
#define RPG_CLIENT_REQUESTCHANGEMATCHTHREEV2BIRDLOCATION_METHOD_3_F37A589FBB291478_OFFSET UNITYSDK_OFFSET(0x16E8C060)
#define RPG_CLIENT_REQUESTCHANGEMATCHTHREEV2BIRDLOCATION__CTOR_OFFSET UNITYSDK_OFFSET(0x16E8C0B0)

namespace RPG::Client
{
	inline static constexpr unsigned int RequestChangeMatchThreeV2BirdLocation_TypeDefinitionIndex = 9955;

	class RequestChangeMatchThreeV2BirdLocation : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 BirdID; // 0x18
		::RPG::GameCore::DynamicFloat* LocationID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REQUESTCHANGEMATCHTHREEV2BIRDLOCATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F37A589FBB291478(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::RequestChangeMatchThreeV2BirdLocation*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::RequestChangeMatchThreeV2BirdLocation*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_REQUESTCHANGEMATCHTHREEV2BIRDLOCATION_METHOD_3_F37A589FBB291478_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CFF7579380403101(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::RequestChangeMatchThreeV2BirdLocation* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::RequestChangeMatchThreeV2BirdLocation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REQUESTCHANGEMATCHTHREEV2BIRDLOCATION_METHOD_3_CFF7579380403101_OFFSET))(a1, a2);
		}
	};
}
