#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_90BCDF599DC0B51A.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIUrbanMapRightListRowImageWidgetContext; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_5_C03DF5C3EC355079_METHOD_5_05414D908FAFAF7F_OFFSET UNITYSDK_OFFSET(0x12F11B90)
#define CLASS_5_C03DF5C3EC355079_METHOD_5_278489B2D490141A_OFFSET UNITYSDK_OFFSET(0x12F12670)
#define CLASS_5_C03DF5C3EC355079_METHOD_5_E44CB7F93FA71BA3_OFFSET UNITYSDK_OFFSET(0x12F12160)
#define CLASS_5_C03DF5C3EC355079_METHOD_5_E7EA0FE36F91060D_OFFSET UNITYSDK_OFFSET(0x12F11DE0)
#define CLASS_5_C03DF5C3EC355079__CTOR_OFFSET UNITYSDK_OFFSET(0x12F11DD0)

inline static constexpr unsigned int Class_5_C03DF5C3EC355079_TypeDefinitionIndex = 43688;

class Class_5_C03DF5C3EC355079 : public ::Class_4_90BCDF599DC0B51A
{
public:
	::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapRightListRowImageWidgetContext*>* Field_5_0; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_C03DF5C3EC355079__CTOR_OFFSET))(this);
	}

	::System::Void Method_5_05414D908FAFAF7F(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_5_C03DF5C3EC355079_METHOD_5_05414D908FAFAF7F_OFFSET))(this, a1, a2);
	}

	::MoleMole::UIControllerContextBase* Method_5_E7EA0FE36F91060D()
	{
		return ((::MoleMole::UIControllerContextBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_C03DF5C3EC355079_METHOD_5_E7EA0FE36F91060D_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapRightListRowImageWidgetContext*>* Method_5_E44CB7F93FA71BA3()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapRightListRowImageWidgetContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_C03DF5C3EC355079_METHOD_5_E44CB7F93FA71BA3_OFFSET))(this);
	}

	::System::Void Method_5_278489B2D490141A(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_5_C03DF5C3EC355079_METHOD_5_278489B2D490141A_OFFSET))(this, a1, a2);
	}
};
