#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl_1.h"

class Class_0_16E4307DCC419505_490;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LocalizedText; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }
template <typename T> class Class_1_D90286A3143EECEC;
template <typename T> class Class_1_F9A52EAB94D4ABE9;

#define SOFA_DEMO_GRIDFIGHT_GRIDFIGHTSHOPITEMCONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0xE97D070)
#define SOFA_DEMO_GRIDFIGHT_GRIDFIGHTSHOPITEMCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xE97E150)
#define SOFA_DEMO_GRIDFIGHT_GRIDFIGHTSHOPITEMCONTROL__POPULATING_OFFSET UNITYSDK_OFFSET(0xE97DD90)

namespace Sofa::Demo::GridFight
{
	inline static constexpr unsigned int GridFightShopItemControl_TypeDefinitionIndex = 49712;

	class GridFightShopItemControl : public ::Sofa::BaseSofaControl_1<::Class_0_16E4307DCC419505_490*>
	{
	public:
		::UnityEngine::RectTransform* _EmptyRoot; // 0x70
		::UnityEngine::RectTransform* _RoleRoot; // 0x78
		::RPG::Client::LocalizedText* _NameText; // 0x80
		::UnityEngine::UI::Image* _AvatarImage; // 0x88
		::RPG::Client::AnimatorButton* _BuyButton; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_DEMO_GRIDFIGHT_GRIDFIGHTSHOPITEMCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _Binding(::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_490*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_490*>*))((::PBYTE)hIl2Cpp + SOFA_DEMO_GRIDFIGHT_GRIDFIGHTSHOPITEMCONTROL__BINDING_OFFSET))(this, a1);
		}

		::System::Void _Populating(::Class_1_F9A52EAB94D4ABE9<::Class_0_16E4307DCC419505_490*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F9A52EAB94D4ABE9<::Class_0_16E4307DCC419505_490*>*))((::PBYTE)hIl2Cpp + SOFA_DEMO_GRIDFIGHT_GRIDFIGHTSHOPITEMCONTROL__POPULATING_OFFSET))(this, a1);
		}
	};
}
