#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChimeraEndlessWorkRoundRow; }

#define CLASS_1_97E659ED8D5D259C_9_GET_ROUNDID_OFFSET UNITYSDK_OFFSET(0x137FF160)
#define CLASS_1_97E659ED8D5D259C_9_METHOD_1_5135E99239DDCA8C_OFFSET UNITYSDK_OFFSET(0x137FF180)
#define CLASS_1_97E659ED8D5D259C_9_METHOD_1_590C44034406DED0_OFFSET UNITYSDK_OFFSET(0x137FF1F0)
#define CLASS_1_97E659ED8D5D259C_9_METHOD_1_B8FF86B5386F944C_OFFSET UNITYSDK_OFFSET(0x137FF0F0)
#define CLASS_1_97E659ED8D5D259C_9_SET_ROUNDID_OFFSET UNITYSDK_OFFSET(0x137FF170)
#define CLASS_1_97E659ED8D5D259C_9__CTOR_OFFSET UNITYSDK_OFFSET(0x137FF150)

inline static constexpr unsigned int Class_1_97E659ED8D5D259C_9_TypeDefinitionIndex = 59360;

class Class_1_97E659ED8D5D259C_9 : public ::System::Object
{
public:
	::System::UInt32 _RoundID_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_9__CTOR_OFFSET))(this);
	}

	static ::Class_1_97E659ED8D5D259C_9* Method_1_B8FF86B5386F944C(::System::UInt32 a1)
	{
		return ((::Class_1_97E659ED8D5D259C_9*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_9_METHOD_1_B8FF86B5386F944C_OFFSET))(a1);
	}

	::System::UInt32 get_RoundID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_9_GET_ROUNDID_OFFSET))(this);
	}

	::System::Void set_RoundID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_9_SET_ROUNDID_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::UInt32>* Method_1_5135E99239DDCA8C()
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_9_METHOD_1_5135E99239DDCA8C_OFFSET))(this);
	}

	::RPG::GameCore::ChimeraEndlessWorkRoundRow* Method_1_590C44034406DED0()
	{
		return ((::RPG::GameCore::ChimeraEndlessWorkRoundRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_9_METHOD_1_590C44034406DED0_OFFSET))(this);
	}
};
