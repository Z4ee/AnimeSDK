#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/EventSystems/RaycastResult.h"

namespace HedgehogTeam::EasyTouch { class ECamera; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Predicate_1; }

#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12C427D0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12C42800)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH___C__ISSCREENPOSITIONOVERUI_B__261_0_OFFSET UNITYSDK_OFFSET(0x12C42870)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH___C__START_B__227_0_OFFSET UNITYSDK_OFFSET(0x12C42810)

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int EasyTouch___c_TypeDefinitionIndex = 37070;

	class EasyTouch___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::UnityEngine::EventSystems::RaycastResult, ::System::Boolean>** StaticGet___9__261_0()
		{
			return (::System::Func_2<::UnityEngine::EventSystems::RaycastResult, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch___c_TypeDefinitionIndex)->GetStaticField(0xB500);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch___c** StaticGet___9()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch___c**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch___c_TypeDefinitionIndex)->GetStaticField(0xB508);
		}
		static ::System::Predicate_1<::HedgehogTeam::EasyTouch::ECamera*>** StaticGet___9__227_0()
		{
			return (::System::Predicate_1<::HedgehogTeam::EasyTouch::ECamera*>**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch___c_TypeDefinitionIndex)->GetStaticField(0xB510);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _Start_b__227_0(::HedgehogTeam::EasyTouch::ECamera* c)
		{
			return ((::System::Boolean(*)(::PVOID, ::HedgehogTeam::EasyTouch::ECamera*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH___C__START_B__227_0_OFFSET))(this, c);
		}

		::System::Boolean _IsScreenPositionOverUI_b__261_0(::UnityEngine::EventSystems::RaycastResult x)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::EventSystems::RaycastResult))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH___C__ISSCREENPOSITIONOVERUI_B__261_0_OFFSET))(this, x);
		}
	};
}
