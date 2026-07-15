#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYPARTIALFLIPDEVICESTATE_METHOD_4_4F21E8E9642AD374_OFFSET UNITYSDK_OFFSET(0x1B2B2710)
#define RPG_GAMECORE_BYPARTIALFLIPDEVICESTATE_METHOD_4_754B0BBE37C74B55_OFFSET UNITYSDK_OFFSET(0x1B2B24D0)
#define RPG_GAMECORE_BYPARTIALFLIPDEVICESTATE_METHOD_4_9B132C3FC9F78B70_OFFSET UNITYSDK_OFFSET(0x1B2B2510)
#define RPG_GAMECORE_BYPARTIALFLIPDEVICESTATE_METHOD_4_B67B597A79A45B9B_OFFSET UNITYSDK_OFFSET(0x1B2B2740)
#define RPG_GAMECORE_BYPARTIALFLIPDEVICESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2B2500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByPartialFlipDeviceState_TypeDefinitionIndex = 21524;

	class ByPartialFlipDeviceState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* InstanceID; // 0x20
		::System::Boolean IsOn; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPARTIALFLIPDEVICESTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_754B0BBE37C74B55(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByPartialFlipDeviceState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByPartialFlipDeviceState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPARTIALFLIPDEVICESTATE_METHOD_4_754B0BBE37C74B55_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9B132C3FC9F78B70(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByPartialFlipDeviceState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByPartialFlipDeviceState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPARTIALFLIPDEVICESTATE_METHOD_4_9B132C3FC9F78B70_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4F21E8E9642AD374(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPartialFlipDeviceState*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPartialFlipDeviceState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPARTIALFLIPDEVICESTATE_METHOD_4_4F21E8E9642AD374_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B67B597A79A45B9B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPartialFlipDeviceState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPartialFlipDeviceState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPARTIALFLIPDEVICESTATE_METHOD_4_B67B597A79A45B9B_OFFSET))(a1, a2);
		}
	};
}
