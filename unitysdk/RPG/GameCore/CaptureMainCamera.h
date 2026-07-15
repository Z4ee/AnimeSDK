#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CAPTUREMAINCAMERA_METHOD_3_183206C4A3540575_OFFSET UNITYSDK_OFFSET(0x1B70A9D0)
#define RPG_GAMECORE_CAPTUREMAINCAMERA_METHOD_3_25C46B96D91B52BA_OFFSET UNITYSDK_OFFSET(0x1B70AA10)
#define RPG_GAMECORE_CAPTUREMAINCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B70AA00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CaptureMainCamera_TypeDefinitionIndex = 20038;

	class CaptureMainCamera : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* AreaName; // 0x18
		::System::String* AnchorName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAPTUREMAINCAMERA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_183206C4A3540575(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CaptureMainCamera*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CaptureMainCamera*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAPTUREMAINCAMERA_METHOD_3_183206C4A3540575_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_25C46B96D91B52BA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CaptureMainCamera* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CaptureMainCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAPTUREMAINCAMERA_METHOD_3_25C46B96D91B52BA_OFFSET))(a1, a2);
		}
	};
}
