#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F27E25827C684939.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigGoalPath; }
namespace MoleMole::Config { class GoalPathTypeConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_8C089F2204A205A8_METHOD_1_1F1322F5E4291F9B_OFFSET UNITYSDK_OFFSET(0xFBE2630)
#define CLASS_1_8C089F2204A205A8_METHOD_1_49DFA39A30A44449_OFFSET UNITYSDK_OFFSET(0xFBE2410)
#define CLASS_1_8C089F2204A205A8_METHOD_1_502A81344CAEE4A4_OFFSET UNITYSDK_OFFSET(0xFBE2680)
#define CLASS_1_8C089F2204A205A8_METHOD_1_E438BC1DA2484869_OFFSET UNITYSDK_OFFSET(0xFBE22F0)

inline static constexpr unsigned int Class_1_8C089F2204A205A8_TypeDefinitionIndex = 69123;

class Class_1_8C089F2204A205A8 : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigGoalPath** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigGoalPath**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8C089F2204A205A8_TypeDefinitionIndex)->GetStaticField(0x3D350);
	}

	static ::System::Boolean Method_1_E438BC1DA2484869(::Enum_3_F27E25827C684939 a1, ::MoleMole::Config::GoalPathTypeConfig*& a2)
	{
		return ((::System::Boolean(*)(::Enum_3_F27E25827C684939, ::MoleMole::Config::GoalPathTypeConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_8C089F2204A205A8_METHOD_1_E438BC1DA2484869_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_49DFA39A30A44449(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_8C089F2204A205A8_METHOD_1_49DFA39A30A44449_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::ConfigGoalPath* Method_1_1F1322F5E4291F9B()
	{
		return ((::MoleMole::Config::ConfigGoalPath*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8C089F2204A205A8_METHOD_1_1F1322F5E4291F9B_OFFSET))();
	}

	static ::System::Void Method_1_502A81344CAEE4A4(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8C089F2204A205A8_METHOD_1_502A81344CAEE4A4_OFFSET))(a1, a2, a3, a4);
	}
};
