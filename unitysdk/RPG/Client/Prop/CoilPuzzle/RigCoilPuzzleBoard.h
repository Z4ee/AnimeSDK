#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_1ACE0263147688BB;
class Class_1_EBC347C362DFF976;
namespace RPG::Client { class RuntimeGroupManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A8F9E70)
#define RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0x1A8F7390)
#define RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_METHOD_6_0D372435D9CAE4BC_OFFSET UNITYSDK_OFFSET(0x1A8F89C0)
#define RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_METHOD_6_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x1A8F95B0)
#define RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_METHOD_6_2E7887A5F66AA5BC_OFFSET UNITYSDK_OFFSET(0x1A8F8330)
#define RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_METHOD_6_41146E620D694011_OFFSET UNITYSDK_OFFSET(0x1A8F8BC0)
#define RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_METHOD_6_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x1A8F80E0)
#define RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_METHOD_6_6FC74F2B6B0FC7F3_OFFSET UNITYSDK_OFFSET(0x1A8F85E0)
#define RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_METHOD_6_809094DEBF13B21A_1_OFFSET UNITYSDK_OFFSET(0x1A8F74F0)
#define RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_METHOD_6_809094DEBF13B21A_OFFSET UNITYSDK_OFFSET(0x1A8F7AE0)
#define RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_METHOD_6_A6544B958241856F_OFFSET UNITYSDK_OFFSET(0x1A8F8410)
#define RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_METHOD_6_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x1A8F8270)
#define RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_METHOD_6_DF3C54A5ADEABAF1_1_OFFSET UNITYSDK_OFFSET(0x1A8F9B30)
#define RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_METHOD_6_DF3C54A5ADEABAF1_OFFSET UNITYSDK_OFFSET(0x1A8F97F0)
#define RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_ONPILLARCANCELLIGHTUP_OFFSET UNITYSDK_OFFSET(0x1A8F94E0)
#define RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_ONPILLARLIGHTUP_OFFSET UNITYSDK_OFFSET(0x1A8F9410)
#define RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0x1A8F9020)
#define RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0x1A8F9750)
#define RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8F9ED0)

namespace RPG::Client::Prop::CoilPuzzle
{
	inline static constexpr unsigned int RigCoilPuzzleBoard_TypeDefinitionIndex = 78504;

	class RigCoilPuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		static ::System::Int32* StaticGet_RopeIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RigCoilPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0xFF70);
		}
		::System::Int32 HGAHBOPNDFE; // 0x48
		::System::Int32 LBBOLPHJFPM; // 0x4C
		::Class_1_1ACE0263147688BB* IIJCGAOPMCM; // 0x50
		::Class_1_EBC347C362DFF976* ENLPPLBIHHI; // 0x58
		::UnityEngine::Transform* AAFCLHHFPBP; // 0x60
		::UnityEngine::Transform* DHDOBALIDKP; // 0x68
		::System::Collections::Generic::List_1<::Class_1_1ACE0263147688BB*>* KAPHIKMKNOF; // 0x70
		::System::Collections::Generic::List_1<::Class_1_EBC347C362DFF976*>* DPKGFHCGHBP; // 0x78
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Collider*, ::Class_1_EBC347C362DFF976*>* KNOBGNHGLMO; // 0x80
		::System::String* OriginPoint; // 0x88
		::System::UInt32 ObstacleGroup; // 0x90
		::System::UInt32 PillarGroup; // 0x94
		::UnityEngine::GameObject* RopeTemplate; // 0x98
		::UnityEngine::Material* PillarActiveMat; // 0xA0
		::UnityEngine::Material* PillarDeactiveMat; // 0xA8
		::RPG::Client::RuntimeGroupManager* KDCJFIMPKLP; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD__CTOR_OFFSET))(this);
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_6_51CFFE2AF748ECD7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_METHOD_6_51CFFE2AF748ECD7_OFFSET))(this);
		}

		::System::Void Method_6_809094DEBF13B21A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_METHOD_6_809094DEBF13B21A_OFFSET))(this);
		}

		::System::Void Method_6_809094DEBF13B21A_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_METHOD_6_809094DEBF13B21A_1_OFFSET))(this);
		}

		::System::Void Method_6_B09E78EE7EE4F8FA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_METHOD_6_B09E78EE7EE4F8FA_OFFSET))(this);
		}

		::Class_1_1ACE0263147688BB* Method_6_2E7887A5F66AA5BC(::UnityEngine::Vector3 a1)
		{
			return ((::Class_1_1ACE0263147688BB*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_METHOD_6_2E7887A5F66AA5BC_OFFSET))(this, a1);
		}

		::System::Void Method_6_A6544B958241856F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_METHOD_6_A6544B958241856F_OFFSET))(this);
		}

		::System::Void Method_6_6FC74F2B6B0FC7F3(::UnityEngine::RaycastHit a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RaycastHit, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_METHOD_6_6FC74F2B6B0FC7F3_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_6_0D372435D9CAE4BC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_METHOD_6_0D372435D9CAE4BC_OFFSET))(this);
		}

		::System::Void Method_6_41146E620D694011()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_METHOD_6_41146E620D694011_OFFSET))(this);
		}

		::System::Void ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_RESETPUZZLE_OFFSET))(this);
		}

		::System::Void OnPillarLightup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_ONPILLARLIGHTUP_OFFSET))(this);
		}

		::System::Void OnPillarCancelLightup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_ONPILLARCANCELLIGHTUP_OFFSET))(this);
		}

		::System::Void Method_6_25DEA5C65A602671()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_METHOD_6_25DEA5C65A602671_OFFSET))(this);
		}

		::System::Void TickPuzzle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_TICKPUZZLE_OFFSET))(this, a1);
		}

		::System::Void Method_6_DF3C54A5ADEABAF1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_METHOD_6_DF3C54A5ADEABAF1_OFFSET))(this);
		}

		::System::Void Method_6_DF3C54A5ADEABAF1_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_METHOD_6_DF3C54A5ADEABAF1_1_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_DISPOSE_OFFSET))(this);
		}
	};
}
