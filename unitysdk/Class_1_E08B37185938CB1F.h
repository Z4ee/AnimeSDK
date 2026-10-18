#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/SystemLanguage.h"

class Class_0_16E4307DCC419505_22;
namespace System { class String; }

#define CLASS_1_E08B37185938CB1F_METHOD_1_060DC2E5F0F7573E_OFFSET UNITYSDK_OFFSET(0x1EC06670)
#define CLASS_1_E08B37185938CB1F_METHOD_1_15531D1C248D2EF0_OFFSET UNITYSDK_OFFSET(0x1EC079C0)
#define CLASS_1_E08B37185938CB1F_SET_OFFSET UNITYSDK_OFFSET(0x1EC07960)
#define CLASS_1_E08B37185938CB1F__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC07650)

inline static constexpr unsigned int Class_1_E08B37185938CB1F_TypeDefinitionIndex = 35219;

class Class_1_E08B37185938CB1F : public ::System::Object
{
public:
	::UnityEngine::SystemLanguage AIKAPJELHNK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E08B37185938CB1F__CTOR_OFFSET))(this);
	}

	::System::Void Set(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E08B37185938CB1F_SET_OFFSET))(this, a1);
	}

	static ::UnityEngine::SystemLanguage Method_1_060DC2E5F0F7573E(::Class_0_16E4307DCC419505_22* a1)
	{
		return ((::UnityEngine::SystemLanguage(*)(::Class_0_16E4307DCC419505_22*))((::PBYTE)hIl2Cpp + CLASS_1_E08B37185938CB1F_METHOD_1_060DC2E5F0F7573E_OFFSET))(a1);
	}

	::UnityEngine::SystemLanguage Method_1_15531D1C248D2EF0(::System::String* a1)
	{
		return ((::UnityEngine::SystemLanguage(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E08B37185938CB1F_METHOD_1_15531D1C248D2EF0_OFFSET))(this, a1);
	}
};
