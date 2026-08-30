#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimatorParameterType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_ANIMSETPARAMETER_METHOD_3_A6135AD40564B013_OFFSET UNITYSDK_OFFSET(0x1CE1CA30)
#define RPG_GAMECORE_ANIMSETPARAMETER_METHOD_3_A63EF374B969ECDB_OFFSET UNITYSDK_OFFSET(0x1CE1C8F0)
#define RPG_GAMECORE_ANIMSETPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE1C9A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AnimSetParameter_TypeDefinitionIndex = 20359;

	class AnimSetParameter : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* AnimatorPath; // 0x20
		::System::String* ParameterName; // 0x28
		::RPG::GameCore::AnimatorParameterType ParameterType; // 0x30
		::RPG::GameCore::DynamicFloat* Value; // 0x38
		::System::String* RequireHoyoTag; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMSETPARAMETER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A63EF374B969ECDB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AnimSetParameter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AnimSetParameter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMSETPARAMETER_METHOD_3_A63EF374B969ECDB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A6135AD40564B013(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AnimSetParameter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AnimSetParameter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMSETPARAMETER_METHOD_3_A6135AD40564B013_OFFSET))(a1, a2);
		}
	};
}
