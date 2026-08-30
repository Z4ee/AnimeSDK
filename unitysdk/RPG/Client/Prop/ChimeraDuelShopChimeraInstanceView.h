#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class AttachPointMapping; }
namespace RPG::Client { class BaseShaderPropertyTransition; }
namespace RPG::Client::Prop { class ChimeraDuelChimeraModelView; }
namespace RPG::Client::Prop { class ChimeraDuelChimeraOutlineDrawer; }
namespace RPG::Client::Prop { class ChimeraDuelModelVfxPlayer; }
namespace RPG::Client::Prop { class ChimeraDuelShopChimeraInstanceView_VfxConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCEVIEW_METHOD_5_0094A08E076C3CCD_OFFSET UNITYSDK_OFFSET(0xDC26930)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCEVIEW_METHOD_5_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0xDC26BB0)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCEVIEW_METHOD_5_38BA5162C5819E36_OFFSET UNITYSDK_OFFSET(0xDC27310)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCEVIEW_METHOD_5_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0xDC27100)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCEVIEW_METHOD_5_755870B55A8B3AFF_OFFSET UNITYSDK_OFFSET(0xDC27260)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCEVIEW_METHOD_5_7A4EB7A4DA062DE3_OFFSET UNITYSDK_OFFSET(0xDC26C80)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCEVIEW_METHOD_5_7D21D8548943D577_OFFSET UNITYSDK_OFFSET(0xDC26560)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCEVIEW_METHOD_5_8CA05BCD86E125DF_OFFSET UNITYSDK_OFFSET(0xDC267B0)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCEVIEW_METHOD_5_D33BA2B6C0CF2EDA_OFFSET UNITYSDK_OFFSET(0xDC265B0)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCEVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xDC273C0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelShopChimeraInstanceView_TypeDefinitionIndex = 77871;

	class ChimeraDuelShopChimeraInstanceView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::Prop::ChimeraDuelChimeraModelView* Model; // 0x18
		::UnityEngine::Transform* InfoBillboardAnchor; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::BaseShaderPropertyTransition*>* _DitherEffects; // 0x28
		::System::Single _DitherAlpha; // 0x30
		::RPG::Client::Prop::ChimeraDuelModelVfxPlayer* _VfxPlayer; // 0x38
		::RPG::Client::Prop::ChimeraDuelShopChimeraInstanceView_VfxConfig* _LevelUpVfx; // 0x40
		::RPG::Client::AttachPointMapping* _AttachPointMapping; // 0x48
		::UnityEngine::Material* _HollowMaterial; // 0x50
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _HiddenInHollow; // 0x58
		::RPG::Client::Prop::ChimeraDuelChimeraOutlineDrawer* _OutlineDrawer; // 0x60
		::System::Boolean KOHBNKJNKNH; // 0x68
		::System::Boolean AMKJCLBMNOP; // 0x69

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCEVIEW__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_51CFFE2AF748ECD7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCEVIEW_METHOD_5_51CFFE2AF748ECD7_OFFSET))(this);
		}

		::System::Void Method_5_D33BA2B6C0CF2EDA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCEVIEW_METHOD_5_D33BA2B6C0CF2EDA_OFFSET))(this, a1);
		}

		::System::Void Method_5_0094A08E076C3CCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCEVIEW_METHOD_5_0094A08E076C3CCD_OFFSET))(this);
		}

		::System::Void Method_5_7A4EB7A4DA062DE3(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCEVIEW_METHOD_5_7A4EB7A4DA062DE3_OFFSET))(this, a1);
		}

		::System::Void Method_5_1B9CC121BDC8766D(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCEVIEW_METHOD_5_1B9CC121BDC8766D_OFFSET))(this, a1);
		}

		::System::Void Method_5_8CA05BCD86E125DF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCEVIEW_METHOD_5_8CA05BCD86E125DF_OFFSET))(this);
		}

		::System::Void Method_5_7D21D8548943D577()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCEVIEW_METHOD_5_7D21D8548943D577_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Renderer*>* Method_5_38BA5162C5819E36()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Renderer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCEVIEW_METHOD_5_38BA5162C5819E36_OFFSET))(this);
		}

		::System::Void Method_5_755870B55A8B3AFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCEVIEW_METHOD_5_755870B55A8B3AFF_OFFSET))(this);
		}
	};
}
