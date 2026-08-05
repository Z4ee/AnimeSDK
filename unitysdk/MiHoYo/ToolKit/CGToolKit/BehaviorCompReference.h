#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::ToolKit::CGToolKit { class DoubleString; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Behaviour; }

#define MIHOYO_TOOLKIT_CGTOOLKIT_BEHAVIORCOMPREFERENCE_GETRENDERCOMPREFERENCES_OFFSET UNITYSDK_OFFSET(0x167D3F30)
#define MIHOYO_TOOLKIT_CGTOOLKIT_BEHAVIORCOMPREFERENCE_SETCOMPREFERENCE_OFFSET UNITYSDK_OFFSET(0x167D4360)
#define MIHOYO_TOOLKIT_CGTOOLKIT_BEHAVIORCOMPREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x167D3E90)

namespace MiHoYo::ToolKit::CGToolKit
{
	inline static constexpr unsigned int BehaviorCompReference_TypeDefinitionIndex = 86904;

	class BehaviorCompReference : public ::System::Object
	{
	public:
		::UnityEngine::Behaviour* Key; // 0x10
		::System::Collections::Generic::List_1<::MiHoYo::ToolKit::CGToolKit::DoubleString*>* Values; // 0x18

		::System::Void _ctor(::UnityEngine::Behaviour* comp)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Behaviour*))((::PBYTE)hIl2Cpp + MIHOYO_TOOLKIT_CGTOOLKIT_BEHAVIORCOMPREFERENCE__CTOR_OFFSET))(this, comp);
		}

		::System::Collections::Generic::List_1<::MiHoYo::ToolKit::CGToolKit::DoubleString*>* GetRenderCompReferences(::UnityEngine::Behaviour* comp)
		{
			return ((::System::Collections::Generic::List_1<::MiHoYo::ToolKit::CGToolKit::DoubleString*>*(*)(::PVOID, ::UnityEngine::Behaviour*))((::PBYTE)hIl2Cpp + MIHOYO_TOOLKIT_CGTOOLKIT_BEHAVIORCOMPREFERENCE_GETRENDERCOMPREFERENCES_OFFSET))(this, comp);
		}

		::System::Void SetCompReference()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_TOOLKIT_CGTOOLKIT_BEHAVIORCOMPREFERENCE_SETCOMPREFERENCE_OFFSET))(this);
		}
	};
}
