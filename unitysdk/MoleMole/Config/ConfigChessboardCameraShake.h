#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;
namespace System { class String; }
namespace System::Collections { class IEnumerable; }

#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDCAMERASHAKE_GETSHAKETYPELISTVALUEDROPDOWN_OFFSET UNITYSDK_OFFSET(0xF97A010)
#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDCAMERASHAKE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0xF979F50)
#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDCAMERASHAKE__CTOR_OFFSET UNITYSDK_OFFSET(0xF97A270)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardCameraShake_TypeDefinitionIndex = 49184;

	class ConfigChessboardCameraShake : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::String* CameraShakeKey; // 0x18
		::System::Boolean SkipWait; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDCAMERASHAKE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDCAMERASHAKE_GETUIANIMATIONNODE_OFFSET))(this);
		}

		::System::Collections::IEnumerable* GetShakeTypeListValueDropDown()
		{
			return ((::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDCAMERASHAKE_GETSHAKETYPELISTVALUEDROPDOWN_OFFSET))(this);
		}
	};
}
