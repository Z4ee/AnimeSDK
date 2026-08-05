#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class HollowChessboardParticleModuleConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_HOLLOWCHESSBOARDPARTICLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x172BB9D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HollowChessboardParticleConfig_TypeDefinitionIndex = 47263;

	class HollowChessboardParticleConfig : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::HollowChessboardParticleModuleConfig*>* ModuleConfigs; // 0x10
		::System::String* Path; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWCHESSBOARDPARTICLECONFIG__CTOR_OFFSET))(this);
		}
	};
}
