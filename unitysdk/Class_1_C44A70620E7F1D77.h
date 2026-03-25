#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_578;
namespace RPG::Client { class IAvatarInfoProvider; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C44A70620E7F1D77_METHOD_1_3033E61E52926DC1_OFFSET UNITYSDK_OFFSET(0x115E6120)
#define CLASS_1_C44A70620E7F1D77_METHOD_1_3FFD49FF9D0663E4_OFFSET UNITYSDK_OFFSET(0x115E6200)
#define CLASS_1_C44A70620E7F1D77__CTOR_OFFSET UNITYSDK_OFFSET(0x115E61B0)

inline static constexpr unsigned int Class_1_C44A70620E7F1D77_TypeDefinitionIndex = 50841;

class Class_1_C44A70620E7F1D77 : public ::System::Object
{
public:
	::Il2CppArray<::Class_0_16E4307DCC419505_578*>* Field_1_0; // 0x10

	::System::Void _ctor(::Il2CppArray<::Class_0_16E4307DCC419505_578*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_0_16E4307DCC419505_578*>*))((::PBYTE)hIl2Cpp + CLASS_1_C44A70620E7F1D77__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_C44A70620E7F1D77* Method_1_3033E61E52926DC1(::Il2CppArray<::Class_0_16E4307DCC419505_578*>* a1)
	{
		return ((::Class_1_C44A70620E7F1D77*(*)(::Il2CppArray<::Class_0_16E4307DCC419505_578*>*))((::PBYTE)hIl2Cpp + CLASS_1_C44A70620E7F1D77_METHOD_1_3033E61E52926DC1_OFFSET))(a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* Method_1_3FFD49FF9D0663E4()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C44A70620E7F1D77_METHOD_1_3FFD49FF9D0663E4_OFFSET))(this);
	}
};
