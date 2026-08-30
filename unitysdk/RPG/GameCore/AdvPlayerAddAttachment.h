#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVPLAYERADDATTACHMENT_METHOD_3_25B7DA42DAD05BC0_OFFSET UNITYSDK_OFFSET(0x1D6C3140)
#define RPG_GAMECORE_ADVPLAYERADDATTACHMENT_METHOD_3_49B5809DBB3C10C9_OFFSET UNITYSDK_OFFSET(0x1D6C3180)
#define RPG_GAMECORE_ADVPLAYERADDATTACHMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C3170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvPlayerAddAttachment_TypeDefinitionIndex = 20811;

	class AdvPlayerAddAttachment : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* BindTargetType; // 0x18
		::RPG::GameCore::DynamicString* PrefabPath; // 0x20
		::RPG::GameCore::DynamicString* UniqueName; // 0x28
		::RPG::GameCore::DynamicString* AttachPoint; // 0x30
		::RPG::MVector3 AttachOffset; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPLAYERADDATTACHMENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_25B7DA42DAD05BC0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvPlayerAddAttachment*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvPlayerAddAttachment*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPLAYERADDATTACHMENT_METHOD_3_25B7DA42DAD05BC0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_49B5809DBB3C10C9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvPlayerAddAttachment* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvPlayerAddAttachment*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPLAYERADDATTACHMENT_METHOD_3_49B5809DBB3C10C9_OFFSET))(a1, a2);
		}
	};
}
