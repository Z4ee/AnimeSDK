#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_423695772F3F2AA9;
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_DCE8F52BF27202F5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x123D9690)
#define CLASS_1_DCE8F52BF27202F5_METHOD_1_2D37D64DECAD53E8_OFFSET UNITYSDK_OFFSET(0x123D92F0)
#define CLASS_1_DCE8F52BF27202F5_METHOD_1_491989362C38E25D_OFFSET UNITYSDK_OFFSET(0x123D8D10)
#define CLASS_1_DCE8F52BF27202F5_METHOD_1_5E52FE9C6B9F1722_OFFSET UNITYSDK_OFFSET(0x123D9470)
#define CLASS_1_DCE8F52BF27202F5_METHOD_1_69C99C07E3B7351D_OFFSET UNITYSDK_OFFSET(0x123D95D0)
#define CLASS_1_DCE8F52BF27202F5_METHOD_1_BDD8D237CCA5CEBD_OFFSET UNITYSDK_OFFSET(0x123D9180)
#define CLASS_1_DCE8F52BF27202F5__CTOR_OFFSET UNITYSDK_OFFSET(0x123D8D00)

inline static constexpr unsigned int Class_1_DCE8F52BF27202F5_TypeDefinitionIndex = 68135;

class Class_1_DCE8F52BF27202F5 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_1_423695772F3F2AA9*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCE8F52BF27202F5__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_491989362C38E25D(::System::Collections::Generic::IEnumerable_1<::System::Type*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Type*>*))((::PBYTE)hIl2Cpp + CLASS_1_DCE8F52BF27202F5_METHOD_1_491989362C38E25D_OFFSET))(this, a1);
	}

	::System::Void Method_1_BDD8D237CCA5CEBD(::Class_1_DCE8F52BF27202F5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DCE8F52BF27202F5*))((::PBYTE)hIl2Cpp + CLASS_1_DCE8F52BF27202F5_METHOD_1_BDD8D237CCA5CEBD_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_2D37D64DECAD53E8(::System::Collections::Generic::List_1<::Class_1_423695772F3F2AA9*>* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_423695772F3F2AA9*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DCE8F52BF27202F5_METHOD_1_2D37D64DECAD53E8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5E52FE9C6B9F1722(::Class_1_DCE8F52BF27202F5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DCE8F52BF27202F5*))((::PBYTE)hIl2Cpp + CLASS_1_DCE8F52BF27202F5_METHOD_1_5E52FE9C6B9F1722_OFFSET))(this, a1);
	}

	::Class_1_423695772F3F2AA9* Method_1_69C99C07E3B7351D(::System::Type* a1)
	{
		return ((::Class_1_423695772F3F2AA9*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_DCE8F52BF27202F5_METHOD_1_69C99C07E3B7351D_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCE8F52BF27202F5_DISPOSE_OFFSET))(this);
	}
};
