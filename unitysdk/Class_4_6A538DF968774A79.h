#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_65C2BD0D1B91C740.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class ConfigCurveCtrlLocalPosNode; }
namespace UnityEngine { class Transform; }

#define CLASS_4_6A538DF968774A79_METHOD_4_2917BB48A903B3F0_OFFSET UNITYSDK_OFFSET(0xEFFAE50)
#define CLASS_4_6A538DF968774A79_METHOD_4_BAD42A15E1550F87_OFFSET UNITYSDK_OFFSET(0xEFFAAF0)
#define CLASS_4_6A538DF968774A79_METHOD_4_F4ADC37B63F4E9EF_OFFSET UNITYSDK_OFFSET(0xEFFAA40)
#define CLASS_4_6A538DF968774A79__CTOR_OFFSET UNITYSDK_OFFSET(0xEFFB570)

inline static constexpr unsigned int Class_4_6A538DF968774A79_TypeDefinitionIndex = 82306;

class Class_4_6A538DF968774A79 : public ::Class_3_65C2BD0D1B91C740
{
public:
	::MoleMole::Config::ConfigCurveCtrlLocalPosNode* Field_4_1; // 0x48
	::UnityEngine::Transform* Field_4_0; // 0x50
	::System::Single Field_4_2; // 0x58
	::UnityEngine::Vector3 Field_4_3; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_6A538DF968774A79__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_F4ADC37B63F4E9EF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_6A538DF968774A79_METHOD_4_F4ADC37B63F4E9EF_OFFSET))(this);
	}

	::System::Void Method_4_BAD42A15E1550F87()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_6A538DF968774A79_METHOD_4_BAD42A15E1550F87_OFFSET))(this);
	}

	::System::Void Method_4_2917BB48A903B3F0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_6A538DF968774A79_METHOD_4_2917BB48A903B3F0_OFFSET))(this);
	}
};
