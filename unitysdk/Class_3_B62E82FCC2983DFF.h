#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TutorialChimeraBattlePauseGameLock; }

#define CLASS_3_B62E82FCC2983DFF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCC91860)
#define CLASS_3_B62E82FCC2983DFF_METHOD_3_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0xCC917D0)
#define CLASS_3_B62E82FCC2983DFF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCC91780)
#define CLASS_3_B62E82FCC2983DFF__CTOR_OFFSET UNITYSDK_OFFSET(0xCC91750)

inline static constexpr unsigned int Class_3_B62E82FCC2983DFF_TypeDefinitionIndex = 58817;

class Class_3_B62E82FCC2983DFF : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TutorialChimeraBattlePauseGameLock*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TutorialChimeraBattlePauseGameLock* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TutorialChimeraBattlePauseGameLock*))((::PBYTE)hIl2Cpp + CLASS_3_B62E82FCC2983DFF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B62E82FCC2983DFF_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B62E82FCC2983DFF_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_3_937F8473216A3162()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B62E82FCC2983DFF_METHOD_3_937F8473216A3162_OFFSET))(this);
	}
};
