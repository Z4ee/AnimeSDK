#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimTriggerTargetType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_2_667CD5D0F948A1A3;
class Class_2_9DD8A46984F1AFFD;
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace UnityEngine { class Collider; }

#define CLASS_2_667CD5D0F948A1A3___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9974040)
#define CLASS_2_667CD5D0F948A1A3___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9974070)
#define CLASS_2_667CD5D0F948A1A3___C___CREATETARGETENTITYFILTER_B__15_0_OFFSET UNITYSDK_OFFSET(0x9974080)

inline static constexpr unsigned int Class_2_667CD5D0F948A1A3___c_TypeDefinitionIndex = 70798;

class Class_2_667CD5D0F948A1A3___c : public ::System::Object
{
public:
	static ::Class_2_667CD5D0F948A1A3___c** StaticGet___9()
	{
		return (::Class_2_667CD5D0F948A1A3___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_667CD5D0F948A1A3___c_TypeDefinitionIndex)->GetStaticField(0x19860);
	}
	static ::System::Func_4<::Class_2_667CD5D0F948A1A3*, ::System::ValueTuple_2<::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimTriggerTargetType>, ::UnityEngine::Collider*, ::System::Boolean>** StaticGet___9__15_0()
	{
		return (::System::Func_4<::Class_2_667CD5D0F948A1A3*, ::System::ValueTuple_2<::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimTriggerTargetType>, ::UnityEngine::Collider*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_667CD5D0F948A1A3___c_TypeDefinitionIndex)->GetStaticField(0x19868);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3___C__CTOR_OFFSET))(this);
	}

	::System::Boolean __CreateTargetEntityFilter_b__15_0(::Class_2_667CD5D0F948A1A3* self, ::System::ValueTuple_2<::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimTriggerTargetType> ctx, ::UnityEngine::Collider* collider)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_667CD5D0F948A1A3*, ::System::ValueTuple_2<::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimTriggerTargetType>, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_667CD5D0F948A1A3___C___CREATETARGETENTITYFILTER_B__15_0_OFFSET))(this, self, ctx, collider);
	}
};
