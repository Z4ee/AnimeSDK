#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"

class Class_2_4848D237BBF3D79A;
class Class_2_FD1E3E2426456BA6;

#define CLASS_2_229DDBDC6B84BAAD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFF23960)
#define CLASS_2_229DDBDC6B84BAAD_METHOD_2_557CBF1730FC2E87_OFFSET UNITYSDK_OFFSET(0xFF23B70)
#define CLASS_2_229DDBDC6B84BAAD_ONCREATE_OFFSET UNITYSDK_OFFSET(0xFF239A0)
#define CLASS_2_229DDBDC6B84BAAD_UPDATE_OFFSET UNITYSDK_OFFSET(0xFF239E0)
#define CLASS_2_229DDBDC6B84BAAD__CTOR_OFFSET UNITYSDK_OFFSET(0xFF23B20)

inline static constexpr unsigned int Class_2_229DDBDC6B84BAAD_TypeDefinitionIndex = 70099;

class Class_2_229DDBDC6B84BAAD : public ::Foundation::SingletonDisposable_1<::Class_2_229DDBDC6B84BAAD*>
{
public:
	::Class_2_4848D237BBF3D79A* Field_2_1; // 0x10
	::Class_2_FD1E3E2426456BA6* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_229DDBDC6B84BAAD__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_229DDBDC6B84BAAD_DISPOSE_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_229DDBDC6B84BAAD_ONCREATE_OFFSET))(this);
	}

	::System::Void Update(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_229DDBDC6B84BAAD_UPDATE_OFFSET))(this, a1);
	}

	::System::Void Method_2_557CBF1730FC2E87()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_229DDBDC6B84BAAD_METHOD_2_557CBF1730FC2E87_OFFSET))(this);
	}
};
