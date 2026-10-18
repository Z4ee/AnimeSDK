#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class PropSetupUITrigger; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_7BCD0A1BCF0424CF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB9BA290)
#define CLASS_3_7BCD0A1BCF0424CF_METHOD_3_633D5E1146938B41_OFFSET UNITYSDK_OFFSET(0xB9B9BD0)
#define CLASS_3_7BCD0A1BCF0424CF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB9B9F00)
#define CLASS_3_7BCD0A1BCF0424CF__CTOR_OFFSET UNITYSDK_OFFSET(0xB9B9BA0)

inline static constexpr unsigned int Class_3_7BCD0A1BCF0424CF_TypeDefinitionIndex = 58356;

class Class_3_7BCD0A1BCF0424CF : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PropSetupUITrigger*>
{
public:
	::RPG::GameCore::PropComponent* PEDKDCGPHAM; // 0x28
	::System::Boolean OMOOBJJFMFH; // 0x30

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
};
