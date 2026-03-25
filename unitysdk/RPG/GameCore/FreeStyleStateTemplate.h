#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FREESTYLESTATETEMPLATE_METHOD_2_B17A555C76331CAA_OFFSET UNITYSDK_OFFSET(0x172209E0)
#define RPG_GAMECORE_FREESTYLESTATETEMPLATE__CTOR_OFFSET UNITYSDK_OFFSET(0x17220D40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FreeStyleStateTemplate_TypeDefinitionIndex = 14930;

	class FreeStyleStateTemplate : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* StartMotion; // 0x10
		::System::Boolean IsLoop; // 0x18
		::System::Boolean CanTransitToState; // 0x19
		::System::Boolean CanUseInDS; // 0x1A
		::Il2CppArray<::System::String*>* EntranceFreeStyleIDList; // 0x20
		::System::String* SameAsMotionIDOnLoop; // 0x28
		::RPG::MVector2 Position; // 0x30
		::System::Boolean IsBase; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLESTATETEMPLATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_B17A555C76331CAA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FreeStyleStateTemplate*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FreeStyleStateTemplate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLESTATETEMPLATE_METHOD_2_B17A555C76331CAA_OFFSET))(a1, a2);
		}
	};
}
