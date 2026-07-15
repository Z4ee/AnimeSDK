#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class MonoFogVolume; }
namespace RPG::CustomRP { class FogVolume; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_8DC5AE9AD23DB502_METHOD_2_0874EC854A799EF9_OFFSET UNITYSDK_OFFSET(0x185D1250)
#define CLASS_2_8DC5AE9AD23DB502_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x185D2320)
#define CLASS_2_8DC5AE9AD23DB502_METHOD_2_52C768B7F8A53853_OFFSET UNITYSDK_OFFSET(0x185D0CA0)
#define CLASS_2_8DC5AE9AD23DB502_METHOD_2_7896A0E692B8B805_OFFSET UNITYSDK_OFFSET(0x185D1070)
#define CLASS_2_8DC5AE9AD23DB502_METHOD_2_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x185D10C0)
#define CLASS_2_8DC5AE9AD23DB502_METHOD_2_8C704EC832EDEFC8_OFFSET UNITYSDK_OFFSET(0x185D0E90)
#define CLASS_2_8DC5AE9AD23DB502_METHOD_2_BE5B6DA7339D18CD_OFFSET UNITYSDK_OFFSET(0x185D1360)
#define CLASS_2_8DC5AE9AD23DB502_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x185D2470)
#define CLASS_2_8DC5AE9AD23DB502__CTOR_OFFSET UNITYSDK_OFFSET(0x185D24B0)

inline static constexpr unsigned int Class_2_8DC5AE9AD23DB502_TypeDefinitionIndex = 67635;

class Class_2_8DC5AE9AD23DB502 : public ::RPG::Client::BehaviorBase
{
public:
	::UnityEngine::Material* Field_2_0; // 0x18
	::RPG::CustomRP::FogVolume* Field_2_1; // 0x20
	::UnityEngine::MeshRenderer* Field_2_2; // 0x28
	::System::Boolean Field_2_3; // 0x30
	::System::Boolean Field_2_4; // 0x31

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
