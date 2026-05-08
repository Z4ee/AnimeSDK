#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9F3D5D601B086F88;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_8C83ECDA6146AF10___C_METHOD_1_8FA6B2815D9129E8_OFFSET UNITYSDK_OFFSET(0x10C061C0)
#define CLASS_1_8C83ECDA6146AF10___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10C06170)
#define CLASS_1_8C83ECDA6146AF10___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10C061B0)

inline static constexpr unsigned int Class_1_8C83ECDA6146AF10___c_TypeDefinitionIndex = 48521;

class Class_1_8C83ECDA6146AF10___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_1_9F3D5D601B086F88*>** StaticGet___9__9_0()
	{
		return (::System::Comparison_1<::Class_1_9F3D5D601B086F88*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8C83ECDA6146AF10___c_TypeDefinitionIndex)->GetStaticField(0x2C180);
	}
	static ::Class_1_8C83ECDA6146AF10___c** StaticGet___9()
	{
		return (::Class_1_8C83ECDA6146AF10___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8C83ECDA6146AF10___c_TypeDefinitionIndex)->GetStaticField(0x2C188);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8C83ECDA6146AF10___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C83ECDA6146AF10___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_8FA6B2815D9129E8(::Class_1_9F3D5D601B086F88* a1, ::Class_1_9F3D5D601B086F88* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_9F3D5D601B086F88*, ::Class_1_9F3D5D601B086F88*))((::PBYTE)hIl2Cpp + CLASS_1_8C83ECDA6146AF10___C_METHOD_1_8FA6B2815D9129E8_OFFSET))(this, a1, a2);
	}
};
