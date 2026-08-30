#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_UIADAPTERMARKER_GET_OFFSET UNITYSDK_OFFSET(0x16FE8CA0)
#define RPG_CLIENT_UIADAPTERMARKER_ISADJUSTED_OFFSET UNITYSDK_OFFSET(0x16FE8DE0)
#define RPG_CLIENT_UIADAPTERMARKER_MARKADJUSTED_OFFSET UNITYSDK_OFFSET(0x16FE8D60)
#define RPG_CLIENT_UIADAPTERMARKER_RESET_OFFSET UNITYSDK_OFFSET(0x16FE8DA0)
#define RPG_CLIENT_UIADAPTERMARKER__CTOR_OFFSET UNITYSDK_OFFSET(0x16FE8E20)

namespace RPG::Client
{
	inline static constexpr unsigned int UIAdapterMarker_TypeDefinitionIndex = 72935;

	class UIAdapterMarker : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean IIHKBABLLMI; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTERMARKER__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::UIAdapterMarker* Get(::UnityEngine::Transform* a1)
		{
			return ((::RPG::Client::UIAdapterMarker*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTERMARKER_GET_OFFSET))(a1);
		}

		::System::Void MarkAdjusted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTERMARKER_MARKADJUSTED_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTERMARKER_RESET_OFFSET))(this);
		}

		::System::Boolean IsAdjusted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTERMARKER_ISADJUSTED_OFFSET))(this);
		}
	};
}
