#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_DDA40C6BBD275788;
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define CLASS_2_DDA40C6BBD275788___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x108EF020)
#define CLASS_2_DDA40C6BBD275788___C__CTOR_OFFSET UNITYSDK_OFFSET(0x108EF060)
#define CLASS_2_DDA40C6BBD275788___C___BINDLEVELVAR_B__11_0_OFFSET UNITYSDK_OFFSET(0x108EF070)

inline static constexpr unsigned int Class_2_DDA40C6BBD275788___c_TypeDefinitionIndex = 62640;

class Class_2_DDA40C6BBD275788___c : public ::System::Object
{
public:
	static ::System::Action_3<::Class_2_DDA40C6BBD275788*, ::System::Int32, ::System::String*>** StaticGet___9__11_0()
	{
		return (::System::Action_3<::Class_2_DDA40C6BBD275788*, ::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_DDA40C6BBD275788___c_TypeDefinitionIndex)->GetStaticField(0x37300);
	}
	static ::Class_2_DDA40C6BBD275788___c** StaticGet___9()
	{
		return (::Class_2_DDA40C6BBD275788___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_DDA40C6BBD275788___c_TypeDefinitionIndex)->GetStaticField(0x37308);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_DDA40C6BBD275788___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DDA40C6BBD275788___C__CTOR_OFFSET))(this);
	}

	::System::Void __BindLevelVar_b__11_0(::Class_2_DDA40C6BBD275788* self, ::System::Int32 entID, ::System::String* varName)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_DDA40C6BBD275788*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_DDA40C6BBD275788___C___BINDLEVELVAR_B__11_0_OFFSET))(this, self, entID, varName);
	}
};
