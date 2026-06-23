#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_15E2D59B6ED67072;
class Class_1_85C74ADC9DDB9EDF;
class Class_1_F2DF1C3BB0EA522D;
namespace Foundation { template <typename T1, typename T2, typename T3> class ExclusiveResourceManager_3; }
namespace MoleMole { class CameraShotData; }
namespace Nap::NapECS { class EcsWorld; }

#define STRUCT_2_84B7A209249AC260_METHOD_2_0368FA14922C5DD1_OFFSET UNITYSDK_OFFSET(0x8C20AE0)
#define STRUCT_2_84B7A209249AC260_METHOD_2_071DC892D83AD5E1_OFFSET UNITYSDK_OFFSET(0x410210)
#define STRUCT_2_84B7A209249AC260_METHOD_2_CD52E6315BE392C5_OFFSET UNITYSDK_OFFSET(0x410070)
#define STRUCT_2_84B7A209249AC260_METHOD_2_DDCBBD0BEAA16271_OFFSET UNITYSDK_OFFSET(0x8C20710)
#define STRUCT_2_84B7A209249AC260_METHOD_2_E610CB755A917CA0_OFFSET UNITYSDK_OFFSET(0x8C20BE0)

inline static constexpr unsigned int Struct_2_84B7A209249AC260_TypeDefinitionIndex = 43710;

struct alignas(8) Struct_2_84B7A209249AC260
{
	::Class_1_85C74ADC9DDB9EDF* Field_2_0; // 0x10

	::System::Void Method_2_CD52E6315BE392C5(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + STRUCT_2_84B7A209249AC260_METHOD_2_CD52E6315BE392C5_OFFSET))(this, a1);
	}

	static ::Foundation::ExclusiveResourceManager_3<::Class_1_F2DF1C3BB0EA522D*, ::Class_1_15E2D59B6ED67072*, ::Class_1_85C74ADC9DDB9EDF*>* Method_2_DDCBBD0BEAA16271(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::Foundation::ExclusiveResourceManager_3<::Class_1_F2DF1C3BB0EA522D*, ::Class_1_15E2D59B6ED67072*, ::Class_1_85C74ADC9DDB9EDF*>*(*)(::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + STRUCT_2_84B7A209249AC260_METHOD_2_DDCBBD0BEAA16271_OFFSET))(a1);
	}

	/*
	::System::Void Method_2_071DC892D83AD5E1(::Nap::NapECS::EcsWorld* a1, ::Struct_2_7DC5CBD32763D685 a2, ::MoleMole::CameraShotData* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*, ::Struct_2_7DC5CBD32763D685, ::MoleMole::CameraShotData*))((::PBYTE)hIl2Cpp + STRUCT_2_84B7A209249AC260_METHOD_2_071DC892D83AD5E1_OFFSET))(this, a1, a2, a3);
	}
	*/

	static ::System::Void Method_2_0368FA14922C5DD1(::Nap::NapECS::EcsWorld* a1, ::Class_1_85C74ADC9DDB9EDF* a2)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsWorld*, ::Class_1_85C74ADC9DDB9EDF*))((::PBYTE)hIl2Cpp + STRUCT_2_84B7A209249AC260_METHOD_2_0368FA14922C5DD1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_2_E610CB755A917CA0(::Nap::NapECS::EcsWorld* a1, ::Class_1_85C74ADC9DDB9EDF* a2)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsWorld*, ::Class_1_85C74ADC9DDB9EDF*))((::PBYTE)hIl2Cpp + STRUCT_2_84B7A209249AC260_METHOD_2_E610CB755A917CA0_OFFSET))(a1, a2);
	}
};
