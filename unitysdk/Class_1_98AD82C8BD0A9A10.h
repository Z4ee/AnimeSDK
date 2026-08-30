#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1404;
class Class_1_5452947417BCF16A;
class Class_1_6C6363C2772DEF01;
class Class_1_A952181C6CF1F2FF;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_98AD82C8BD0A9A10_ADD_AGENDACOMPLETED_OFFSET UNITYSDK_OFFSET(0xC326390)
#define CLASS_1_98AD82C8BD0A9A10_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC3266D0)
#define CLASS_1_98AD82C8BD0A9A10_METHOD_1_8DA3FEE3379AFF0E_OFFSET UNITYSDK_OFFSET(0xC326460)
#define CLASS_1_98AD82C8BD0A9A10_METHOD_1_CA95011BD8CFD258_OFFSET UNITYSDK_OFFSET(0xC3267F0)
#define CLASS_1_98AD82C8BD0A9A10_REMOVE_AGENDACOMPLETED_OFFSET UNITYSDK_OFFSET(0xC3263F0)
#define CLASS_1_98AD82C8BD0A9A10__CTOR_OFFSET UNITYSDK_OFFSET(0xC326450)

inline static constexpr unsigned int Class_1_98AD82C8BD0A9A10_TypeDefinitionIndex = 80623;

class Class_1_98AD82C8BD0A9A10 : public ::System::Object
{
public:
	::Class_1_5452947417BCF16A* CEAAMGFCOLP; // 0x10
	::Class_0_16E4307DCC419505_1404* MJHHLOPFDNK; // 0x18
	::System::Action_1<::Class_1_6C6363C2772DEF01*>* AgendaCompleted; // 0x20

	::System::Void _ctor(::Class_0_16E4307DCC419505_1404* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1404*))((::PBYTE)hIl2Cpp + CLASS_1_98AD82C8BD0A9A10__CTOR_OFFSET))(this, a1);
	}

	::System::Void add_AgendaCompleted(::System::Action_1<::Class_1_6C6363C2772DEF01*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_6C6363C2772DEF01*>*))((::PBYTE)hIl2Cpp + CLASS_1_98AD82C8BD0A9A10_ADD_AGENDACOMPLETED_OFFSET))(this, a1);
	}

	::System::Void remove_AgendaCompleted(::System::Action_1<::Class_1_6C6363C2772DEF01*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_6C6363C2772DEF01*>*))((::PBYTE)hIl2Cpp + CLASS_1_98AD82C8BD0A9A10_REMOVE_AGENDACOMPLETED_OFFSET))(this, a1);
	}

	::System::Void Method_1_8DA3FEE3379AFF0E(::Class_1_5452947417BCF16A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5452947417BCF16A*))((::PBYTE)hIl2Cpp + CLASS_1_98AD82C8BD0A9A10_METHOD_1_8DA3FEE3379AFF0E_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98AD82C8BD0A9A10_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_CA95011BD8CFD258(::Class_1_A952181C6CF1F2FF* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A952181C6CF1F2FF*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_98AD82C8BD0A9A10_METHOD_1_CA95011BD8CFD258_OFFSET))(this, a1, a2);
	}
};
