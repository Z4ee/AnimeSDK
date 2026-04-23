#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_578;
namespace RPG::GameCore { class MiParameterConfigBase; }

#define CLASS_1_A79AEE710275723B_METHOD_1_D58DABB8261DCAD4_OFFSET UNITYSDK_OFFSET(0xCD53AB0)
#define CLASS_1_A79AEE710275723B__CTOR_OFFSET UNITYSDK_OFFSET(0xCD53FA0)

inline static constexpr unsigned int Class_1_A79AEE710275723B_TypeDefinitionIndex = 72526;

class Class_1_A79AEE710275723B : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A79AEE710275723B__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_578* Method_1_D58DABB8261DCAD4(::RPG::GameCore::MiParameterConfigBase* a1)
	{
		return ((::Class_0_16E4307DCC419505_578*(*)(::PVOID, ::RPG::GameCore::MiParameterConfigBase*))((::PBYTE)hIl2Cpp + CLASS_1_A79AEE710275723B_METHOD_1_D58DABB8261DCAD4_OFFSET))(this, a1);
	}
};
