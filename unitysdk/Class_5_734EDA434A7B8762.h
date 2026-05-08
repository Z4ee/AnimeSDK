#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_90BCDF599DC0B51A.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_1_1685EC66FBD28897;
class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIUrbanMapRightListRowNormalContext; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_0_16E4307DCC41950C_12;

#define CLASS_5_734EDA434A7B8762_METHOD_5_278489B2D490141A_OFFSET UNITYSDK_OFFSET(0x14BBE7A0)
#define CLASS_5_734EDA434A7B8762_METHOD_5_3259BA3533FDE115_OFFSET UNITYSDK_OFFSET(0x14BBD560)
#define CLASS_5_734EDA434A7B8762_METHOD_5_6EEC31C0D8C79060_OFFSET UNITYSDK_OFFSET(0x14BBE7D0)
#define CLASS_5_734EDA434A7B8762_METHOD_5_EF900235519E1106_OFFSET UNITYSDK_OFFSET(0x14BBCEC0)
#define CLASS_5_734EDA434A7B8762_METHOD_5_F0E307B84478A272_1_OFFSET UNITYSDK_OFFSET(0x14BBE7B0)
#define CLASS_5_734EDA434A7B8762_METHOD_5_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x14BBE780)
#define CLASS_5_734EDA434A7B8762__CTOR_OFFSET UNITYSDK_OFFSET(0x14BBD4D0)

inline static constexpr unsigned int Class_5_734EDA434A7B8762_TypeDefinitionIndex = 62057;

class Class_5_734EDA434A7B8762 : public ::Class_4_90BCDF599DC0B51A
{
public:
	::Class_0_16E4307DCC41950C_12<::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapRightListRowNormalContext*>*>* Field_5_0; // 0x78
	::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>* Field_5_1; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_734EDA434A7B8762__CTOR_OFFSET))(this);
	}

	::System::Void Method_5_EF900235519E1106(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_5_734EDA434A7B8762_METHOD_5_EF900235519E1106_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>* Method_5_3259BA3533FDE115()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_734EDA434A7B8762_METHOD_5_3259BA3533FDE115_OFFSET))(this);
	}

	::System::Boolean Method_5_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_734EDA434A7B8762_METHOD_5_F0E307B84478A272_OFFSET))(this);
	}

	::System::Void Method_5_278489B2D490141A(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_5_734EDA434A7B8762_METHOD_5_278489B2D490141A_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_5_F0E307B84478A272_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_734EDA434A7B8762_METHOD_5_F0E307B84478A272_1_OFFSET))(this);
	}

	::MoleMole::UIControllerContextBase* Method_5_6EEC31C0D8C79060()
	{
		return ((::MoleMole::UIControllerContextBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_734EDA434A7B8762_METHOD_5_6EEC31C0D8C79060_OFFSET))(this);
	}
};
