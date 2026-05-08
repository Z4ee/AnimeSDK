#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGATTACKDISTANCEATTENUATION__CTOR_OFFSET UNITYSDK_OFFSET(0x11025690)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAttackDistanceAttenuation_TypeDefinitionIndex = 82479;

	class ConfigAttackDistanceAttenuation : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationCurve*>* Curves; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGATTACKDISTANCEATTENUATION__CTOR_OFFSET))(this);
		}
	};
}
