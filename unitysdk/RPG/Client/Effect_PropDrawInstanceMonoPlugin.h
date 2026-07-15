#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace RPG::Client { class Effect_PropDrawInstanceBehavior; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EFFECT_PROPDRAWINSTANCEMONOPLUGIN_SETINSTANCEMATRICES_OFFSET UNITYSDK_OFFSET(0x15121110)
#define RPG_CLIENT_EFFECT_PROPDRAWINSTANCEMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x151211C0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_PropDrawInstanceMonoPlugin_TypeDefinitionIndex = 67381;

	class Effect_PropDrawInstanceMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::Effect_PropDrawInstanceBehavior*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PROPDRAWINSTANCEMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::System::Void SetInstanceMatrices(::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PROPDRAWINSTANCEMONOPLUGIN_SETINSTANCEMATRICES_OFFSET))(this, a1);
		}
	};
}
