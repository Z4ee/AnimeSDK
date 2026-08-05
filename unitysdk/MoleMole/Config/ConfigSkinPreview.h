#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class InteractionCommonData; }
namespace MoleMole::Config { class SkinPreviewData; }

#define MOLEMOLE_CONFIG_CONFIGSKINPREVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4B6400)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSkinPreview_TypeDefinitionIndex = 58936;

	class ConfigSkinPreview : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::Il2CppArray<::MoleMole::Config::SkinPreviewData*>* AvatarConfigs; // 0x58
		::MoleMole::Config::InteractionCommonData* RotationCommonData; // 0x60
		::MoleMole::Config::InteractionCommonData* ScaleCommonData; // 0x68
		::MoleMole::Config::InteractionCommonData* YMoveCommonData; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSKINPREVIEW__CTOR_OFFSET))(this);
		}
	};
}
