#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_LITTLEGAMEFIREEFFECTPARAMS_CLEAR_OFFSET UNITYSDK_OFFSET(0x1989F2E0)
#define RPG_GAMECORE_LITTLEGAMEFIREEFFECTPARAMS_METHOD_2_E5F06A70A47A9CE0_OFFSET UNITYSDK_OFFSET(0x1989EFE0)
#define RPG_GAMECORE_LITTLEGAMEFIREEFFECTPARAMS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1989F3E0)
#define RPG_GAMECORE_LITTLEGAMEFIREEFFECTPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1989F2D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameFireEffectParams_TypeDefinitionIndex = 17959;

	class LittleGameFireEffectParams : public ::RPG::GameCore::JsonConfig
	{
	public:
		static ::RPG::GameCore::LittleGameFireEffectParams** StaticGet__ProtoType()
		{
			return (::RPG::GameCore::LittleGameFireEffectParams**)Il2CppClass::FromTypeDefinitionIndex(LittleGameFireEffectParams_TypeDefinitionIndex)->GetStaticField(0x28500);
		}
		::System::Boolean SyncFire; // 0x10
		::System::String* EffectPath; // 0x18
		::System::String* EffectName; // 0x20
		::System::String* GlobalUniqueName; // 0x28
		::System::String* AttachPointName; // 0x30
		::System::Boolean PendIfArtNotReady; // 0x38
		::RPG::MVector3 PositionOffset; // 0x3C
		::RPG::MVector3 RotationOffset; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEFIREEFFECTPARAMS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEFIREEFFECTPARAMS__CCTOR_OFFSET))();
		}

		static ::System::Void Method_2_E5F06A70A47A9CE0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameFireEffectParams*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameFireEffectParams*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEFIREEFFECTPARAMS_METHOD_2_E5F06A70A47A9CE0_OFFSET))(a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEFIREEFFECTPARAMS_CLEAR_OFFSET))(this);
		}
	};
}
