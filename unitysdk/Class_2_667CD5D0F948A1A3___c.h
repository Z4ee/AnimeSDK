#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimTriggerTargetType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_2_667CD5D0F948A1A3;
class Class_2_B9E8C2EEAA5C96EC;
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace UnityEngine { class Collider; }

#define CLASS_2_667CD5D0F948A1A3___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16FC6840)
#define CLASS_2_667CD5D0F948A1A3___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16FC6870)
#define CLASS_2_667CD5D0F948A1A3___C___CREATETARGETENTITYFILTER_B__16_0_OFFSET UNITYSDK_OFFSET(0x16FC6880)

inline static constexpr unsigned int Class_2_667CD5D0F948A1A3___c_TypeDefinitionIndex = 73143;

class Class_2_667CD5D0F948A1A3___c : public ::System::Object
{
public:
	static ::Class_2_667CD5D0F948A1A3___c** StaticGet___9()
	{
		return (::Class_2_667CD5D0F948A1A3___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_667CD5D0F948A1A3___c_TypeDefinitionIndex)->GetStaticField(0x2E0E0);
	}
	static ::System::Func_4<::Class_2_667CD5D0F948A1A3*, ::System::ValueTuple_2<::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimTriggerTargetType>, ::UnityEngine::Collider*, ::System::Boolean>** StaticGet___9__16_0()
	{
		return (::System::Func_4<::Class_2_667CD5D0F948A1A3*, ::System::ValueTuple_2<::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimTriggerTargetType>, ::UnityEngine::Collider*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_667CD5D0F948A1A3___c_TypeDefinitionIndex)->GetStaticField(0x2E0E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3___C__CTOR_OFFSET))(this);
	}

	::System::Boolean __CreateTargetEntityFilter_b__16_0(::Class_2_667CD5D0F948A1A3* a1, ::System::ValueTuple_2<::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimTriggerTargetType> a2, ::UnityEngine::Collider* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_667CD5D0F948A1A3*, ::System::ValueTuple_2<::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimTriggerTargetType>, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3___C___CREATETARGETENTITYFILTER_B__16_0_OFFSET))(this, a1, a2, a3);
	}
};
