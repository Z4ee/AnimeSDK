#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowPieceBlendMode.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_SHOWNPCMULTIBODYPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x115E8740)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ShowNpcMultiBodyParam_TypeDefinitionIndex = 47243;

	class ShowNpcMultiBodyParam : public ::System::Object
	{
	public:
		::System::String* TextureSheet; // 0x10
		::System::String* RefTextureSheet; // 0x18
		::System::Nullable_1<::MoleMole::HollowPieceBlendMode> BlendMode; // 0x20
		::System::Boolean UseAsset; // 0x28
		::System::Boolean NeedUseOffset; // 0x29
		::System::Boolean ClearSwitchEffectIfAnim; // 0x2A
		::System::Int32 ScreenIndex; // 0x2C
		::System::Int32 SpecialScreenLayerTransparent; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SHOWNPCMULTIBODYPARAM__CTOR_OFFSET))(this);
		}
	};
}
