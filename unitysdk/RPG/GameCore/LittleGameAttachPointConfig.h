#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LittleGameAttachPointInfo; }

#define RPG_GAMECORE_LITTLEGAMEATTACHPOINTCONFIG_METHOD_2_B910B4E571CB8078_OFFSET UNITYSDK_OFFSET(0x19897C70)
#define RPG_GAMECORE_LITTLEGAMEATTACHPOINTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19897D30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAttachPointConfig_TypeDefinitionIndex = 17942;

	class LittleGameAttachPointConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::LittleGameAttachPointInfo*>* AttachPoints; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEATTACHPOINTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_B910B4E571CB8078(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAttachPointConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAttachPointConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEATTACHPOINTCONFIG_METHOD_2_B910B4E571CB8078_OFFSET))(a1, a2);
		}
	};
}
