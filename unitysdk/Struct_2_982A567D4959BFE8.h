#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define STRUCT_2_982A567D4959BFE8_METHOD_2_32595A4F1CDEE878_OFFSET UNITYSDK_OFFSET(0x15C90)
#define STRUCT_2_982A567D4959BFE8_METHOD_2_528E0D0C9515BF2B_OFFSET UNITYSDK_OFFSET(0xB48BD60)
#define STRUCT_2_982A567D4959BFE8_METHOD_2_867F85CA133E06EB_OFFSET UNITYSDK_OFFSET(0xB48BD00)
#define STRUCT_2_982A567D4959BFE8_METHOD_2_8A8D6C702541871F_OFFSET UNITYSDK_OFFSET(0x15B80)
#define STRUCT_2_982A567D4959BFE8_METHOD_2_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x15A60)
#define STRUCT_2_982A567D4959BFE8_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x15B20)
#define STRUCT_2_982A567D4959BFE8_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15AB0)
#define STRUCT_2_982A567D4959BFE8_METHOD_2_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x15BD0)

inline static constexpr unsigned int Struct_2_982A567D4959BFE8_TypeDefinitionIndex = 52213;

struct alignas(4) Struct_2_982A567D4959BFE8
{
	// static const ::System::Single KCIHCIHNDBC; // 0x0
	::System::Boolean PIOPJIGOANB; // 0x10
	::System::Single NOHNKAIALPJ; // 0x14
	::System::Single DPNEIIPDLPN; // 0x18
	::UnityEngine::Vector3 EOBKILNFHOI; // 0x1C
	::System::Boolean EEAOKDEIBBJ; // 0x28
	::System::Single IKKNJMJCDOJ; // 0x2C

	::System::Single Method_2_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_982A567D4959BFE8_METHOD_2_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_982A567D4959BFE8_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_982A567D4959BFE8_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	/*
	::System::Void Method_2_8A8D6C702541871F(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + STRUCT_2_982A567D4959BFE8_METHOD_2_8A8D6C702541871F_OFFSET))(this, a1, a2, a3);
	}
	*/

	::System::Void Method_2_F8C7231308CD2C82()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_982A567D4959BFE8_METHOD_2_F8C7231308CD2C82_OFFSET))(this);
	}

	static ::System::Boolean Method_2_867F85CA133E06EB(::System::Single a1)
	{
		return ((::System::Boolean(*)(::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_982A567D4959BFE8_METHOD_2_867F85CA133E06EB_OFFSET))(a1);
	}

	static ::System::Boolean Method_2_528E0D0C9515BF2B(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + STRUCT_2_982A567D4959BFE8_METHOD_2_528E0D0C9515BF2B_OFFSET))(a1);
	}

	::System::Void Method_2_32595A4F1CDEE878(::System::String* a1, ::System::Boolean a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_982A567D4959BFE8_METHOD_2_32595A4F1CDEE878_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}
};
