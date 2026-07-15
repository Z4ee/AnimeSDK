#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_RESTOREWOLFBROPUZZLEARCHIVE_METHOD_3_0FB22ADA95E11849_OFFSET UNITYSDK_OFFSET(0x1D027E40)
#define RPG_GAMECORE_RESTOREWOLFBROPUZZLEARCHIVE_METHOD_3_EBB4847FB5756340_OFFSET UNITYSDK_OFFSET(0x1D027DF0)
#define RPG_GAMECORE_RESTOREWOLFBROPUZZLEARCHIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D027E30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestoreWolfBroPuzzleArchive_TypeDefinitionIndex = 21188;

	class RestoreWolfBroPuzzleArchive : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Single Timeout; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* SuccessSequence; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* FailSequence; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTOREWOLFBROPUZZLEARCHIVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EBB4847FB5756340(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RestoreWolfBroPuzzleArchive*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RestoreWolfBroPuzzleArchive*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTOREWOLFBROPUZZLEARCHIVE_METHOD_3_EBB4847FB5756340_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0FB22ADA95E11849(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RestoreWolfBroPuzzleArchive* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RestoreWolfBroPuzzleArchive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTOREWOLFBROPUZZLEARCHIVE_METHOD_3_0FB22ADA95E11849_OFFSET))(a1, a2);
		}
	};
}
