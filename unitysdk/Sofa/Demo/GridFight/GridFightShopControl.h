#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl_1.h"

class Class_0_16E4307DCC419505_489;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class ListView; }
namespace UnityEngine { class Animation; }
template <typename T> class Class_1_D90286A3143EECEC;
template <typename T> class Class_1_F9A52EAB94D4ABE9;

#define SOFA_DEMO_GRIDFIGHT_GRIDFIGHTSHOPCONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0xE97C6F0)
#define SOFA_DEMO_GRIDFIGHT_GRIDFIGHTSHOPCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xE97CF60)
#define SOFA_DEMO_GRIDFIGHT_GRIDFIGHTSHOPCONTROL__POPULATING_OFFSET UNITYSDK_OFFSET(0xE97CB80)

namespace Sofa::Demo::GridFight
{
	inline static constexpr unsigned int GridFightShopControl_TypeDefinitionIndex = 49709;

	class GridFightShopControl : public ::Sofa::BaseSofaControl_1<::Class_0_16E4307DCC419505_489*>
	{
	public:
		::UnityEngine::Animation* Animation; // 0x70
		::RPG::Client::ListView* ItemList; // 0x78
		::RPG::Client::AnimatorButton* RefreshBtn; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_DEMO_GRIDFIGHT_GRIDFIGHTSHOPCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _Binding(::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_489*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_489*>*))((::PBYTE)hIl2Cpp + SOFA_DEMO_GRIDFIGHT_GRIDFIGHTSHOPCONTROL__BINDING_OFFSET))(this, a1);
		}

		::System::Void _Populating(::Class_1_F9A52EAB94D4ABE9<::Class_0_16E4307DCC419505_489*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F9A52EAB94D4ABE9<::Class_0_16E4307DCC419505_489*>*))((::PBYTE)hIl2Cpp + SOFA_DEMO_GRIDFIGHT_GRIDFIGHTSHOPCONTROL__POPULATING_OFFSET))(this, a1);
		}
	};
}
