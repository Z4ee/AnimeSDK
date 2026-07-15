#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVNPCGOBACK_METHOD_3_89242B729E516C08_OFFSET UNITYSDK_OFFSET(0x1BE21B10)
#define RPG_GAMECORE_ADVNPCGOBACK_METHOD_3_A4DDE4BBCCF862BF_OFFSET UNITYSDK_OFFSET(0x1BE21B50)
#define RPG_GAMECORE_ADVNPCGOBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE21B40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvNPCGoback_TypeDefinitionIndex = 19210;

	class AdvNPCGoback : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TaskConfig* OnBeforeGoBack; // 0x18
		::RPG::GameCore::TaskConfig* OnBackToGuardPoint; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCGOBACK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_89242B729E516C08(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvNPCGoback*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvNPCGoback*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCGOBACK_METHOD_3_89242B729E516C08_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A4DDE4BBCCF862BF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvNPCGoback* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvNPCGoback*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCGOBACK_METHOD_3_A4DDE4BBCCF862BF_OFFSET))(a1, a2);
		}
	};
}
