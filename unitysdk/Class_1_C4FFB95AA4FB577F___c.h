#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_025FF4981524A424_485;
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_1_C4FFB95AA4FB577F___C_METHOD_1_2D340224619DD2EF_OFFSET UNITYSDK_OFFSET(0x12F2ACA0)
#define CLASS_1_C4FFB95AA4FB577F___C_METHOD_1_E2C1F0B75B973BC8_OFFSET UNITYSDK_OFFSET(0x12F2AB20)
#define CLASS_1_C4FFB95AA4FB577F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12F2AAD0)
#define CLASS_1_C4FFB95AA4FB577F___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12F2AB10)

inline static constexpr unsigned int Class_1_C4FFB95AA4FB577F___c_TypeDefinitionIndex = 76654;

class Class_1_C4FFB95AA4FB577F___c : public ::System::Object
{
public:
	static ::Class_1_C4FFB95AA4FB577F___c** StaticGet___9()
	{
		return (::Class_1_C4FFB95AA4FB577F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C4FFB95AA4FB577F___c_TypeDefinitionIndex)->GetStaticField(0x3B750);
	}
	static ::System::Action_2<::System::Boolean, ::Class_3_025FF4981524A424_485*>** StaticGet___9__0_0()
	{
		return (::System::Action_2<::System::Boolean, ::Class_3_025FF4981524A424_485*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C4FFB95AA4FB577F___c_TypeDefinitionIndex)->GetStaticField(0x3B758);
	}
	static ::System::Action_3<::System::Int32, ::System::String*, ::System::String*>** StaticGet___9__5_0()
	{
		return (::System::Action_3<::System::Int32, ::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C4FFB95AA4FB577F___c_TypeDefinitionIndex)->GetStaticField(0x3B760);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E2C1F0B75B973BC8(::System::Boolean a1, ::Class_3_025FF4981524A424_485* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_3_025FF4981524A424_485*))((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F___C_METHOD_1_E2C1F0B75B973BC8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2D340224619DD2EF(::System::Int32 a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F___C_METHOD_1_2D340224619DD2EF_OFFSET))(this, a1, a2, a3);
	}
};
