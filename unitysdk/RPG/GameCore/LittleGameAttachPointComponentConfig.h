#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LittleGameAttachPointConfig; }

#define RPG_GAMECORE_LITTLEGAMEATTACHPOINTCOMPONENTCONFIG_METHOD_3_CF0697026BA8C28D_OFFSET UNITYSDK_OFFSET(0x1DD66E20)
#define RPG_GAMECORE_LITTLEGAMEATTACHPOINTCOMPONENTCONFIG_METHOD_3_FD4698318389A24E_OFFSET UNITYSDK_OFFSET(0x1DD66E60)
#define RPG_GAMECORE_LITTLEGAMEATTACHPOINTCOMPONENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD66E50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAttachPointComponentConfig_TypeDefinitionIndex = 18646;

	class LittleGameAttachPointComponentConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean HasAttachPoint; // 0x10
		::RPG::GameCore::LittleGameAttachPointConfig* Config; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEATTACHPOINTCOMPONENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CF0697026BA8C28D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAttachPointComponentConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAttachPointComponentConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEATTACHPOINTCOMPONENTCONFIG_METHOD_3_CF0697026BA8C28D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FD4698318389A24E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAttachPointComponentConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAttachPointComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEATTACHPOINTCOMPONENTCONFIG_METHOD_3_FD4698318389A24E_OFFSET))(a1, a2);
		}
	};
}
