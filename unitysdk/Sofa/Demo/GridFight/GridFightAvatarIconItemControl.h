#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl_1.h"

class Class_0_16E4307DCC419505_488;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class MonoUIColorSwitcher; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }
template <typename T> class Class_1_D90286A3143EECEC;
template <typename T> class Class_1_F9A52EAB94D4ABE9;

#define SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARICONITEMCONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0xE97ACE0)
#define SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARICONITEMCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xE97C2D0)
#define SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARICONITEMCONTROL__POPULATING_OFFSET UNITYSDK_OFFSET(0xE97BC40)

namespace Sofa::Demo::GridFight
{
	inline static constexpr unsigned int GridFightAvatarIconItemControl_TypeDefinitionIndex = 49706;

	class GridFightAvatarIconItemControl : public ::Sofa::BaseSofaControl_1<::Class_0_16E4307DCC419505_488*>
	{
	public:
		::UnityEngine::Animation* _Animation; // 0x70
		::UnityEngine::UI::Image* _AvatarImage; // 0x78
		::RPG::Client::AnimatorButton* _RootButton; // 0x80
		::RPG::Client::MonoUIColorSwitcher* _RarityColorSwitcher; // 0x88
		::UnityEngine::RectTransform* _UnreleasedRoot; // 0x90
		::UnityEngine::RectTransform* _UnreleasedTagRoot; // 0x98
		::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* _StarRanks; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARICONITEMCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _Binding(::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_488*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_488*>*))((::PBYTE)hIl2Cpp + SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARICONITEMCONTROL__BINDING_OFFSET))(this, a1);
		}

		::System::Void _Populating(::Class_1_F9A52EAB94D4ABE9<::Class_0_16E4307DCC419505_488*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F9A52EAB94D4ABE9<::Class_0_16E4307DCC419505_488*>*))((::PBYTE)hIl2Cpp + SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARICONITEMCONTROL__POPULATING_OFFSET))(this, a1);
		}
	};
}
