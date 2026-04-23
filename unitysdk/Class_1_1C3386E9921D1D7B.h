#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_762;
namespace RPG::Client { class MainMissionData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1C3386E9921D1D7B_METHOD_1_98688B4AEFDD010E_OFFSET UNITYSDK_OFFSET(0x1291D140)
#define CLASS_1_1C3386E9921D1D7B_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1291D2A0)
#define CLASS_1_1C3386E9921D1D7B__CTOR_OFFSET UNITYSDK_OFFSET(0x1291D0F0)

inline static constexpr unsigned int Class_1_1C3386E9921D1D7B_TypeDefinitionIndex = 60928;

class Class_1_1C3386E9921D1D7B : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_762*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C3386E9921D1D7B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_98688B4AEFDD010E(::RPG::Client::MainMissionData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + CLASS_1_1C3386E9921D1D7B_METHOD_1_98688B4AEFDD010E_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C3386E9921D1D7B_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
