#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5136E14D9202F88B;
class Class_1_D33B7D6901AE39E9;
class Class_2_FD51057495DB654F;
namespace System { class String; }

#define CLASS_1_0A992301E335EB9B_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB93BB90)
#define CLASS_1_0A992301E335EB9B_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB93BB50)
#define CLASS_1_0A992301E335EB9B_METHOD_1_5AD7EA9F1126DF19_OFFSET UNITYSDK_OFFSET(0xB93C210)
#define CLASS_1_0A992301E335EB9B_METHOD_1_D4D72195FE5FCEC2_OFFSET UNITYSDK_OFFSET(0xB93C360)
#define CLASS_1_0A992301E335EB9B__CTOR_OFFSET UNITYSDK_OFFSET(0xB93BB40)

inline static constexpr unsigned int Class_1_0A992301E335EB9B_TypeDefinitionIndex = 75391;

class Class_1_0A992301E335EB9B : public ::System::Object
{
public:
	// static const ::System::String* ANFNOKLPDNL; // 0x0
	::Class_1_D33B7D6901AE39E9* FKINCGODJEP; // 0x10
	::Class_1_5136E14D9202F88B* CKMCMMFKHDE; // 0x18

	::System::Void _ctor(::Class_1_D33B7D6901AE39E9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D33B7D6901AE39E9*))((::PBYTE)hIl2Cpp + CLASS_1_0A992301E335EB9B__CTOR_OFFSET))(this, a1);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A992301E335EB9B_INITIALIZE_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A992301E335EB9B_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_5AD7EA9F1126DF19(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0A992301E335EB9B_METHOD_1_5AD7EA9F1126DF19_OFFSET))(this, a1, a2);
	}

	::Class_2_FD51057495DB654F* Method_1_D4D72195FE5FCEC2(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::Class_2_FD51057495DB654F*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0A992301E335EB9B_METHOD_1_D4D72195FE5FCEC2_OFFSET))(this, a1, a2);
	}
};
