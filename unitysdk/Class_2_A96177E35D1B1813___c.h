#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_DBF482F9F6F56036;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_A96177E35D1B1813___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13779840)
#define CLASS_2_A96177E35D1B1813___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13779880)
#define CLASS_2_A96177E35D1B1813___C___SETUPORBS_B__14_0_OFFSET UNITYSDK_OFFSET(0x13779890)

inline static constexpr unsigned int Class_2_A96177E35D1B1813___c_TypeDefinitionIndex = 67531;

class Class_2_A96177E35D1B1813___c : public ::System::Object
{
public:
	static ::Class_2_A96177E35D1B1813___c** StaticGet___9()
	{
		return (::Class_2_A96177E35D1B1813___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A96177E35D1B1813___c_TypeDefinitionIndex)->GetStaticField(0x55D90);
	}
	static ::System::Comparison_1<::Class_2_DBF482F9F6F56036*>** StaticGet___9__14_0()
	{
		return (::System::Comparison_1<::Class_2_DBF482F9F6F56036*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A96177E35D1B1813___c_TypeDefinitionIndex)->GetStaticField(0x55D98);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_A96177E35D1B1813___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A96177E35D1B1813___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __SetupOrbs_b__14_0(::Class_2_DBF482F9F6F56036* a1, ::Class_2_DBF482F9F6F56036* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_DBF482F9F6F56036*, ::Class_2_DBF482F9F6F56036*))((::PBYTE)hIl2Cpp + CLASS_2_A96177E35D1B1813___C___SETUPORBS_B__14_0_OFFSET))(this, a1, a2);
	}
};
