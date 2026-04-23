#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_FE5DBB4B7DC1D249.h"
#include "unitysdk/System/Exception.h"

#define CLASS_2_ECFFE2D95FB9D2F9_GET_MAINMISSIONID_OFFSET UNITYSDK_OFFSET(0x8FD1A40)
#define CLASS_2_ECFFE2D95FB9D2F9_GET_RETCODE_OFFSET UNITYSDK_OFFSET(0x8FD1A50)
#define CLASS_2_ECFFE2D95FB9D2F9__CTOR_OFFSET UNITYSDK_OFFSET(0x8FD1940)

inline static constexpr unsigned int Class_2_ECFFE2D95FB9D2F9_TypeDefinitionIndex = 60925;

class Class_2_ECFFE2D95FB9D2F9 : public ::System::Exception
{
public:
	::System::UInt32 _MainMissionID_k__BackingField; // 0x88
	::Enum_3_FE5DBB4B7DC1D249 _Retcode_k__BackingField; // 0x8C

	::System::Void _ctor(::System::UInt32 a1, ::Enum_3_FE5DBB4B7DC1D249 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Enum_3_FE5DBB4B7DC1D249))((::PBYTE)hIl2Cpp + CLASS_2_ECFFE2D95FB9D2F9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::UInt32 get_MainMissionID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ECFFE2D95FB9D2F9_GET_MAINMISSIONID_OFFSET))(this);
	}

	::Enum_3_FE5DBB4B7DC1D249 get_Retcode()
	{
		return ((::Enum_3_FE5DBB4B7DC1D249(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ECFFE2D95FB9D2F9_GET_RETCODE_OFFSET))(this);
	}
};
