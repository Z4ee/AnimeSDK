#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7FF19F6206AF6DD7_9;
namespace RPG::Client { class ActivityBenefitV2Round; }
namespace RPG::Client { class ScheduleTask; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_86997AC0C8EBD0CE_METHOD_1_61D5F19C2D1953D8_OFFSET UNITYSDK_OFFSET(0xAFBB110)
#define CLASS_1_86997AC0C8EBD0CE_METHOD_1_739DB9F245C7FAD0_OFFSET UNITYSDK_OFFSET(0xAFBB560)
#define CLASS_1_86997AC0C8EBD0CE_METHOD_1_8389A972740050D0_OFFSET UNITYSDK_OFFSET(0xAFBB890)
#define CLASS_1_86997AC0C8EBD0CE_METHOD_1_B76301C0F828A4B6_OFFSET UNITYSDK_OFFSET(0xAFBBBF0)
#define CLASS_1_86997AC0C8EBD0CE_METHOD_1_E6C7D6104577BCA9_OFFSET UNITYSDK_OFFSET(0xAFBB0D0)
#define CLASS_1_86997AC0C8EBD0CE__CTOR_OFFSET UNITYSDK_OFFSET(0xAFBBF30)

inline static constexpr unsigned int Class_1_86997AC0C8EBD0CE_TypeDefinitionIndex = 57406;

class Class_1_86997AC0C8EBD0CE : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::ActivityBenefitV2Round*>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ScheduleTask*>* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_2; // 0x20
	::System::UInt32 Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_86997AC0C8EBD0CE__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityBenefitV2Round*>* Method_1_E6C7D6104577BCA9()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityBenefitV2Round*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_86997AC0C8EBD0CE_METHOD_1_E6C7D6104577BCA9_OFFSET))(this);
	}

	::System::Void Method_1_61D5F19C2D1953D8(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_86997AC0C8EBD0CE_METHOD_1_61D5F19C2D1953D8_OFFSET))(this, a1);
	}

	::System::Void Method_1_739DB9F245C7FAD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_86997AC0C8EBD0CE_METHOD_1_739DB9F245C7FAD0_OFFSET))(this);
	}

	::System::Void Method_1_8389A972740050D0(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_86997AC0C8EBD0CE_METHOD_1_8389A972740050D0_OFFSET))(this, a1);
	}

	::System::Void Method_1_B76301C0F828A4B6(::Class_1_7FF19F6206AF6DD7_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_9*))((::PBYTE)hIl2Cpp + CLASS_1_86997AC0C8EBD0CE_METHOD_1_B76301C0F828A4B6_OFFSET))(this, a1);
	}
};
