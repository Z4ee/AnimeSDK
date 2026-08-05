#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_E223907A17AC5B62.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"

class Class_3_09C6D749A1B6BB3E;
class Class_3_9CA249C88E9804C6;
class Class_3_AF7A56E03A4D3952;
class Class_3_C93CC3D2C2AC4067;
namespace MoleMole { class MonoFollowJointMoveElement; }

#define CLASS_1_C874A3981BDAA3B2_METHOD_1_2A0F87BBFF6387F7_OFFSET UNITYSDK_OFFSET(0x1665DA80)
#define CLASS_1_C874A3981BDAA3B2_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1665DA00)
#define CLASS_1_C874A3981BDAA3B2_METHOD_1_F24F558B5CA74D10_OFFSET UNITYSDK_OFFSET(0x1665D860)
#define CLASS_1_C874A3981BDAA3B2__CTOR_OFFSET UNITYSDK_OFFSET(0x1665D850)

inline static constexpr unsigned int Class_1_C874A3981BDAA3B2_TypeDefinitionIndex = 90492;

class Class_1_C874A3981BDAA3B2 : public ::System::Object
{
public:
	::Class_3_09C6D749A1B6BB3E* Field_1_5; // 0x10
	::Class_3_9CA249C88E9804C6* Field_1_4; // 0x18
	::Class_3_AF7A56E03A4D3952* Field_1_7; // 0x20
	::Class_3_C93CC3D2C2AC4067* Field_1_6; // 0x28
	::MoleMole::MonoFollowJointMoveElement* Field_1_10; // 0x30
	::System::Boolean Field_1_8; // 0x38
	::System::Boolean Field_1_11; // 0x39
	::System::Boolean Field_1_12; // 0x3A
	::System::Int32 Field_1_9; // 0x3C
	::System::UInt32 Field_1_0; // 0x40
	::UnityEngine::Quaternion Field_1_13; // 0x44
	::System::Int32 Field_1_15; // 0x54
	::Struct_2_E223907A17AC5B62 Field_1_14; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C874A3981BDAA3B2__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_F24F558B5CA74D10(::Class_1_C874A3981BDAA3B2* a1)
	{
		return ((::System::Void(*)(::Class_1_C874A3981BDAA3B2*))((::PBYTE)hIl2Cpp + CLASS_1_C874A3981BDAA3B2_METHOD_1_F24F558B5CA74D10_OFFSET))(a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C874A3981BDAA3B2_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	static ::Class_1_C874A3981BDAA3B2* Method_1_2A0F87BBFF6387F7()
	{
		return ((::Class_1_C874A3981BDAA3B2*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C874A3981BDAA3B2_METHOD_1_2A0F87BBFF6387F7_OFFSET))();
	}
};
