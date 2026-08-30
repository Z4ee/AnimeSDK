#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class AttachPointMapping; }
namespace RPG::Client { class LookAtIK; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ZATZKALOOKATIK_AWAKE_OFFSET UNITYSDK_OFFSET(0x16826790)
#define RPG_CLIENT_ZATZKALOOKATIK_GET_ISPROCESSABLE_OFFSET UNITYSDK_OFFSET(0x16826420)
#define RPG_CLIENT_ZATZKALOOKATIK_METHOD_5_01244C5D42565CB2_OFFSET UNITYSDK_OFFSET(0x168264E0)
#define RPG_CLIENT_ZATZKALOOKATIK_METHOD_5_18D9238B9C310BFF_OFFSET UNITYSDK_OFFSET(0x16828200)
#define RPG_CLIENT_ZATZKALOOKATIK_METHOD_5_18DC899D74EF7F38_OFFSET UNITYSDK_OFFSET(0x16828970)
#define RPG_CLIENT_ZATZKALOOKATIK_METHOD_5_2EDAC8CAFF864AE8_OFFSET UNITYSDK_OFFSET(0x16827CD0)
#define RPG_CLIENT_ZATZKALOOKATIK_METHOD_5_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16826340)
#define RPG_CLIENT_ZATZKALOOKATIK_METHOD_5_35014F67085C0F4E_OFFSET UNITYSDK_OFFSET(0x16828280)
#define RPG_CLIENT_ZATZKALOOKATIK_METHOD_5_479759059E440327_OFFSET UNITYSDK_OFFSET(0x16828830)
#define RPG_CLIENT_ZATZKALOOKATIK_METHOD_5_4BD1DD9FEF3B7862_OFFSET UNITYSDK_OFFSET(0x16826D60)
#define RPG_CLIENT_ZATZKALOOKATIK_METHOD_5_4FD079E562D79666_OFFSET UNITYSDK_OFFSET(0x168285C0)
#define RPG_CLIENT_ZATZKALOOKATIK_METHOD_5_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x168260F0)
#define RPG_CLIENT_ZATZKALOOKATIK_METHOD_5_5688F408AF8BA5A8_OFFSET UNITYSDK_OFFSET(0x16827D90)
#define RPG_CLIENT_ZATZKALOOKATIK_METHOD_5_602B796CAD5DBEDB_OFFSET UNITYSDK_OFFSET(0x16826B50)
#define RPG_CLIENT_ZATZKALOOKATIK_METHOD_5_627557CE4CD0ABB4_OFFSET UNITYSDK_OFFSET(0x16827ED0)
#define RPG_CLIENT_ZATZKALOOKATIK_METHOD_5_7B5CF29097D2700A_OFFSET UNITYSDK_OFFSET(0x168288E0)
#define RPG_CLIENT_ZATZKALOOKATIK_METHOD_5_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x168263C0)
#define RPG_CLIENT_ZATZKALOOKATIK_METHOD_5_9AAFA20BE473DBC6_OFFSET UNITYSDK_OFFSET(0x168292A0)
#define RPG_CLIENT_ZATZKALOOKATIK_METHOD_5_9FBCB7EE3738DEA4_OFFSET UNITYSDK_OFFSET(0x16827170)
#define RPG_CLIENT_ZATZKALOOKATIK_METHOD_5_A0278AEAAD5BAD20_OFFSET UNITYSDK_OFFSET(0x16827380)
#define RPG_CLIENT_ZATZKALOOKATIK_METHOD_5_A534811CDDC793A9_1_OFFSET UNITYSDK_OFFSET(0x16828DE0)
#define RPG_CLIENT_ZATZKALOOKATIK_METHOD_5_A534811CDDC793A9_OFFSET UNITYSDK_OFFSET(0x16828BE0)
#define RPG_CLIENT_ZATZKALOOKATIK_METHOD_5_D62EA523FA1B6C95_OFFSET UNITYSDK_OFFSET(0x16828FE0)
#define RPG_CLIENT_ZATZKALOOKATIK_METHOD_5_D8419A5DEE512C03_OFFSET UNITYSDK_OFFSET(0x16827FA0)
#define RPG_CLIENT_ZATZKALOOKATIK_METHOD_5_DB11C736C0498425_1_OFFSET UNITYSDK_OFFSET(0x16829630)
#define RPG_CLIENT_ZATZKALOOKATIK_METHOD_5_DB11C736C0498425_OFFSET UNITYSDK_OFFSET(0x16828170)
#define RPG_CLIENT_ZATZKALOOKATIK_METHOD_5_ECF5752EC6D68585_OFFSET UNITYSDK_OFFSET(0x16829210)
#define RPG_CLIENT_ZATZKALOOKATIK_METHOD_5_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0x168269E0)
#define RPG_CLIENT_ZATZKALOOKATIK_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x16826860)
#define RPG_CLIENT_ZATZKALOOKATIK_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x16826820)
#define RPG_CLIENT_ZATZKALOOKATIK_ONENABLE_OFFSET UNITYSDK_OFFSET(0x168267E0)
#define RPG_CLIENT_ZATZKALOOKATIK_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x168268C0)
#define RPG_CLIENT_ZATZKALOOKATIK_PROCESS_OFFSET UNITYSDK_OFFSET(0x16826480)
#define RPG_CLIENT_ZATZKALOOKATIK_SAFEINIT_OFFSET UNITYSDK_OFFSET(0x16826100)
#define RPG_CLIENT_ZATZKALOOKATIK__CTOR_OFFSET UNITYSDK_OFFSET(0x168296A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ZatzkaLookAtIK_TypeDefinitionIndex = 68468;

