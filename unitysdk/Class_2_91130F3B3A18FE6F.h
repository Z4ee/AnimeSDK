#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class MonoLightRandomCoontrol; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_91130F3B3A18FE6F_METHOD_2_763B9AAC3C8E71C0_OFFSET UNITYSDK_OFFSET(0xC007B80)
#define CLASS_2_91130F3B3A18FE6F_METHOD_2_A492A4C61A44D821_OFFSET UNITYSDK_OFFSET(0xC007800)
#define CLASS_2_91130F3B3A18FE6F_METHOD_2_D68547FF19A170E2_OFFSET UNITYSDK_OFFSET(0xC007BF0)
#define CLASS_2_91130F3B3A18FE6F__CTOR_OFFSET UNITYSDK_OFFSET(0xC008200)

inline static constexpr unsigned int Class_2_91130F3B3A18FE6F_TypeDefinitionIndex = 70337;

class Class_2_91130F3B3A18FE6F : public ::RPG::Client::BehaviorBase
{
public:
	::UnityEngine::Light* BGBEABCKMJG; // 0x18
	::System::Int32 NMJJJIMHKOG; // 0x20
	::System::Single HHLGLKKIEBD; // 0x24
	::System::Single EFLJDLDCFPM; // 0x28
	::System::Int32 LDCBNKNFILD; // 0x2C
	::System::Single FGFAKKLGAPD; // 0x30
	::System::Single NEGLJGAODBN; // 0x34
	::System::Single PPMKCDLJGJM; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_91130F3B3A18FE6F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_A492A4C61A44D821(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_91130F3B3A18FE6F_METHOD_2_A492A4C61A44D821_OFFSET))(this, a1);
	}

	::System::Void Method_2_D68547FF19A170E2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_91130F3B3A18FE6F_METHOD_2_D68547FF19A170E2_OFFSET))(this);
	}

	::RPG::Client::MonoLightRandomCoontrol* Method_2_763B9AAC3C8E71C0()
	{
		return ((::RPG::Client::MonoLightRandomCoontrol*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_91130F3B3A18FE6F_METHOD_2_763B9AAC3C8E71C0_OFFSET))(this);
	}
};
