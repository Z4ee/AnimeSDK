#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISDAMAGETYPE_METHOD_4_1D06DA6B04E1A6E0_OFFSET UNITYSDK_OFFSET(0x1A8DE130)
#define RPG_GAMECORE_BYISDAMAGETYPE_METHOD_4_3238A7661D414756_OFFSET UNITYSDK_OFFSET(0x1A8DDF60)
#define RPG_GAMECORE_BYISDAMAGETYPE_METHOD_4_509D6A168933A9AE_OFFSET UNITYSDK_OFFSET(0x1A8DE160)
#define RPG_GAMECORE_BYISDAMAGETYPE_METHOD_4_8D7644842133EB57_OFFSET UNITYSDK_OFFSET(0x1A8DDF20)
#define RPG_GAMECORE_BYISDAMAGETYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8DDF50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsDamageType_TypeDefinitionIndex = 22675;

	class ByIsDamageType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* DamageTypeList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISDAMAGETYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8D7644842133EB57(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsDamageType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsDamageType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISDAMAGETYPE_METHOD_4_8D7644842133EB57_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3238A7661D414756(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsDamageType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsDamageType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISDAMAGETYPE_METHOD_4_3238A7661D414756_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1D06DA6B04E1A6E0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsDamageType*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsDamageType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISDAMAGETYPE_METHOD_4_1D06DA6B04E1A6E0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_509D6A168933A9AE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsDamageType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsDamageType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISDAMAGETYPE_METHOD_4_509D6A168933A9AE_OFFSET))(a1, a2);
		}
	};
}
