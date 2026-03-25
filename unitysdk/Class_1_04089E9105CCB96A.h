#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UIController; }
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_04089E9105CCB96A_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xA225A50)
#define CLASS_1_04089E9105CCB96A_GET_COUNT_OFFSET UNITYSDK_OFFSET(0xA225910)
#define CLASS_1_04089E9105CCB96A_METHOD_1_050926EEA9F75C36_OFFSET UNITYSDK_OFFSET(0xA225EA0)
#define CLASS_1_04089E9105CCB96A_METHOD_1_09372A9AA2B659F5_OFFSET UNITYSDK_OFFSET(0xA225D30)
#define CLASS_1_04089E9105CCB96A_METHOD_1_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0xA225C20)
#define CLASS_1_04089E9105CCB96A_METHOD_1_5F2E732520699FD7_OFFSET UNITYSDK_OFFSET(0xA225F10)
#define CLASS_1_04089E9105CCB96A_METHOD_1_8A52930EA137FA7C_1_OFFSET UNITYSDK_OFFSET(0xA225BB0)
#define CLASS_1_04089E9105CCB96A_METHOD_1_8A52930EA137FA7C_OFFSET UNITYSDK_OFFSET(0xA225B40)
#define CLASS_1_04089E9105CCB96A_METHOD_1_95390DD268A4C995_OFFSET UNITYSDK_OFFSET(0xA225960)
#define CLASS_1_04089E9105CCB96A_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xA225CC0)
#define CLASS_1_04089E9105CCB96A_METHOD_1_AA041EC2967F998A_OFFSET UNITYSDK_OFFSET(0xA225E10)
#define CLASS_1_04089E9105CCB96A_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xA225AF0)
#define CLASS_1_04089E9105CCB96A__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA225A10)
#define CLASS_1_04089E9105CCB96A__CTOR_OFFSET UNITYSDK_OFFSET(0xA2259D0)

inline static constexpr unsigned int Class_1_04089E9105CCB96A_TypeDefinitionIndex = 58473;

class Class_1_04089E9105CCB96A : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::UIController*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04089E9105CCB96A__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_04089E9105CCB96A__CTOR_1_OFFSET))(this, a1);
	}

	::System::Int32 get_Count()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04089E9105CCB96A_GET_COUNT_OFFSET))(this);
	}

	::RPG::Client::UIController* Method_1_95390DD268A4C995(::System::Int32 a1)
	{
		return ((::RPG::Client::UIController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_04089E9105CCB96A_METHOD_1_95390DD268A4C995_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerator_1<::RPG::Client::UIController*>* GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::RPG::Client::UIController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04089E9105CCB96A_GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04089E9105CCB96A_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}

	::RPG::Client::UIController* Method_1_8A52930EA137FA7C()
	{
		return ((::RPG::Client::UIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04089E9105CCB96A_METHOD_1_8A52930EA137FA7C_OFFSET))(this);
	}

	::RPG::Client::UIController* Method_1_8A52930EA137FA7C_1()
	{
		return ((::RPG::Client::UIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04089E9105CCB96A_METHOD_1_8A52930EA137FA7C_1_OFFSET))(this);
	}

	::System::Boolean Method_1_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04089E9105CCB96A_METHOD_1_4DA6D4A624E42CAB_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04089E9105CCB96A_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_09372A9AA2B659F5(::RPG::Client::UIController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + CLASS_1_04089E9105CCB96A_METHOD_1_09372A9AA2B659F5_OFFSET))(this, a1);
	}

	::System::Void Method_1_050926EEA9F75C36(::RPG::Client::UIController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + CLASS_1_04089E9105CCB96A_METHOD_1_050926EEA9F75C36_OFFSET))(this, a1);
	}

	::RPG::Client::UIController* Method_1_5F2E732520699FD7(::System::Predicate_1<::RPG::Client::UIController*>* a1)
	{
		return ((::RPG::Client::UIController*(*)(::PVOID, ::System::Predicate_1<::RPG::Client::UIController*>*))((::PBYTE)hIl2Cpp + CLASS_1_04089E9105CCB96A_METHOD_1_5F2E732520699FD7_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_AA041EC2967F998A()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04089E9105CCB96A_METHOD_1_AA041EC2967F998A_OFFSET))(this);
	}
};
