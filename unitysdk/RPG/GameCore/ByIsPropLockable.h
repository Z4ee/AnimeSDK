#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISPROPLOCKABLE_METHOD_4_4701642148B09233_OFFSET UNITYSDK_OFFSET(0x1CF44910)
#define RPG_GAMECORE_BYISPROPLOCKABLE_METHOD_4_4714E52F16963F71_OFFSET UNITYSDK_OFFSET(0x1CF44B50)
#define RPG_GAMECORE_BYISPROPLOCKABLE_METHOD_4_5FF8C229BA3FE030_OFFSET UNITYSDK_OFFSET(0x1CF44AF0)
#define RPG_GAMECORE_BYISPROPLOCKABLE_METHOD_4_8548192C0622AC0E_OFFSET UNITYSDK_OFFSET(0x1CF44870)
#define RPG_GAMECORE_BYISPROPLOCKABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF448D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsPropLockable_TypeDefinitionIndex = 19957;

	class ByIsPropLockable : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Boolean UseRaycast; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISPROPLOCKABLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8548192C0622AC0E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsPropLockable*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsPropLockable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISPROPLOCKABLE_METHOD_4_8548192C0622AC0E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4701642148B09233(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsPropLockable* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsPropLockable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISPROPLOCKABLE_METHOD_4_4701642148B09233_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5FF8C229BA3FE030(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsPropLockable*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsPropLockable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISPROPLOCKABLE_METHOD_4_5FF8C229BA3FE030_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4714E52F16963F71(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsPropLockable* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsPropLockable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISPROPLOCKABLE_METHOD_4_4714E52F16963F71_OFFSET))(a1, a2);
		}
	};
}
