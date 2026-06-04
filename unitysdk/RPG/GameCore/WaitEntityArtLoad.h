#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_WAITENTITYARTLOAD_METHOD_3_04A79627B0DA1171_OFFSET UNITYSDK_OFFSET(0x19E545C0)
#define RPG_GAMECORE_WAITENTITYARTLOAD_METHOD_3_A5F2D35B64A8871D_OFFSET UNITYSDK_OFFSET(0x19E54540)
#define RPG_GAMECORE_WAITENTITYARTLOAD__CTOR_OFFSET UNITYSDK_OFFSET(0x19E54590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitEntityArtLoad_TypeDefinitionIndex = 20732;

	class WaitEntityArtLoad : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean GoNextImmediately; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITENTITYARTLOAD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A5F2D35B64A8871D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitEntityArtLoad*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitEntityArtLoad*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITENTITYARTLOAD_METHOD_3_A5F2D35B64A8871D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_04A79627B0DA1171(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitEntityArtLoad* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitEntityArtLoad*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITENTITYARTLOAD_METHOD_3_04A79627B0DA1171_OFFSET))(a1, a2);
		}
	};
}
