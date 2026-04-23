#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_RESTOREWOLFBROPUZZLEARCHIVE_METHOD_3_8AAF76DF1C633007_OFFSET UNITYSDK_OFFSET(0x18CB7300)
#define RPG_GAMECORE_RESTOREWOLFBROPUZZLEARCHIVE_METHOD_3_CCA50FCFC5990D0A_OFFSET UNITYSDK_OFFSET(0x18CB7390)
#define RPG_GAMECORE_RESTOREWOLFBROPUZZLEARCHIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x18CB7360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestoreWolfBroPuzzleArchive_TypeDefinitionIndex = 20853;

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

		static ::System::Void Method_3_8AAF76DF1C633007(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RestoreWolfBroPuzzleArchive*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RestoreWolfBroPuzzleArchive*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTOREWOLFBROPUZZLEARCHIVE_METHOD_3_8AAF76DF1C633007_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CCA50FCFC5990D0A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RestoreWolfBroPuzzleArchive* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RestoreWolfBroPuzzleArchive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTOREWOLFBROPUZZLEARCHIVE_METHOD_3_CCA50FCFC5990D0A_OFFSET))(a1, a2);
		}
	};
}
