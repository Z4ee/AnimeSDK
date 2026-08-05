#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_B8EB3E9191ADE6A5.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_1_1685EC66FBD28897;
class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIUrbanMapRightListRowNormalContext; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_0_16E4307DCC419505_164;

#define CLASS_5_DEB082FC5133336A_METHOD_5_1EB5C8E4A2E7E632_OFFSET UNITYSDK_OFFSET(0x12C6B4A0)
#define CLASS_5_DEB082FC5133336A_METHOD_5_261D4B62BEE14763_OFFSET UNITYSDK_OFFSET(0x12C6B490)
#define CLASS_5_DEB082FC5133336A_METHOD_5_3259BA3533FDE115_OFFSET UNITYSDK_OFFSET(0x12C6A420)
#define CLASS_5_DEB082FC5133336A_METHOD_5_AD3BDF33DE2FF690_OFFSET UNITYSDK_OFFSET(0x12C69E10)
#define CLASS_5_DEB082FC5133336A_METHOD_5_F0E307B84478A272_1_OFFSET UNITYSDK_OFFSET(0x12C6B580)
#define CLASS_5_DEB082FC5133336A_METHOD_5_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x12C6B560)
#define CLASS_5_DEB082FC5133336A__CTOR_OFFSET UNITYSDK_OFFSET(0x12C6A390)

inline static constexpr unsigned int Class_5_DEB082FC5133336A_TypeDefinitionIndex = 42524;

class Class_5_DEB082FC5133336A : public ::Class_4_B8EB3E9191ADE6A5
{
public:
	::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>* Field_5_0; // 0x78
	::Class_0_16E4307DCC419505_164<::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapRightListRowNormalContext*>*>* Field_5_1; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_DEB082FC5133336A__CTOR_OFFSET))(this);
	}

	::System::Void Method_5_AD3BDF33DE2FF690(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_5_DEB082FC5133336A_METHOD_5_AD3BDF33DE2FF690_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>* Method_5_3259BA3533FDE115()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_DEB082FC5133336A_METHOD_5_3259BA3533FDE115_OFFSET))(this);
	}

	::System::Void Method_5_261D4B62BEE14763(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_5_DEB082FC5133336A_METHOD_5_261D4B62BEE14763_OFFSET))(this, a1, a2);
	}

	::MoleMole::UIControllerContextBase* Method_5_1EB5C8E4A2E7E632()
	{
		return ((::MoleMole::UIControllerContextBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_DEB082FC5133336A_METHOD_5_1EB5C8E4A2E7E632_OFFSET))(this);
	}

	::System::Boolean Method_5_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_DEB082FC5133336A_METHOD_5_F0E307B84478A272_OFFSET))(this);
	}

	::System::Boolean Method_5_F0E307B84478A272_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_DEB082FC5133336A_METHOD_5_F0E307B84478A272_1_OFFSET))(this);
	}
};
