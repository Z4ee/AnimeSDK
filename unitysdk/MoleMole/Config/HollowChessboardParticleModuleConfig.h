#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0AC327AA661D91B2;
namespace MoleMole::HollowChessboard { class HollowChessboardEffectEventBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ParticleSystem; }

#define MOLEMOLE_CONFIG_HOLLOWCHESSBOARDPARTICLEMODULECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x157CD4D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HollowChessboardParticleModuleConfig_TypeDefinitionIndex = 64339;

	class HollowChessboardParticleModuleConfig : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowChessboardEffectEventBase*>* EffectEvents; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWCHESSBOARDPARTICLEMODULECONFIG__CTOR_OFFSET))(this);
		}
	};
}
