#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C81092C7C2F35EC7;
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define CLASS_1_C81092C7C2F35EC7___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x118D2510)
#define CLASS_1_C81092C7C2F35EC7___C__CTOR_OFFSET UNITYSDK_OFFSET(0x118D2550)
#define CLASS_1_C81092C7C2F35EC7___C___LISTENLEVELVAR_B__9_0_OFFSET UNITYSDK_OFFSET(0x118D2560)

inline static constexpr unsigned int Class_1_C81092C7C2F35EC7___c_TypeDefinitionIndex = 62478;

class Class_1_C81092C7C2F35EC7___c : public ::System::Object
{
public:
	static ::Class_1_C81092C7C2F35EC7___c** StaticGet___9()
	{
		return (::Class_1_C81092C7C2F35EC7___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C81092C7C2F35EC7___c_TypeDefinitionIndex)->GetStaticField(0x47A90);
	}
	static ::System::Action_3<::Class_1_C81092C7C2F35EC7*, ::System::Int32, ::System::String*>** StaticGet___9__9_0()
	{
		return (::System::Action_3<::Class_1_C81092C7C2F35EC7*, ::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C81092C7C2F35EC7___c_TypeDefinitionIndex)->GetStaticField(0x47A98);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C81092C7C2F35EC7___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C81092C7C2F35EC7___C__CTOR_OFFSET))(this);
	}

	::System::Void __ListenLevelVar_b__9_0(::Class_1_C81092C7C2F35EC7* self, ::System::Int32 entID, ::System::String* varName)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C81092C7C2F35EC7*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C81092C7C2F35EC7___C___LISTENLEVELVAR_B__9_0_OFFSET))(this, self, entID, varName);
	}
};
