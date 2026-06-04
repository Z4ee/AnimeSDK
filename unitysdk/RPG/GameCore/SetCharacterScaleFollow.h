#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SETCHARACTERSCALEFOLLOW_METHOD_3_8A5F062CCEDF7D1E_OFFSET UNITYSDK_OFFSET(0x19C2FC40)
#define RPG_GAMECORE_SETCHARACTERSCALEFOLLOW_METHOD_3_F740E285785E6A55_OFFSET UNITYSDK_OFFSET(0x19C2FCC0)
#define RPG_GAMECORE_SETCHARACTERSCALEFOLLOW__CTOR_OFFSET UNITYSDK_OFFSET(0x19C2FC90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetCharacterScaleFollow_TypeDefinitionIndex = 21415;

	class SetCharacterScaleFollow : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* FollowTarget; // 0x20
		::System::String* FollowAttachPoint; // 0x28
		::System::Boolean OutlineWidthScaleFollow; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::Single, ::System::Single>* Multiplier; // 0x38
		::System::Boolean LateUpDateFollow; // 0x40
		::System::Boolean StopFollow; // 0x41

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERSCALEFOLLOW__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8A5F062CCEDF7D1E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetCharacterScaleFollow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetCharacterScaleFollow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERSCALEFOLLOW_METHOD_3_8A5F062CCEDF7D1E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F740E285785E6A55(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetCharacterScaleFollow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetCharacterScaleFollow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERSCALEFOLLOW_METHOD_3_F740E285785E6A55_OFFSET))(a1, a2);
		}
	};
}
