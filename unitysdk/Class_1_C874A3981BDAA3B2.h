#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"

class Class_3_09C6D749A1B6BB3E;
class Class_3_757A5862D4BBEE41;
class Class_3_AF7A56E03A4D3952;
class Class_3_DFD5D1FDB9D2A4AC;
namespace MoleMole { class MonoFollowJointMoveElement; }

#define CLASS_1_C874A3981BDAA3B2_METHOD_1_2A0F87BBFF6387F7_OFFSET UNITYSDK_OFFSET(0x13D1FB70)
#define CLASS_1_C874A3981BDAA3B2_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13D1FAF0)
#define CLASS_1_C874A3981BDAA3B2_METHOD_1_F24F558B5CA74D10_OFFSET UNITYSDK_OFFSET(0x13D1FC00)
#define CLASS_1_C874A3981BDAA3B2__CTOR_OFFSET UNITYSDK_OFFSET(0x13D1FAE0)

inline static constexpr unsigned int Class_1_C874A3981BDAA3B2_TypeDefinitionIndex = 44699;

class Class_1_C874A3981BDAA3B2 : public ::System::Object
{
public:
	::Class_3_757A5862D4BBEE41* Field_1_4; // 0x10
	::Class_3_DFD5D1FDB9D2A4AC* Field_1_2; // 0x18
	::MoleMole::MonoFollowJointMoveElement* Field_1_6; // 0x20
	::Class_3_09C6D749A1B6BB3E* Field_1_3; // 0x28
	::Class_3_AF7A56E03A4D3952* Field_1_1; // 0x30
	::UnityEngine::Quaternion Field_1_10; // 0x38
	::System::Int32 Field_1_7; // 0x48
	::UnityEngine::Quaternion Field_1_11; // 0x4C
	::System::UInt32 Field_1_0; // 0x5C
	::System::Int32 Field_1_9; // 0x60
	::System::Boolean Field_1_5; // 0x64
	::System::Boolean Field_1_8; // 0x65
	::System::Boolean Field_1_12; // 0x66

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C874A3981BDAA3B2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C874A3981BDAA3B2_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	static ::Class_1_C874A3981BDAA3B2* Method_1_2A0F87BBFF6387F7()
	{
		return ((::Class_1_C874A3981BDAA3B2*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C874A3981BDAA3B2_METHOD_1_2A0F87BBFF6387F7_OFFSET))();
	}

	static ::System::Void Method_1_F24F558B5CA74D10(::Class_1_C874A3981BDAA3B2* a1)
	{
		return ((::System::Void(*)(::Class_1_C874A3981BDAA3B2*))((::PBYTE)hIl2Cpp + CLASS_1_C874A3981BDAA3B2_METHOD_1_F24F558B5CA74D10_OFFSET))(a1);
	}
};
