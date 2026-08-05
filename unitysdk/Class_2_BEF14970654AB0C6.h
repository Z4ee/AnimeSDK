#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/System/DateTime.h"

#define CLASS_2_BEF14970654AB0C6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12849510)
#define CLASS_2_BEF14970654AB0C6_METHOD_2_64501B5CB67A94C3_OFFSET UNITYSDK_OFFSET(0x128495D0)
#define CLASS_2_BEF14970654AB0C6_ONCREATE_OFFSET UNITYSDK_OFFSET(0x128493C0)
#define CLASS_2_BEF14970654AB0C6_UPDATE_OFFSET UNITYSDK_OFFSET(0x12849550)
#define CLASS_2_BEF14970654AB0C6__CTOR_OFFSET UNITYSDK_OFFSET(0x128495B0)

inline static constexpr unsigned int Class_2_BEF14970654AB0C6_TypeDefinitionIndex = 46526;

class Class_2_BEF14970654AB0C6 : public ::Foundation::SingletonDisposable_1<::Class_2_BEF14970654AB0C6*>
{
public:
	::System::DateTime Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEF14970654AB0C6__CTOR_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEF14970654AB0C6_ONCREATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEF14970654AB0C6_DISPOSE_OFFSET))(this);
	}

	::System::Void Update(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BEF14970654AB0C6_UPDATE_OFFSET))(this, a1);
	}

	::System::Void Method_2_64501B5CB67A94C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEF14970654AB0C6_METHOD_2_64501B5CB67A94C3_OFFSET))(this);
	}
};
