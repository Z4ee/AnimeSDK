#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_4E049E2562254C08.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_92DACB0281238082___C_METHOD_1_81E8348A50FCDC24_1_OFFSET UNITYSDK_OFFSET(0xE4BB720)
#define CLASS_1_92DACB0281238082___C_METHOD_1_81E8348A50FCDC24_OFFSET UNITYSDK_OFFSET(0xE4BB6C0)
#define CLASS_1_92DACB0281238082___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE4BB670)
#define CLASS_1_92DACB0281238082___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE4BB6B0)

inline static constexpr unsigned int Class_1_92DACB0281238082___c_TypeDefinitionIndex = 49658;

class Class_1_92DACB0281238082___c : public ::System::Object
{
public:
	static ::System::Func_2<::Struct_2_4E049E2562254C08, ::UnityEngine::Vector3>** StaticGet___9__16_0()
	{
		return (::System::Func_2<::Struct_2_4E049E2562254C08, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_92DACB0281238082___c_TypeDefinitionIndex)->GetStaticField(0x356E0);
	}
	static ::System::Func_2<::Struct_2_4E049E2562254C08, ::UnityEngine::Vector3>** StaticGet___9__16_1()
	{
		return (::System::Func_2<::Struct_2_4E049E2562254C08, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_92DACB0281238082___c_TypeDefinitionIndex)->GetStaticField(0x356E8);
	}
	static ::Class_1_92DACB0281238082___c** StaticGet___9()
	{
		return (::Class_1_92DACB0281238082___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_92DACB0281238082___c_TypeDefinitionIndex)->GetStaticField(0x356F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_92DACB0281238082___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92DACB0281238082___C__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_81E8348A50FCDC24(::Struct_2_4E049E2562254C08 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Struct_2_4E049E2562254C08))((::PBYTE)hIl2Cpp + CLASS_1_92DACB0281238082___C_METHOD_1_81E8348A50FCDC24_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_81E8348A50FCDC24_1(::Struct_2_4E049E2562254C08 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Struct_2_4E049E2562254C08))((::PBYTE)hIl2Cpp + CLASS_1_92DACB0281238082___C_METHOD_1_81E8348A50FCDC24_1_OFFSET))(this, a1);
	}
};
