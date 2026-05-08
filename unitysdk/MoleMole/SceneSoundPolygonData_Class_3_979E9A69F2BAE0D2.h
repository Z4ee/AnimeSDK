#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MoleMole { class SceneSoundPolygonData; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MOLEMOLE_SCENESOUNDPOLYGONDATA_CLASS_3_979E9A69F2BAE0D2_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x10E4F870)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_CLASS_3_979E9A69F2BAE0D2_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x10E4F8A0)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_CLASS_3_979E9A69F2BAE0D2_INVOKE_OFFSET UNITYSDK_OFFSET(0x10E4F370)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_CLASS_3_979E9A69F2BAE0D2__CTOR_OFFSET UNITYSDK_OFFSET(0x10E4F360)

namespace MoleMole
{
	inline static constexpr unsigned int SceneSoundPolygonData_Class_3_979E9A69F2BAE0D2_TypeDefinitionIndex = 48245;

	class SceneSoundPolygonData_Class_3_979E9A69F2BAE0D2 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDPOLYGONDATA_CLASS_3_979E9A69F2BAE0D2__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::MoleMole::SceneSoundPolygonData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::SceneSoundPolygonData*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDPOLYGONDATA_CLASS_3_979E9A69F2BAE0D2_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::MoleMole::SceneSoundPolygonData* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MoleMole::SceneSoundPolygonData*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDPOLYGONDATA_CLASS_3_979E9A69F2BAE0D2_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDPOLYGONDATA_CLASS_3_979E9A69F2BAE0D2_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
