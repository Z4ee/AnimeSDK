#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_UI3DRECTSAFEAREAADAPTOR_DOSAFEAREAADAPT_OFFSET UNITYSDK_OFFSET(0x1B127EE0)
#define RPG_CLIENT_UI3DRECTSAFEAREAADAPTOR_METHOD_5_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1B139EE0)
#define RPG_CLIENT_UI3DRECTSAFEAREAADAPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B139F40)

namespace RPG::Client
{
	inline static constexpr unsigned int UI3DRectSafeAreaAdaptor_TypeDefinitionIndex = 69014;

	class UI3DRectSafeAreaAdaptor : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single OLCCIFOFMEP; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DRECTSAFEAREAADAPTOR__CTOR_OFFSET))(this);
		}

		::System::Void DoSafeAreaAdapt(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DRECTSAFEAREAADAPTOR_DOSAFEAREAADAPT_OFFSET))(this, a1);
		}

		static ::System::Boolean Method_5_CE34EA208837238D()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DRECTSAFEAREAADAPTOR_METHOD_5_CE34EA208837238D_OFFSET))();
		}
	};
}
