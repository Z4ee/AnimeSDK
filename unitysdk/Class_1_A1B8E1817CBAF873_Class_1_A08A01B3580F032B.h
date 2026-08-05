#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ScenePerformConfig; }
namespace System { class Action; }

#define CLASS_1_A1B8E1817CBAF873_CLASS_1_A08A01B3580F032B_METHOD_1_E14EA4671BB03E57_OFFSET UNITYSDK_OFFSET(0x1349A010)
#define CLASS_1_A1B8E1817CBAF873_CLASS_1_A08A01B3580F032B__CTOR_OFFSET UNITYSDK_OFFSET(0x1349A000)

inline static constexpr unsigned int Class_1_A1B8E1817CBAF873_Class_1_A08A01B3580F032B_TypeDefinitionIndex = 61423;

class Class_1_A1B8E1817CBAF873_Class_1_A08A01B3580F032B : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1B8E1817CBAF873_CLASS_1_A08A01B3580F032B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E14EA4671BB03E57(::MoleMole::Config::ScenePerformConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ScenePerformConfig*))((::PBYTE)hIl2Cpp + CLASS_1_A1B8E1817CBAF873_CLASS_1_A08A01B3580F032B_METHOD_1_E14EA4671BB03E57_OFFSET))(this, a1);
	}
};
