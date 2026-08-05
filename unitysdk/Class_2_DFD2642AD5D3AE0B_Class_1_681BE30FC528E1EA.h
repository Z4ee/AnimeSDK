#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Nap::NapECS { class EcsComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_DFD2642AD5D3AE0B_CLASS_1_681BE30FC528E1EA_METHOD_1_32861FEB49BAE063_OFFSET UNITYSDK_OFFSET(0x12974FF0)
#define CLASS_2_DFD2642AD5D3AE0B_CLASS_1_681BE30FC528E1EA__CTOR_OFFSET UNITYSDK_OFFSET(0x12974FE0)

inline static constexpr unsigned int Class_2_DFD2642AD5D3AE0B_Class_1_681BE30FC528E1EA_TypeDefinitionIndex = 52614;

class Class_2_DFD2642AD5D3AE0B_Class_1_681BE30FC528E1EA : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFD2642AD5D3AE0B_CLASS_1_681BE30FC528E1EA__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_32861FEB49BAE063(::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*))((::PBYTE)hIl2Cpp + CLASS_2_DFD2642AD5D3AE0B_CLASS_1_681BE30FC528E1EA_METHOD_1_32861FEB49BAE063_OFFSET))(this, a1);
	}
};
