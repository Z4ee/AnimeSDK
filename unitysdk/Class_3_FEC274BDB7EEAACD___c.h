#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_4_0DC61513D73BCE61;
class Class_4_BB83D219B093AD9E;
class Class_5_7DE03FFC38B69B91;
namespace System { class Action; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define CLASS_3_FEC274BDB7EEAACD___C_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x154AB030)
#define CLASS_3_FEC274BDB7EEAACD___C_METHOD_1_E4D6A8B875CEEBD3_OFFSET UNITYSDK_OFFSET(0x154AB040)
#define CLASS_3_FEC274BDB7EEAACD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x154AAFE0)
#define CLASS_3_FEC274BDB7EEAACD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x154AB020)

inline static constexpr unsigned int Class_3_FEC274BDB7EEAACD___c_TypeDefinitionIndex = 43221;

class Class_3_FEC274BDB7EEAACD___c : public ::System::Object
{
public:
	static ::Class_3_FEC274BDB7EEAACD___c** StaticGet___9()
	{
		return (::Class_3_FEC274BDB7EEAACD___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_FEC274BDB7EEAACD___c_TypeDefinitionIndex)->GetStaticField(0x41280);
	}
	static ::System::Action** StaticGet___9__2_2()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_3_FEC274BDB7EEAACD___c_TypeDefinitionIndex)->GetStaticField(0x41288);
	}
	static ::System::Action_3<::Class_4_BB83D219B093AD9E*, ::Class_4_0DC61513D73BCE61*, ::Class_5_7DE03FFC38B69B91*>** StaticGet___9__1_0()
	{
		return (::System::Action_3<::Class_4_BB83D219B093AD9E*, ::Class_4_0DC61513D73BCE61*, ::Class_5_7DE03FFC38B69B91*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_FEC274BDB7EEAACD___c_TypeDefinitionIndex)->GetStaticField(0x41290);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_FEC274BDB7EEAACD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FEC274BDB7EEAACD___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FEC274BDB7EEAACD___C_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_1_E4D6A8B875CEEBD3(::Class_4_BB83D219B093AD9E* a1, ::Class_4_0DC61513D73BCE61* a2, ::Class_5_7DE03FFC38B69B91* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_BB83D219B093AD9E*, ::Class_4_0DC61513D73BCE61*, ::Class_5_7DE03FFC38B69B91*))((::PBYTE)hIl2Cpp + CLASS_3_FEC274BDB7EEAACD___C_METHOD_1_E4D6A8B875CEEBD3_OFFSET))(this, a1, a2, a3);
	}
};
