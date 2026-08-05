#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_65C2BD0D1B91C740.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class ConfigCurveCtrlLocalPosNode; }
namespace UnityEngine { class Transform; }

#define CLASS_4_6A538DF968774A79_METHOD_4_2917BB48A903B3F0_OFFSET UNITYSDK_OFFSET(0x1394D0F0)
#define CLASS_4_6A538DF968774A79_METHOD_4_8F25C1EF1E06C9C2_OFFSET UNITYSDK_OFFSET(0x1394CD90)
#define CLASS_4_6A538DF968774A79_METHOD_4_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0x1394CCE0)
#define CLASS_4_6A538DF968774A79__CTOR_OFFSET UNITYSDK_OFFSET(0x1394D810)

inline static constexpr unsigned int Class_4_6A538DF968774A79_TypeDefinitionIndex = 76735;

class Class_4_6A538DF968774A79 : public ::Class_3_65C2BD0D1B91C740
{
public:
	::MoleMole::Config::ConfigCurveCtrlLocalPosNode* Field_4_0; // 0x48
	::UnityEngine::Transform* Field_4_1; // 0x50
	::UnityEngine::Vector3 Field_4_6; // 0x58
	::System::Single Field_4_7; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_6A538DF968774A79__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_C561FF611C07A44C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_6A538DF968774A79_METHOD_4_C561FF611C07A44C_OFFSET))(this);
	}

	::System::Void Method_4_8F25C1EF1E06C9C2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_6A538DF968774A79_METHOD_4_8F25C1EF1E06C9C2_OFFSET))(this);
	}

	::System::Void Method_4_2917BB48A903B3F0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_6A538DF968774A79_METHOD_4_2917BB48A903B3F0_OFFSET))(this);
	}
};
