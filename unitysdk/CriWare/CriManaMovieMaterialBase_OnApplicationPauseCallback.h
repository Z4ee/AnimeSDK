#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace CriWare { class CriManaMovieMaterialBase; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CRIWARE_CRIMANAMOVIEMATERIALBASE_ONAPPLICATIONPAUSECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x12C1F260)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_ONAPPLICATIONPAUSECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x12C1F2C0)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_ONAPPLICATIONPAUSECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x12C1E880)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_ONAPPLICATIONPAUSECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x12C1F240)

namespace CriWare
{
	inline static constexpr unsigned int CriManaMovieMaterialBase_OnApplicationPauseCallback_TypeDefinitionIndex = 36875;

	class CriManaMovieMaterialBase_OnApplicationPauseCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIALBASE_ONAPPLICATIONPAUSECALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::CriWare::CriManaMovieMaterialBase* manaMovieMaterial, ::System::Boolean appPause)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriManaMovieMaterialBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIALBASE_ONAPPLICATIONPAUSECALLBACK_INVOKE_OFFSET))(this, manaMovieMaterial, appPause);
		}

		::System::IAsyncResult* BeginInvoke(::CriWare::CriManaMovieMaterialBase* manaMovieMaterial, ::System::Boolean appPause, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::CriWare::CriManaMovieMaterialBase*, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIALBASE_ONAPPLICATIONPAUSECALLBACK_BEGININVOKE_OFFSET))(this, manaMovieMaterial, appPause, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIALBASE_ONAPPLICATIONPAUSECALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
