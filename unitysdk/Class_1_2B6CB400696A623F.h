#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsComponentTask_1.h"
#include "unitysdk/System/Object.h"

class Class_3_707412604A129938;
class Class_3_C93CC3D2C2AC4067;
class Class_3_EA02B975BED3466B;
namespace Nap::NapECS { class EcsWorld; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9> class Func_9; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7> class Func_7; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Func_5; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_2B6CB400696A623F__CCTOR_OFFSET UNITYSDK_OFFSET(0x12D6BB90)

inline static constexpr unsigned int Class_1_2B6CB400696A623F_TypeDefinitionIndex = 88652;

class Class_1_2B6CB400696A623F : public ::System::Object
{
public:
	static ::Nap::NapECS::EcsComponentTask_1<::Class_3_EA02B975BED3466B*>* StaticGet_Field_1_1()
	{
		return (::Nap::NapECS::EcsComponentTask_1<::Class_3_EA02B975BED3466B*>*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B6CB400696A623F_TypeDefinitionIndex)->GetStaticField(0x342D0);
	}
	static ::Nap::NapECS::EcsComponentTask_1<::Class_3_707412604A129938*>* StaticGet_Field_1_0()
	{
		return (::Nap::NapECS::EcsComponentTask_1<::Class_3_707412604A129938*>*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B6CB400696A623F_TypeDefinitionIndex)->GetStaticField(0x34360);
	}
	static ::Nap::NapECS::EcsComponentTask_1<::Class_3_C93CC3D2C2AC4067*>* StaticGet_Field_1_2()
	{
		return (::Nap::NapECS::EcsComponentTask_1<::Class_3_C93CC3D2C2AC4067*>*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B6CB400696A623F_TypeDefinitionIndex)->GetStaticField(0x343F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B6CB400696A623F__CCTOR_OFFSET))();
	}
};
