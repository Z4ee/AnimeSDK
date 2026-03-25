#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDECATEGORYINFO_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x9A84D30)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDECATEGORYINFO_GET_NAMETEXT_OFFSET UNITYSDK_OFFSET(0x9A84D20)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDECATEGORYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9A84D10)

namespace RPG::Client::MVVM::Model
{
	inline static constexpr unsigned int TutorialGuideCategoryInfo_TypeDefinitionIndex = 61074;

	class TutorialGuideCategoryInfo : public ::System::Object
	{
	public:
		::System::String* _IconPath_k__BackingField; // 0x10
		::RPG::Client::TextID _NameText_k__BackingField; // 0x18

		::System::Void _ctor(::RPG::Client::TextID name, ::System::String* iconPath)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDECATEGORYINFO__CTOR_OFFSET))(this, name, iconPath);
		}

		::RPG::Client::TextID get_NameText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDECATEGORYINFO_GET_NAMETEXT_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDECATEGORYINFO_GET_ICONPATH_OFFSET))(this);
		}
	};
}
