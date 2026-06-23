#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUITextStyle; }
namespace System { class Action; }

#define CLASS_1_EE931C7FF49A3400_CLASS_1_3678D74806AF01EC_METHOD_1_296FEDA526CE1976_OFFSET UNITYSDK_OFFSET(0x13348A90)
#define CLASS_1_EE931C7FF49A3400_CLASS_1_3678D74806AF01EC__CTOR_OFFSET UNITYSDK_OFFSET(0x13348870)

inline static constexpr unsigned int Class_1_EE931C7FF49A3400_Class_1_3678D74806AF01EC_TypeDefinitionIndex = 51326;

class Class_1_EE931C7FF49A3400_Class_1_3678D74806AF01EC : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE931C7FF49A3400_CLASS_1_3678D74806AF01EC__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_296FEDA526CE1976(::MoleMole::Config::ConfigUITextStyle* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUITextStyle*))((::PBYTE)hIl2Cpp + CLASS_1_EE931C7FF49A3400_CLASS_1_3678D74806AF01EC_METHOD_1_296FEDA526CE1976_OFFSET))(this, a1);
	}
};
