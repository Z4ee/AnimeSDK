#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class MonoLightRandomCoontrol; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_237D836A4F61924C_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0x105E73C0)
#define CLASS_2_237D836A4F61924C_METHOD_2_9831E62807E98936_OFFSET UNITYSDK_OFFSET(0x105E69D0)
#define CLASS_2_237D836A4F61924C_METHOD_2_9E6654DF9D55E389_OFFSET UNITYSDK_OFFSET(0x105E6D40)
#define CLASS_2_237D836A4F61924C_METHOD_2_F53BAAE38A584428_OFFSET UNITYSDK_OFFSET(0x105E6DB0)
#define CLASS_2_237D836A4F61924C__CTOR_OFFSET UNITYSDK_OFFSET(0x105E7390)

inline static constexpr unsigned int Class_2_237D836A4F61924C_TypeDefinitionIndex = 57612;

class Class_2_237D836A4F61924C : public ::RPG::Client::BehaviorBase
{
public:
	::UnityEngine::Light* Field_2_0; // 0x18
	::System::Single Field_2_3; // 0x20
	::System::Single Field_2_4; // 0x24
	::System::Single Field_2_1; // 0x28
	::System::Single Field_2_5; // 0x2C
	::System::Int32 Field_2_6; // 0x30
	::System::Single Field_2_2; // 0x34
	::System::Int32 Field_2_7; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_237D836A4F61924C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9831E62807E98936(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_237D836A4F61924C_METHOD_2_9831E62807E98936_OFFSET))(this, a1);
	}

	::System::Void Method_2_F53BAAE38A584428()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_237D836A4F61924C_METHOD_2_F53BAAE38A584428_OFFSET))(this);
	}

	::RPG::Client::MonoLightRandomCoontrol* Method_2_9E6654DF9D55E389()
	{
		return ((::RPG::Client::MonoLightRandomCoontrol*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_237D836A4F61924C_METHOD_2_9E6654DF9D55E389_OFFSET))(this);
	}

	::System::Void Method_2_90D019D81149A8BA(::UnityEngine::MonoBehaviour* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_237D836A4F61924C_METHOD_2_90D019D81149A8BA_OFFSET))(this, P0);
	}
};
