#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9E057D19FDD4E61D;
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define CLASS_1_9E057D19FDD4E61D___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1874F630)
#define CLASS_1_9E057D19FDD4E61D___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1874F660)
#define CLASS_1_9E057D19FDD4E61D___C___LISTENGUIDEHINTLEVELVAR_B__54_0_OFFSET UNITYSDK_OFFSET(0x1874F6A0)
#define CLASS_1_9E057D19FDD4E61D___C___LISTENLEVELVAR_B__44_0_OFFSET UNITYSDK_OFFSET(0x1874F670)

inline static constexpr unsigned int Class_1_9E057D19FDD4E61D___c_TypeDefinitionIndex = 72834;

class Class_1_9E057D19FDD4E61D___c : public ::System::Object
{
public:
	static ::System::Action_3<::Class_1_9E057D19FDD4E61D*, ::System::Int32, ::System::String*>** StaticGet___9__54_0()
	{
		return (::System::Action_3<::Class_1_9E057D19FDD4E61D*, ::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9E057D19FDD4E61D___c_TypeDefinitionIndex)->GetStaticField(0x65390);
	}
	static ::System::Action_3<::Class_1_9E057D19FDD4E61D*, ::System::Int32, ::System::String*>** StaticGet___9__44_0()
	{
		return (::System::Action_3<::Class_1_9E057D19FDD4E61D*, ::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9E057D19FDD4E61D___c_TypeDefinitionIndex)->GetStaticField(0x65398);
	}
	static ::Class_1_9E057D19FDD4E61D___c** StaticGet___9()
	{
		return (::Class_1_9E057D19FDD4E61D___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9E057D19FDD4E61D___c_TypeDefinitionIndex)->GetStaticField(0x653A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D___C__CTOR_OFFSET))(this);
	}

	::System::Void __ListenLevelVar_b__44_0(::Class_1_9E057D19FDD4E61D* a1, ::System::Int32 a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9E057D19FDD4E61D*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D___C___LISTENLEVELVAR_B__44_0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void __ListenGuideHintLevelVar_b__54_0(::Class_1_9E057D19FDD4E61D* a1, ::System::Int32 a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9E057D19FDD4E61D*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D___C___LISTENGUIDEHINTLEVELVAR_B__54_0_OFFSET))(this, a1, a2, a3);
	}
};
