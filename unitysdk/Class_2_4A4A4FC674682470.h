#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

namespace RPG::Client { class HPBar; }
namespace RPG::Client { class LocalizedText; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define CLASS_2_4A4A4FC674682470_METHOD_2_B7797AF42220DD8F_OFFSET UNITYSDK_OFFSET(0xBFB9900)
#define CLASS_2_4A4A4FC674682470_METHOD_2_BA904CAFF6C7217F_OFFSET UNITYSDK_OFFSET(0xBFB9B90)
#define CLASS_2_4A4A4FC674682470_METHOD_2_D2A08F3D951A0C1D_OFFSET UNITYSDK_OFFSET(0xBFB9950)
#define CLASS_2_4A4A4FC674682470_METHOD_2_FE327FD0760E1514_OFFSET UNITYSDK_OFFSET(0xBFB9A30)
#define CLASS_2_4A4A4FC674682470__CTOR_OFFSET UNITYSDK_OFFSET(0xBFB9C30)
#define CLASS_2_4A4A4FC674682470__ONBIND_OFFSET UNITYSDK_OFFSET(0xBFB9850)

inline static constexpr unsigned int Class_2_4A4A4FC674682470_TypeDefinitionIndex = 71517;

class Class_2_4A4A4FC674682470 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* LCCHEFGCACP; // 0x0
	// static const ::System::String* ACKFODOODDA; // 0x0
	::RPG::Client::HPBar* GLNBHDNJMCM; // 0x60
	::UnityEngine::Animation* NNIKEDMHMFL; // 0x68
	::RPG::Client::LocalizedText* NGABGMPJNGF; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A4A4FC674682470__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A4A4FC674682470__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_B7797AF42220DD8F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4A4A4FC674682470_METHOD_2_B7797AF42220DD8F_OFFSET))(this, a1);
	}

	::System::Void Method_2_D2A08F3D951A0C1D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4A4A4FC674682470_METHOD_2_D2A08F3D951A0C1D_OFFSET))(this, a1);
	}

	::System::Void Method_2_FE327FD0760E1514(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4A4A4FC674682470_METHOD_2_FE327FD0760E1514_OFFSET))(this, a1);
	}

	::System::Void Method_2_BA904CAFF6C7217F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4A4A4FC674682470_METHOD_2_BA904CAFF6C7217F_OFFSET))(this, a1);
	}
};
