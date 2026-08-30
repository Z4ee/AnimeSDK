#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F569924B789A739A.h"
#include "unitysdk/System/Exception.h"

#define CLASS_2_ECFFE2D95FB9D2F9_GET_MAINMISSIONID_OFFSET UNITYSDK_OFFSET(0x18F72210)
#define CLASS_2_ECFFE2D95FB9D2F9_GET_RETCODE_OFFSET UNITYSDK_OFFSET(0x18F72220)
#define CLASS_2_ECFFE2D95FB9D2F9__CTOR_OFFSET UNITYSDK_OFFSET(0x18F72110)

inline static constexpr unsigned int Class_2_ECFFE2D95FB9D2F9_TypeDefinitionIndex = 66206;

class Class_2_ECFFE2D95FB9D2F9 : public ::System::Exception
{
public:
	::Enum_3_F569924B789A739A _Retcode_k__BackingField; // 0x88
	::System::UInt32 _MainMissionID_k__BackingField; // 0x8C

	::System::Void _ctor(::System::UInt32 a1, ::Enum_3_F569924B789A739A a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Enum_3_F569924B789A739A))((::PBYTE)hIl2Cpp + CLASS_2_ECFFE2D95FB9D2F9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::UInt32 get_MainMissionID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ECFFE2D95FB9D2F9_GET_MAINMISSIONID_OFFSET))(this);
	}

	::Enum_3_F569924B789A739A get_Retcode()
	{
		return ((::Enum_3_F569924B789A739A(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ECFFE2D95FB9D2F9_GET_RETCODE_OFFSET))(this);
	}
};
