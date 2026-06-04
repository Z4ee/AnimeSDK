#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChimeraEvaluationGroupRow; }

#define CLASS_1_97E659ED8D5D259C_10_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xA46CCB0)
#define CLASS_1_97E659ED8D5D259C_10_METHOD_1_259B533085E399D3_OFFSET UNITYSDK_OFFSET(0xA46CCD0)
#define CLASS_1_97E659ED8D5D259C_10_METHOD_1_422526EA35B40460_OFFSET UNITYSDK_OFFSET(0xA46CD40)
#define CLASS_1_97E659ED8D5D259C_10_METHOD_1_B8FF86B5386F944C_OFFSET UNITYSDK_OFFSET(0xA46CC40)
#define CLASS_1_97E659ED8D5D259C_10_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0xA46CCC0)
#define CLASS_1_97E659ED8D5D259C_10__CTOR_OFFSET UNITYSDK_OFFSET(0xA46CCA0)

inline static constexpr unsigned int Class_1_97E659ED8D5D259C_10_TypeDefinitionIndex = 59427;

class Class_1_97E659ED8D5D259C_10 : public ::System::Object
{
public:
	::System::UInt32 _GroupID_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_10__CTOR_OFFSET))(this);
	}

	static ::Class_1_97E659ED8D5D259C_10* Method_1_B8FF86B5386F944C(::System::UInt32 a1)
	{
		return ((::Class_1_97E659ED8D5D259C_10*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_10_METHOD_1_B8FF86B5386F944C_OFFSET))(a1);
	}

	::System::UInt32 get_GroupID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_10_GET_GROUPID_OFFSET))(this);
	}

	::System::Void set_GroupID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_10_SET_GROUPID_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_259B533085E399D3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_10_METHOD_1_259B533085E399D3_OFFSET))(this);
	}

	::RPG::GameCore::ChimeraEvaluationGroupRow* Method_1_422526EA35B40460()
	{
		return ((::RPG::GameCore::ChimeraEvaluationGroupRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_10_METHOD_1_422526EA35B40460_OFFSET))(this);
	}
};
