#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETAVATARDEPART_METHOD_3_A8D0DA75C448B4AD_OFFSET UNITYSDK_OFFSET(0x1C2D3430)
#define RPG_GAMECORE_SETAVATARDEPART_METHOD_3_F3787260AF520371_OFFSET UNITYSDK_OFFSET(0x1C2D3390)
#define RPG_GAMECORE_SETAVATARDEPART__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2D33F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetAvatarDepart_TypeDefinitionIndex = 21925;

	class SetAvatarDepart : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IsDepart; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETAVATARDEPART__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F3787260AF520371(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAvatarDepart*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAvatarDepart*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETAVATARDEPART_METHOD_3_F3787260AF520371_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A8D0DA75C448B4AD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAvatarDepart* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAvatarDepart*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETAVATARDEPART_METHOD_3_A8D0DA75C448B4AD_OFFSET))(a1, a2);
		}
	};
}
