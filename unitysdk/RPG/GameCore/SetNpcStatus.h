#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NPCStatus.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETNPCSTATUS_METHOD_3_21595726220D5F0F_OFFSET UNITYSDK_OFFSET(0x1C604920)
#define RPG_GAMECORE_SETNPCSTATUS_METHOD_3_48E9B685014A6A8D_OFFSET UNITYSDK_OFFSET(0x1C6049A0)
#define RPG_GAMECORE_SETNPCSTATUS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C604970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetNpcStatus_TypeDefinitionIndex = 19557;

	class SetNpcStatus : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::NPCStatus Status; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETNPCSTATUS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_21595726220D5F0F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetNpcStatus*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetNpcStatus*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETNPCSTATUS_METHOD_3_21595726220D5F0F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_48E9B685014A6A8D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetNpcStatus* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetNpcStatus*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETNPCSTATUS_METHOD_3_48E9B685014A6A8D_OFFSET))(a1, a2);
		}
	};
}
