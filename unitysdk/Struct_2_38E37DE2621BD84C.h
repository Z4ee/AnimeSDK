#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameEntityPosAdaptionResultFlag.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STRUCT_2_38E37DE2621BD84C_METHOD_2_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x11150)
#define STRUCT_2_38E37DE2621BD84C_METHOD_2_391A84BCD9F51317_2_OFFSET UNITYSDK_OFFSET(0x111A0)
#define STRUCT_2_38E37DE2621BD84C_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x11100)
#define STRUCT_2_38E37DE2621BD84C_METHOD_2_3B3065C404CE3D9B_OFFSET UNITYSDK_OFFSET(0xB218950)
#define STRUCT_2_38E37DE2621BD84C_METHOD_2_D0A5F6E093991EF8_OFFSET UNITYSDK_OFFSET(0xB2204D0)

inline static constexpr unsigned int Struct_2_38E37DE2621BD84C_TypeDefinitionIndex = 57804;

struct alignas(4) Struct_2_38E37DE2621BD84C
{
	::UnityEngine::Vector3 ACNFNHFMOOD; // 0x10
	::RPG::GameCore::GameEntityPosAdaptionResultFlag FNPGDNFLMPC; // 0x1C

	static ::UnityEngine::Vector3 Method_2_3B3065C404CE3D9B(::Struct_2_38E37DE2621BD84C a1)
	{
		return ((::UnityEngine::Vector3(*)(::Struct_2_38E37DE2621BD84C))((::PBYTE)hIl2Cpp + STRUCT_2_38E37DE2621BD84C_METHOD_2_3B3065C404CE3D9B_OFFSET))(a1);
	}

	/*
	static ::Struct_2_38E37DE2621BD84C Method_2_D0A5F6E093991EF8(::System::ValueTuple_2<::UnityEngine::Vector3, ::RPG::GameCore::GameEntityPosAdaptionResultFlag> a1)
	{
		return ((::Struct_2_38E37DE2621BD84C(*)(::System::ValueTuple_2<::UnityEngine::Vector3, ::RPG::GameCore::GameEntityPosAdaptionResultFlag>))((::PBYTE)hIl2Cpp + STRUCT_2_38E37DE2621BD84C_METHOD_2_D0A5F6E093991EF8_OFFSET))(a1);
	}
	*/

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_38E37DE2621BD84C_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_38E37DE2621BD84C_METHOD_2_391A84BCD9F51317_1_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_38E37DE2621BD84C_METHOD_2_391A84BCD9F51317_2_OFFSET))(this);
	}
};
