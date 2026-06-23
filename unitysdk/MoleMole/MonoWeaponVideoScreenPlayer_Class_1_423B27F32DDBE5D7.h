#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class VideoScreenPlayData;
namespace MoleMole { class IVideoPlayer; }
namespace MoleMole { class MonoWeaponVideoScreenPlayer; }
namespace MoleMole { class ScreenPlayer; }

#define MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_CLASS_1_423B27F32DDBE5D7_METHOD_1_14057E65D2C9824C_OFFSET UNITYSDK_OFFSET(0x16423050)
#define MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_CLASS_1_423B27F32DDBE5D7_METHOD_1_57D5ED2C4C06D908_OFFSET UNITYSDK_OFFSET(0x16422F30)
#define MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_CLASS_1_423B27F32DDBE5D7_METHOD_1_DC715239B8B98D9C_OFFSET UNITYSDK_OFFSET(0x16422F70)
#define MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_CLASS_1_423B27F32DDBE5D7_METHOD_1_F9E46980478DCFE2_OFFSET UNITYSDK_OFFSET(0x16422F60)
#define MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_CLASS_1_423B27F32DDBE5D7__CTOR_OFFSET UNITYSDK_OFFSET(0x16422F20)

namespace MoleMole
{
	inline static constexpr unsigned int MonoWeaponVideoScreenPlayer_Class_1_423B27F32DDBE5D7_TypeDefinitionIndex = 85781;

	class MonoWeaponVideoScreenPlayer_Class_1_423B27F32DDBE5D7 : public ::System::Object
	{
	public:
		::MoleMole::MonoWeaponVideoScreenPlayer* Field_1_3; // 0x10
		::MoleMole::ScreenPlayer* Field_1_1; // 0x18
		::VideoScreenPlayData* Field_1_2; // 0x20
		::System::Boolean Field_1_0; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_CLASS_1_423B27F32DDBE5D7__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_57D5ED2C4C06D908()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_CLASS_1_423B27F32DDBE5D7_METHOD_1_57D5ED2C4C06D908_OFFSET))(this);
		}

		::System::Void Method_1_F9E46980478DCFE2(::MoleMole::IVideoPlayer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_CLASS_1_423B27F32DDBE5D7_METHOD_1_F9E46980478DCFE2_OFFSET))(this, a1);
		}

		::System::Void Method_1_DC715239B8B98D9C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_CLASS_1_423B27F32DDBE5D7_METHOD_1_DC715239B8B98D9C_OFFSET))(this);
		}

		::System::Void Method_1_14057E65D2C9824C(::MoleMole::IVideoPlayer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_CLASS_1_423B27F32DDBE5D7_METHOD_1_14057E65D2C9824C_OFFSET))(this, a1);
		}
	};
}
