#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E38E804B6E56AD18.h"
#include "unitysdk/System/Exception.h"

#define CLASS_2_ECFFE2D95FB9D2F9_GET_MAINMISSIONID_OFFSET UNITYSDK_OFFSET(0x1384E9E0)
#define CLASS_2_ECFFE2D95FB9D2F9_GET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1384E9F0)
#define CLASS_2_ECFFE2D95FB9D2F9__CTOR_OFFSET UNITYSDK_OFFSET(0x1384E8E0)

inline static constexpr unsigned int Class_2_ECFFE2D95FB9D2F9_TypeDefinitionIndex = 61859;

class Class_2_ECFFE2D95FB9D2F9 : public ::System::Exception
{
public:
	::Enum_3_E38E804B6E56AD18 _Retcode_k__BackingField; // 0x88
	::System::UInt32 _MainMissionID_k__BackingField; // 0x8C

	::System::Void _ctor(::System::UInt32 a1, ::Enum_3_E38E804B6E56AD18 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Enum_3_E38E804B6E56AD18))((::PBYTE)hIl2Cpp + CLASS_2_ECFFE2D95FB9D2F9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::UInt32 get_MainMissionID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ECFFE2D95FB9D2F9_GET_MAINMISSIONID_OFFSET))(this);
	}

	::Enum_3_E38E804B6E56AD18 get_Retcode()
	{
		return ((::Enum_3_E38E804B6E56AD18(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ECFFE2D95FB9D2F9_GET_RETCODE_OFFSET))(this);
	}
};
