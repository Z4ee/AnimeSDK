#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace MoleMole { class RTCameraSetting; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CHARACTERRTSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x12C53CF0)

namespace MoleMole
{
	inline static constexpr unsigned int CharacterRTSettings_TypeDefinitionIndex = 75879;

	class CharacterRTSettings : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::RTCameraSetting*>* m_CharacterRTSetting; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERRTSETTINGS__CTOR_OFFSET))(this);
		}
	};
}
