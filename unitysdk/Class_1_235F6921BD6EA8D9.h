#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RVO/RVOAgentParam.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::AI { class RVOAgent; }
namespace UnityEngine::AI { class RVOSimulator; }

#define CLASS_1_235F6921BD6EA8D9_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB4FDDA0)
#define CLASS_1_235F6921BD6EA8D9_METHOD_1_25D3B3B3A4CCB65E_OFFSET UNITYSDK_OFFSET(0xB4FE020)
#define CLASS_1_235F6921BD6EA8D9_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xB4FE420)
#define CLASS_1_235F6921BD6EA8D9_METHOD_1_479759059E440327_1_OFFSET UNITYSDK_OFFSET(0xB4FE390)
#define CLASS_1_235F6921BD6EA8D9_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0xB4FE300)
#define CLASS_1_235F6921BD6EA8D9_METHOD_1_6C61038DF553614D_OFFSET UNITYSDK_OFFSET(0xB4FE170)
#define CLASS_1_235F6921BD6EA8D9_METHOD_1_7ED891A6B0193F3E_OFFSET UNITYSDK_OFFSET(0xB4FE500)
#define CLASS_1_235F6921BD6EA8D9_METHOD_1_8B4805FC938205AA_OFFSET UNITYSDK_OFFSET(0xB4FE1D0)
#define CLASS_1_235F6921BD6EA8D9_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0xB4FDCE0)
#define CLASS_1_235F6921BD6EA8D9_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xB4FE470)
#define CLASS_1_235F6921BD6EA8D9_METHOD_1_C97E2C3DD6E5FF49_OFFSET UNITYSDK_OFFSET(0xB4FDE00)
#define CLASS_1_235F6921BD6EA8D9_METHOD_1_F4ECC2E9CD4E1E58_OFFSET UNITYSDK_OFFSET(0xB4FDEE0)
#define CLASS_1_235F6921BD6EA8D9__CTOR_OFFSET UNITYSDK_OFFSET(0xB4FDCD0)

inline static constexpr unsigned int Class_1_235F6921BD6EA8D9_TypeDefinitionIndex = 71092;

class Class_1_235F6921BD6EA8D9 : public ::System::Object
{
public:
	::UnityEngine::AI::RVOSimulator* Field_1_0; // 0x10
	::RVO::RVOAgentParam Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_235F6921BD6EA8D9__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_235F6921BD6EA8D9_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_235F6921BD6EA8D9_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_C97E2C3DD6E5FF49(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_235F6921BD6EA8D9_METHOD_1_C97E2C3DD6E5FF49_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::AI::RVOAgent* Method_1_F4ECC2E9CD4E1E58()
	{
		return ((::UnityEngine::AI::RVOAgent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_235F6921BD6EA8D9_METHOD_1_F4ECC2E9CD4E1E58_OFFSET))(this);
	}

	::UnityEngine::AI::RVOAgent* Method_1_25D3B3B3A4CCB65E(::RVO::RVOAgentParam& a1)
	{
		return ((::UnityEngine::AI::RVOAgent*(*)(::PVOID, ::RVO::RVOAgentParam&))((::PBYTE)hIl2Cpp + CLASS_1_235F6921BD6EA8D9_METHOD_1_25D3B3B3A4CCB65E_OFFSET))(this, a1);
	}

	::System::Void Method_1_6C61038DF553614D(::UnityEngine::AI::RVOAgent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::RVOAgent*))((::PBYTE)hIl2Cpp + CLASS_1_235F6921BD6EA8D9_METHOD_1_6C61038DF553614D_OFFSET))(this, a1);
	}

	::System::Void Method_1_8B4805FC938205AA(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_235F6921BD6EA8D9_METHOD_1_8B4805FC938205AA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_235F6921BD6EA8D9_METHOD_1_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_1_479759059E440327_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_235F6921BD6EA8D9_METHOD_1_479759059E440327_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_235F6921BD6EA8D9_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_235F6921BD6EA8D9_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::RVO::RVOAgentParam Method_1_7ED891A6B0193F3E()
	{
		return ((::RVO::RVOAgentParam(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_235F6921BD6EA8D9_METHOD_1_7ED891A6B0193F3E_OFFSET))(this);
	}
};
