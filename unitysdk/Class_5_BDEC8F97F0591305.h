#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_0781C886C58F298A.h"
#include "unitysdk/UnityEngine/CharacterInfo.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/UIVertex.h"

class Class_1_57FDA42592C5189D;
class Class_1_A043D803AC652E6E;

#define CLASS_5_BDEC8F97F0591305_CLONE_OFFSET UNITYSDK_OFFSET(0x15267850)
#define CLASS_5_BDEC8F97F0591305_METHOD_5_6007D6DE83590699_OFFSET UNITYSDK_OFFSET(0x15267970)
#define CLASS_5_BDEC8F97F0591305_METHOD_5_915DC757EA16DBAE_OFFSET UNITYSDK_OFFSET(0x15267680)
#define CLASS_5_BDEC8F97F0591305_METHOD_5_C14976124A9D124B_OFFSET UNITYSDK_OFFSET(0x152679F0)
#define CLASS_5_BDEC8F97F0591305_METHOD_5_C6E778360CE16822_OFFSET UNITYSDK_OFFSET(0x15267B00)
#define CLASS_5_BDEC8F97F0591305_METHOD_5_CDB3EA7B9422D2AC_OFFSET UNITYSDK_OFFSET(0x15267CA0)
#define CLASS_5_BDEC8F97F0591305_REVERSE_OFFSET UNITYSDK_OFFSET(0x152678E0)
#define CLASS_5_BDEC8F97F0591305__CTOR_OFFSET UNITYSDK_OFFSET(0x15267650)

inline static constexpr unsigned int Class_5_BDEC8F97F0591305_TypeDefinitionIndex = 73449;

class Class_5_BDEC8F97F0591305 : public ::Class_4_0781C886C58F298A
{
public:
	::UnityEngine::CharacterInfo EHMPGINDOBA; // 0x48
	::System::Single EIDFPLNFJGI; // 0x7C
	::UnityEngine::Color32 NHFPGLCLOMO; // 0x80

	::System::Void _ctor(::Class_1_57FDA42592C5189D* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_57FDA42592C5189D*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_5_BDEC8F97F0591305__CTOR_OFFSET))(this, a1, a2);
	}

	static ::Class_5_BDEC8F97F0591305* Method_5_915DC757EA16DBAE(::Class_1_57FDA42592C5189D* a1, ::System::UInt32 a2, ::System::Single a3, ::System::Single a4, ::UnityEngine::Color32 a5, ::UnityEngine::CharacterInfo a6)
	{
		return ((::Class_5_BDEC8F97F0591305*(*)(::Class_1_57FDA42592C5189D*, ::System::UInt32, ::System::Single, ::System::Single, ::UnityEngine::Color32, ::UnityEngine::CharacterInfo))((::PBYTE)hIl2Cpp + CLASS_5_BDEC8F97F0591305_METHOD_5_915DC757EA16DBAE_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	::Class_1_A043D803AC652E6E* Clone()
	{
		return ((::Class_1_A043D803AC652E6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_BDEC8F97F0591305_CLONE_OFFSET))(this);
	}

	::Class_1_A043D803AC652E6E* Reverse()
	{
		return ((::Class_1_A043D803AC652E6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_BDEC8F97F0591305_REVERSE_OFFSET))(this);
	}

	::System::Void Method_5_6007D6DE83590699(::System::Single a1, ::Il2CppArray<::UnityEngine::UIVertex>*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Il2CppArray<::UnityEngine::UIVertex>*&))((::PBYTE)hIl2Cpp + CLASS_5_BDEC8F97F0591305_METHOD_5_6007D6DE83590699_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_C14976124A9D124B(::System::Single a1, ::Il2CppArray<::UnityEngine::UIVertex>*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Il2CppArray<::UnityEngine::UIVertex>*&))((::PBYTE)hIl2Cpp + CLASS_5_BDEC8F97F0591305_METHOD_5_C14976124A9D124B_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Color32 Method_5_CDB3EA7B9422D2AC(::System::Single a1)
	{
		return ((::UnityEngine::Color32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_BDEC8F97F0591305_METHOD_5_CDB3EA7B9422D2AC_OFFSET))(this, a1);
	}

	::System::Void Method_5_C6E778360CE16822(::System::Single a1, ::Il2CppArray<::UnityEngine::UIVertex>*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Il2CppArray<::UnityEngine::UIVertex>*&))((::PBYTE)hIl2Cpp + CLASS_5_BDEC8F97F0591305_METHOD_5_C6E778360CE16822_OFFSET))(this, a1, a2);
	}
};
