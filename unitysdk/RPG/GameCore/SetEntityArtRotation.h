#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETENTITYARTROTATION_METHOD_3_102B51D962C98A11_OFFSET UNITYSDK_OFFSET(0x1D4FC1F0)
#define RPG_GAMECORE_SETENTITYARTROTATION_METHOD_3_BE30D051E5F17D6E_OFFSET UNITYSDK_OFFSET(0x1D4FC080)
#define RPG_GAMECORE_SETENTITYARTROTATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4FC0C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetEntityArtRotation_TypeDefinitionIndex = 23482;

	class SetEntityArtRotation : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* AngleX; // 0x20
		::RPG::GameCore::DynamicFloat* AngleY; // 0x28
		::RPG::GameCore::DynamicFloat* AngleZ; // 0x30
		::System::String* Key; // 0x38
		::System::Boolean IsRevert; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENTITYARTROTATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BE30D051E5F17D6E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetEntityArtRotation*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetEntityArtRotation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENTITYARTROTATION_METHOD_3_BE30D051E5F17D6E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_102B51D962C98A11(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetEntityArtRotation* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetEntityArtRotation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENTITYARTROTATION_METHOD_3_102B51D962C98A11_OFFSET))(a1, a2);
		}
	};
}
