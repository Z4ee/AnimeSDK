#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_181;
class Class_3_87492AF8E794E45E_44;
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_5DD638F36259CAC6___C_METHOD_1_1C6F00DAE95A25A9_OFFSET UNITYSDK_OFFSET(0x11FBF830)
#define CLASS_2_5DD638F36259CAC6___C_METHOD_1_EDC58A66FFDB11A6_OFFSET UNITYSDK_OFFSET(0x11FBF7E0)
#define CLASS_2_5DD638F36259CAC6___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11FBF790)
#define CLASS_2_5DD638F36259CAC6___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11FBF7D0)

inline static constexpr unsigned int Class_2_5DD638F36259CAC6___c_TypeDefinitionIndex = 48779;

class Class_2_5DD638F36259CAC6___c : public ::System::Object
{
public:
	static ::Class_2_5DD638F36259CAC6___c** StaticGet___9()
	{
		return (::Class_2_5DD638F36259CAC6___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_5DD638F36259CAC6___c_TypeDefinitionIndex)->GetStaticField(0x38450);
	}
	static ::System::Action_1<::Class_3_87492AF8E794E45E_44*>** StaticGet___9__51_0()
	{
		return (::System::Action_1<::Class_3_87492AF8E794E45E_44*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_5DD638F36259CAC6___c_TypeDefinitionIndex)->GetStaticField(0x38458);
	}
	static ::System::Comparison_1<::Class_0_16E4307DCC419505_181*>** StaticGet___9__24_0()
	{
		return (::System::Comparison_1<::Class_0_16E4307DCC419505_181*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_5DD638F36259CAC6___c_TypeDefinitionIndex)->GetStaticField(0x38460);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_5DD638F36259CAC6___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5DD638F36259CAC6___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EDC58A66FFDB11A6(::Class_3_87492AF8E794E45E_44* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_87492AF8E794E45E_44*))((::PBYTE)hIl2Cpp + CLASS_2_5DD638F36259CAC6___C_METHOD_1_EDC58A66FFDB11A6_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_1C6F00DAE95A25A9(::Class_0_16E4307DCC419505_181* a1, ::Class_0_16E4307DCC419505_181* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_0_16E4307DCC419505_181*, ::Class_0_16E4307DCC419505_181*))((::PBYTE)hIl2Cpp + CLASS_2_5DD638F36259CAC6___C_METHOD_1_1C6F00DAE95A25A9_OFFSET))(this, a1, a2);
	}
};
