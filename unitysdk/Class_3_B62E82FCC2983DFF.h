#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TutorialChimeraBattlePauseGameLock; }

#define CLASS_3_B62E82FCC2983DFF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x98C5E00)
#define CLASS_3_B62E82FCC2983DFF_METHOD_3_3D2B77EBCAE390AB_OFFSET UNITYSDK_OFFSET(0x98C5D70)
#define CLASS_3_B62E82FCC2983DFF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x98C5D20)
#define CLASS_3_B62E82FCC2983DFF__CTOR_OFFSET UNITYSDK_OFFSET(0x98C5CF0)
#define CLASS_3_B62E82FCC2983DFF___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x98C5E70)

inline static constexpr unsigned int Class_3_B62E82FCC2983DFF_TypeDefinitionIndex = 54224;

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

	::System::Void Method_3_3D2B77EBCAE390AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B62E82FCC2983DFF_METHOD_3_3D2B77EBCAE390AB_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B62E82FCC2983DFF___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
