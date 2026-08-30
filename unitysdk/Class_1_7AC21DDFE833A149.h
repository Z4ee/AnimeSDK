#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_7AC21DDFE833A149_METHOD_1_29ACE24A70CE0A56_OFFSET UNITYSDK_OFFSET(0x1A85A4D0)
#define CLASS_1_7AC21DDFE833A149__CTOR_OFFSET UNITYSDK_OFFSET(0x1A85A470)

inline static constexpr unsigned int Class_1_7AC21DDFE833A149_TypeDefinitionIndex = 68869;

class Class_1_7AC21DDFE833A149 : public ::System::Object
{
public:
	::System::Single COAELIHGAHH; // 0x10
	::System::Single NFPEKMOMGFD; // 0x14
	::System::Single DJLJLKMBGPC; // 0x18
	::System::Single GLNJBPOLMCN; // 0x1C
	::System::Single KDMHBDFCNMG; // 0x20
	::System::Single IHFLGOPFOKF; // 0x24
	::UnityEngine::Vector2 DIBOGGNBCIP; // 0x28
	::System::Single MGJHICAMJPA; // 0x30

	::System::Void _ctor(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7AC21DDFE833A149__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_29ACE24A70CE0A56(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_7AC21DDFE833A149_METHOD_1_29ACE24A70CE0A56_OFFSET))(this, a1);
	}
};
