#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_64D062C4691F838C.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MOLEMOLE_BATTLE_MONOENVIRONMENTFEATUREPROVIDERLIFECYCLE_CLASS_3_737B0A0F93F3AEA4_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x16C1FE10)
#define MOLEMOLE_BATTLE_MONOENVIRONMENTFEATUREPROVIDERLIFECYCLE_CLASS_3_737B0A0F93F3AEA4_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x16C1FEA0)
#define MOLEMOLE_BATTLE_MONOENVIRONMENTFEATUREPROVIDERLIFECYCLE_CLASS_3_737B0A0F93F3AEA4_INVOKE_OFFSET UNITYSDK_OFFSET(0x16C1FAF0)
#define MOLEMOLE_BATTLE_MONOENVIRONMENTFEATUREPROVIDERLIFECYCLE_CLASS_3_737B0A0F93F3AEA4__CTOR_OFFSET UNITYSDK_OFFSET(0x16C1FAD0)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int MonoEnvironmentFeatureProviderLifecycle_Class_3_737B0A0F93F3AEA4_TypeDefinitionIndex = 48746;

	class MonoEnvironmentFeatureProviderLifecycle_Class_3_737B0A0F93F3AEA4 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MONOENVIRONMENTFEATUREPROVIDERLIFECYCLE_CLASS_3_737B0A0F93F3AEA4__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Enum_3_64D062C4691F838C& a1, ::Enum_3_64D062C4691F838C& a2)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_64D062C4691F838C&, ::Enum_3_64D062C4691F838C&))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MONOENVIRONMENTFEATUREPROVIDERLIFECYCLE_CLASS_3_737B0A0F93F3AEA4_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::Enum_3_64D062C4691F838C& a1, ::Enum_3_64D062C4691F838C& a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Enum_3_64D062C4691F838C&, ::Enum_3_64D062C4691F838C&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MONOENVIRONMENTFEATUREPROVIDERLIFECYCLE_CLASS_3_737B0A0F93F3AEA4_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::Enum_3_64D062C4691F838C& a1, ::Enum_3_64D062C4691F838C& a2, ::System::IAsyncResult* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_64D062C4691F838C&, ::Enum_3_64D062C4691F838C&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MONOENVIRONMENTFEATUREPROVIDERLIFECYCLE_CLASS_3_737B0A0F93F3AEA4_ENDINVOKE_OFFSET))(this, a1, a2, a3);
		}
	};
}
