#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace CriWare { class CriManaMovieMaterialBase; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CRIWARE_CRIMANAMOVIEMATERIALBASE_ONAPPLICATIONPAUSECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DC4F380)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_ONAPPLICATIONPAUSECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DC4F3E0)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_ONAPPLICATIONPAUSECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DC4EEE0)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_ONAPPLICATIONPAUSECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC4F290)

namespace CriWare
{
	inline static constexpr unsigned int CriManaMovieMaterialBase_OnApplicationPauseCallback_TypeDefinitionIndex = 38836;

	class CriManaMovieMaterialBase_OnApplicationPauseCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIALBASE_ONAPPLICATIONPAUSECALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::CriWare::CriManaMovieMaterialBase* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriManaMovieMaterialBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIALBASE_ONAPPLICATIONPAUSECALLBACK_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::CriWare::CriManaMovieMaterialBase* a1, ::System::Boolean a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::CriWare::CriManaMovieMaterialBase*, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIALBASE_ONAPPLICATIONPAUSECALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIALBASE_ONAPPLICATIONPAUSECALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
