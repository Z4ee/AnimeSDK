#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PlayVoice_Sequence; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_2A4AD57469E0F266_DISPOSE_OFFSET UNITYSDK_OFFSET(0x95DACD0)
#define CLASS_3_2A4AD57469E0F266_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x95DAE20)
#define CLASS_3_2A4AD57469E0F266__CTOR_OFFSET UNITYSDK_OFFSET(0x95DACA0)
#define CLASS_3_2A4AD57469E0F266___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x95DB040)

inline static constexpr unsigned int Class_3_2A4AD57469E0F266_TypeDefinitionIndex = 51966;

class Class_3_2A4AD57469E0F266 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PlayVoice_Sequence*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayVoice_Sequence* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayVoice_Sequence*))((::PBYTE)hIl2Cpp + CLASS_3_2A4AD57469E0F266__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2A4AD57469E0F266_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2A4AD57469E0F266_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2A4AD57469E0F266___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
