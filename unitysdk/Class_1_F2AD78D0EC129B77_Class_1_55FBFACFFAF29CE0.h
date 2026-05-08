#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUIFish; }
namespace System { class Action; }

#define CLASS_1_F2AD78D0EC129B77_CLASS_1_55FBFACFFAF29CE0_METHOD_1_A5575550D04DB37D_OFFSET UNITYSDK_OFFSET(0x16B138C0)
#define CLASS_1_F2AD78D0EC129B77_CLASS_1_55FBFACFFAF29CE0__CTOR_OFFSET UNITYSDK_OFFSET(0x16B138B0)

inline static constexpr unsigned int Class_1_F2AD78D0EC129B77_Class_1_55FBFACFFAF29CE0_TypeDefinitionIndex = 60521;

class Class_1_F2AD78D0EC129B77_Class_1_55FBFACFFAF29CE0 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2AD78D0EC129B77_CLASS_1_55FBFACFFAF29CE0__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A5575550D04DB37D(::MoleMole::ConfigUIFish* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUIFish*))((::PBYTE)hIl2Cpp + CLASS_1_F2AD78D0EC129B77_CLASS_1_55FBFACFFAF29CE0_METHOD_1_A5575550D04DB37D_OFFSET))(this, a1);
	}
};
