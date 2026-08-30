#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define CLASS_2_2A3EC717DD5B9846_CLASS_1_B8A20FEC1912A1AD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xBB8BF60)
#define CLASS_2_2A3EC717DD5B9846_CLASS_1_B8A20FEC1912A1AD_METHOD_1_F10A0D072D26C4BF_OFFSET UNITYSDK_OFFSET(0xBB8BED0)
#define CLASS_2_2A3EC717DD5B9846_CLASS_1_B8A20FEC1912A1AD__CTOR_OFFSET UNITYSDK_OFFSET(0xBB8AFF0)

inline static constexpr unsigned int Class_2_2A3EC717DD5B9846_Class_1_B8A20FEC1912A1AD_TypeDefinitionIndex = 57168;

class Class_2_2A3EC717DD5B9846_Class_1_B8A20FEC1912A1AD : public ::System::Object
{
public:
	::System::String* CDEEHGCEOKN; // 0x10
	::UnityEngine::Vector3 OBJEAOODKLK; // 0x18
	::System::Boolean KMPIPOGCGDD; // 0x24
	::System::Boolean LMHIBNLEOMD; // 0x25
	::System::Boolean JAMNDDOGHLA; // 0x26
	::UnityEngine::Vector3 ABIIKNGPAIE; // 0x28
	::System::Single NNFHBOPOLCO; // 0x34
	::UnityEngine::Vector3 BHCMCMADHBF; // 0x38
	::System::UInt32 LFIEOIKFGNG; // 0x44

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
