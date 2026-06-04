#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_33.h"
#include "unitysdk/RPG/GameCore/CakeRacePerformenceAudioTagType.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_3_006788DCAE8605DB_METHOD_3_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x112D1140)
#define CLASS_3_006788DCAE8605DB_METHOD_3_EF1268A72CEEFEA1_OFFSET UNITYSDK_OFFSET(0x112D0E30)
#define CLASS_3_006788DCAE8605DB_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x112D0EC0)
#define CLASS_3_006788DCAE8605DB__CTOR_OFFSET UNITYSDK_OFFSET(0x112D1210)
#define CLASS_3_006788DCAE8605DB___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x112D1220)

inline static constexpr unsigned int Class_3_006788DCAE8605DB_TypeDefinitionIndex = 72693;

class Class_3_006788DCAE8605DB : public ::Class_2_A48F3719AA1CF200_33
{
public:
	::UnityEngine::GameObject* Field_3_0; // 0x20
	::RPG::GameCore::CakeRacePerformenceAudioTagType Field_3_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_006788DCAE8605DB__CTOR_OFFSET))(this);
	}

	static ::Class_3_006788DCAE8605DB* Method_3_EF1268A72CEEFEA1(::RPG::GameCore::CakeRacePerformenceAudioTagType a1, ::UnityEngine::GameObject* a2)
	{
		return ((::Class_3_006788DCAE8605DB*(*)(::RPG::GameCore::CakeRacePerformenceAudioTagType, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_3_006788DCAE8605DB_METHOD_3_EF1268A72CEEFEA1_OFFSET))(a1, a2);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_006788DCAE8605DB_ONEXECUTE_OFFSET))(this);
	}

	::System::String* Method_3_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_006788DCAE8605DB_METHOD_3_35EA095E1AFDD9C8_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_006788DCAE8605DB___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}
};
