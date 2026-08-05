#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MoleMole { class SceneSoundPolygonData; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MOLEMOLE_SCENESOUNDPOLYGONDATA_AREAINSTATECHANGED_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1688FC80)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_AREAINSTATECHANGED_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1688FCB0)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_AREAINSTATECHANGED_INVOKE_OFFSET UNITYSDK_OFFSET(0x1688F760)
#define MOLEMOLE_SCENESOUNDPOLYGONDATA_AREAINSTATECHANGED__CTOR_OFFSET UNITYSDK_OFFSET(0x1688F740)

namespace MoleMole
{
	inline static constexpr unsigned int SceneSoundPolygonData_AreaInStateChanged_TypeDefinitionIndex = 68585;

	class SceneSoundPolygonData_AreaInStateChanged : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDPOLYGONDATA_AREAINSTATECHANGED__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::MoleMole::SceneSoundPolygonData* polygonData)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::SceneSoundPolygonData*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDPOLYGONDATA_AREAINSTATECHANGED_INVOKE_OFFSET))(this, polygonData);
		}

		::System::IAsyncResult* BeginInvoke(::MoleMole::SceneSoundPolygonData* polygonData, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MoleMole::SceneSoundPolygonData*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDPOLYGONDATA_AREAINSTATECHANGED_BEGININVOKE_OFFSET))(this, polygonData, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDPOLYGONDATA_AREAINSTATECHANGED_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
