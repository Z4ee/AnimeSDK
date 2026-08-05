#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_5B2B40D74E0FB2CD_GET_REFCOUNT_OFFSET UNITYSDK_OFFSET(0x10B1A030)
#define CLASS_1_5B2B40D74E0FB2CD_ISUNUSED_OFFSET UNITYSDK_OFFSET(0x10B1A040)
#define CLASS_1_5B2B40D74E0FB2CD_RELEASE_OFFSET UNITYSDK_OFFSET(0x10B1A0D0)
#define CLASS_1_5B2B40D74E0FB2CD_RETAIN_OFFSET UNITYSDK_OFFSET(0x10B1A090)
#define CLASS_1_5B2B40D74E0FB2CD__CTOR_OFFSET UNITYSDK_OFFSET(0x10B1A110)

inline static constexpr unsigned int Class_1_5B2B40D74E0FB2CD_TypeDefinitionIndex = 76506;

class Class_1_5B2B40D74E0FB2CD : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B2B40D74E0FB2CD__CTOR_OFFSET))(this);
	}

	::System::Int32 get_RefCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B2B40D74E0FB2CD_GET_REFCOUNT_OFFSET))(this);
	}

	::System::Boolean IsUnused()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B2B40D74E0FB2CD_ISUNUSED_OFFSET))(this);
	}

	::System::Void Retain()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B2B40D74E0FB2CD_RETAIN_OFFSET))(this);
	}

	::System::Void Release()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B2B40D74E0FB2CD_RELEASE_OFFSET))(this);
	}
};
