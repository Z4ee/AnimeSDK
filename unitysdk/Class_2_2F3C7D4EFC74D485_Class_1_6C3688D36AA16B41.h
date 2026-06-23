#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_1A84C744BF703CC0.h"
#include "unitysdk/System/Object.h"

class Class_3_C24316E73A7EDF3D;
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
template <typename T> class Class_1_8CC15846339E7FB0;

#define CLASS_2_2F3C7D4EFC74D485_CLASS_1_6C3688D36AA16B41_METHOD_1_0866A3CCE03C8ECA_OFFSET UNITYSDK_OFFSET(0x159A2670)
#define CLASS_2_2F3C7D4EFC74D485_CLASS_1_6C3688D36AA16B41__CTOR_OFFSET UNITYSDK_OFFSET(0x159A2660)

inline static constexpr unsigned int Class_2_2F3C7D4EFC74D485_Class_1_6C3688D36AA16B41_TypeDefinitionIndex = 63042;

class Class_2_2F3C7D4EFC74D485_Class_1_6C3688D36AA16B41 : public ::System::Object
{
public:
	::System::Action_3<::Class_1_8CC15846339E7FB0<::Class_3_C24316E73A7EDF3D*>*, ::System::Boolean, ::System::Boolean>* Field_1_0; // 0x10
	::Struct_2_1A84C744BF703CC0 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F3C7D4EFC74D485_CLASS_1_6C3688D36AA16B41__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0866A3CCE03C8ECA(::Class_1_8CC15846339E7FB0<::Class_3_C24316E73A7EDF3D*>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8CC15846339E7FB0<::Class_3_C24316E73A7EDF3D*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2F3C7D4EFC74D485_CLASS_1_6C3688D36AA16B41_METHOD_1_0866A3CCE03C8ECA_OFFSET))(this, a1, a2);
	}
};
