#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace ScenenLightManager { class BaseSceneLightExportData; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_585FC61876C1A1D5_CLASS_3_AE31F159F362893C_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x8F51110)
#define CLASS_1_585FC61876C1A1D5_CLASS_3_AE31F159F362893C_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x8F51140)
#define CLASS_1_585FC61876C1A1D5_CLASS_3_AE31F159F362893C_INVOKE_OFFSET UNITYSDK_OFFSET(0x8F4CD80)
#define CLASS_1_585FC61876C1A1D5_CLASS_3_AE31F159F362893C__CTOR_OFFSET UNITYSDK_OFFSET(0x8F510F0)

inline static constexpr unsigned int Class_1_585FC61876C1A1D5_Class_3_AE31F159F362893C_TypeDefinitionIndex = 45780;

class Class_1_585FC61876C1A1D5_Class_3_AE31F159F362893C : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_585FC61876C1A1D5_CLASS_3_AE31F159F362893C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::ScenenLightManager::BaseSceneLightExportData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::BaseSceneLightExportData*))((::PBYTE)hIl2Cpp + CLASS_1_585FC61876C1A1D5_CLASS_3_AE31F159F362893C_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::ScenenLightManager::BaseSceneLightExportData* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::ScenenLightManager::BaseSceneLightExportData*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_585FC61876C1A1D5_CLASS_3_AE31F159F362893C_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_585FC61876C1A1D5_CLASS_3_AE31F159F362893C_ENDINVOKE_OFFSET))(this, a1);
	}
};
