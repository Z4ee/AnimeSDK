#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class CaculateNodeData; }

#define RPG_CLIENT_SYNCTRANSFORMUTILITY_METHOD_6_E1579A152A3CF2C2_OFFSET UNITYSDK_OFFSET(0xB266850)
#define RPG_CLIENT_SYNCTRANSFORMUTILITY_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0xB2669C0)
#define RPG_CLIENT_SYNCTRANSFORMUTILITY_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0xB266910)
#define RPG_CLIENT_SYNCTRANSFORMUTILITY_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0xB265DA0)
#define RPG_CLIENT_SYNCTRANSFORMUTILITY__CTOR_OFFSET UNITYSDK_OFFSET(0xB266A30)
#define RPG_CLIENT_SYNCTRANSFORMUTILITY___IFIXBASEPROXY_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0xB266A40)

namespace RPG::Client
{
	inline static constexpr unsigned int SyncTransformUtility_TypeDefinitionIndex = 66959;

	class SyncTransformUtility : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		::UnityEngine::RectTransform* mTargetRectransform; // 0x18
		::UnityEngine::RectTransform* Field_6_1; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::UI::CaculateNodeData*>* mNodes; // 0x28
		::UnityEngine::UI::CaculateNodeData* Field_6_3; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYNCTRANSFORMUTILITY__CTOR_OFFSET))(this);
		}

		::System::Void OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYNCTRANSFORMUTILITY_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::UnityEngine::RectTransform* Method_6_E1579A152A3CF2C2()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYNCTRANSFORMUTILITY_METHOD_6_E1579A152A3CF2C2_OFFSET))(this);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYNCTRANSFORMUTILITY_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYNCTRANSFORMUTILITY_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SYNCTRANSFORMUTILITY___IFIXBASEPROXY_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}
	};
}
