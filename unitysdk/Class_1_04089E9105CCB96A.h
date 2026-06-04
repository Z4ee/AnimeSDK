#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UIController; }
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_04089E9105CCB96A_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xA63FAC0)
#define CLASS_1_04089E9105CCB96A_GET_COUNT_OFFSET UNITYSDK_OFFSET(0xA63F970)
#define CLASS_1_04089E9105CCB96A_METHOD_1_050926EEA9F75C36_OFFSET UNITYSDK_OFFSET(0xA63FEC0)
#define CLASS_1_04089E9105CCB96A_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xA63FCE0)
#define CLASS_1_04089E9105CCB96A_METHOD_1_241D2AFD7C4CDE5B_OFFSET UNITYSDK_OFFSET(0xA63FF30)
#define CLASS_1_04089E9105CCB96A_METHOD_1_5FB8120EAA10CD1F_OFFSET UNITYSDK_OFFSET(0xA63FDB0)
#define CLASS_1_04089E9105CCB96A_METHOD_1_7B2415EF3B4401A0_OFFSET UNITYSDK_OFFSET(0xA63FE20)
#define CLASS_1_04089E9105CCB96A_METHOD_1_EDBE0DAF47EEEEED_OFFSET UNITYSDK_OFFSET(0xA63FD40)
#define CLASS_1_04089E9105CCB96A_METHOD_1_F00276A0DE918F56_1_OFFSET UNITYSDK_OFFSET(0xA63FC60)
#define CLASS_1_04089E9105CCB96A_METHOD_1_F00276A0DE918F56_OFFSET UNITYSDK_OFFSET(0xA63FBE0)
#define CLASS_1_04089E9105CCB96A_METHOD_1_F5D2B8B014A6F84F_OFFSET UNITYSDK_OFFSET(0xA63F9C0)
#define CLASS_1_04089E9105CCB96A_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xA63FB40)
#define CLASS_1_04089E9105CCB96A__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA63FA80)
#define CLASS_1_04089E9105CCB96A__CTOR_OFFSET UNITYSDK_OFFSET(0xA63FA40)

inline static constexpr unsigned int Class_1_04089E9105CCB96A_TypeDefinitionIndex = 66701;

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

	::RPG::Client::UIController* Method_1_F5D2B8B014A6F84F(::System::Int32 a1)
	{
		return ((::RPG::Client::UIController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_04089E9105CCB96A_METHOD_1_F5D2B8B014A6F84F_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerator_1<::RPG::Client::UIController*>* GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::RPG::Client::UIController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04089E9105CCB96A_GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04089E9105CCB96A_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}

	::RPG::Client::UIController* Method_1_F00276A0DE918F56()
	{
		return ((::RPG::Client::UIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04089E9105CCB96A_METHOD_1_F00276A0DE918F56_OFFSET))(this);
	}

	::RPG::Client::UIController* Method_1_F00276A0DE918F56_1()
	{
		return ((::RPG::Client::UIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04089E9105CCB96A_METHOD_1_F00276A0DE918F56_1_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04089E9105CCB96A_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_EDBE0DAF47EEEEED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04089E9105CCB96A_METHOD_1_EDBE0DAF47EEEEED_OFFSET))(this);
	}

	::System::Void Method_1_5FB8120EAA10CD1F(::RPG::Client::UIController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + CLASS_1_04089E9105CCB96A_METHOD_1_5FB8120EAA10CD1F_OFFSET))(this, a1);
	}

	::System::Void Method_1_050926EEA9F75C36(::RPG::Client::UIController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + CLASS_1_04089E9105CCB96A_METHOD_1_050926EEA9F75C36_OFFSET))(this, a1);
	}

	::RPG::Client::UIController* Method_1_241D2AFD7C4CDE5B(::System::Predicate_1<::RPG::Client::UIController*>* a1)
	{
		return ((::RPG::Client::UIController*(*)(::PVOID, ::System::Predicate_1<::RPG::Client::UIController*>*))((::PBYTE)hIl2Cpp + CLASS_1_04089E9105CCB96A_METHOD_1_241D2AFD7C4CDE5B_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_7B2415EF3B4401A0()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04089E9105CCB96A_METHOD_1_7B2415EF3B4401A0_OFFSET))(this);
	}
};
