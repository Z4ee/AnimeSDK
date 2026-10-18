#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_417;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class TabView; }
namespace UnityEngine::Events { class UnityAction; }

#define CLASS_1_7D6F408CFCD1BB92_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB9BB440)
#define CLASS_1_7D6F408CFCD1BB92_METHOD_1_40EBA7013E4CCDDF_1_OFFSET UNITYSDK_OFFSET(0xB9BB380)
#define CLASS_1_7D6F408CFCD1BB92_METHOD_1_40EBA7013E4CCDDF_OFFSET UNITYSDK_OFFSET(0xB9BB080)
#define CLASS_1_7D6F408CFCD1BB92_METHOD_1_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0xB9BB2E0)
#define CLASS_1_7D6F408CFCD1BB92_METHOD_1_8135BF125C084088_OFFSET UNITYSDK_OFFSET(0xB9BB140)
#define CLASS_1_7D6F408CFCD1BB92__CTOR_OFFSET UNITYSDK_OFFSET(0xB9BAF50)

inline static constexpr unsigned int Class_1_7D6F408CFCD1BB92_TypeDefinitionIndex = 49814;

class Class_1_7D6F408CFCD1BB92 : public ::System::Object
{
public:
	::RPG::Client::TabView* PEOHNLJEFLJ; // 0x10
	::UnityEngine::Events::UnityAction* CKLPGMNBODG; // 0x18
	::RPG::Client::AnimatorButton* KKIPKDPOIJL; // 0x20
	::UnityEngine::Events::UnityAction* PINMDNOOGIP; // 0x28
	::RPG::Client::AnimatorButton* KHAKIPGJHPG; // 0x30
	::Class_0_16E4307DCC419505_417* AGKMDEHIECJ; // 0x38

	::System::Void _ctor(::RPG::Client::TabView* a1, ::RPG::Client::AnimatorButton* a2, ::RPG::Client::AnimatorButton* a3, ::Class_0_16E4307DCC419505_417* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TabView*, ::RPG::Client::AnimatorButton*, ::RPG::Client::AnimatorButton*, ::Class_0_16E4307DCC419505_417*))((::PBYTE)hIl2Cpp + CLASS_1_7D6F408CFCD1BB92__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_40EBA7013E4CCDDF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D6F408CFCD1BB92_METHOD_1_40EBA7013E4CCDDF_OFFSET))(this);
	}

	::System::Void Method_1_40EBA7013E4CCDDF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D6F408CFCD1BB92_METHOD_1_40EBA7013E4CCDDF_1_OFFSET))(this);
	}

	::System::Boolean Method_1_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D6F408CFCD1BB92_METHOD_1_4DA6D4A624E42CAB_OFFSET))(this);
	}

	::System::Boolean Method_1_8135BF125C084088(::RPG::Client::AnimatorButton* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AnimatorButton*))((::PBYTE)hIl2Cpp + CLASS_1_7D6F408CFCD1BB92_METHOD_1_8135BF125C084088_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D6F408CFCD1BB92_DISPOSE_OFFSET))(this);
	}
};
