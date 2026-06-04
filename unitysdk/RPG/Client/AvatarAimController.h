#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AvatarAimController_Struct_2_E658502528B7C034_4.h"
#include "unitysdk/Struct_2_B87BAA35D432DB99.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_924;
namespace RPG::Client { class AimSolver; }
namespace RPG::Client { class AttachPointMapping; }
namespace RPG::Client { class MultiAimSolver; }
namespace RPG::Client { template <typename T1, typename T2> class AimEvaluator_2; }
namespace RootMotion::IKJob { class IKThreadProxyContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_AVATARAIMCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0xB356900)
#define RPG_CLIENT_AVATARAIMCONTROLLER_COLLECTTHREADDATA_OFFSET UNITYSDK_OFFSET(0xB357190)
#define RPG_CLIENT_AVATARAIMCONTROLLER_GETREFERENCETRANSFORMS_OFFSET UNITYSDK_OFFSET(0xB3570A0)
#define RPG_CLIENT_AVATARAIMCONTROLLER_GET_CURRENTSOLVER_OFFSET UNITYSDK_OFFSET(0xB357D10)
#define RPG_CLIENT_AVATARAIMCONTROLLER_GET_ISPROCESSABLE_OFFSET UNITYSDK_OFFSET(0xB356C50)
#define RPG_CLIENT_AVATARAIMCONTROLLER_METHOD_5_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0xB357BD0)
#define RPG_CLIENT_AVATARAIMCONTROLLER_PREPROCESS_OFFSET UNITYSDK_OFFSET(0xB356C60)
#define RPG_CLIENT_AVATARAIMCONTROLLER_PROCESS_OFFSET UNITYSDK_OFFSET(0xB356FB0)
#define RPG_CLIENT_AVATARAIMCONTROLLER_SAFEINIT_OFFSET UNITYSDK_OFFSET(0xB356A60)
#define RPG_CLIENT_AVATARAIMCONTROLLER_SET_CURRENTSOLVER_OFFSET UNITYSDK_OFFSET(0xB357D20)
#define RPG_CLIENT_AVATARAIMCONTROLLER_STARTAIM_1_OFFSET UNITYSDK_OFFSET(0xB357720)
#define RPG_CLIENT_AVATARAIMCONTROLLER_STARTAIM_OFFSET UNITYSDK_OFFSET(0xB357380)
#define RPG_CLIENT_AVATARAIMCONTROLLER_STOPAIM_OFFSET UNITYSDK_OFFSET(0xB357950)
#define RPG_CLIENT_AVATARAIMCONTROLLER_STOPALLAIM_OFFSET UNITYSDK_OFFSET(0xB357B40)
#define RPG_CLIENT_AVATARAIMCONTROLLER_UPDATEAIMSOLVE_OFFSET UNITYSDK_OFFSET(0xB357290)
#define RPG_CLIENT_AVATARAIMCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xB357D30)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarAimController_TypeDefinitionIndex = 63951;

	class AvatarAimController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Class_0_16E4307DCC419505_924* _CurrentSolver_k__BackingField; // 0x18
		::System::Boolean isMulti; // 0x20
		::RPG::Client::AimSolver* Solver; // 0x28
		::RPG::Client::MultiAimSolver* MultiSolver; // 0x30
		::Il2CppArray<::RPG::Client::AvatarAimController_Struct_2_E658502528B7C034_4>* Field_5_4; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARAIMCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARAIMCONTROLLER_AWAKE_OFFSET))(this);
		}

		::System::Void SafeInit(::RPG::Client::AttachPointMapping* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AttachPointMapping*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARAIMCONTROLLER_SAFEINIT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsProcessable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARAIMCONTROLLER_GET_ISPROCESSABLE_OFFSET))(this);
		}

		::System::Void PreProcess(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARAIMCONTROLLER_PREPROCESS_OFFSET))(this, a1);
		}

		::System::Boolean Process(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARAIMCONTROLLER_PROCESS_OFFSET))(this, a1);
		}

		::System::Void GetReferenceTransforms(::System::Collections::Generic::List_1<::UnityEngine::Transform*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARAIMCONTROLLER_GETREFERENCETRANSFORMS_OFFSET))(this, a1);
		}

		::System::Void CollectThreadData(::RootMotion::IKJob::IKThreadProxyContext* a1, ::Struct_2_B87BAA35D432DB99& a2)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::IKJob::IKThreadProxyContext*, ::Struct_2_B87BAA35D432DB99&))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARAIMCONTROLLER_COLLECTTHREADDATA_OFFSET))(this, a1, a2);
		}

		::System::Boolean UpdateAimSolve()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARAIMCONTROLLER_UPDATEAIMSOLVE_OFFSET))(this);
		}

		::System::Void StartAim(::System::String* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Vector2 a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARAIMCONTROLLER_STARTAIM_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void StartAim_1(::System::String* a1, ::RPG::Client::AimEvaluator_2<::UnityEngine::Vector3, ::System::Boolean>* a2, ::System::Single a3, ::UnityEngine::Vector2 a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::AimEvaluator_2<::UnityEngine::Vector3, ::System::Boolean>*, ::System::Single, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARAIMCONTROLLER_STARTAIM_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void StopAim(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARAIMCONTROLLER_STOPAIM_OFFSET))(this, a1, a2);
		}

		::System::Void StopAllAim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARAIMCONTROLLER_STOPALLAIM_OFFSET))(this);
		}

		::System::Void Method_5_F0BD65B017F2AC0B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARAIMCONTROLLER_METHOD_5_F0BD65B017F2AC0B_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_924* get_CurrentSolver()
		{
			return ((::Class_0_16E4307DCC419505_924*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARAIMCONTROLLER_GET_CURRENTSOLVER_OFFSET))(this);
		}

		::System::Void set_CurrentSolver(::Class_0_16E4307DCC419505_924* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_924*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARAIMCONTROLLER_SET_CURRENTSOLVER_OFFSET))(this, a1);
		}
	};
}
