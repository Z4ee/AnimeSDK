#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1C4138E8422654D8;
class Class_1_D17272E82AE804C2_800;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A9D049FE853CBE53_METHOD_1_290266153D771CDE_OFFSET UNITYSDK_OFFSET(0x15AB3180)
#define CLASS_1_A9D049FE853CBE53_METHOD_1_797DDF24EB4FF34A_OFFSET UNITYSDK_OFFSET(0x15AB34A0)
#define CLASS_1_A9D049FE853CBE53_METHOD_1_B63A6BA7DCEE39D7_OFFSET UNITYSDK_OFFSET(0x15AB3230)
#define CLASS_1_A9D049FE853CBE53_METHOD_1_E10FCB5EE527D005_OFFSET UNITYSDK_OFFSET(0x15AB38A0)
#define CLASS_1_A9D049FE853CBE53__CTOR_OFFSET UNITYSDK_OFFSET(0x15AB3A50)

inline static constexpr unsigned int Class_1_A9D049FE853CBE53_TypeDefinitionIndex = 78860;

class Class_1_A9D049FE853CBE53 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A9D049FE853CBE53__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2_800*>* Method_1_290266153D771CDE(::Class_1_1C4138E8422654D8* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2_800*>*(*)(::PVOID, ::Class_1_1C4138E8422654D8*))((::PBYTE)hIl2Cpp + CLASS_1_A9D049FE853CBE53_METHOD_1_290266153D771CDE_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2_800*>* Method_1_B63A6BA7DCEE39D7(::Class_1_1C4138E8422654D8* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2_800*>*(*)(::PVOID, ::Class_1_1C4138E8422654D8*))((::PBYTE)hIl2Cpp + CLASS_1_A9D049FE853CBE53_METHOD_1_B63A6BA7DCEE39D7_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2_800*>* Method_1_797DDF24EB4FF34A(::Class_1_1C4138E8422654D8* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2_800*>*(*)(::PVOID, ::Class_1_1C4138E8422654D8*))((::PBYTE)hIl2Cpp + CLASS_1_A9D049FE853CBE53_METHOD_1_797DDF24EB4FF34A_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_E10FCB5EE527D005(::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2_800*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2_800*>*))((::PBYTE)hIl2Cpp + CLASS_1_A9D049FE853CBE53_METHOD_1_E10FCB5EE527D005_OFFSET))(a1);
	}
};
