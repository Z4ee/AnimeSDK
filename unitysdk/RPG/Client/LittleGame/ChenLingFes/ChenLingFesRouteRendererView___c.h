#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace BansheeGz::BGSpline::Components { class BGCcSplitterPolyline; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESROUTERENDERERVIEW___C__BINDCOMPONENTS_B__2_0_OFFSET UNITYSDK_OFFSET(0x1AC25620)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESROUTERENDERERVIEW___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AC255D0)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESROUTERENDERERVIEW___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC25610)

namespace RPG::Client::LittleGame::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesRouteRendererView___c_TypeDefinitionIndex = 77319;

	class ChenLingFesRouteRendererView___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::BansheeGz::BGSpline::Components::BGCcSplitterPolyline*, ::System::Boolean>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::BansheeGz::BGSpline::Components::BGCcSplitterPolyline*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChenLingFesRouteRendererView___c_TypeDefinitionIndex)->GetStaticField(0x5FC00);
		}
		static ::RPG::Client::LittleGame::ChenLingFes::ChenLingFesRouteRendererView___c** StaticGet___9()
		{
			return (::RPG::Client::LittleGame::ChenLingFes::ChenLingFesRouteRendererView___c**)Il2CppClass::FromTypeDefinitionIndex(ChenLingFesRouteRendererView___c_TypeDefinitionIndex)->GetStaticField(0x5FC08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESROUTERENDERERVIEW___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESROUTERENDERERVIEW___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _BindComponents_b__2_0(::BansheeGz::BGSpline::Components::BGCcSplitterPolyline* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BansheeGz::BGSpline::Components::BGCcSplitterPolyline*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESROUTERENDERERVIEW___C__BINDCOMPONENTS_B__2_0_OFFSET))(this, a1);
		}
	};
}
