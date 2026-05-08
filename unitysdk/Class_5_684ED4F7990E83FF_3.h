#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_90BCDF599DC0B51A.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_1_1685EC66FBD28897;
class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class UIUrbanMapRightListRowNormalContext; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_5_684ED4F7990E83FF_3_METHOD_5_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x10DB4800)
#define CLASS_5_684ED4F7990E83FF_3_METHOD_5_278489B2D490141A_OFFSET UNITYSDK_OFFSET(0x10DB4840)
#define CLASS_5_684ED4F7990E83FF_3_METHOD_5_9215CE756124367A_OFFSET UNITYSDK_OFFSET(0x10DB2DC0)
#define CLASS_5_684ED4F7990E83FF_3_METHOD_5_C3D26EC46C82820D_OFFSET UNITYSDK_OFFSET(0x10DB3330)
#define CLASS_5_684ED4F7990E83FF_3_METHOD_5_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x10DB47E0)
#define CLASS_5_684ED4F7990E83FF_3_METHOD_5_FC553D3E1C066CD2_OFFSET UNITYSDK_OFFSET(0x10DB4850)
#define CLASS_5_684ED4F7990E83FF_3__CTOR_OFFSET UNITYSDK_OFFSET(0x10DB32A0)

inline static constexpr unsigned int Class_5_684ED4F7990E83FF_3_TypeDefinitionIndex = 66586;

class Class_5_684ED4F7990E83FF_3 : public ::Class_4_90BCDF599DC0B51A
{
public:
	::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapRightListRowNormalContext*>* Field_5_0; // 0x78
	::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>* Field_5_1; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_684ED4F7990E83FF_3__CTOR_OFFSET))(this);
	}

	::System::Void Method_5_9215CE756124367A(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_5_684ED4F7990E83FF_3_METHOD_5_9215CE756124367A_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>* Method_5_C3D26EC46C82820D()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_684ED4F7990E83FF_3_METHOD_5_C3D26EC46C82820D_OFFSET))(this);
	}

	::System::Boolean Method_5_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_684ED4F7990E83FF_3_METHOD_5_F0E307B84478A272_OFFSET))(this);
	}

	::System::Boolean Method_5_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_684ED4F7990E83FF_3_METHOD_5_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_5_278489B2D490141A(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_5_684ED4F7990E83FF_3_METHOD_5_278489B2D490141A_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapRightListRowNormalContext*>* Method_5_FC553D3E1C066CD2()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapRightListRowNormalContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_684ED4F7990E83FF_3_METHOD_5_FC553D3E1C066CD2_OFFSET))(this);
	}
};
