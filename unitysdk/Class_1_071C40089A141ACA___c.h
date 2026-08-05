#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_071C40089A141ACA___C_METHOD_1_E6B642CE92413603_OFFSET UNITYSDK_OFFSET(0x1445D170)
#define CLASS_1_071C40089A141ACA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1445D120)
#define CLASS_1_071C40089A141ACA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1445D160)

inline static constexpr unsigned int Class_1_071C40089A141ACA___c_TypeDefinitionIndex = 43345;

class Class_1_071C40089A141ACA___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*>** StaticGet___9__12_0()
	{
		return (::System::Func_2<::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_071C40089A141ACA___c_TypeDefinitionIndex)->GetStaticField(0x2E590);
	}
	static ::Class_1_071C40089A141ACA___c** StaticGet___9()
	{
		return (::Class_1_071C40089A141ACA___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_071C40089A141ACA___c_TypeDefinitionIndex)->GetStaticField(0x2E598);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_071C40089A141ACA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_071C40089A141ACA___C__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Int32>* Method_1_E6B642CE92413603(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_071C40089A141ACA___C_METHOD_1_E6B642CE92413603_OFFSET))(this, a1);
	}
};
