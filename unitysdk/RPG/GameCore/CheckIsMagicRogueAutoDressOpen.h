#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHECKISMAGICROGUEAUTODRESSOPEN_METHOD_3_12E206DD9F5ABBDF_OFFSET UNITYSDK_OFFSET(0x1E003290)
#define RPG_GAMECORE_CHECKISMAGICROGUEAUTODRESSOPEN_METHOD_3_B7A1BB06CC3389F0_OFFSET UNITYSDK_OFFSET(0x1E0032D0)
#define RPG_GAMECORE_CHECKISMAGICROGUEAUTODRESSOPEN__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0032C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CheckIsMagicRogueAutoDressOpen_TypeDefinitionIndex = 24016;

	class CheckIsMagicRogueAutoDressOpen : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnOpen; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnClose; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKISMAGICROGUEAUTODRESSOPEN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_12E206DD9F5ABBDF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CheckIsMagicRogueAutoDressOpen*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CheckIsMagicRogueAutoDressOpen*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKISMAGICROGUEAUTODRESSOPEN_METHOD_3_12E206DD9F5ABBDF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B7A1BB06CC3389F0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CheckIsMagicRogueAutoDressOpen* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CheckIsMagicRogueAutoDressOpen*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKISMAGICROGUEAUTODRESSOPEN_METHOD_3_B7A1BB06CC3389F0_OFFSET))(a1, a2);
		}
	};
}
