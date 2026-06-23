#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigInLevelCustomized; }
namespace System { class Action; }

#define CLASS_1_56FC5342C3EBE897_CLASS_1_E69376EDAD4F7AB0_METHOD_1_F553522F8AD0FD69_OFFSET UNITYSDK_OFFSET(0x12E0E210)
#define CLASS_1_56FC5342C3EBE897_CLASS_1_E69376EDAD4F7AB0__CTOR_OFFSET UNITYSDK_OFFSET(0x12E0E0C0)

inline static constexpr unsigned int Class_1_56FC5342C3EBE897_Class_1_E69376EDAD4F7AB0_TypeDefinitionIndex = 84518;

class Class_1_56FC5342C3EBE897_Class_1_E69376EDAD4F7AB0 : public ::System::Object
{
public:
	::Foundation::AssetPath Field_1_1; // 0x10
	::System::Action* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56FC5342C3EBE897_CLASS_1_E69376EDAD4F7AB0__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F553522F8AD0FD69(::MoleMole::ConfigInLevelCustomized* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigInLevelCustomized*))((::PBYTE)hIl2Cpp + CLASS_1_56FC5342C3EBE897_CLASS_1_E69376EDAD4F7AB0_METHOD_1_F553522F8AD0FD69_OFFSET))(this, a1);
	}
};
