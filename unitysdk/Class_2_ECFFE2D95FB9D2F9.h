#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_734E5242A20E505E.h"
#include "unitysdk/System/Exception.h"

#define CLASS_2_ECFFE2D95FB9D2F9_GET_MAINMISSIONID_OFFSET UNITYSDK_OFFSET(0x113F0EC0)
#define CLASS_2_ECFFE2D95FB9D2F9_GET_RETCODE_OFFSET UNITYSDK_OFFSET(0x113F0ED0)
#define CLASS_2_ECFFE2D95FB9D2F9__CTOR_OFFSET UNITYSDK_OFFSET(0x113F0DC0)

inline static constexpr unsigned int Class_2_ECFFE2D95FB9D2F9_TypeDefinitionIndex = 53781;

class Class_2_ECFFE2D95FB9D2F9 : public ::System::Exception
{
public:
	::Enum_3_734E5242A20E505E _Retcode_k__BackingField; // 0x88
	::System::UInt32 _MainMissionID_k__BackingField; // 0x8C

	::System::Void _ctor(::System::UInt32 a1, ::Enum_3_734E5242A20E505E a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Enum_3_734E5242A20E505E))((::PBYTE)hIl2Cpp + CLASS_2_ECFFE2D95FB9D2F9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::UInt32 get_MainMissionID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ECFFE2D95FB9D2F9_GET_MAINMISSIONID_OFFSET))(this);
	}

	::Enum_3_734E5242A20E505E get_Retcode()
	{
		return ((::Enum_3_734E5242A20E505E(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ECFFE2D95FB9D2F9_GET_RETCODE_OFFSET))(this);
	}
};
