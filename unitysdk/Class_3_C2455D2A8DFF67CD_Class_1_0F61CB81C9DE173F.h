#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }

#define CLASS_3_C2455D2A8DFF67CD_CLASS_1_0F61CB81C9DE173F_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x130704A0)
#define CLASS_3_C2455D2A8DFF67CD_CLASS_1_0F61CB81C9DE173F_METHOD_1_B877181B6123B7F6_OFFSET UNITYSDK_OFFSET(0x13070420)
#define CLASS_3_C2455D2A8DFF67CD_CLASS_1_0F61CB81C9DE173F__CTOR_OFFSET UNITYSDK_OFFSET(0x13070410)

inline static constexpr unsigned int Class_3_C2455D2A8DFF67CD_Class_1_0F61CB81C9DE173F_TypeDefinitionIndex = 45322;

class Class_3_C2455D2A8DFF67CD_Class_1_0F61CB81C9DE173F : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_0; // 0x10
	::System::Action* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2455D2A8DFF67CD_CLASS_1_0F61CB81C9DE173F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B877181B6123B7F6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2455D2A8DFF67CD_CLASS_1_0F61CB81C9DE173F_METHOD_1_B877181B6123B7F6_OFFSET))(this);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2455D2A8DFF67CD_CLASS_1_0F61CB81C9DE173F_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}
};
