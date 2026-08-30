#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9E057D19FDD4E61D;
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define CLASS_1_9E057D19FDD4E61D___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBA7CFD0)
#define CLASS_1_9E057D19FDD4E61D___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBA7D010)
#define CLASS_1_9E057D19FDD4E61D___C___LISTENGUIDEHINTLEVELVAR_B__69_0_OFFSET UNITYSDK_OFFSET(0xBA7D050)
#define CLASS_1_9E057D19FDD4E61D___C___LISTENLEVELVAR_B__59_0_OFFSET UNITYSDK_OFFSET(0xBA7D020)

inline static constexpr unsigned int Class_1_9E057D19FDD4E61D___c_TypeDefinitionIndex = 76301;

class Class_1_9E057D19FDD4E61D___c : public ::System::Object
{
public:
	static ::System::Action_3<::Class_1_9E057D19FDD4E61D*, ::System::Int32, ::System::String*>** StaticGet___9__69_0()
	{
		return (::System::Action_3<::Class_1_9E057D19FDD4E61D*, ::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9E057D19FDD4E61D___c_TypeDefinitionIndex)->GetStaticField(0x568A0);
	}
	static ::Class_1_9E057D19FDD4E61D___c** StaticGet___9()
	{
		return (::Class_1_9E057D19FDD4E61D___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9E057D19FDD4E61D___c_TypeDefinitionIndex)->GetStaticField(0x568A8);
	}
	static ::System::Action_3<::Class_1_9E057D19FDD4E61D*, ::System::Int32, ::System::String*>** StaticGet___9__59_0()
	{
		return (::System::Action_3<::Class_1_9E057D19FDD4E61D*, ::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9E057D19FDD4E61D___c_TypeDefinitionIndex)->GetStaticField(0x568B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D___C__CTOR_OFFSET))(this);
	}

	::System::Void __ListenLevelVar_b__59_0(::Class_1_9E057D19FDD4E61D* a1, ::System::Int32 a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9E057D19FDD4E61D*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D___C___LISTENLEVELVAR_B__59_0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void __ListenGuideHintLevelVar_b__69_0(::Class_1_9E057D19FDD4E61D* a1, ::System::Int32 a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9E057D19FDD4E61D*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D___C___LISTENGUIDEHINTLEVELVAR_B__69_0_OFFSET))(this, a1, a2, a3);
	}
};
