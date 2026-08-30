#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ESwitchHandGestureType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARESWITCHHANDGESTURETYPE_METHOD_4_716E189235F6C131_OFFSET UNITYSDK_OFFSET(0x1CF041D0)
#define RPG_GAMECORE_BYCOMPARESWITCHHANDGESTURETYPE_METHOD_4_C7FF4DBE28B3B838_OFFSET UNITYSDK_OFFSET(0x1CF04380)
#define RPG_GAMECORE_BYCOMPARESWITCHHANDGESTURETYPE_METHOD_4_DED45653BA1C9534_OFFSET UNITYSDK_OFFSET(0x1CF04190)
#define RPG_GAMECORE_BYCOMPARESWITCHHANDGESTURETYPE_METHOD_4_DF0AD549DD47F15F_OFFSET UNITYSDK_OFFSET(0x1CF043B0)
#define RPG_GAMECORE_BYCOMPARESWITCHHANDGESTURETYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF041C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareSwitchHandGestureType_TypeDefinitionIndex = 20716;

	class ByCompareSwitchHandGestureType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::ESwitchHandGestureType GestureType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESWITCHHANDGESTURETYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_DED45653BA1C9534(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareSwitchHandGestureType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareSwitchHandGestureType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESWITCHHANDGESTURETYPE_METHOD_4_DED45653BA1C9534_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_716E189235F6C131(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareSwitchHandGestureType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareSwitchHandGestureType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESWITCHHANDGESTURETYPE_METHOD_4_716E189235F6C131_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C7FF4DBE28B3B838(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSwitchHandGestureType*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSwitchHandGestureType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESWITCHHANDGESTURETYPE_METHOD_4_C7FF4DBE28B3B838_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DF0AD549DD47F15F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSwitchHandGestureType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSwitchHandGestureType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESWITCHHANDGESTURETYPE_METHOD_4_DF0AD549DD47F15F_OFFSET))(a1, a2);
		}
	};
}
