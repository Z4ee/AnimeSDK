#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGTRIDICEANIMATIONCURVEGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x172B3800)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigTriDiceAnimationCurveGroup_TypeDefinitionIndex = 55141;

	class ConfigTriDiceAnimationCurveGroup : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Quaternion>* Rotations; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* diceBone; // 0x18
		::System::String* clipPath; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIDICEANIMATIONCURVEGROUP__CTOR_OFFSET))(this);
		}
	};
}
