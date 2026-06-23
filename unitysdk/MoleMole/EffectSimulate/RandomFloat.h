#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class GUIContent; }

#define MOLEMOLE_EFFECTSIMULATE_RANDOMFLOAT_GET_CANUSERANDOM_OFFSET UNITYSDK_OFFSET(0x10D2A480)
#define MOLEMOLE_EFFECTSIMULATE_RANDOMFLOAT_METHOD_1_8B133A880F05B901_OFFSET UNITYSDK_OFFSET(0x10D2A500)
#define MOLEMOLE_EFFECTSIMULATE_RANDOMFLOAT_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10D2A560)
#define MOLEMOLE_EFFECTSIMULATE_RANDOMFLOAT_METHOD_1_D437D090E63BE8A7_OFFSET UNITYSDK_OFFSET(0x10D2A5B0)
#define MOLEMOLE_EFFECTSIMULATE_RANDOMFLOAT_SET_CANUSERANDOM_OFFSET UNITYSDK_OFFSET(0x10D2A490)
#define MOLEMOLE_EFFECTSIMULATE_RANDOMFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x10D2A4F0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int RandomFloat_TypeDefinitionIndex = 85674;

	class RandomFloat : public ::System::Object
	{
	public:
		// static const ::System::String* HOR_GROUP_NAME; // 0x0
		::System::Single baseVal; // 0x10
		::System::Single randomMaxVal; // 0x14
		::System::Boolean isRandom; // 0x18
		::System::Boolean _canUseRandom; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_RANDOMFLOAT__CTOR_OFFSET))(this);
		}

		::System::Boolean get_canUseRandom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_RANDOMFLOAT_GET_CANUSERANDOM_OFFSET))(this);
		}

		::System::Void set_canUseRandom(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_RANDOMFLOAT_SET_CANUSERANDOM_OFFSET))(this, a1);
		}

		::System::Single Method_1_8B133A880F05B901(::System::Single a1, ::UnityEngine::GUIContent* a2, ::System::Func_2<::UnityEngine::GUIContent*, ::System::Boolean>* a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::UnityEngine::GUIContent*, ::System::Func_2<::UnityEngine::GUIContent*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_RANDOMFLOAT_METHOD_1_8B133A880F05B901_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_RANDOMFLOAT_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Single Method_1_D437D090E63BE8A7(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_RANDOMFLOAT_METHOD_1_D437D090E63BE8A7_OFFSET))(this, a1);
		}
	};
}
