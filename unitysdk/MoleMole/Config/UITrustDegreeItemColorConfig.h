#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace MoleMole::Config { class UITrustDegreeItemColorConfig_ColorConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_UITRUSTDEGREEITEMCOLORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x11CB8A60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int UITrustDegreeItemColorConfig_TypeDefinitionIndex = 59934;

	class UITrustDegreeItemColorConfig : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::UITrustDegreeItemColorConfig_ColorConfig*>* ColorConfigs; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UITRUSTDEGREEITEMCOLORCONFIG__CTOR_OFFSET))(this);
		}
	};
}
