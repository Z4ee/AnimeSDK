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

#define RPG_CLIENT_PROP_PROBEPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAEA8C00)
#define RPG_CLIENT_PROP_PROBEPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xAEA81F0)
#define RPG_CLIENT_PROP_PROBEPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xAEA8BB0)
#define RPG_CLIENT_PROP_PROBEPUZZLEBOARD_METHOD_6_0A0A3F0F2DFB2D03_OFFSET UNITYSDK_OFFSET(0xAEAA720)
#define RPG_CLIENT_PROP_PROBEPUZZLEBOARD_METHOD_6_1A6BA74B1FDC4CEB_OFFSET UNITYSDK_OFFSET(0xAEAB700)
#define RPG_CLIENT_PROP_PROBEPUZZLEBOARD_METHOD_6_1C1866DEF4DE26A9_OFFSET UNITYSDK_OFFSET(0xAEAB000)
#define RPG_CLIENT_PROP_PROBEPUZZLEBOARD_METHOD_6_2372762F4122DEB8_OFFSET UNITYSDK_OFFSET(0xAEA8880)
#define RPG_CLIENT_PROP_PROBEPUZZLEBOARD_METHOD_6_CE017E2A52468EF8_OFFSET UNITYSDK_OFFSET(0xAEA93F0)
#define RPG_CLIENT_PROP_PROBEPUZZLEBOARD_RESET_OFFSET UNITYSDK_OFFSET(0xAEA90B0)
#define RPG_CLIENT_PROP_PROBEPUZZLEBOARD_SETRESETNUMBER_OFFSET UNITYSDK_OFFSET(0xAEA9000)
#define RPG_CLIENT_PROP_PROBEPUZZLEBOARD_UPDATE_OFFSET UNITYSDK_OFFSET(0xAEA8900)
#define RPG_CLIENT_PROP_PROBEPUZZLEBOARD__CCTOR_OFFSET UNITYSDK_OFFSET(0xAEABCA0)
#define RPG_CLIENT_PROP_PROBEPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0xAEABB60)
#define RPG_CLIENT_PROP_PROBEPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAEABDA0)
#define RPG_CLIENT_PROP_PROBEPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xAEABD20)
#define RPG_CLIENT_PROP_PROBEPUZZLEBOARD___IFIXBASEPROXY_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xAEABD30)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ProbePuzzleBoard_TypeDefinitionIndex = 72274;

	class ProbePuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		static ::System::String** StaticGet_Field_6_28()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ProbePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x112B0);
		}
		static ::UnityEngine::Vector3* StaticGet_Field_6_32()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(ProbePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x53F0);
		}
		static ::System::Int32* StaticGet_Field_6_30()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ProbePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x53FC);
		}
		static ::UnityEngine::Vector3* StaticGet_Field_6_31()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(ProbePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x5400);
		}
		static ::System::Int32* StaticGet_Field_6_29()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ProbePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x540C);
		}
		::System::String* Target; // 0x48
		::System::String* ProbePropID_DS; // 0x50
		::System::Single ProbeRotateRatio; // 0x58
		::System::Single ProbeSafeRadius; // 0x5C
		::System::String* ProbePlaceFailTextID; // 0x60
		::System::Single DistanceComplete; // 0x68
		::System::Single DistanceDisappear; // 0x6C
		::Il2CppArray<::System::Single>* DistanceLevel; // 0x70
		::System::UInt32 Field_6_8; // 0x78
		::System::UInt32 Field_6_9; // 0x7C
		::System::UInt32 Field_6_10; // 0x80
		::RPG::GameCore::PropRow* Field_6_11; // 0x88
		::RPG::GameCore::PropConfig* Field_6_12; // 0x90
		::System::UInt32 Field_6_13; // 0x98
		::System::UInt32 Field_6_14; // 0x9C
		::System::UInt32 Field_6_15; // 0xA0
		::System::Int32 Field_6_16; // 0xA4
		::System::Single Field_6_17; // 0xA8
		::System::Boolean Field_6_18; // 0xAC
		::System::Boolean Field_6_19; // 0xAD
		::System::Boolean Field_6_20; // 0xAE
		::System::Single Field_6_21; // 0xB0
		::UnityEngine::Object* Field_6_22; // 0xB8
		::UnityEngine::Transform* Field_6_23; // 0xC0
		::System::Collections::Generic::Queue_1<::UnityEngine::GameObject*>* Field_6_24; // 0xC8
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_6_25; // 0xD0
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_6_26; // 0xD8
		::UnityEngine::GameObject* Field_6_27; // 0xE0
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

		::System::Void Method_6_CE017E2A52468EF8(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEBOARD_METHOD_6_CE017E2A52468EF8_OFFSET))(this, a1);
		}

		::System::Boolean Method_6_0A0A3F0F2DFB2D03(::UnityEngine::Vector3& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEBOARD_METHOD_6_0A0A3F0F2DFB2D03_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* Method_6_1C1866DEF4DE26A9(::RPG::MVector3 a1, ::System::Single a2)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::MVector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEBOARD_METHOD_6_1C1866DEF4DE26A9_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::GameEntity* Method_6_1A6BA74B1FDC4CEB(::UnityEngine::GameObject* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEBOARD_METHOD_6_1A6BA74B1FDC4CEB_OFFSET))(this, a1);
		}

		::System::UInt32 Method_6_2372762F4122DEB8()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEBOARD_METHOD_6_2372762F4122DEB8_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_InitPuzzle(::RPG::GameCore::GameEntity* P0, ::RPG::GameCore::TaskContext* P1, ::RPG::GameCore::PropInitPuzzle* P2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET))(this, P0, P1, P2);
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
