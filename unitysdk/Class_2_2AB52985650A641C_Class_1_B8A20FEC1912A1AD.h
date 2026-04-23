#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define CLASS_2_2AB52985650A641C_CLASS_1_B8A20FEC1912A1AD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1194B190)
#define CLASS_2_2AB52985650A641C_CLASS_1_B8A20FEC1912A1AD_METHOD_1_F10A0D072D26C4BF_OFFSET UNITYSDK_OFFSET(0x1194B100)
#define CLASS_2_2AB52985650A641C_CLASS_1_B8A20FEC1912A1AD__CTOR_OFFSET UNITYSDK_OFFSET(0x1194A1F0)
#define CLASS_2_2AB52985650A641C_CLASS_1_B8A20FEC1912A1AD___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1194B220)

inline static constexpr unsigned int Class_2_2AB52985650A641C_Class_1_B8A20FEC1912A1AD_TypeDefinitionIndex = 52532;

class Class_2_2AB52985650A641C_Class_1_B8A20FEC1912A1AD : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::System::Boolean Field_1_6; // 0x18
	::System::Boolean Field_1_3; // 0x19
	::System::Boolean Field_1_4; // 0x1A
	::System::UInt32 Field_1_2; // 0x1C
	::UnityEngine::Vector3 Field_1_0; // 0x20
	::System::Single Field_1_8; // 0x2C
	::UnityEngine::Vector3 Field_1_5; // 0x30
	::UnityEngine::Vector3 Field_1_7; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AB52985650A641C_CLASS_1_B8A20FEC1912A1AD__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_F10A0D072D26C4BF()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AB52985650A641C_CLASS_1_B8A20FEC1912A1AD_METHOD_1_F10A0D072D26C4BF_OFFSET))(this);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AB52985650A641C_CLASS_1_B8A20FEC1912A1AD_GETHASHCODE_OFFSET))(this);
	}

	::System::Int32 __iFixBaseProxy_GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AB52985650A641C_CLASS_1_B8A20FEC1912A1AD___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
	}
};
