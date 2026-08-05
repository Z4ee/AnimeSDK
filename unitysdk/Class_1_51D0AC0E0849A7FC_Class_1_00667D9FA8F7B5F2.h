#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class CommonDitherConfigs; }
namespace System { class Action; }

#define CLASS_1_51D0AC0E0849A7FC_CLASS_1_00667D9FA8F7B5F2_METHOD_1_0DAF4DE4EF508DA2_OFFSET UNITYSDK_OFFSET(0x10D354D0)
#define CLASS_1_51D0AC0E0849A7FC_CLASS_1_00667D9FA8F7B5F2__CTOR_OFFSET UNITYSDK_OFFSET(0x10D354C0)

inline static constexpr unsigned int Class_1_51D0AC0E0849A7FC_Class_1_00667D9FA8F7B5F2_TypeDefinitionIndex = 51930;

class Class_1_51D0AC0E0849A7FC_Class_1_00667D9FA8F7B5F2 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51D0AC0E0849A7FC_CLASS_1_00667D9FA8F7B5F2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0DAF4DE4EF508DA2(::MoleMole::Config::CommonDitherConfigs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::CommonDitherConfigs*))((::PBYTE)hIl2Cpp + CLASS_1_51D0AC0E0849A7FC_CLASS_1_00667D9FA8F7B5F2_METHOD_1_0DAF4DE4EF508DA2_OFFSET))(this, a1);
	}
};
