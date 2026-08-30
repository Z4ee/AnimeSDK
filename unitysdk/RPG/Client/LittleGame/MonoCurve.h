#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/BaseMonoGenericView.h"
#include "unitysdk/Struct_2_EAC1BB0F093534A5.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_47EE63CB5C4DC8FC_5;
namespace BansheeGz::BGSpline::Components { class BGCcMath; }
namespace BansheeGz::BGSpline::Curve { class BGCurve; }
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace RPG::GameCore { class LittleGameLevelCurveInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_LITTLEGAME_MONOCURVE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1B1D1BC0)
#define RPG_CLIENT_LITTLEGAME_MONOCURVE_GETDISTANCERATIO_OFFSET UNITYSDK_OFFSET(0x1B1D1CB0)
#define RPG_CLIENT_LITTLEGAME_MONOCURVE_GETENTITY_OFFSET UNITYSDK_OFFSET(0x1B1D18C0)
#define RPG_CLIENT_LITTLEGAME_MONOCURVE_GETLENGTH_OFFSET UNITYSDK_OFFSET(0x1B1D1C50)
#define RPG_CLIENT_LITTLEGAME_MONOCURVE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1B1D1900)
#define RPG_CLIENT_LITTLEGAME_MONOCURVE_METHOD_6_23562D36E99317B6_OFFSET UNITYSDK_OFFSET(0x1B1D22D0)
#define RPG_CLIENT_LITTLEGAME_MONOCURVE_METHOD_6_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1B1D1B30)
#define RPG_CLIENT_LITTLEGAME_MONOCURVE_METHOD_6_C3CB9A8A42E31548_OFFSET UNITYSDK_OFFSET(0x1B1D1EB0)
#define RPG_CLIENT_LITTLEGAME_MONOCURVE_METHOD_6_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1B1D2320)
#define RPG_CLIENT_LITTLEGAME_MONOCURVE_METHOD_6_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x1B1D1970)
#define RPG_CLIENT_LITTLEGAME_MONOCURVE_RECALCULATE_OFFSET UNITYSDK_OFFSET(0x1B1D1DB0)
#define RPG_CLIENT_LITTLEGAME_MONOCURVE_RELEASE_OFFSET UNITYSDK_OFFSET(0x1B1D1A60)
#define RPG_CLIENT_LITTLEGAME_MONOCURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1D2360)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int MonoCurve_TypeDefinitionIndex = 76033;

	class MonoCurve : public ::RPG::Client::LittleGame::BaseMonoGenericView
	{
	public:
		::BansheeGz::BGSpline::Curve::BGCurve* PNOHBBMHGLB; // 0x20
		::BansheeGz::BGSpline::Components::BGCcMath* GCDHOEKJBLI; // 0x28
		::Entitas::IEntity* KAKEIDJDNHJ; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MONOCURVE__CTOR_OFFSET))(this);
		}

		::Entitas::IEntity* GetEntity()
		{
			return ((::Entitas::IEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MONOCURVE_GETENTITY_OFFSET))(this);
		}

		::System::Void Initialize(::Entitas::IContext* a1, ::Class_1_47EE63CB5C4DC8FC_5* a2, ::Entitas::IEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Class_1_47EE63CB5C4DC8FC_5*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MONOCURVE_INITIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Release(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MONOCURVE_RELEASE_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::System::Single a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MONOCURVE_EVALUATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Single GetLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MONOCURVE_GETLENGTH_OFFSET))(this);
		}

		::System::Single GetDistanceRatio(::System::UInt32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MONOCURVE_GETDISTANCERATIO_OFFSET))(this, a1);
		}

		::System::Void Recalculate(::Struct_2_EAC1BB0F093534A5 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_EAC1BB0F093534A5, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MONOCURVE_RECALCULATE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_E7EF6BC52B28648C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MONOCURVE_METHOD_6_E7EF6BC52B28648C_OFFSET))(this);
		}

		::System::Void Method_6_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MONOCURVE_METHOD_6_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_6_C3CB9A8A42E31548(::RPG::GameCore::LittleGameLevelCurveInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameLevelCurveInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MONOCURVE_METHOD_6_C3CB9A8A42E31548_OFFSET))(this, a1);
		}

		::System::Void Method_6_23562D36E99317B6(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MONOCURVE_METHOD_6_23562D36E99317B6_OFFSET))(this, a1);
		}

		::System::Void Method_6_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MONOCURVE_METHOD_6_CA373AA1C7054598_OFFSET))(this);
		}
	};
}
