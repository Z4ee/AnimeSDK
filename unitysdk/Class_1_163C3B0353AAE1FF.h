#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_725;
namespace RPG::Client { class BaseGameFlowContext; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_163C3B0353AAE1FF_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x17A61810)
#define CLASS_1_163C3B0353AAE1FF_METHOD_1_2C1E776057172D81_OFFSET UNITYSDK_OFFSET(0x17A61DE0)
#define CLASS_1_163C3B0353AAE1FF_METHOD_1_3BE736AACA316632_OFFSET UNITYSDK_OFFSET(0x17A61A20)
#define CLASS_1_163C3B0353AAE1FF_METHOD_1_9B65F4C871C366F0_OFFSET UNITYSDK_OFFSET(0x17A61870)
#define CLASS_1_163C3B0353AAE1FF_METHOD_1_E18BA90D675FA8A4_OFFSET UNITYSDK_OFFSET(0x17A61990)
#define CLASS_1_163C3B0353AAE1FF_METHOD_1_EBEE0D0A222A8264_OFFSET UNITYSDK_OFFSET(0x17A62190)
#define CLASS_1_163C3B0353AAE1FF_METHOD_1_F49B482BDEB769EE_OFFSET UNITYSDK_OFFSET(0x17A618B0)
#define CLASS_1_163C3B0353AAE1FF__CTOR_OFFSET UNITYSDK_OFFSET(0x17A62230)

inline static constexpr unsigned int Class_1_163C3B0353AAE1FF_TypeDefinitionIndex = 64391;

class Class_1_163C3B0353AAE1FF : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::BaseGameFlowContext*>* FKINCGODJEP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_163C3B0353AAE1FF__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_163C3B0353AAE1FF_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::BaseGameFlowContext*>* Method_1_9B65F4C871C366F0()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::BaseGameFlowContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_163C3B0353AAE1FF_METHOD_1_9B65F4C871C366F0_OFFSET))(this);
	}

	::System::Void Method_1_F49B482BDEB769EE(::RPG::Client::BaseGameFlowContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlowContext*))((::PBYTE)hIl2Cpp + CLASS_1_163C3B0353AAE1FF_METHOD_1_F49B482BDEB769EE_OFFSET))(this, a1);
	}

	::System::Void Method_1_E18BA90D675FA8A4(::RPG::Client::BaseGameFlowContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlowContext*))((::PBYTE)hIl2Cpp + CLASS_1_163C3B0353AAE1FF_METHOD_1_E18BA90D675FA8A4_OFFSET))(this, a1);
	}

	::System::Void Method_1_3BE736AACA316632(::System::Int32 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_163C3B0353AAE1FF_METHOD_1_3BE736AACA316632_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2C1E776057172D81(::Class_0_16E4307DCC419505_725* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_725*))((::PBYTE)hIl2Cpp + CLASS_1_163C3B0353AAE1FF_METHOD_1_2C1E776057172D81_OFFSET))(this, a1);
	}

	::System::Void Method_1_EBEE0D0A222A8264()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_163C3B0353AAE1FF_METHOD_1_EBEE0D0A222A8264_OFFSET))(this);
	}
};
