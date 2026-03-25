#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E6CA0BD3601F18B4;
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define CLASS_1_E6CA0BD3601F18B4___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8CDBFE0)
#define CLASS_1_E6CA0BD3601F18B4___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8CDC010)
#define CLASS_1_E6CA0BD3601F18B4___C___LISTENLEVELVAR_B__9_0_OFFSET UNITYSDK_OFFSET(0x8CDC020)

inline static constexpr unsigned int Class_1_E6CA0BD3601F18B4___c_TypeDefinitionIndex = 62762;

class Class_1_E6CA0BD3601F18B4___c : public ::System::Object
{
public:
	static ::System::Action_3<::Class_1_E6CA0BD3601F18B4*, ::System::Int32, ::System::String*>** StaticGet___9__9_0()
	{
		return (::System::Action_3<::Class_1_E6CA0BD3601F18B4*, ::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E6CA0BD3601F18B4___c_TypeDefinitionIndex)->GetStaticField(0xE490);
	}
	static ::Class_1_E6CA0BD3601F18B4___c** StaticGet___9()
	{
		return (::Class_1_E6CA0BD3601F18B4___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E6CA0BD3601F18B4___c_TypeDefinitionIndex)->GetStaticField(0xE498);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E6CA0BD3601F18B4___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6CA0BD3601F18B4___C__CTOR_OFFSET))(this);
	}

	::System::Void __ListenLevelVar_b__9_0(::Class_1_E6CA0BD3601F18B4* self, ::System::Int32 entID, ::System::String* varName)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E6CA0BD3601F18B4*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E6CA0BD3601F18B4___C___LISTENLEVELVAR_B__9_0_OFFSET))(this, self, entID, varName);
	}
};
