#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_6CB6A63D22550FC5;

#define CLASS_1_3F69E636BFD6B554_METHOD_1_ED4AE5CD7FC2BF75_OFFSET UNITYSDK_OFFSET(0x952F080)
#define CLASS_1_3F69E636BFD6B554__CTOR_1_OFFSET UNITYSDK_OFFSET(0x952F050)
#define CLASS_1_3F69E636BFD6B554__CTOR_OFFSET UNITYSDK_OFFSET(0x951B010)

inline static constexpr unsigned int Class_1_3F69E636BFD6B554_TypeDefinitionIndex = 44139;

class Class_1_3F69E636BFD6B554 : public ::System::Object
{
public:
	::System::Single Field_1_2; // 0x10
	::UnityEngine::Vector3 Field_1_1; // 0x14
	::UnityEngine::Vector3 Field_1_0; // 0x20

	::System::Void _ctor(::Class_1_6CB6A63D22550FC5* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6CB6A63D22550FC5*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3F69E636BFD6B554__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _ctor_1(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3F69E636BFD6B554__CTOR_1_OFFSET))(this, a1, a2, a3);
	}

	::Il2CppArray<::UnityEngine::Vector3>* Method_1_ED4AE5CD7FC2BF75()
	{
		return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F69E636BFD6B554_METHOD_1_ED4AE5CD7FC2BF75_OFFSET))(this);
	}
};
