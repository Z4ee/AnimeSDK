#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_28A3A399628C6698;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_90DAF9D0ED77BB5D___C_METHOD_1_25F44760C5F7A595_OFFSET UNITYSDK_OFFSET(0x1361AA70)
#define CLASS_2_90DAF9D0ED77BB5D___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1361AA20)
#define CLASS_2_90DAF9D0ED77BB5D___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1361AA60)

inline static constexpr unsigned int Class_2_90DAF9D0ED77BB5D___c_TypeDefinitionIndex = 79543;

class Class_2_90DAF9D0ED77BB5D___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_3_28A3A399628C6698*, ::System::String*>** StaticGet___9__2_1()
	{
		return (::System::Func_2<::Class_3_28A3A399628C6698*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_90DAF9D0ED77BB5D___c_TypeDefinitionIndex)->GetStaticField(0x33A30);
	}
	static ::Class_2_90DAF9D0ED77BB5D___c** StaticGet___9()
	{
		return (::Class_2_90DAF9D0ED77BB5D___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_90DAF9D0ED77BB5D___c_TypeDefinitionIndex)->GetStaticField(0x33A38);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_90DAF9D0ED77BB5D___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_90DAF9D0ED77BB5D___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_25F44760C5F7A595(::Class_3_28A3A399628C6698* a1)
	{
		return ((::System::String*(*)(::PVOID, ::Class_3_28A3A399628C6698*))((::PBYTE)hIl2Cpp + CLASS_2_90DAF9D0ED77BB5D___C_METHOD_1_25F44760C5F7A595_OFFSET))(this, a1);
	}
};
