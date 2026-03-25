#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_0_16E4307DCC419505_375;
namespace RPG::GameCore { class ByWaitCustomString; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D9F70EB12E911F36_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA45AC20)
#define CLASS_3_D9F70EB12E911F36_EVALUATE_OFFSET UNITYSDK_OFFSET(0xA45AAB0)
#define CLASS_3_D9F70EB12E911F36_METHOD_3_019A694B80821E6A_OFFSET UNITYSDK_OFFSET(0xA45AED0)
#define CLASS_3_D9F70EB12E911F36_METHOD_3_0EF345F8F1CF4181_OFFSET UNITYSDK_OFFSET(0xA45AB90)
#define CLASS_3_D9F70EB12E911F36_METHOD_3_58E4F6A5F8FAF17F_OFFSET UNITYSDK_OFFSET(0xA45ADC0)
#define CLASS_3_D9F70EB12E911F36__CTOR_OFFSET UNITYSDK_OFFSET(0xA45A930)
#define CLASS_3_D9F70EB12E911F36___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA45AFB0)

inline static constexpr unsigned int Class_3_D9F70EB12E911F36_TypeDefinitionIndex = 43799;

class Class_3_D9F70EB12E911F36 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByWaitCustomString*>
{
public:
	::System::Boolean Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByWaitCustomString* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByWaitCustomString*))((::PBYTE)hIl2Cpp + CLASS_3_D9F70EB12E911F36__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D9F70EB12E911F36_EVALUATE_OFFSET))(this);
	}

	::System::Void Method_3_0EF345F8F1CF4181(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_3_D9F70EB12E911F36_METHOD_3_0EF345F8F1CF4181_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D9F70EB12E911F36_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_3_58E4F6A5F8FAF17F(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_3_D9F70EB12E911F36_METHOD_3_58E4F6A5F8FAF17F_OFFSET))(this, a1);
	}

	::System::Void Method_3_019A694B80821E6A(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_3_D9F70EB12E911F36_METHOD_3_019A694B80821E6A_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D9F70EB12E911F36___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
