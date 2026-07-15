#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_451601B8BB62C38C_2.h"

class Class_0_16E4307DCC419505_356;
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_998653D91CE99DEB_METHOD_2_EF5D878412631F2D_OFFSET UNITYSDK_OFFSET(0x14FDAD50)
#define CLASS_2_998653D91CE99DEB__CCTOR_OFFSET UNITYSDK_OFFSET(0x14FDAE20)
#define CLASS_2_998653D91CE99DEB__CTOR_OFFSET UNITYSDK_OFFSET(0x14FDAE10)

inline static constexpr unsigned int Class_2_998653D91CE99DEB_TypeDefinitionIndex = 47405;

class Class_2_998653D91CE99DEB : public ::Class_1_451601B8BB62C38C_2
{
public:
	static ::System::Action_3<::System::Int64, ::System::Boolean, ::Class_0_16E4307DCC419505_356*>** StaticGet_Field_2_0()
	{
		return (::System::Action_3<::System::Int64, ::System::Boolean, ::Class_0_16E4307DCC419505_356*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_998653D91CE99DEB_TypeDefinitionIndex)->GetStaticField(0x53750);
	}
	::System::Action_1<::System::Boolean>* Field_2_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_998653D91CE99DEB__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_998653D91CE99DEB__CCTOR_OFFSET))();
	}

	static ::System::Void Method_2_EF5D878412631F2D(::System::Int64 a1, ::System::Boolean a2, ::Class_0_16E4307DCC419505_356* a3)
	{
		return ((::System::Void(*)(::System::Int64, ::System::Boolean, ::Class_0_16E4307DCC419505_356*))((::PBYTE)hIl2Cpp + CLASS_2_998653D91CE99DEB_METHOD_2_EF5D878412631F2D_OFFSET))(a1, a2, a3);
	}
};
