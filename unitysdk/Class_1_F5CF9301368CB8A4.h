#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ItemConfig; }

#define CLASS_1_F5CF9301368CB8A4_COMPARE_OFFSET UNITYSDK_OFFSET(0x136B6150)
#define CLASS_1_F5CF9301368CB8A4__CTOR_OFFSET UNITYSDK_OFFSET(0x136B6220)

inline static constexpr unsigned int Class_1_F5CF9301368CB8A4_TypeDefinitionIndex = 57689;

class Class_1_F5CF9301368CB8A4 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F5CF9301368CB8A4__CTOR_OFFSET))(this);
	}

	::System::Int32 Compare(::RPG::GameCore::ItemConfig* a1, ::RPG::GameCore::ItemConfig* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::ItemConfig*, ::RPG::GameCore::ItemConfig*))((::PBYTE)hIl2Cpp + CLASS_1_F5CF9301368CB8A4_COMPARE_OFFSET))(this, a1, a2);
	}
};
