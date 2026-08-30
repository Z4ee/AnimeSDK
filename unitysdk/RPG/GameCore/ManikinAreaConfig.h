#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MANIKINAREACONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D21E410)
#define RPG_GAMECORE_MANIKINAREACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D21E780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ManikinAreaConfig_TypeDefinitionIndex = 18742;

	class ManikinAreaConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::String* AreaPrefabPath; // 0x18
		::System::String* EnviroProfile; // 0x20
		::System::String* CameraAnchorRootPath; // 0x28
		::System::String* ModelAnchorRootPath; // 0x30
		::System::String* LookAnchorRootPath; // 0x38
		::System::String* AreaAnimatorPath; // 0x40
		::System::Single MainLightDirOffsetX; // 0x48
		::System::Single MainLightDirOffsetY; // 0x4C
		::System::Single EidolonShadowDistance; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MANIKINAREACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ManikinAreaConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ManikinAreaConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MANIKINAREACONFIG_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
