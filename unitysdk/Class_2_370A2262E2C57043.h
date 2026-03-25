#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace RPG::Client { class ShowAttackTimeParam; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_370A2262E2C57043_METHOD_2_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0x8CB8120)
#define CLASS_2_370A2262E2C57043_METHOD_2_B1B73B9444B848C6_OFFSET UNITYSDK_OFFSET(0x8CB7FB0)
#define CLASS_2_370A2262E2C57043__CTOR_OFFSET UNITYSDK_OFFSET(0x8CB8170)
#define CLASS_2_370A2262E2C57043__ONBIND_OFFSET UNITYSDK_OFFSET(0x8CB7E80)
#define CLASS_2_370A2262E2C57043___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x8CB81A0)

inline static constexpr unsigned int Class_2_370A2262E2C57043_TypeDefinitionIndex = 58360;

class Class_2_370A2262E2C57043 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::UnityEngine::UI::Image* Field_2_1; // 0x60
	::UnityEngine::UI::Text* Field_2_0; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_370A2262E2C57043__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_370A2262E2C57043__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_B1B73B9444B848C6(::RPG::Client::ShowAttackTimeParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ShowAttackTimeParam*))((::PBYTE)hIl2Cpp + CLASS_2_370A2262E2C57043_METHOD_2_B1B73B9444B848C6_OFFSET))(this, a1);
	}

	::System::Void Method_2_775B6D644F07B554()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_370A2262E2C57043_METHOD_2_775B6D644F07B554_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_370A2262E2C57043___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
