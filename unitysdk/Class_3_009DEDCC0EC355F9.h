#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class StopCharacterAllSound; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_009DEDCC0EC355F9_DISPOSE_OFFSET UNITYSDK_OFFSET(0x105491B0)
#define CLASS_3_009DEDCC0EC355F9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x105491F0)
#define CLASS_3_009DEDCC0EC355F9__CTOR_OFFSET UNITYSDK_OFFSET(0x10549180)
#define CLASS_3_009DEDCC0EC355F9___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x105493D0)

inline static constexpr unsigned int Class_3_009DEDCC0EC355F9_TypeDefinitionIndex = 45396;

class Class_3_009DEDCC0EC355F9 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::StopCharacterAllSound*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StopCharacterAllSound* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StopCharacterAllSound*))((::PBYTE)hIl2Cpp + CLASS_3_009DEDCC0EC355F9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_009DEDCC0EC355F9_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_009DEDCC0EC355F9_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_009DEDCC0EC355F9___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
