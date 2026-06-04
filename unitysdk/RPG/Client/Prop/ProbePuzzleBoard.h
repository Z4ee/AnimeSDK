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

#define RPG_CLIENT_PROP_PROBEPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC5EEF70)
#define RPG_CLIENT_PROP_PROBEPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xC5EE580)
#define RPG_CLIENT_PROP_PROBEPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xC5EEF20)
#define RPG_CLIENT_PROP_PROBEPUZZLEBOARD_METHOD_6_2372762F4122DEB8_OFFSET UNITYSDK_OFFSET(0xC5EEBF0)
#define RPG_CLIENT_PROP_PROBEPUZZLEBOARD_METHOD_6_38C5F8CD1ED91C27_OFFSET UNITYSDK_OFFSET(0xC5F1480)
#define RPG_CLIENT_PROP_PROBEPUZZLEBOARD_METHOD_6_C958C75CB08323C3_OFFSET UNITYSDK_OFFSET(0xC5EF7E0)
#define RPG_CLIENT_PROP_PROBEPUZZLEBOARD_METHOD_6_D6F4C32AC4421431_OFFSET UNITYSDK_OFFSET(0xC5F1C70)
#define RPG_CLIENT_PROP_PROBEPUZZLEBOARD_METHOD_6_D93DEBA456F620BE_OFFSET UNITYSDK_OFFSET(0xC5F0B70)
#define RPG_CLIENT_PROP_PROBEPUZZLEBOARD_RESET_OFFSET UNITYSDK_OFFSET(0xC5EF410)
#define RPG_CLIENT_PROP_PROBEPUZZLEBOARD_SETRESETNUMBER_OFFSET UNITYSDK_OFFSET(0xC5EF380)
#define RPG_CLIENT_PROP_PROBEPUZZLEBOARD_UPDATE_OFFSET UNITYSDK_OFFSET(0xC5EEC70)
#define RPG_CLIENT_PROP_PROBEPUZZLEBOARD__CCTOR_OFFSET UNITYSDK_OFFSET(0xC5F21F0)
#define RPG_CLIENT_PROP_PROBEPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0xC5F20B0)
#define RPG_CLIENT_PROP_PROBEPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC5F22E0)
#define RPG_CLIENT_PROP_PROBEPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xC5F2260)
#define RPG_CLIENT_PROP_PROBEPUZZLEBOARD___IFIXBASEPROXY_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xC5F2270)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ProbePuzzleBoard_TypeDefinitionIndex = 73296;

	class ProbePuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		static ::System::String** StaticGet_Field_6_0()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ProbePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x1AAF0);
		}
		static ::System::Int32* StaticGet_Field_6_1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ProbePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x8940);
		}
		static ::UnityEngine::Vector3* StaticGet_Field_6_2()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(ProbePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x8944);
		}
		static ::UnityEngine::Vector3* StaticGet_Field_6_3()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(ProbePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x8950);
		}
		static ::System::Int32* StaticGet_Field_6_4()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ProbePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x895C);
		}
		::System::String* Target; // 0x48
		::System::String* ProbePropID_DS; // 0x50
		::System::Single ProbeRotateRatio; // 0x58
		::System::Single ProbeSafeRadius; // 0x5C
		::System::String* ProbePlaceFailTextID; // 0x60
		::System::Single DistanceComplete; // 0x68
		::System::Single DistanceDisappear; // 0x6C
		::Il2CppArray<::System::Single>* DistanceLevel; // 0x70
		::System::UInt32 Field_6_13; // 0x78
		::System::UInt32 Field_6_14; // 0x7C
		::System::UInt32 Field_6_15; // 0x80
		::RPG::GameCore::PropRow* Field_6_16; // 0x88
		::RPG::GameCore::PropConfig* Field_6_17; // 0x90
		::System::UInt32 Field_6_18; // 0x98
		::System::UInt32 Field_6_19; // 0x9C
		::System::UInt32 Field_6_20; // 0xA0
		::System::Int32 Field_6_21; // 0xA4
		::System::Single Field_6_22; // 0xA8
		::System::Boolean Field_6_23; // 0xAC
		::System::Boolean Field_6_24; // 0xAD
		::System::Boolean Field_6_25; // 0xAE
		::System::Single Field_6_26; // 0xB0
		::UnityEngine::Object* Field_6_27; // 0xB8
		::UnityEngine::Transform* Field_6_28; // 0xC0
		::System::Collections::Generic::Queue_1<::UnityEngine::GameObject*>* Field_6_29; // 0xC8
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_6_30; // 0xD0
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_6_31; // 0xD8
		::UnityEngine::GameObject* Field_6_32; // 0xE0
		::RPG::GameCore::NotifyShowFuncBtnParam* Field_6_33; // 0xE8

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

		::System::Void __iFixBaseProxy_InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean __iFixBaseProxy_IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEBOARD___IFIXBASEPROXY_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
