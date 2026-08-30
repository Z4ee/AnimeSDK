#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DebateUIType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DebateTestimonySetting; }
namespace System { class String; }

#define RPG_GAMECORE_DEBATEINITIALIZE_METHOD_3_67E9AE06E084C096_OFFSET UNITYSDK_OFFSET(0x1D80FE90)
#define RPG_GAMECORE_DEBATEINITIALIZE_METHOD_3_DF1CE82327C7B358_OFFSET UNITYSDK_OFFSET(0x1D80FE40)
#define RPG_GAMECORE_DEBATEINITIALIZE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D80FE80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DebateInitialize_TypeDefinitionIndex = 21682;

	class DebateInitialize : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* TestimonyTimelinePath; // 0x18
		::System::Boolean CanFail; // 0x20
		::System::Int32 FailChangce; // 0x24
		::System::String* FailCustomString; // 0x28
		::System::Boolean ShowStartToast; // 0x30
		::Il2CppArray<::RPG::GameCore::DebateTestimonySetting*>* TestimonySettingList; // 0x38
		::RPG::GameCore::DebateUIType UIType; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEBATEINITIALIZE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DF1CE82327C7B358(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DebateInitialize*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DebateInitialize*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEBATEINITIALIZE_METHOD_3_DF1CE82327C7B358_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_67E9AE06E084C096(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DebateInitialize* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DebateInitialize*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEBATEINITIALIZE_METHOD_3_67E9AE06E084C096_OFFSET))(a1, a2);
		}
	};
}
