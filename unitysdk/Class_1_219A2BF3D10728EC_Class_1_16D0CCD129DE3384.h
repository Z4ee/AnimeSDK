#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SDFObjectMonoPlugin; }

#define CLASS_1_219A2BF3D10728EC_CLASS_1_16D0CCD129DE3384_COMPARE_OFFSET UNITYSDK_OFFSET(0x12869830)
#define CLASS_1_219A2BF3D10728EC_CLASS_1_16D0CCD129DE3384__CTOR_OFFSET UNITYSDK_OFFSET(0x128611B0)

inline static constexpr unsigned int Class_1_219A2BF3D10728EC_Class_1_16D0CCD129DE3384_TypeDefinitionIndex = 52075;

class Class_1_219A2BF3D10728EC_Class_1_16D0CCD129DE3384 : public ::System::Object
{
public:
	::System::Int32 JOGJNDDNCFL; // 0x10

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_219A2BF3D10728EC_CLASS_1_16D0CCD129DE3384__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 Compare(::RPG::Client::SDFObjectMonoPlugin* a1, ::RPG::Client::SDFObjectMonoPlugin* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::SDFObjectMonoPlugin*, ::RPG::Client::SDFObjectMonoPlugin*))((::PBYTE)hIl2Cpp + CLASS_1_219A2BF3D10728EC_CLASS_1_16D0CCD129DE3384_COMPARE_OFFSET))(this, a1, a2);
	}
};
