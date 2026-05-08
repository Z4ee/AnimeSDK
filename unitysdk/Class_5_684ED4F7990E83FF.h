#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_90BCDF599DC0B51A.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_1_1685EC66FBD28897;
class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class UIUrbanMapRightListRowNormalContext; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_5_684ED4F7990E83FF_METHOD_5_278489B2D490141A_OFFSET UNITYSDK_OFFSET(0x14320170)
#define CLASS_5_684ED4F7990E83FF_METHOD_5_2CC724779F7707BA_OFFSET UNITYSDK_OFFSET(0x1431FA50)
#define CLASS_5_684ED4F7990E83FF_METHOD_5_9215CE756124367A_OFFSET UNITYSDK_OFFSET(0x103A2370)
#define CLASS_5_684ED4F7990E83FF_METHOD_5_DD67B00E4DD1AEC0_OFFSET UNITYSDK_OFFSET(0x1431F4E0)
#define CLASS_5_684ED4F7990E83FF_METHOD_5_F0E307B84478A272_1_OFFSET UNITYSDK_OFFSET(0x1431FA30)
#define CLASS_5_684ED4F7990E83FF_METHOD_5_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1431F4C0)
#define CLASS_5_684ED4F7990E83FF__CTOR_OFFSET UNITYSDK_OFFSET(0x1431F430)

inline static constexpr unsigned int Class_5_684ED4F7990E83FF_TypeDefinitionIndex = 41842;

class Class_5_684ED4F7990E83FF : public ::Class_4_90BCDF599DC0B51A
{
public:
	::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>* Field_5_1; // 0x78
	::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapRightListRowNormalContext*>* Field_5_0; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_684ED4F7990E83FF__CTOR_OFFSET))(this);
	}

	::System::Void Method_5_9215CE756124367A(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_5_684ED4F7990E83FF_METHOD_5_9215CE756124367A_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_5_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_684ED4F7990E83FF_METHOD_5_F0E307B84478A272_OFFSET))(this);
	}

	::System::Boolean Method_5_F0E307B84478A272_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_684ED4F7990E83FF_METHOD_5_F0E307B84478A272_1_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapRightListRowNormalContext*>* Method_5_2CC724779F7707BA()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapRightListRowNormalContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_684ED4F7990E83FF_METHOD_5_2CC724779F7707BA_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>* Method_5_DD67B00E4DD1AEC0()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_684ED4F7990E83FF_METHOD_5_DD67B00E4DD1AEC0_OFFSET))(this);
	}

	::System::Void Method_5_278489B2D490141A(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_5_684ED4F7990E83FF_METHOD_5_278489B2D490141A_OFFSET))(this, a1, a2);
	}
};
