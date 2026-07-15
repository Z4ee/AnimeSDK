#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3EE0A731EA0C8B63.h"
#include "unitysdk/Class_2_60C60A4B8464C872_RecoverType.h"

namespace RPG::Client { class MonoExUICamera; }
namespace RPG::Client { class MonoExUICamera_CameraOutInfo; }
namespace System { class Object; }

#define CLASS_2_60C60A4B8464C872_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x15E19DC0)
#define CLASS_2_60C60A4B8464C872_METHOD_2_B961D33AD47A2113_OFFSET UNITYSDK_OFFSET(0x15E19CE0)
#define CLASS_2_60C60A4B8464C872_METHOD_2_C131365A67D2B282_OFFSET UNITYSDK_OFFSET(0x15E19A90)
#define CLASS_2_60C60A4B8464C872_METHOD_2_D9EF75A2D048B8A1_OFFSET UNITYSDK_OFFSET(0x15E19BD0)
#define CLASS_2_60C60A4B8464C872_METHOD_2_FA58824BA12F6F62_1_OFFSET UNITYSDK_OFFSET(0x15E19C80)
#define CLASS_2_60C60A4B8464C872_METHOD_2_FA58824BA12F6F62_OFFSET UNITYSDK_OFFSET(0x15E19B70)
#define CLASS_2_60C60A4B8464C872__CTOR_OFFSET UNITYSDK_OFFSET(0x15E19A40)

inline static constexpr unsigned int Class_2_60C60A4B8464C872_TypeDefinitionIndex = 69640;

class Class_2_60C60A4B8464C872 : public ::Class_1_3EE0A731EA0C8B63
{
public:
	::RPG::Client::MonoExUICamera_CameraOutInfo* Field_2_0; // 0x18
	::Class_2_60C60A4B8464C872_RecoverType Field_2_1; // 0x20

	::System::Void _ctor(::RPG::Client::MonoExUICamera* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoExUICamera*))((::PBYTE)hIl2Cpp + CLASS_2_60C60A4B8464C872__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_C131365A67D2B282(::Class_1_3EE0A731EA0C8B63* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3EE0A731EA0C8B63*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_60C60A4B8464C872_METHOD_2_C131365A67D2B282_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_FA58824BA12F6F62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60C60A4B8464C872_METHOD_2_FA58824BA12F6F62_OFFSET))(this);
	}

	::System::Void Method_2_D9EF75A2D048B8A1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60C60A4B8464C872_METHOD_2_D9EF75A2D048B8A1_OFFSET))(this);
	}

	::System::Void Method_2_FA58824BA12F6F62_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60C60A4B8464C872_METHOD_2_FA58824BA12F6F62_1_OFFSET))(this);
	}

	::System::Void Method_2_B961D33AD47A2113()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60C60A4B8464C872_METHOD_2_B961D33AD47A2113_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60C60A4B8464C872_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}
};
