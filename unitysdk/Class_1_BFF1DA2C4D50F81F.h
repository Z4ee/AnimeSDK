#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FDFA365FE186E8F2_7;
namespace RPG::Client { class ActivityBenefitV2Round; }
namespace RPG::Client { class ScheduleTask; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_BFF1DA2C4D50F81F_METHOD_1_256303B15A3BB162_OFFSET UNITYSDK_OFFSET(0x1850ED50)
#define CLASS_1_BFF1DA2C4D50F81F_METHOD_1_739DB9F245C7FAD0_OFFSET UNITYSDK_OFFSET(0x1850E6B0)
#define CLASS_1_BFF1DA2C4D50F81F_METHOD_1_8389A972740050D0_OFFSET UNITYSDK_OFFSET(0x1850E9E0)
#define CLASS_1_BFF1DA2C4D50F81F_METHOD_1_898CAF31EC6C83C1_OFFSET UNITYSDK_OFFSET(0x1850E0C0)
#define CLASS_1_BFF1DA2C4D50F81F_METHOD_1_E6C7D6104577BCA9_OFFSET UNITYSDK_OFFSET(0x1850E080)
#define CLASS_1_BFF1DA2C4D50F81F__CTOR_OFFSET UNITYSDK_OFFSET(0x1850F1E0)

inline static constexpr unsigned int Class_1_BFF1DA2C4D50F81F_TypeDefinitionIndex = 61499;

class Class_1_BFF1DA2C4D50F81F : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* JJACEJGDPAK; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::ActivityBenefitV2Round*>* JBMFDPFFBGC; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ScheduleTask*>* BMMCEEADIAJ; // 0x20
	::System::UInt32 NFLNCFNGOAD; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BFF1DA2C4D50F81F__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityBenefitV2Round*>* Method_1_E6C7D6104577BCA9()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityBenefitV2Round*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BFF1DA2C4D50F81F_METHOD_1_E6C7D6104577BCA9_OFFSET))(this);
	}

	::System::Void Method_1_898CAF31EC6C83C1(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_BFF1DA2C4D50F81F_METHOD_1_898CAF31EC6C83C1_OFFSET))(this, a1);
	}

	::System::Void Method_1_739DB9F245C7FAD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BFF1DA2C4D50F81F_METHOD_1_739DB9F245C7FAD0_OFFSET))(this);
	}

	::System::Void Method_1_8389A972740050D0(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_BFF1DA2C4D50F81F_METHOD_1_8389A972740050D0_OFFSET))(this, a1);
	}

	::System::Void Method_1_256303B15A3BB162(::Class_1_FDFA365FE186E8F2_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FDFA365FE186E8F2_7*))((::PBYTE)hIl2Cpp + CLASS_1_BFF1DA2C4D50F81F_METHOD_1_256303B15A3BB162_OFFSET))(this, a1);
	}
};
