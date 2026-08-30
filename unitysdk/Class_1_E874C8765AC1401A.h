#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_902;
namespace RPG::Client { class MainMissionData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E874C8765AC1401A_METHOD_1_533DA2BC0F0D60B1_OFFSET UNITYSDK_OFFSET(0xB76B4C0)
#define CLASS_1_E874C8765AC1401A_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB76B690)
#define CLASS_1_E874C8765AC1401A__CTOR_OFFSET UNITYSDK_OFFSET(0xB76B420)

inline static constexpr unsigned int Class_1_E874C8765AC1401A_TypeDefinitionIndex = 66210;

class Class_1_E874C8765AC1401A : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_902*>* ACBJKDENILN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E874C8765AC1401A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_533DA2BC0F0D60B1(::RPG::Client::MainMissionData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + CLASS_1_E874C8765AC1401A_METHOD_1_533DA2BC0F0D60B1_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E874C8765AC1401A_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
