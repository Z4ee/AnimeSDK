#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"

class Class_2_4848D237BBF3D79A;
class Class_2_FD1E3E2426456BA6;

#define CLASS_2_4D6D2A45321543EB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10F51610)
#define CLASS_2_4D6D2A45321543EB_METHOD_2_9B6BAF49879647BD_OFFSET UNITYSDK_OFFSET(0x10F51820)
#define CLASS_2_4D6D2A45321543EB_ONCREATE_OFFSET UNITYSDK_OFFSET(0x10F51650)
#define CLASS_2_4D6D2A45321543EB_UPDATE_OFFSET UNITYSDK_OFFSET(0x10F51690)
#define CLASS_2_4D6D2A45321543EB__CTOR_OFFSET UNITYSDK_OFFSET(0x10F517D0)

inline static constexpr unsigned int Class_2_4D6D2A45321543EB_TypeDefinitionIndex = 90715;

class Class_2_4D6D2A45321543EB : public ::Foundation::SingletonDisposable_1<::Class_2_4D6D2A45321543EB*>
{
public:
	::Class_2_4848D237BBF3D79A* Field_2_0; // 0x10
	::Class_2_FD1E3E2426456BA6* Field_2_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D6D2A45321543EB__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D6D2A45321543EB_DISPOSE_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D6D2A45321543EB_ONCREATE_OFFSET))(this);
	}

	::System::Void Update(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4D6D2A45321543EB_UPDATE_OFFSET))(this, a1);
	}

	::System::Void Method_2_9B6BAF49879647BD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D6D2A45321543EB_METHOD_2_9B6BAF49879647BD_OFFSET))(this);
	}
};
