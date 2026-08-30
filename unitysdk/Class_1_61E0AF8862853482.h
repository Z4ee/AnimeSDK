#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1C4138E8422654D8;
class Class_1_D17272E82AE804C2_800;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_61E0AF8862853482_METHOD_1_551ABC52BB0F1FD7_OFFSET UNITYSDK_OFFSET(0x156F6340)
#define CLASS_1_61E0AF8862853482_METHOD_1_B63A6BA7DCEE39D7_OFFSET UNITYSDK_OFFSET(0x156F6390)
#define CLASS_1_61E0AF8862853482__CTOR_OFFSET UNITYSDK_OFFSET(0x156F6600)

inline static constexpr unsigned int Class_1_61E0AF8862853482_TypeDefinitionIndex = 78853;

class Class_1_61E0AF8862853482 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61E0AF8862853482__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2_800*>* Method_1_551ABC52BB0F1FD7(::Class_1_1C4138E8422654D8* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2_800*>*(*)(::PVOID, ::Class_1_1C4138E8422654D8*))((::PBYTE)hIl2Cpp + CLASS_1_61E0AF8862853482_METHOD_1_551ABC52BB0F1FD7_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2_800*>* Method_1_B63A6BA7DCEE39D7(::Class_1_1C4138E8422654D8* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2_800*>*(*)(::PVOID, ::Class_1_1C4138E8422654D8*))((::PBYTE)hIl2Cpp + CLASS_1_61E0AF8862853482_METHOD_1_B63A6BA7DCEE39D7_OFFSET))(this, a1);
	}
};
