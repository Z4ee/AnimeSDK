#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_668;
namespace RPG::Client { class IAvatarInfoProvider; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D17CAE2570A8D8F0_METHOD_1_3FFD49FF9D0663E4_OFFSET UNITYSDK_OFFSET(0x127FDBB0)
#define CLASS_1_D17CAE2570A8D8F0_METHOD_1_9DCD83A11C08BCCC_OFFSET UNITYSDK_OFFSET(0x127FDAD0)
#define CLASS_1_D17CAE2570A8D8F0__CTOR_OFFSET UNITYSDK_OFFSET(0x127FDB60)

inline static constexpr unsigned int Class_1_D17CAE2570A8D8F0_TypeDefinitionIndex = 57719;

class Class_1_D17CAE2570A8D8F0 : public ::System::Object
{
public:
	::Il2CppArray<::Class_0_16E4307DCC419505_668*>* Field_1_0; // 0x10

	::System::Void _ctor(::Il2CppArray<::Class_0_16E4307DCC419505_668*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_0_16E4307DCC419505_668*>*))((::PBYTE)hIl2Cpp + CLASS_1_D17CAE2570A8D8F0__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_D17CAE2570A8D8F0* Method_1_9DCD83A11C08BCCC(::Il2CppArray<::Class_0_16E4307DCC419505_668*>* a1)
	{
		return ((::Class_1_D17CAE2570A8D8F0*(*)(::Il2CppArray<::Class_0_16E4307DCC419505_668*>*))((::PBYTE)hIl2Cpp + CLASS_1_D17CAE2570A8D8F0_METHOD_1_9DCD83A11C08BCCC_OFFSET))(a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* Method_1_3FFD49FF9D0663E4()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17CAE2570A8D8F0_METHOD_1_3FFD49FF9D0663E4_OFFSET))(this);
	}
};
