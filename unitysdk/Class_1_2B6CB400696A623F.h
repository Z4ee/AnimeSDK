#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsComponentTask_1.h"
#include "unitysdk/System/Object.h"

class Class_3_3A3A95CA33F5CFBC;
class Class_3_DFD5D1FDB9D2A4AC;
class Class_3_EA02B975BED3466B;
namespace Nap::NapECS { class EcsWorld; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9> class Func_9; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7> class Func_7; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Func_5; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_2B6CB400696A623F__CCTOR_OFFSET UNITYSDK_OFFSET(0x12CAD890)

inline static constexpr unsigned int Class_1_2B6CB400696A623F_TypeDefinitionIndex = 53283;

class Class_1_2B6CB400696A623F : public ::System::Object
{
public:
	static ::Nap::NapECS::EcsComponentTask_1<::Class_3_3A3A95CA33F5CFBC*>* StaticGet_Field_1_2()
	{
		return (::Nap::NapECS::EcsComponentTask_1<::Class_3_3A3A95CA33F5CFBC*>*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B6CB400696A623F_TypeDefinitionIndex)->GetStaticField(0x362B0);
	}
	static ::Nap::NapECS::EcsComponentTask_1<::Class_3_DFD5D1FDB9D2A4AC*>* StaticGet_Field_1_0()
	{
		return (::Nap::NapECS::EcsComponentTask_1<::Class_3_DFD5D1FDB9D2A4AC*>*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B6CB400696A623F_TypeDefinitionIndex)->GetStaticField(0x36340);
	}
	static ::Nap::NapECS::EcsComponentTask_1<::Class_3_EA02B975BED3466B*>* StaticGet_Field_1_1()
	{
		return (::Nap::NapECS::EcsComponentTask_1<::Class_3_EA02B975BED3466B*>*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B6CB400696A623F_TypeDefinitionIndex)->GetStaticField(0x363D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B6CB400696A623F__CCTOR_OFFSET))();
	}
};
