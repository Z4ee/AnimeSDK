#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoEffectPluginAttachToCamera_AspectOffset.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA___C_METHOD_1_41F2B3FE3FB78FC7_OFFSET UNITYSDK_OFFSET(0x1686E4B0)
#define MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1686E460)
#define MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1686E4A0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginAttachToCamera___c_TypeDefinitionIndex = 56269;

	class MonoEffectPluginAttachToCamera___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::MoleMole::MonoEffectPluginAttachToCamera_AspectOffset>** StaticGet___9__28_0()
		{
			return (::System::Comparison_1<::MoleMole::MonoEffectPluginAttachToCamera_AspectOffset>**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginAttachToCamera___c_TypeDefinitionIndex)->GetStaticField(0x367F0);
		}
		static ::MoleMole::MonoEffectPluginAttachToCamera___c** StaticGet___9()
		{
			return (::MoleMole::MonoEffectPluginAttachToCamera___c**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginAttachToCamera___c_TypeDefinitionIndex)->GetStaticField(0x367F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA___C__CTOR_OFFSET))(this);
		}

		::System::Int32 Method_1_41F2B3FE3FB78FC7(::MoleMole::MonoEffectPluginAttachToCamera_AspectOffset a1, ::MoleMole::MonoEffectPluginAttachToCamera_AspectOffset a2)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoEffectPluginAttachToCamera_AspectOffset, ::MoleMole::MonoEffectPluginAttachToCamera_AspectOffset))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA___C_METHOD_1_41F2B3FE3FB78FC7_OFFSET))(this, a1, a2);
		}
	};
}
