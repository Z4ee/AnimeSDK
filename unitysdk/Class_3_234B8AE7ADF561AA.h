#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueByCopying; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_234B8AE7ADF561AA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13A57060)
#define CLASS_3_234B8AE7ADF561AA__CTOR_OFFSET UNITYSDK_OFFSET(0x13A57030)

inline static constexpr unsigned int Class_3_234B8AE7ADF561AA_TypeDefinitionIndex = 55423;

class Class_3_234B8AE7ADF561AA : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueByCopying*>
{
public:
	::RPG::GameCore::StringHash FIOAJCGJGMP; // 0x28
	::RPG::GameCore::StringHash FMGJOFHFJHI; // 0x2C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByCopying* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByCopying*))((::PBYTE)hIl2Cpp + CLASS_3_234B8AE7ADF561AA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_234B8AE7ADF561AA_ONTASKBEGIN_OFFSET))(this);
	}
};
