#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0CEBC586B40FE99D;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_1_0CEBC586B40FE99D___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8A312C0)
#define CLASS_1_0CEBC586B40FE99D___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8A312F0)
#define CLASS_1_0CEBC586B40FE99D___C___LISTENLEVELVARS_B__5_0_OFFSET UNITYSDK_OFFSET(0x8A31300)
#define CLASS_1_0CEBC586B40FE99D___C___LISTENSUBMISSIONSTATE_B__6_0_OFFSET UNITYSDK_OFFSET(0x8A31320)

inline static constexpr unsigned int Class_1_0CEBC586B40FE99D___c_TypeDefinitionIndex = 62614;

class Class_1_0CEBC586B40FE99D___c : public ::System::Object
{
public:
	static ::System::Action_2<::Class_1_0CEBC586B40FE99D*, ::System::String*>** StaticGet___9__5_0()
	{
		return (::System::Action_2<::Class_1_0CEBC586B40FE99D*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0CEBC586B40FE99D___c_TypeDefinitionIndex)->GetStaticField(0x45A60);
	}
	static ::System::Action_2<::Class_1_0CEBC586B40FE99D*, ::System::UInt32>** StaticGet___9__6_0()
	{
		return (::System::Action_2<::Class_1_0CEBC586B40FE99D*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0CEBC586B40FE99D___c_TypeDefinitionIndex)->GetStaticField(0x45A68);
	}
	static ::Class_1_0CEBC586B40FE99D___c** StaticGet___9()
	{
		return (::Class_1_0CEBC586B40FE99D___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0CEBC586B40FE99D___c_TypeDefinitionIndex)->GetStaticField(0x45A70);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0CEBC586B40FE99D___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0CEBC586B40FE99D___C__CTOR_OFFSET))(this);
	}

	::System::Void __ListenLevelVars_b__5_0(::Class_1_0CEBC586B40FE99D* self, ::System::String* varName)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0CEBC586B40FE99D*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0CEBC586B40FE99D___C___LISTENLEVELVARS_B__5_0_OFFSET))(this, self, varName);
	}

	::System::Void __ListenSubMissionState_b__6_0(::Class_1_0CEBC586B40FE99D* self, ::System::UInt32 id)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0CEBC586B40FE99D*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0CEBC586B40FE99D___C___LISTENSUBMISSIONSTATE_B__6_0_OFFSET))(this, self, id);
	}
};
