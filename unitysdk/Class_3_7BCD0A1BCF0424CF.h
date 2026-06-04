#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class PropSetupUITrigger; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_7BCD0A1BCF0424CF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA7D6D70)
#define CLASS_3_7BCD0A1BCF0424CF_METHOD_3_633D5E1146938B41_OFFSET UNITYSDK_OFFSET(0xA7D6710)
#define CLASS_3_7BCD0A1BCF0424CF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA7D6A40)
#define CLASS_3_7BCD0A1BCF0424CF__CTOR_OFFSET UNITYSDK_OFFSET(0xA7D66E0)
#define CLASS_3_7BCD0A1BCF0424CF___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA7D6EF0)

inline static constexpr unsigned int Class_3_7BCD0A1BCF0424CF_TypeDefinitionIndex = 54550;

class Class_3_7BCD0A1BCF0424CF : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PropSetupUITrigger*>
{
public:
	::RPG::GameCore::PropComponent* Field_3_0; // 0x28
	::System::Boolean Field_3_1; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropSetupUITrigger* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropSetupUITrigger*))((::PBYTE)hIl2Cpp + CLASS_3_7BCD0A1BCF0424CF__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::Client::TextID Method_3_633D5E1146938B41()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7BCD0A1BCF0424CF_METHOD_3_633D5E1146938B41_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7BCD0A1BCF0424CF_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7BCD0A1BCF0424CF_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7BCD0A1BCF0424CF___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
