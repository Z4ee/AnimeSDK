#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_651;
namespace RPG::Client { class BaseGameFlowContext; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_00125FFDFC6CF087_METHOD_1_078C8AAC69AC1686_OFFSET UNITYSDK_OFFSET(0x13A75600)
#define CLASS_1_00125FFDFC6CF087_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x13A75420)
#define CLASS_1_00125FFDFC6CF087_METHOD_1_42FB4445DD10A787_OFFSET UNITYSDK_OFFSET(0x13A75570)
#define CLASS_1_00125FFDFC6CF087_METHOD_1_43558873524478EC_OFFSET UNITYSDK_OFFSET(0x13A75480)
#define CLASS_1_00125FFDFC6CF087_METHOD_1_D7157DC24D72CC2F_OFFSET UNITYSDK_OFFSET(0x13A75900)
#define CLASS_1_00125FFDFC6CF087_METHOD_1_EBEE0D0A222A8264_OFFSET UNITYSDK_OFFSET(0x13A75BE0)
#define CLASS_1_00125FFDFC6CF087_METHOD_1_F49B482BDEB769EE_OFFSET UNITYSDK_OFFSET(0x13A75490)
#define CLASS_1_00125FFDFC6CF087__CTOR_OFFSET UNITYSDK_OFFSET(0x13A75C80)

inline static constexpr unsigned int Class_1_00125FFDFC6CF087_TypeDefinitionIndex = 60121;

class Class_1_00125FFDFC6CF087 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::BaseGameFlowContext*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00125FFDFC6CF087__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00125FFDFC6CF087_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::BaseGameFlowContext*>* Method_1_43558873524478EC()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::BaseGameFlowContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00125FFDFC6CF087_METHOD_1_43558873524478EC_OFFSET))(this);
	}

	::System::Void Method_1_F49B482BDEB769EE(::RPG::Client::BaseGameFlowContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlowContext*))((::PBYTE)hIl2Cpp + CLASS_1_00125FFDFC6CF087_METHOD_1_F49B482BDEB769EE_OFFSET))(this, a1);
	}

	::System::Void Method_1_42FB4445DD10A787(::RPG::Client::BaseGameFlowContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlowContext*))((::PBYTE)hIl2Cpp + CLASS_1_00125FFDFC6CF087_METHOD_1_42FB4445DD10A787_OFFSET))(this, a1);
	}

	::System::Void Method_1_078C8AAC69AC1686(::System::Int32 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_00125FFDFC6CF087_METHOD_1_078C8AAC69AC1686_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D7157DC24D72CC2F(::Class_0_16E4307DCC419505_651* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_651*))((::PBYTE)hIl2Cpp + CLASS_1_00125FFDFC6CF087_METHOD_1_D7157DC24D72CC2F_OFFSET))(this, a1);
	}

	::System::Void Method_1_EBEE0D0A222A8264()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00125FFDFC6CF087_METHOD_1_EBEE0D0A222A8264_OFFSET))(this);
	}
};
