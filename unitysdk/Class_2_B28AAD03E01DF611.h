#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

class Class_1_52DF42E136544C98;
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_B28AAD03E01DF611_METHOD_2_34D5F4DBE622AF88_OFFSET UNITYSDK_OFFSET(0x19906AE0)
#define CLASS_2_B28AAD03E01DF611__CTOR_OFFSET UNITYSDK_OFFSET(0x19906D80)
#define CLASS_2_B28AAD03E01DF611__ONBIND_OFFSET UNITYSDK_OFFSET(0x19906930)

inline static constexpr unsigned int Class_2_B28AAD03E01DF611_TypeDefinitionIndex = 71291;

class Class_2_B28AAD03E01DF611 : public ::Class_1_34917908B7833130
{
public:
	::UnityEngine::UI::Text* CCOIIOCJIDI; // 0x60
	::UnityEngine::Transform* FCLGOLCJBOE; // 0x68
	::UnityEngine::Transform* AGOGNADGDNM; // 0x70
	::UnityEngine::Transform* BIIDDLHFPPG; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B28AAD03E01DF611__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B28AAD03E01DF611__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_34D5F4DBE622AF88(::Class_1_52DF42E136544C98* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_52DF42E136544C98*))((::PBYTE)hIl2Cpp + CLASS_2_B28AAD03E01DF611_METHOD_2_34D5F4DBE622AF88_OFFSET))(this, a1);
	}
};
