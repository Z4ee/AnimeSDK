#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class LevelShootGameConfig; }
namespace System { class Action; }

#define CLASS_1_052716CD8F4EC65D_CLASS_1_69F7DF140B10FDD6_METHOD_1_C5C0F57E8C5B4265_OFFSET UNITYSDK_OFFSET(0x1481D750)
#define CLASS_1_052716CD8F4EC65D_CLASS_1_69F7DF140B10FDD6__CTOR_OFFSET UNITYSDK_OFFSET(0x1481D740)

inline static constexpr unsigned int Class_1_052716CD8F4EC65D_Class_1_69F7DF140B10FDD6_TypeDefinitionIndex = 91485;

class Class_1_052716CD8F4EC65D_Class_1_69F7DF140B10FDD6 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_052716CD8F4EC65D_CLASS_1_69F7DF140B10FDD6__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C5C0F57E8C5B4265(::MoleMole::Config::LevelShootGameConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::LevelShootGameConfig*))((::PBYTE)hIl2Cpp + CLASS_1_052716CD8F4EC65D_CLASS_1_69F7DF140B10FDD6_METHOD_1_C5C0F57E8C5B4265_OFFSET))(this, a1);
	}
};
