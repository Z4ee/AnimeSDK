#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoEventTrigger; }
namespace System { class Action; }
namespace UnityEngine::UI { class Image; }

#define CLASS_1_2B7F8DBC98E3A114_CLASS_1_AAD0F9E611D8A5E7_METHOD_1_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x14309840)
#define CLASS_1_2B7F8DBC98E3A114_CLASS_1_AAD0F9E611D8A5E7_METHOD_1_E14457E32A550619_OFFSET UNITYSDK_OFFSET(0x14309780)
#define CLASS_1_2B7F8DBC98E3A114_CLASS_1_AAD0F9E611D8A5E7_METHOD_1_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x143095E0)
#define CLASS_1_2B7F8DBC98E3A114_CLASS_1_AAD0F9E611D8A5E7__CTOR_OFFSET UNITYSDK_OFFSET(0x14309550)

inline static constexpr unsigned int Class_1_2B7F8DBC98E3A114_Class_1_AAD0F9E611D8A5E7_TypeDefinitionIndex = 40912;

class Class_1_2B7F8DBC98E3A114_Class_1_AAD0F9E611D8A5E7 : public ::System::Object
{
public:
	::MoleMole::MonoEventTrigger* Field_1_1; // 0x10
	::UnityEngine::UI::Image* Field_1_0; // 0x18

	::System::Void _ctor(::UnityEngine::UI::Image* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_CLASS_1_AAD0F9E611D8A5E7__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_CLASS_1_AAD0F9E611D8A5E7_METHOD_1_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_1_E14457E32A550619(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_CLASS_1_AAD0F9E611D8A5E7_METHOD_1_E14457E32A550619_OFFSET))(this, a1);
	}

	::System::Void Method_1_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_CLASS_1_AAD0F9E611D8A5E7_METHOD_1_19CCC07C980409E4_OFFSET))(this, a1);
	}
};
