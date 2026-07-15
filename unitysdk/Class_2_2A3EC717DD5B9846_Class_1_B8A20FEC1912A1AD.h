#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define CLASS_2_2A3EC717DD5B9846_CLASS_1_B8A20FEC1912A1AD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1763D400)
#define CLASS_2_2A3EC717DD5B9846_CLASS_1_B8A20FEC1912A1AD_METHOD_1_F10A0D072D26C4BF_OFFSET UNITYSDK_OFFSET(0x1763D370)
#define CLASS_2_2A3EC717DD5B9846_CLASS_1_B8A20FEC1912A1AD__CTOR_OFFSET UNITYSDK_OFFSET(0x1763C470)

inline static constexpr unsigned int Class_2_2A3EC717DD5B9846_Class_1_B8A20FEC1912A1AD_TypeDefinitionIndex = 54447;

class Class_2_2A3EC717DD5B9846_Class_1_B8A20FEC1912A1AD : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x1C
	::System::Boolean Field_1_3; // 0x1D
	::System::Boolean Field_1_4; // 0x1E
	::UnityEngine::Vector3 Field_1_5; // 0x20
	::System::UInt32 Field_1_6; // 0x2C
	::UnityEngine::Vector3 Field_1_7; // 0x30
	::UnityEngine::Vector3 Field_1_8; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2A3EC717DD5B9846_CLASS_1_B8A20FEC1912A1AD__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_F10A0D072D26C4BF()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2A3EC717DD5B9846_CLASS_1_B8A20FEC1912A1AD_METHOD_1_F10A0D072D26C4BF_OFFSET))(this);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2A3EC717DD5B9846_CLASS_1_B8A20FEC1912A1AD_GETHASHCODE_OFFSET))(this);
	}
};
