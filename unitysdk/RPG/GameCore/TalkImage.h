#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_TALKIMAGE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E161610)
#define RPG_GAMECORE_TALKIMAGE_PATHINVALID_OFFSET UNITYSDK_OFFSET(0x1E1619F0)
#define RPG_GAMECORE_TALKIMAGE_SHAREBYCOPY_OFFSET UNITYSDK_OFFSET(0x1E161950)
#define RPG_GAMECORE_TALKIMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E161940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TalkImage_TypeDefinitionIndex = 24113;

	class TalkImage : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean ImageState; // 0x10
		::System::Boolean IsPlayerInvolved; // 0x11
		::System::String* ImagePath; // 0x18
		::System::String* MaleImagePath; // 0x20
		::System::String* FemaleImagePath; // 0x28
		::System::String* MaterialPath; // 0x30
		::System::Single FadeTime; // 0x38
		::System::Boolean IsFadeBg; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKIMAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TalkImage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TalkImage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKIMAGE_FROMBINARY_OFFSET))(a1, a2);
		}

		::System::Object* ShareByCopy()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKIMAGE_SHAREBYCOPY_OFFSET))(this);
		}

		::System::Boolean PathInvalid(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKIMAGE_PATHINVALID_OFFSET))(this, a1);
		}
	};
}
