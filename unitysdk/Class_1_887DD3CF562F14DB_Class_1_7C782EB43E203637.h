#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigLockTargets; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_887DD3CF562F14DB_CLASS_1_7C782EB43E203637__CTOR_OFFSET UNITYSDK_OFFSET(0x19524620)

inline static constexpr unsigned int Class_1_887DD3CF562F14DB_Class_1_7C782EB43E203637_TypeDefinitionIndex = 41868;

class Class_1_887DD3CF562F14DB_Class_1_7C782EB43E203637 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigLockTargets*>* Field_1_0; // 0x10
	::System::Action* Field_1_2; // 0x18
	::System::Int32 Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_887DD3CF562F14DB_CLASS_1_7C782EB43E203637__CTOR_OFFSET))(this);
	}
};
