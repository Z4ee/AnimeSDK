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

#define RPG_CLIENT_LITTLEGAME_MONOCURVE_EVALUATE_OFFSET UNITYSDK_OFFSET(0xA6DE810)
#define RPG_CLIENT_LITTLEGAME_MONOCURVE_GETDISTANCERATIO_OFFSET UNITYSDK_OFFSET(0xA6DE970)
#define RPG_CLIENT_LITTLEGAME_MONOCURVE_GETENTITY_OFFSET UNITYSDK_OFFSET(0xA6DE420)
#define RPG_CLIENT_LITTLEGAME_MONOCURVE_GETLENGTH_OFFSET UNITYSDK_OFFSET(0xA6DE8E0)
#define RPG_CLIENT_LITTLEGAME_MONOCURVE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xA6DE460)
#define RPG_CLIENT_LITTLEGAME_MONOCURVE_METHOD_6_0076C796B2045359_OFFSET UNITYSDK_OFFSET(0xA6DE4D0)
#define RPG_CLIENT_LITTLEGAME_MONOCURVE_METHOD_6_1697A067BDDFE071_OFFSET UNITYSDK_OFFSET(0xA6DEC10)
#define RPG_CLIENT_LITTLEGAME_MONOCURVE_METHOD_6_23562D36E99317B6_OFFSET UNITYSDK_OFFSET(0xA6DF090)
#define RPG_CLIENT_LITTLEGAME_MONOCURVE_METHOD_6_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xA6DE780)
#define RPG_CLIENT_LITTLEGAME_MONOCURVE_METHOD_6_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA6DF0E0)
#define RPG_CLIENT_LITTLEGAME_MONOCURVE_RECALCULATE_OFFSET UNITYSDK_OFFSET(0xA6DEAD0)
#define RPG_CLIENT_LITTLEGAME_MONOCURVE_RELEASE_OFFSET UNITYSDK_OFFSET(0xA6DE6B0)
#define RPG_CLIENT_LITTLEGAME_MONOCURVE__CTOR_OFFSET UNITYSDK_OFFSET(0xA6DF120)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int MonoCurve_TypeDefinitionIndex = 70271;

	class MonoCurve : public ::RPG::Client::LittleGame::BaseMonoGenericView
	{
	public:
		::BansheeGz::BGSpline::Curve::BGCurve* Field_6_0; // 0x20
		::BansheeGz::BGSpline::Components::BGCcMath* Field_6_1; // 0x28
		::Entitas::IEntity* Field_6_2; // 0x30

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

		::System::Void Method_6_0076C796B2045359()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MONOCURVE_METHOD_6_0076C796B2045359_OFFSET))(this);
		}

		::System::Void Method_6_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MONOCURVE_METHOD_6_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_6_1697A067BDDFE071(::RPG::GameCore::LittleGameLevelCurveInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameLevelCurveInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MONOCURVE_METHOD_6_1697A067BDDFE071_OFFSET))(this, a1);
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
