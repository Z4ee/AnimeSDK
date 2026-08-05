#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_733;
class Class_3_025FF4981524A424_612;
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_E46C7200C98EA660___C_METHOD_1_6BDE84DE490D736B_OFFSET UNITYSDK_OFFSET(0x18E53950)
#define CLASS_2_E46C7200C98EA660___C_METHOD_1_CA252EB53D5BC15A_OFFSET UNITYSDK_OFFSET(0x18E538E0)
#define CLASS_2_E46C7200C98EA660___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18E53890)
#define CLASS_2_E46C7200C98EA660___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18E538D0)

inline static constexpr unsigned int Class_2_E46C7200C98EA660___c_TypeDefinitionIndex = 57360;

class Class_2_E46C7200C98EA660___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_2_208CC9941471731A_733*>** StaticGet___9__15_0()
	{
		return (::System::Comparison_1<::Class_2_208CC9941471731A_733*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E46C7200C98EA660___c_TypeDefinitionIndex)->GetStaticField(0x41A70);
	}
	static ::System::Action_1<::Class_3_025FF4981524A424_612*>** StaticGet___9__21_0()
	{
		return (::System::Action_1<::Class_3_025FF4981524A424_612*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E46C7200C98EA660___c_TypeDefinitionIndex)->GetStaticField(0x41A78);
	}
	static ::Class_2_E46C7200C98EA660___c** StaticGet___9()
	{
		return (::Class_2_E46C7200C98EA660___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E46C7200C98EA660___c_TypeDefinitionIndex)->GetStaticField(0x41A80);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_E46C7200C98EA660___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E46C7200C98EA660___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA252EB53D5BC15A(::Class_3_025FF4981524A424_612* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_025FF4981524A424_612*))((::PBYTE)hIl2Cpp + CLASS_2_E46C7200C98EA660___C_METHOD_1_CA252EB53D5BC15A_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_6BDE84DE490D736B(::Class_2_208CC9941471731A_733* a1, ::Class_2_208CC9941471731A_733* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_733*, ::Class_2_208CC9941471731A_733*))((::PBYTE)hIl2Cpp + CLASS_2_E46C7200C98EA660___C_METHOD_1_6BDE84DE490D736B_OFFSET))(this, a1, a2);
	}
};
