#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_7C525C964F57077F;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_7066F46E34236F2E___C_METHOD_1_25F44760C5F7A595_OFFSET UNITYSDK_OFFSET(0x13259870)
#define CLASS_2_7066F46E34236F2E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13259820)
#define CLASS_2_7066F46E34236F2E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13259860)

inline static constexpr unsigned int Class_2_7066F46E34236F2E___c_TypeDefinitionIndex = 47152;

class Class_2_7066F46E34236F2E___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_3_7C525C964F57077F*, ::System::String*>** StaticGet___9__4_1()
	{
		return (::System::Func_2<::Class_3_7C525C964F57077F*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7066F46E34236F2E___c_TypeDefinitionIndex)->GetStaticField(0x31000);
	}
	static ::Class_2_7066F46E34236F2E___c** StaticGet___9()
	{
		return (::Class_2_7066F46E34236F2E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7066F46E34236F2E___c_TypeDefinitionIndex)->GetStaticField(0x31008);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_7066F46E34236F2E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7066F46E34236F2E___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_25F44760C5F7A595(::Class_3_7C525C964F57077F* a1)
	{
		return ((::System::String*(*)(::PVOID, ::Class_3_7C525C964F57077F*))((::PBYTE)hIl2Cpp + CLASS_2_7066F46E34236F2E___C_METHOD_1_25F44760C5F7A595_OFFSET))(this, a1);
	}
};
