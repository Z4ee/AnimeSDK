#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/AdaptorShowType.h"
#include "unitysdk/MoleMole/EUILayoutPlatform.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace System { class String; }

#define MOLEMOLE_MONOUILAYOUTADAPTORBASE_APPLYLAYOUTBYPLATFORM_OFFSET UNITYSDK_OFFSET(0x10BD9A30)
#define MOLEMOLE_MONOUILAYOUTADAPTORBASE_GET_ISCOLLECTED_OFFSET UNITYSDK_OFFSET(0x10BD9760)
#define MOLEMOLE_MONOUILAYOUTADAPTORBASE_INITLAYOUT_OFFSET UNITYSDK_OFFSET(0x10BD9A90)
#define MOLEMOLE_MONOUILAYOUTADAPTORBASE_RECOVERADAPTORFROMCACHE_OFFSET UNITYSDK_OFFSET(0x10BD9BF0)
#define MOLEMOLE_MONOUILAYOUTADAPTORBASE_SET_ISCOLLECTED_OFFSET UNITYSDK_OFFSET(0x10BD9770)
#define MOLEMOLE_MONOUILAYOUTADAPTORBASE_SWITCHREALTYPETOSHOWTYPE_OFFSET UNITYSDK_OFFSET(0x10BD9780)
#define MOLEMOLE_MONOUILAYOUTADAPTORBASE_SWITCHSHOWTYPETOREALTYPE_OFFSET UNITYSDK_OFFSET(0x10BD98E0)
#define MOLEMOLE_MONOUILAYOUTADAPTORBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x10BD9C90)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUILayoutAdaptorBase_TypeDefinitionIndex = 68832;

	class MonoUILayoutAdaptorBase : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::System::Boolean _isCollected; // 0x58
		::MoleMole::AdaptorShowType currentPlatformType; // 0x5C
		::System::String* cachedMobile; // 0x60
		::System::String* cachedPc; // 0x68
		::System::String* cachedConsole; // 0x70
		::System::String* cachedMobileConsole; // 0x78
		::System::Boolean _isSerialize; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUILAYOUTADAPTORBASE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsCollected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUILAYOUTADAPTORBASE_GET_ISCOLLECTED_OFFSET))(this);
		}

		::System::Void set_IsCollected(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUILAYOUTADAPTORBASE_SET_ISCOLLECTED_OFFSET))(this, value);
		}

		static ::MoleMole::AdaptorShowType SwitchRealTypeToShowType(::MoleMole::EUILayoutPlatform realType)
		{
			return ((::MoleMole::AdaptorShowType(*)(::MoleMole::EUILayoutPlatform))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUILAYOUTADAPTORBASE_SWITCHREALTYPETOSHOWTYPE_OFFSET))(realType);
		}

		static ::MoleMole::EUILayoutPlatform SwitchShowTypeToRealType(::MoleMole::AdaptorShowType showType)
		{
			return ((::MoleMole::EUILayoutPlatform(*)(::MoleMole::AdaptorShowType))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUILAYOUTADAPTORBASE_SWITCHSHOWTYPETOREALTYPE_OFFSET))(showType);
		}

		::System::Void ApplyLayoutByPlatform(::MoleMole::EUILayoutPlatform layoutPlatform)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EUILayoutPlatform))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUILAYOUTADAPTORBASE_APPLYLAYOUTBYPLATFORM_OFFSET))(this, layoutPlatform);
		}

		::System::Boolean InitLayout(::MoleMole::EUILayoutPlatform layoutPlatform)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::EUILayoutPlatform))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUILAYOUTADAPTORBASE_INITLAYOUT_OFFSET))(this, layoutPlatform);
		}

		::System::Void RecoverAdaptorFromCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUILAYOUTADAPTORBASE_RECOVERADAPTORFROMCACHE_OFFSET))(this);
		}
	};
}
