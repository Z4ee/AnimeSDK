#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T> class Action_1; }

#define CLASS_2_EC9A90E156962139___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA0613F0)
#define CLASS_2_EC9A90E156962139___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA061430)
#define CLASS_2_EC9A90E156962139___C___DOSPLIT_B__11_1_OFFSET UNITYSDK_OFFSET(0xA061440)

inline static constexpr unsigned int Class_2_EC9A90E156962139___c_TypeDefinitionIndex = 71395;

class Class_2_EC9A90E156962139___c : public ::System::Object
{
public:
	static ::System::Action_1<::UnityEngine::Vector3>** StaticGet___9__11_1()
	{
		return (::System::Action_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_EC9A90E156962139___c_TypeDefinitionIndex)->GetStaticField(0x6AD60);
	}
	static ::Class_2_EC9A90E156962139___c** StaticGet___9()
	{
		return (::Class_2_EC9A90E156962139___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_EC9A90E156962139___c_TypeDefinitionIndex)->GetStaticField(0x6AD68);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_EC9A90E156962139___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC9A90E156962139___C__CTOR_OFFSET))(this);
	}

	::System::Void __DoSplit_b__11_1(::UnityEngine::Vector3 pos)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_EC9A90E156962139___C___DOSPLIT_B__11_1_OFFSET))(this, pos);
	}
};
