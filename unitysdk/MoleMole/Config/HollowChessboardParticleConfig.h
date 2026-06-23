#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class HollowChessboardParticleModuleConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_HOLLOWCHESSBOARDPARTICLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17D6A6B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HollowChessboardParticleConfig_TypeDefinitionIndex = 52467;

	class HollowChessboardParticleConfig : public ::System::Object
	{
	public:
		::System::String* Path; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::Config::HollowChessboardParticleModuleConfig*>* ModuleConfigs; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWCHESSBOARDPARTICLECONFIG__CTOR_OFFSET))(this);
		}
	};
}
