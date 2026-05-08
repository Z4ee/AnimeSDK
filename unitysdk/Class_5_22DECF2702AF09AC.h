#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_90BCDF599DC0B51A.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_1_1685EC66FBD28897;
class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIUrbanMapRightListRowNormalContext; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_5_22DECF2702AF09AC_METHOD_5_278489B2D490141A_OFFSET UNITYSDK_OFFSET(0x1326EF90)
#define CLASS_5_22DECF2702AF09AC_METHOD_5_6EEC31C0D8C79060_OFFSET UNITYSDK_OFFSET(0x13270C10)
#define CLASS_5_22DECF2702AF09AC_METHOD_5_CBDC7453F3155151_OFFSET UNITYSDK_OFFSET(0x1326EC90)
#define CLASS_5_22DECF2702AF09AC_METHOD_5_E1FFA68B107A4A14_OFFSET UNITYSDK_OFFSET(0x1326EFA0)
#define CLASS_5_22DECF2702AF09AC_METHOD_5_FECD5D3551D1B15C_OFFSET UNITYSDK_OFFSET(0x1326F870)
#define CLASS_5_22DECF2702AF09AC__CTOR_OFFSET UNITYSDK_OFFSET(0x1326EF80)

inline static constexpr unsigned int Class_5_22DECF2702AF09AC_TypeDefinitionIndex = 80910;

class Class_5_22DECF2702AF09AC : public ::Class_4_90BCDF599DC0B51A
{
public:
	::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapRightListRowNormalContext*>* Field_5_0; // 0x78
	::Class_2_000597E145D7A42A<::System::Collections::Generic::IList_1<::Class_1_1685EC66FBD28897*>*>* Field_5_1; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_22DECF2702AF09AC__CTOR_OFFSET))(this);
	}

	::System::Void Method_5_CBDC7453F3155151(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_5_22DECF2702AF09AC_METHOD_5_CBDC7453F3155151_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_278489B2D490141A(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_5_22DECF2702AF09AC_METHOD_5_278489B2D490141A_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapRightListRowNormalContext*>* Method_5_E1FFA68B107A4A14()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapRightListRowNormalContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_22DECF2702AF09AC_METHOD_5_E1FFA68B107A4A14_OFFSET))(this);
	}

	::Class_2_000597E145D7A42A<::System::Collections::Generic::IList_1<::Class_1_1685EC66FBD28897*>*>* Method_5_FECD5D3551D1B15C()
	{
		return ((::Class_2_000597E145D7A42A<::System::Collections::Generic::IList_1<::Class_1_1685EC66FBD28897*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_22DECF2702AF09AC_METHOD_5_FECD5D3551D1B15C_OFFSET))(this);
	}

	::MoleMole::UIControllerContextBase* Method_5_6EEC31C0D8C79060()
	{
		return ((::MoleMole::UIControllerContextBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_22DECF2702AF09AC_METHOD_5_6EEC31C0D8C79060_OFFSET))(this);
	}
};
