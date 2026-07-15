#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYLOCALPLAYERISFAKEAVATAR_METHOD_4_18B9B03C65D0FD31_OFFSET UNITYSDK_OFFSET(0x1B2ADAE0)
#define RPG_GAMECORE_BYLOCALPLAYERISFAKEAVATAR_METHOD_4_3FCDE4EB9CCA8204_OFFSET UNITYSDK_OFFSET(0x1B2ADC60)
#define RPG_GAMECORE_BYLOCALPLAYERISFAKEAVATAR_METHOD_4_72D1198EC2C9203A_OFFSET UNITYSDK_OFFSET(0x1B2ADB20)
#define RPG_GAMECORE_BYLOCALPLAYERISFAKEAVATAR_METHOD_4_FFDEC79F3D2E5F85_OFFSET UNITYSDK_OFFSET(0x1B2ADC90)
#define RPG_GAMECORE_BYLOCALPLAYERISFAKEAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2ADB10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByLocalPlayerIsFakeAvatar_TypeDefinitionIndex = 19800;

	class ByLocalPlayerIsFakeAvatar : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLOCALPLAYERISFAKEAVATAR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_18B9B03C65D0FD31(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByLocalPlayerIsFakeAvatar*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByLocalPlayerIsFakeAvatar*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLOCALPLAYERISFAKEAVATAR_METHOD_4_18B9B03C65D0FD31_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_72D1198EC2C9203A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByLocalPlayerIsFakeAvatar* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByLocalPlayerIsFakeAvatar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLOCALPLAYERISFAKEAVATAR_METHOD_4_72D1198EC2C9203A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3FCDE4EB9CCA8204(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByLocalPlayerIsFakeAvatar*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByLocalPlayerIsFakeAvatar*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLOCALPLAYERISFAKEAVATAR_METHOD_4_3FCDE4EB9CCA8204_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FFDEC79F3D2E5F85(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByLocalPlayerIsFakeAvatar* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByLocalPlayerIsFakeAvatar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLOCALPLAYERISFAKEAVATAR_METHOD_4_FFDEC79F3D2E5F85_OFFSET))(a1, a2);
		}
	};
}
