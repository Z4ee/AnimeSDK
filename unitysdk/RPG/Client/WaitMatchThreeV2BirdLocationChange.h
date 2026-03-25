#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_CLIENT_WAITMATCHTHREEV2BIRDLOCATIONCHANGE_METHOD_4_4C94F250C8E0FACC_OFFSET UNITYSDK_OFFSET(0x16E8E180)
#define RPG_CLIENT_WAITMATCHTHREEV2BIRDLOCATIONCHANGE_METHOD_4_E2090F23B489D1DA_OFFSET UNITYSDK_OFFSET(0x16E8E0A0)
#define RPG_CLIENT_WAITMATCHTHREEV2BIRDLOCATIONCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x16E8E120)

namespace RPG::Client
{
	inline static constexpr unsigned int WaitMatchThreeV2BirdLocationChange_TypeDefinitionIndex = 9953;

	class WaitMatchThreeV2BirdLocationChange : public ::RPG::GameCore::AdvWaitingEventBase
	{
	public:
		::RPG::GameCore::DynamicFloat* LocationID; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnChange; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WAITMATCHTHREEV2BIRDLOCATIONCHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E2090F23B489D1DA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::WaitMatchThreeV2BirdLocationChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::WaitMatchThreeV2BirdLocationChange*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_WAITMATCHTHREEV2BIRDLOCATIONCHANGE_METHOD_4_E2090F23B489D1DA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4C94F250C8E0FACC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::WaitMatchThreeV2BirdLocationChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::WaitMatchThreeV2BirdLocationChange*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WAITMATCHTHREEV2BIRDLOCATIONCHANGE_METHOD_4_4C94F250C8E0FACC_OFFSET))(a1, a2);
		}
	};
}
