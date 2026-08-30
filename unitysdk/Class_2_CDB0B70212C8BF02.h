#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Color.h"

namespace RPG::Client { class MonoEffectPluginWaterColor; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_CDB0B70212C8BF02_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBB1B040)
#define CLASS_2_CDB0B70212C8BF02_METHOD_2_146E6E50FAF07D8F_1_OFFSET UNITYSDK_OFFSET(0xBB1B550)
#define CLASS_2_CDB0B70212C8BF02_METHOD_2_146E6E50FAF07D8F_OFFSET UNITYSDK_OFFSET(0xBB1B2C0)
#define CLASS_2_CDB0B70212C8BF02_METHOD_2_19B6311C06D9EFFF_OFFSET UNITYSDK_OFFSET(0xBB1AF80)
#define CLASS_2_CDB0B70212C8BF02_METHOD_2_2091F34306E68C88_OFFSET UNITYSDK_OFFSET(0xBB1B110)
#define CLASS_2_CDB0B70212C8BF02_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xBB1B090)
#define CLASS_2_CDB0B70212C8BF02_METHOD_2_5FAD56E9E208220A_OFFSET UNITYSDK_OFFSET(0xBB1B500)
#define CLASS_2_CDB0B70212C8BF02__CTOR_OFFSET UNITYSDK_OFFSET(0xBB1B6F0)

inline static constexpr unsigned int Class_2_CDB0B70212C8BF02_TypeDefinitionIndex = 69874;

class Class_2_CDB0B70212C8BF02 : public ::RPG::Client::BehaviorBase
{
public:
	::RPG::Client::MonoEffectPluginWaterColor* NBFGLAKBNGF; // 0x18
	::Il2CppArray<::UnityEngine::Color>* MOBDFNDHGED; // 0x20
	::UnityEngine::Color NCGHMKBGPEM; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDB0B70212C8BF02__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_19B6311C06D9EFFF(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_CDB0B70212C8BF02_METHOD_2_19B6311C06D9EFFF_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDB0B70212C8BF02_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDB0B70212C8BF02_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_2091F34306E68C88()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDB0B70212C8BF02_METHOD_2_2091F34306E68C88_OFFSET))(this);
	}

	::System::Void Method_2_5FAD56E9E208220A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDB0B70212C8BF02_METHOD_2_5FAD56E9E208220A_OFFSET))(this);
	}

	::System::Void Method_2_146E6E50FAF07D8F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDB0B70212C8BF02_METHOD_2_146E6E50FAF07D8F_OFFSET))(this);
	}

	::System::Void Method_2_146E6E50FAF07D8F_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDB0B70212C8BF02_METHOD_2_146E6E50FAF07D8F_1_OFFSET))(this);
	}
};
