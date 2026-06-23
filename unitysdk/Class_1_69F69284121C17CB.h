#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/ESceneType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_69F69284121C17CB_METHOD_1_C114A1F8E08B6F92_1_OFFSET UNITYSDK_OFFSET(0x189B0FD0)
#define CLASS_1_69F69284121C17CB_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x189B0FC0)
#define CLASS_1_69F69284121C17CB_METHOD_1_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x189B0FF0)
#define CLASS_1_69F69284121C17CB_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x189B0FE0)
#define CLASS_1_69F69284121C17CB__CTOR_1_OFFSET UNITYSDK_OFFSET(0x189B0FB0)
#define CLASS_1_69F69284121C17CB__CTOR_OFFSET UNITYSDK_OFFSET(0x189B0FA0)

inline static constexpr unsigned int Class_1_69F69284121C17CB_TypeDefinitionIndex = 9649;

class Class_1_69F69284121C17CB : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69F69284121C17CB__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::Int32 a1, ::Share::ESceneType a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Share::ESceneType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_69F69284121C17CB__CTOR_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_69F69284121C17CB_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Void Method_1_C114A1F8E08B6F92_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_69F69284121C17CB_METHOD_1_C114A1F8E08B6F92_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69F69284121C17CB_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69F69284121C17CB_METHOD_1_C74CF020AA42ED85_1_OFFSET))(this);
	}
};
