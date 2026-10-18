#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTRADARVERTICESCONTROL_GET_DISTRIBUTION_OFFSET UNITYSDK_OFFSET(0xD659990)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTRADARVERTICESCONTROL_METHOD_5_319297F096ACF923_OFFSET UNITYSDK_OFFSET(0xD659A30)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTRADARVERTICESCONTROL_SET_DISTRIBUTION_OFFSET UNITYSDK_OFFSET(0xD6599D0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTRADARVERTICESCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xD659EA0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftRadarVerticesControl_TypeDefinitionIndex = 79826;

	class MechCraftRadarVerticesControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::System::Single>* BDKCBIFDCOM; // 0x18
		::UnityEngine::RectTransform* _AnchorCenter; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* _AnchorCorners; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* _NodeVertices; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTRADARVERTICESCONTROL__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::Single>* get_Distribution()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTRADARVERTICESCONTROL_GET_DISTRIBUTION_OFFSET))(this);
		}

		::System::Void set_Distribution(::System::Collections::Generic::IReadOnlyList_1<::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTRADARVERTICESCONTROL_SET_DISTRIBUTION_OFFSET))(this, a1);
		}

		::System::Void Method_5_319297F096ACF923(::System::Collections::Generic::IReadOnlyList_1<::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTRADARVERTICESCONTROL_METHOD_5_319297F096ACF923_OFFSET))(this, a1);
		}
	};
}
