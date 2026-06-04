#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_28;
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_AD9018702370BC7B_METHOD_1_24A7B2B01CD5174F_OFFSET UNITYSDK_OFFSET(0xAACFB80)
#define CLASS_1_AD9018702370BC7B_METHOD_1_58D6840126AEC720_OFFSET UNITYSDK_OFFSET(0xAACFDB0)
#define CLASS_1_AD9018702370BC7B_METHOD_1_7E3752FF01413C03_OFFSET UNITYSDK_OFFSET(0xAACF8B0)
#define CLASS_1_AD9018702370BC7B_METHOD_1_AF06782972FD2DF6_OFFSET UNITYSDK_OFFSET(0xAACFA30)
#define CLASS_1_AD9018702370BC7B_METHOD_1_DF17DFE7A3C07AA3_OFFSET UNITYSDK_OFFSET(0xAACF4C0)

inline static constexpr unsigned int Class_1_AD9018702370BC7B_TypeDefinitionIndex = 71121;

class Class_1_AD9018702370BC7B : public ::System::Object
{
public:
	static ::UnityEngine::GameObject* Method_1_DF17DFE7A3C07AA3(::Class_0_16E4307DCC419505_28* a1, ::System::String* a2)
	{
		return ((::UnityEngine::GameObject*(*)(::Class_0_16E4307DCC419505_28*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_AD9018702370BC7B_METHOD_1_DF17DFE7A3C07AA3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AF06782972FD2DF6(::Class_0_16E4307DCC419505_28* a1)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_28*))((::PBYTE)hIl2Cpp + CLASS_1_AD9018702370BC7B_METHOD_1_AF06782972FD2DF6_OFFSET))(a1);
	}

	static ::System::String* Method_1_7E3752FF01413C03(::Class_0_16E4307DCC419505_28* a1)
	{
		return ((::System::String*(*)(::Class_0_16E4307DCC419505_28*))((::PBYTE)hIl2Cpp + CLASS_1_AD9018702370BC7B_METHOD_1_7E3752FF01413C03_OFFSET))(a1);
	}

	static ::RPG::GameCore::LittleGameEntityConfig* Method_1_24A7B2B01CD5174F(::Class_0_16E4307DCC419505_28* a1)
	{
		return ((::RPG::GameCore::LittleGameEntityConfig*(*)(::Class_0_16E4307DCC419505_28*))((::PBYTE)hIl2Cpp + CLASS_1_AD9018702370BC7B_METHOD_1_24A7B2B01CD5174F_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_58D6840126AEC720(::Class_0_16E4307DCC419505_28* a1)
	{
		return ((::System::Boolean(*)(::Class_0_16E4307DCC419505_28*))((::PBYTE)hIl2Cpp + CLASS_1_AD9018702370BC7B_METHOD_1_58D6840126AEC720_OFFSET))(a1);
	}
};
