#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

namespace RPG::Client { class MaterialSwitchBehavior; }
namespace RPG::Client { class MaterialSwitchMonoPlugin_MatPathConfig; }
namespace RPG::Client { class MaterialSwitchMonoPlugin_MaterialBlock; }

#define RPG_CLIENT_MATERIALSWITCHMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x9B7DB00)

namespace RPG::Client
{
	inline static constexpr unsigned int MaterialSwitchMonoPlugin_TypeDefinitionIndex = 57926;

	class MaterialSwitchMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::MaterialSwitchBehavior*>
	{
	public:
		::System::Int32 TargetMatBlockAmount; // 0x30
		::Il2CppArray<::RPG::Client::MaterialSwitchMonoPlugin_MaterialBlock*>* TargetMatBlocks; // 0x38
		::System::Int32 MatConfigAmount; // 0x40
		::Il2CppArray<::RPG::Client::MaterialSwitchMonoPlugin_MatPathConfig*>* MatPathConfigs; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSWITCHMONOPLUGIN__CTOR_OFFSET))(this);
		}
	};
}
