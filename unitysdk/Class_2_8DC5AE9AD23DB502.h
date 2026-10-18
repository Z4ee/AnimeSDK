#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class MonoFogVolume; }
namespace RPG::CustomRP { class FogVolume; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_8DC5AE9AD23DB502_METHOD_2_0874EC854A799EF9_OFFSET UNITYSDK_OFFSET(0x12CD2050)
#define CLASS_2_8DC5AE9AD23DB502_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x12CD3120)
#define CLASS_2_8DC5AE9AD23DB502_METHOD_2_52C768B7F8A53853_OFFSET UNITYSDK_OFFSET(0x12CD1AA0)
#define CLASS_2_8DC5AE9AD23DB502_METHOD_2_7896A0E692B8B805_OFFSET UNITYSDK_OFFSET(0x12CD1E70)
#define CLASS_2_8DC5AE9AD23DB502_METHOD_2_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x12CD1EC0)
#define CLASS_2_8DC5AE9AD23DB502_METHOD_2_8C704EC832EDEFC8_OFFSET UNITYSDK_OFFSET(0x12CD1C90)
#define CLASS_2_8DC5AE9AD23DB502_METHOD_2_BE5B6DA7339D18CD_OFFSET UNITYSDK_OFFSET(0x12CD2160)
#define CLASS_2_8DC5AE9AD23DB502_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12CD3270)
#define CLASS_2_8DC5AE9AD23DB502__CTOR_OFFSET UNITYSDK_OFFSET(0x12CD32B0)

inline static constexpr unsigned int Class_2_8DC5AE9AD23DB502_TypeDefinitionIndex = 70796;

class Class_2_8DC5AE9AD23DB502 : public ::RPG::Client::BehaviorBase
{
public:
	::UnityEngine::Material* MOGLPFOBMDG; // 0x18
	::RPG::CustomRP::FogVolume* BHHLAMNIOOH; // 0x20
	::UnityEngine::MeshRenderer* DECKHIDFMNC; // 0x28
	::System::Boolean BDPFHDBFIKL; // 0x30
	::System::Boolean LFADEFIDHBO; // 0x31

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DC5AE9AD23DB502__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_52C768B7F8A53853(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_8DC5AE9AD23DB502_METHOD_2_52C768B7F8A53853_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DC5AE9AD23DB502_METHOD_2_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DC5AE9AD23DB502_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_BE5B6DA7339D18CD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DC5AE9AD23DB502_METHOD_2_BE5B6DA7339D18CD_OFFSET))(this);
	}

	::UnityEngine::Material* Method_2_0874EC854A799EF9(::UnityEngine::Material* a1)
	{
		return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_2_8DC5AE9AD23DB502_METHOD_2_0874EC854A799EF9_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DC5AE9AD23DB502_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_8C704EC832EDEFC8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DC5AE9AD23DB502_METHOD_2_8C704EC832EDEFC8_OFFSET))(this);
	}

	::RPG::Client::MonoFogVolume* Method_2_7896A0E692B8B805()
	{
		return ((::RPG::Client::MonoFogVolume*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DC5AE9AD23DB502_METHOD_2_7896A0E692B8B805_OFFSET))(this);
	}
};
