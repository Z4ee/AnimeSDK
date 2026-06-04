#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYPARTIALFLIPDEVICESTATE_METHOD_4_6FC705433410EA36_OFFSET UNITYSDK_OFFSET(0x19578D70)
#define RPG_GAMECORE_BYPARTIALFLIPDEVICESTATE_METHOD_4_9B132C3FC9F78B70_OFFSET UNITYSDK_OFFSET(0x19578E40)
#define RPG_GAMECORE_BYPARTIALFLIPDEVICESTATE_METHOD_4_DCC86E7303C95E49_OFFSET UNITYSDK_OFFSET(0x19579040)
#define RPG_GAMECORE_BYPARTIALFLIPDEVICESTATE_METHOD_4_EDAF98D606FD11A4_OFFSET UNITYSDK_OFFSET(0x195790C0)
#define RPG_GAMECORE_BYPARTIALFLIPDEVICESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19578DF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByPartialFlipDeviceState_TypeDefinitionIndex = 21109;

	class ByPartialFlipDeviceState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* InstanceID; // 0x20
		::System::Boolean IsOn; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPARTIALFLIPDEVICESTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_6FC705433410EA36(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByPartialFlipDeviceState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByPartialFlipDeviceState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPARTIALFLIPDEVICESTATE_METHOD_4_6FC705433410EA36_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9B132C3FC9F78B70(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByPartialFlipDeviceState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByPartialFlipDeviceState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPARTIALFLIPDEVICESTATE_METHOD_4_9B132C3FC9F78B70_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DCC86E7303C95E49(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPartialFlipDeviceState*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPartialFlipDeviceState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPARTIALFLIPDEVICESTATE_METHOD_4_DCC86E7303C95E49_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EDAF98D606FD11A4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPartialFlipDeviceState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPartialFlipDeviceState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPARTIALFLIPDEVICESTATE_METHOD_4_EDAF98D606FD11A4_OFFSET))(a1, a2);
		}
	};
}
