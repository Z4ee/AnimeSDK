#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_BD16FADC04F09512;
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

#define RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xADED020)
#define RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xADEAAC0)
#define RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_METHOD_6_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0xADEC960)
#define RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_METHOD_6_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0xADEB7F0)
#define RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_METHOD_6_2E7887A5F66AA5BC_OFFSET UNITYSDK_OFFSET(0xADEB710)
#define RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_METHOD_6_41146E620D694011_OFFSET UNITYSDK_OFFSET(0xADEBEE0)
#define RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_METHOD_6_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0xADEB4C0)
#define RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_METHOD_6_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0xADEBCD0)
#define RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_METHOD_6_87318FF00D6BC7EB_1_OFFSET UNITYSDK_OFFSET(0xADECDE0)
#define RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_METHOD_6_87318FF00D6BC7EB_OFFSET UNITYSDK_OFFSET(0xADECBA0)
#define RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_METHOD_6_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0xADEB650)
#define RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_METHOD_6_E693A0026D178D8E_1_OFFSET UNITYSDK_OFFSET(0xADEAC20)
#define RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_METHOD_6_E693A0026D178D8E_OFFSET UNITYSDK_OFFSET(0xADEB070)
#define RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_METHOD_6_F6EC36655AF60965_OFFSET UNITYSDK_OFFSET(0xADEBA10)
#define RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_ONPILLARCANCELLIGHTUP_OFFSET UNITYSDK_OFFSET(0xADEC890)
#define RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_ONPILLARLIGHTUP_OFFSET UNITYSDK_OFFSET(0xADEC7C0)
#define RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xADEC370)
#define RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0xADECB00)
#define RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0xADED080)
#define RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xADED260)
#define RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xADED180)
#define RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD___IFIXBASEPROXY_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xADED190)
#define RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD___IFIXBASEPROXY_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0xADED1F0)

namespace RPG::Client::Prop::CoilPuzzle
{
	inline static constexpr unsigned int RigCoilPuzzleBoard_TypeDefinitionIndex = 72472;

	class RigCoilPuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		static ::System::Int32* StaticGet_RopeIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RigCoilPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0xFE50);
		}
		::System::Int32 Field_6_1; // 0x48
		::System::Int32 Field_6_2; // 0x4C
		::Class_1_BD16FADC04F09512* Field_6_3; // 0x50
		::Class_1_EBC347C362DFF976* Field_6_4; // 0x58
		::UnityEngine::Transform* Field_6_5; // 0x60
		::UnityEngine::Transform* Field_6_6; // 0x68
		::System::Collections::Generic::List_1<::Class_1_BD16FADC04F09512*>* Field_6_7; // 0x70
		::System::Collections::Generic::List_1<::Class_1_EBC347C362DFF976*>* Field_6_8; // 0x78
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Collider*, ::Class_1_EBC347C362DFF976*>* Field_6_9; // 0x80
		::System::String* OriginPoint; // 0x88
		::System::UInt32 ObstacleGroup; // 0x90
		::System::UInt32 PillarGroup; // 0x94
		::UnityEngine::GameObject* RopeTemplate; // 0x98
		::UnityEngine::Material* PillarActiveMat; // 0xA0
		::UnityEngine::Material* PillarDeactiveMat; // 0xA8
		::RPG::Client::RuntimeGroupManager* Field_6_16; // 0xB0

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

		::System::Void Method_6_E693A0026D178D8E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_METHOD_6_E693A0026D178D8E_OFFSET))(this);
		}

		::System::Void Method_6_E693A0026D178D8E_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_METHOD_6_E693A0026D178D8E_1_OFFSET))(this);
		}

		::System::Void Method_6_B09E78EE7EE4F8FA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_METHOD_6_B09E78EE7EE4F8FA_OFFSET))(this);
		}

		::Class_1_BD16FADC04F09512* Method_6_2E7887A5F66AA5BC(::UnityEngine::Vector3 a1)
		{
			return ((::Class_1_BD16FADC04F09512*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_METHOD_6_2E7887A5F66AA5BC_OFFSET))(this, a1);
		}

		::System::Void Method_6_28EB11670A8E5A86()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_METHOD_6_28EB11670A8E5A86_OFFSET))(this);
		}

		::System::Void Method_6_F6EC36655AF60965(::UnityEngine::RaycastHit a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RaycastHit, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_METHOD_6_F6EC36655AF60965_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_6_6B72D4EE8C6E907F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_METHOD_6_6B72D4EE8C6E907F_OFFSET))(this);
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

		::System::Void Method_6_87318FF00D6BC7EB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_METHOD_6_87318FF00D6BC7EB_OFFSET))(this);
		}

		::System::Void Method_6_87318FF00D6BC7EB_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_METHOD_6_87318FF00D6BC7EB_1_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_InitPuzzle(::RPG::GameCore::GameEntity* P0, ::RPG::GameCore::TaskContext* P1, ::RPG::GameCore::PropInitPuzzle* P2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD___IFIXBASEPROXY_RESETPUZZLE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_TickPuzzle(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD___IFIXBASEPROXY_TICKPUZZLE_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COILPUZZLE_RIGCOILPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
