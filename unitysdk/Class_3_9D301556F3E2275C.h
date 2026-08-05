#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_1158E557A8EC08C4.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"

namespace MoleMole::HollowChessboard { class ParticleSection; }

#define CLASS_3_9D301556F3E2275C_METHOD_3_8608350DFEDEE4FD_OFFSET UNITYSDK_OFFSET(0x1776FB60)
#define CLASS_3_9D301556F3E2275C_METHOD_3_8BC85DADEC2C3862_OFFSET UNITYSDK_OFFSET(0x1776F680)
#define CLASS_3_9D301556F3E2275C_METHOD_3_B1936CE4DA97AA45_1_OFFSET UNITYSDK_OFFSET(0x1776FDF0)
#define CLASS_3_9D301556F3E2275C_METHOD_3_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x1776FAC0)
#define CLASS_3_9D301556F3E2275C__CTOR_OFFSET UNITYSDK_OFFSET(0x1776F660)

inline static constexpr unsigned int Class_3_9D301556F3E2275C_TypeDefinitionIndex = 43753;

class Class_3_9D301556F3E2275C : public ::Class_2_1158E557A8EC08C4<::MoleMole::HollowChessboard::ParticleSection*>
{
public:
	::MoleMole::HollowChessboard::RenderDataHandle Field_3_0; // 0x28

	::System::Void _ctor(::MoleMole::HollowChessboard::ParticleSection* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::ParticleSection*))((::PBYTE)hIl2Cpp + CLASS_3_9D301556F3E2275C__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_8BC85DADEC2C3862()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9D301556F3E2275C_METHOD_3_8BC85DADEC2C3862_OFFSET))(this);
	}

	::System::Void Method_3_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9D301556F3E2275C_METHOD_3_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_3_8608350DFEDEE4FD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_9D301556F3E2275C_METHOD_3_8608350DFEDEE4FD_OFFSET))(this, a1);
	}

	::System::Void Method_3_B1936CE4DA97AA45_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9D301556F3E2275C_METHOD_3_B1936CE4DA97AA45_1_OFFSET))(this);
	}
};
