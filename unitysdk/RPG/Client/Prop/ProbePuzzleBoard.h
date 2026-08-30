#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class NotifyShowFuncBtnParam; }
namespace RPG::GameCore { class PropConfig; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class PropRow; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_PROBEPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16638140)
#define RPG_CLIENT_PROP_PROBEPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0x16637750)
#define RPG_CLIENT_PROP_PROBEPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0x166380F0)
#define RPG_CLIENT_PROP_PROBEPUZZLEBOARD_METHOD_6_2372762F4122DEB8_OFFSET UNITYSDK_OFFSET(0x16637DC0)
#define RPG_CLIENT_PROP_PROBEPUZZLEBOARD_METHOD_6_38C5F8CD1ED91C27_OFFSET UNITYSDK_OFFSET(0x1663A670)
#define RPG_CLIENT_PROP_PROBEPUZZLEBOARD_METHOD_6_C958C75CB08323C3_OFFSET UNITYSDK_OFFSET(0x166389D0)
#define RPG_CLIENT_PROP_PROBEPUZZLEBOARD_METHOD_6_D6F4C32AC4421431_OFFSET UNITYSDK_OFFSET(0x1663AE60)
#define RPG_CLIENT_PROP_PROBEPUZZLEBOARD_METHOD_6_D93DEBA456F620BE_OFFSET UNITYSDK_OFFSET(0x16639D60)
#define RPG_CLIENT_PROP_PROBEPUZZLEBOARD_RESET_OFFSET UNITYSDK_OFFSET(0x16638600)
#define RPG_CLIENT_PROP_PROBEPUZZLEBOARD_SETRESETNUMBER_OFFSET UNITYSDK_OFFSET(0x16638550)
#define RPG_CLIENT_PROP_PROBEPUZZLEBOARD_UPDATE_OFFSET UNITYSDK_OFFSET(0x16637E40)
#define RPG_CLIENT_PROP_PROBEPUZZLEBOARD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1663B3C0)
#define RPG_CLIENT_PROP_PROBEPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0x1663B2A0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ProbePuzzleBoard_TypeDefinitionIndex = 78306;

	class ProbePuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		static ::System::String** StaticGet_CJDIFCBFIAB()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ProbePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x64890);
		}
		static ::System::Int32* StaticGet_HPFOEOPAFNI()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ProbePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x14AF0);
		}
		static ::UnityEngine::Vector3* StaticGet_HMEHAGGCBHF()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(ProbePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x14AF4);
		}
		static ::UnityEngine::Vector3* StaticGet_OIPLILIGFCL()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(ProbePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x14B00);
		}
		static ::System::Int32* StaticGet_LKENCCLAPAE()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ProbePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x14B0C);
		}
		::System::String* Target; // 0x48
		::System::String* ProbePropID_DS; // 0x50
		::System::Single ProbeRotateRatio; // 0x58
		::System::Single ProbeSafeRadius; // 0x5C
		::System::String* ProbePlaceFailTextID; // 0x60
		::System::Single DistanceComplete; // 0x68
		::System::Single DistanceDisappear; // 0x6C
		::Il2CppArray<::System::Single>* DistanceLevel; // 0x70
		::System::UInt32 LLDCHLHNADA; // 0x78
		::System::UInt32 GACEMBBAGMP; // 0x7C
		::System::UInt32 OMHPPNNKNNC; // 0x80
		::RPG::GameCore::PropRow* PIPPNNPGNMM; // 0x88
		::RPG::GameCore::PropConfig* PCPHFGIADMF; // 0x90
		::System::UInt32 JGEJHLKFPOA; // 0x98
		::System::UInt32 ABIMLEDIEKI; // 0x9C
		::System::UInt32 LJMMCHDGDAC; // 0xA0
		::System::Int32 HGAHFGMDDKC; // 0xA4
		::System::Single FHGLNBLLOFE; // 0xA8
		::System::Boolean DCHDCOBMIKL; // 0xAC
		::System::Boolean IGLBOKOBNHN; // 0xAD
		::System::Boolean NLPKJIJDJBK; // 0xAE
		::System::Single DHPPNINHMOJ; // 0xB0
		::UnityEngine::Object* JFKLENKPKPL; // 0xB8
		::UnityEngine::Transform* OJAHLJGABMJ; // 0xC0
		::System::Collections::Generic::Queue_1<::UnityEngine::GameObject*>* CADFLPJPABG; // 0xC8
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* POHPBFNBDEN; // 0xD0
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* PCCIMEKCCPB; // 0xD8
		::UnityEngine::GameObject* MNAFOLKDBNJ; // 0xE0
		::RPG::GameCore::NotifyShowFuncBtnParam* OLDAHDINLCN; // 0xE8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEBOARD__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEBOARD__CCTOR_OFFSET))();
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEBOARD_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEBOARD_UPDATE_OFFSET))(this);
		}

		::System::Boolean IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEBOARD_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEBOARD_DISPOSE_OFFSET))(this);
		}

		::System::Void SetResetNumber(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEBOARD_SETRESETNUMBER_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEBOARD_RESET_OFFSET))(this);
		}

		::System::Void Method_6_C958C75CB08323C3(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEBOARD_METHOD_6_C958C75CB08323C3_OFFSET))(this, a1);
		}

		::System::Boolean Method_6_D93DEBA456F620BE(::UnityEngine::Vector3& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEBOARD_METHOD_6_D93DEBA456F620BE_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* Method_6_38C5F8CD1ED91C27(::RPG::MVector3 a1, ::System::Single a2)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::MVector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEBOARD_METHOD_6_38C5F8CD1ED91C27_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::GameEntity* Method_6_D6F4C32AC4421431(::UnityEngine::GameObject* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEBOARD_METHOD_6_D6F4C32AC4421431_OFFSET))(this, a1);
		}

		::System::UInt32 Method_6_2372762F4122DEB8()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEBOARD_METHOD_6_2372762F4122DEB8_OFFSET))(this);
		}
	};
}
