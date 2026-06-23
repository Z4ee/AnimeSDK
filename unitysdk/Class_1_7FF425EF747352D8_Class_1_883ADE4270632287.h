#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntitySkills; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7FF425EF747352D8_CLASS_1_883ADE4270632287__CTOR_OFFSET UNITYSDK_OFFSET(0x116D4510)

inline static constexpr unsigned int Class_1_7FF425EF747352D8_Class_1_883ADE4270632287_TypeDefinitionIndex = 45547;

class Class_1_7FF425EF747352D8_Class_1_883ADE4270632287 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntitySkills*>* Field_1_0; // 0x10
	::System::Action* Field_1_2; // 0x18
	::System::Int32 Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF425EF747352D8_CLASS_1_883ADE4270632287__CTOR_OFFSET))(this);
	}
};
