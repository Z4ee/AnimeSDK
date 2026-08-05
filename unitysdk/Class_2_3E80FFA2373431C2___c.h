#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UI/Extension/UITimeWidget_TimeShowType.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_3E80FFA2373431C2___C_METHOD_1_88440CFB504C7AE9_OFFSET UNITYSDK_OFFSET(0x161DF480)
#define CLASS_2_3E80FFA2373431C2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x161DF430)
#define CLASS_2_3E80FFA2373431C2___C__CTOR_OFFSET UNITYSDK_OFFSET(0x161DF470)

inline static constexpr unsigned int Class_2_3E80FFA2373431C2___c_TypeDefinitionIndex = 50860;

class Class_2_3E80FFA2373431C2___c : public ::System::Object
{
public:
	static ::Class_2_3E80FFA2373431C2___c** StaticGet___9()
	{
		return (::Class_2_3E80FFA2373431C2___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3E80FFA2373431C2___c_TypeDefinitionIndex)->GetStaticField(0x43F70);
	}
	static ::System::Func_2<::System::Int64, ::UnityEngine::UI::Extension::UITimeWidget_TimeShowType>** StaticGet___9__16_11()
	{
		return (::System::Func_2<::System::Int64, ::UnityEngine::UI::Extension::UITimeWidget_TimeShowType>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3E80FFA2373431C2___c_TypeDefinitionIndex)->GetStaticField(0x43F78);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_3E80FFA2373431C2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E80FFA2373431C2___C__CTOR_OFFSET))(this);
	}

	::UnityEngine::UI::Extension::UITimeWidget_TimeShowType Method_1_88440CFB504C7AE9(::System::Int64 a1)
	{
		return ((::UnityEngine::UI::Extension::UITimeWidget_TimeShowType(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_2_3E80FFA2373431C2___C_METHOD_1_88440CFB504C7AE9_OFFSET))(this, a1);
	}
};
