#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_PROPSETUPHITBOX_METHOD_3_038E2E800516BD94_OFFSET UNITYSDK_OFFSET(0x18C75A20)
#define RPG_GAMECORE_PROPSETUPHITBOX_METHOD_3_2BE445F52EE76510_OFFSET UNITYSDK_OFFSET(0x18C75B80)
#define RPG_GAMECORE_PROPSETUPHITBOX__CTOR_OFFSET UNITYSDK_OFFSET(0x18C75AE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropSetupHitBox_TypeDefinitionIndex = 19343;

	class PropSetupHitBox : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* ColliderRelativePath; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnBeHit; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETUPHITBOX__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_038E2E800516BD94(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropSetupHitBox*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropSetupHitBox*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETUPHITBOX_METHOD_3_038E2E800516BD94_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2BE445F52EE76510(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropSetupHitBox* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropSetupHitBox*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETUPHITBOX_METHOD_3_2BE445F52EE76510_OFFSET))(a1, a2);
		}
	};
}