	class ZatzkaLookAtIK : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Single JEPOPHHBFMM; // 0x0
		// static const ::System::Single HHMMPPPHBIM; // 0x0
		// static const ::System::Single OPBIKHDOELM; // 0x0
		// static const ::System::Single DDALEKEHLKI; // 0x0
		::System::Single MaxYawAngle; // 0x18
		::System::Single MaxHeadRotAngle; // 0x1C
		::System::Single SpeedDecayMultiplier; // 0x20
		::System::Single SpeedDecayStrength; // 0x24
		::System::Single MinSpeedRatio; // 0x28
		::System::Single ReferenceAngleForFullSpeed; // 0x2C
		::System::Single MinAngleForMinSpeed; // 0x30
		::System::Boolean EnableTargetChangeDeadzone; // 0x34
		::System::Single TargetChangeDeadzoneAngle; // 0x38
		::System::Single SmallRangeMaxAngle; // 0x3C
		::System::Single SmallRangeSpeedRatio; // 0x40
		::System::Single ApproachBoostPeakPosition; // 0x44
		::System::Single ApproachAccelSmoothMultiplier; // 0x48
		::System::Boolean EnableBehindPitchNeutralize; // 0x4C
		::System::Single BehindZoneYawMin; // 0x50
		::System::Single BehindZoneYawMax; // 0x54
		::System::Single BehindNeutralPitchLimit; // 0x58
		::System::Single BehindPitchLimitBlendSpeed; // 0x5C
		::System::Single BehindZoneTransitionDegrees; // 0x60
		::System::Single BehindZoneEdgeFadeDegrees; // 0x64
		::RPG::Client::LookAtIK* FEIPKPLMKDO; // 0x68
		::System::Single ENEDICDNJID; // 0x70
		::System::Single JBKHMKAGBKJ; // 0x74
		::System::Single MODCPPJNCAL; // 0x78
		::System::Single NDBLJAEOKPM; // 0x7C
		::System::Boolean HEEFBABGFGL; // 0x80
		::UnityEngine::Transform* BHAADDFJAFE; // 0x88
		::UnityEngine::Vector3 AIMKNENMEGG; // 0x90
		::UnityEngine::Vector3 KPNCJCBCGKM; // 0x9C
		::System::Boolean BANPPAAJKEF; // 0xA8
		::UnityEngine::Quaternion OLFNMMEMMJF; // 0xAC
		::System::Boolean JOEFBOFMKMK; // 0xBC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ZATZKALOOKATIK__CTOR_OFFSET))(this);
		}

		::System::Single Method_5_5323F2DF46A044DA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ZATZKALOOKATIK_METHOD_5_5323F2DF46A044DA_OFFSET))(this);
		}

		::System::Void SafeInit(::RPG::Client::AttachPointMapping* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AttachPointMapping*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ZATZKALOOKATIK_SAFEINIT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsProcessable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ZATZKALOOKATIK_GET_ISPROCESSABLE_OFFSET))(this);
		}

		::System::Boolean Process(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ZATZKALOOKATIK_PROCESS_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ZATZKALOOKATIK_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ZATZKALOOKATIK_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ZATZKALOOKATIK_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ZATZKALOOKATIK_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ZATZKALOOKATIK_ONVALIDATE_OFFSET))(this);
		}

		::System::Void Method_5_01244C5D42565CB2(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ZATZKALOOKATIK_METHOD_5_01244C5D42565CB2_OFFSET))(this, a1);
		}

		::System::Void Method_5_30D1209326FA87FC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ZATZKALOOKATIK_METHOD_5_30D1209326FA87FC_OFFSET))(this);
		}

		::System::Void Method_5_F0BD65B017F2AC0B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ZATZKALOOKATIK_METHOD_5_F0BD65B017F2AC0B_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_5_A0278AEAAD5BAD20(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_ZATZKALOOKATIK_METHOD_5_A0278AEAAD5BAD20_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 Method_5_2EDAC8CAFF864AE8(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_ZATZKALOOKATIK_METHOD_5_2EDAC8CAFF864AE8_OFFSET))(this, a1, a2);
		}

		::System::Single Method_5_4BD1DD9FEF3B7862()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ZATZKALOOKATIK_METHOD_5_4BD1DD9FEF3B7862_OFFSET))(this);
		}

		::System::Single Method_5_9FBCB7EE3738DEA4(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ZATZKALOOKATIK_METHOD_5_9FBCB7EE3738DEA4_OFFSET))(this, a1, a2);
		}

		::System::Single Method_5_5688F408AF8BA5A8(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ZATZKALOOKATIK_METHOD_5_5688F408AF8BA5A8_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single Method_5_627557CE4CD0ABB4(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ZATZKALOOKATIK_METHOD_5_627557CE4CD0ABB4_OFFSET))(this, a1, a2, a3);
		}

		::System::Single Method_5_D8419A5DEE512C03(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ZATZKALOOKATIK_METHOD_5_D8419A5DEE512C03_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::System::Single Method_5_DB11C736C0498425(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ZATZKALOOKATIK_METHOD_5_DB11C736C0498425_OFFSET))(a1);
		}

		::System::Void Method_5_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ZATZKALOOKATIK_METHOD_5_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_5_602B796CAD5DBEDB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ZATZKALOOKATIK_METHOD_5_602B796CAD5DBEDB_OFFSET))(this, a1);
		}

		::System::Void Method_5_18D9238B9C310BFF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ZATZKALOOKATIK_METHOD_5_18D9238B9C310BFF_OFFSET))(this, a1);
		}

		::System::Void Method_5_479759059E440327(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ZATZKALOOKATIK_METHOD_5_479759059E440327_OFFSET))(this, a1);
		}

		::System::Single Method_5_35014F67085C0F4E()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ZATZKALOOKATIK_METHOD_5_35014F67085C0F4E_OFFSET))(this);
		}

		::System::Single Method_5_4FD079E562D79666(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ZATZKALOOKATIK_METHOD_5_4FD079E562D79666_OFFSET))(this, a1);
		}

		static ::System::Boolean Method_5_18DC899D74EF7F38(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ZATZKALOOKATIK_METHOD_5_18DC899D74EF7F38_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Single Method_5_A534811CDDC793A9(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ZATZKALOOKATIK_METHOD_5_A534811CDDC793A9_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single Method_5_A534811CDDC793A9_1(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ZATZKALOOKATIK_METHOD_5_A534811CDDC793A9_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single Method_5_9AAFA20BE473DBC6(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ZATZKALOOKATIK_METHOD_5_9AAFA20BE473DBC6_OFFSET))(a1, a2, a3);
		}

		static ::System::Single Method_5_DB11C736C0498425_1(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ZATZKALOOKATIK_METHOD_5_DB11C736C0498425_1_OFFSET))(a1);
		}

		static ::System::Boolean Method_5_D62EA523FA1B6C95(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ZATZKALOOKATIK_METHOD_5_D62EA523FA1B6C95_OFFSET))(a1, a2, a3);
		}

		static ::System::Single Method_5_ECF5752EC6D68585(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ZATZKALOOKATIK_METHOD_5_ECF5752EC6D68585_OFFSET))(a1, a2);
		}

		static ::System::Single Method_5_7B5CF29097D2700A(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ZATZKALOOKATIK_METHOD_5_7B5CF29097D2700A_OFFSET))(a1);
		}
	};
}
