#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Collider; }

#define RPG_CUSTOMRP_DEBUGWIREFRAMEPASS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16BE7920)
#define RPG_CUSTOMRP_DEBUGWIREFRAMEPASS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16BE7960)
#define RPG_CUSTOMRP_DEBUGWIREFRAMEPASS___C__INNEREXECUTE_B__5_0_OFFSET UNITYSDK_OFFSET(0x16BE7970)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int DebugWireframePass___c_TypeDefinitionIndex = 36018;

	class DebugWireframePass___c : public ::System::Object
	{
	public:
		static ::RPG::CustomRP::DebugWireframePass___c** StaticGet___9()
		{
			return (::RPG::CustomRP::DebugWireframePass___c**)Il2CppClass::FromTypeDefinitionIndex(DebugWireframePass___c_TypeDefinitionIndex)->GetStaticField(0x60000);
		}
		static ::System::Func_2<::UnityEngine::Collider*, ::System::Boolean>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::UnityEngine::Collider*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DebugWireframePass___c_TypeDefinitionIndex)->GetStaticField(0x60008);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGWIREFRAMEPASS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGWIREFRAMEPASS___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _InnerExecute_b__5_0(::UnityEngine::Collider* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGWIREFRAMEPASS___C__INNEREXECUTE_B__5_0_OFFSET))(this, a1);
		}
	};
}
