#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_EAC1BB0F093534A5.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define CLASS_1_F88B28E90BD371ED___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C442130)
#define CLASS_1_F88B28E90BD371ED___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C442160)
#define CLASS_1_F88B28E90BD371ED___C__PROJECT_B__3_0_OFFSET UNITYSDK_OFFSET(0x1C442170)

inline static constexpr unsigned int Class_1_F88B28E90BD371ED___c_TypeDefinitionIndex = 41728;

class Class_1_F88B28E90BD371ED___c : public ::System::Object
{
public:
	static ::System::Func_3<::UnityEngine::Vector3, ::Struct_2_EAC1BB0F093534A5, ::System::Single>** StaticGet___9__3_0()
	{
		return (::System::Func_3<::UnityEngine::Vector3, ::Struct_2_EAC1BB0F093534A5, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F88B28E90BD371ED___c_TypeDefinitionIndex)->GetStaticField(0x59400);
	}
	static ::Class_1_F88B28E90BD371ED___c** StaticGet___9()
	{
		return (::Class_1_F88B28E90BD371ED___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F88B28E90BD371ED___c_TypeDefinitionIndex)->GetStaticField(0x59408);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F88B28E90BD371ED___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F88B28E90BD371ED___C__CTOR_OFFSET))(this);
	}

	::System::Single _Project_b__3_0(::UnityEngine::Vector3 a1, ::Struct_2_EAC1BB0F093534A5 a2)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::Struct_2_EAC1BB0F093534A5))((::PBYTE)hIl2Cpp + CLASS_1_F88B28E90BD371ED___C__PROJECT_B__3_0_OFFSET))(this, a1, a2);
	}
};
