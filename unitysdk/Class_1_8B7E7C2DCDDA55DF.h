#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameViewCoord.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_2CDF619C23140440;
class Class_1_8B7E7C2DCDDA55DF_Class_1_F2D17E30E1E79D69;
class Class_2_1A8148841049062A;
class Class_2_B8E38BF47138A2E5;
class Class_3_D6E9A038FA23103A;
class FiveDimRenderingPanelRuntime;
namespace BansheeGz::BGSpline::Curve { class BGCurve; }
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelGameView; }
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelGlobalData; }
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelRuntimeInspector; }
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelStructGameView; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_8B7E7C2DCDDA55DF_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1428EC80)
#define CLASS_1_8B7E7C2DCDDA55DF_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1428E100)
#define CLASS_1_8B7E7C2DCDDA55DF_LATEEXECUTE_OFFSET UNITYSDK_OFFSET(0x14294DC0)
#define CLASS_1_8B7E7C2DCDDA55DF_METHOD_1_076E1E2A0183A470_OFFSET UNITYSDK_OFFSET(0x142908B0)
#define CLASS_1_8B7E7C2DCDDA55DF_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x1428E090)
#define CLASS_1_8B7E7C2DCDDA55DF_METHOD_1_18188D67877F2AFB_OFFSET UNITYSDK_OFFSET(0x14296910)
#define CLASS_1_8B7E7C2DCDDA55DF_METHOD_1_4988666BECC8CE44_OFFSET UNITYSDK_OFFSET(0x1429A500)
#define CLASS_1_8B7E7C2DCDDA55DF_METHOD_1_52DC9CC69AE40BFA_OFFSET UNITYSDK_OFFSET(0x142909F0)
#define CLASS_1_8B7E7C2DCDDA55DF_METHOD_1_7EC249F73AD3704B_OFFSET UNITYSDK_OFFSET(0x142972C0)
#define CLASS_1_8B7E7C2DCDDA55DF_METHOD_1_91B48388F4BFAF76_OFFSET UNITYSDK_OFFSET(0x14291C80)
#define CLASS_1_8B7E7C2DCDDA55DF_METHOD_1_A37E414ACE798D5C_OFFSET UNITYSDK_OFFSET(0x142954E0)
#define CLASS_1_8B7E7C2DCDDA55DF_METHOD_1_B1EA412ACAE87C15_OFFSET UNITYSDK_OFFSET(0x1429A8A0)
#define CLASS_1_8B7E7C2DCDDA55DF_METHOD_1_C88D2212B860B209_OFFSET UNITYSDK_OFFSET(0x14296AB0)
#define CLASS_1_8B7E7C2DCDDA55DF_METHOD_1_D308836DB54415C3_OFFSET UNITYSDK_OFFSET(0x14294E10)
#define CLASS_1_8B7E7C2DCDDA55DF_METHOD_1_E41FCF4CAFD9C569_OFFSET UNITYSDK_OFFSET(0x1429A6E0)
#define CLASS_1_8B7E7C2DCDDA55DF_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x1428E740)
#define CLASS_1_8B7E7C2DCDDA55DF__CCTOR_OFFSET UNITYSDK_OFFSET(0x1429AC80)
#define CLASS_1_8B7E7C2DCDDA55DF__CTOR_OFFSET UNITYSDK_OFFSET(0x1428DDA0)
#define CLASS_1_8B7E7C2DCDDA55DF___ADD2DBRICKTUTORIALTRIGGER_B__16_0_OFFSET UNITYSDK_OFFSET(0x1429ACD0)

inline static constexpr unsigned int Class_1_8B7E7C2DCDDA55DF_TypeDefinitionIndex = 71344;

class Class_1_8B7E7C2DCDDA55DF : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8B7E7C2DCDDA55DF_TypeDefinitionIndex)->GetStaticField(0x9410);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8B7E7C2DCDDA55DF_TypeDefinitionIndex)->GetStaticField(0x9414);
	}
	static ::System::Int32* StaticGet_Field_1_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8B7E7C2DCDDA55DF_TypeDefinitionIndex)->GetStaticField(0x9418);
	}
	// static const ::System::String* Field_1_3; // 0x0
	::UnityEngine::Transform* Field_1_4; // 0x10
	::UnityEngine::Transform* Field_1_5; // 0x18
	::System::Collections::Generic::List_1<::FiveDimRenderingPanelRuntime*>* Field_1_6; // 0x20
	::System::Collections::Generic::HashSet_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*>* Field_1_7; // 0x28
	::System::Collections::Generic::Dictionary_2<::Class_2_1A8148841049062A*, ::Class_2_1A8148841049062A*>* Field_1_8; // 0x30
	::System::Collections::Generic::Dictionary_2<::Class_2_1A8148841049062A*, ::System::Tuple_2<::UnityEngine::GameObject*, ::BansheeGz::BGSpline::Curve::BGCurve*>*>* Field_1_9; // 0x38
	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGlobalData* Field_1_10; // 0x40
	::System::Collections::Generic::List_1<::UnityEngine::Coroutine*>* Field_1_11; // 0x48
	::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*>*>* Field_1_12; // 0x50
	::UnityEngine::Coroutine* Field_1_13; // 0x58
	::Class_3_D6E9A038FA23103A* Field_1_14; // 0x60
	::Class_1_2CDF619C23140440* Field_1_15; // 0x68
	::System::Collections::Generic::Dictionary_2<::Class_2_B8E38BF47138A2E5*, ::Class_1_8B7E7C2DCDDA55DF_Class_1_F2D17E30E1E79D69*>* Field_1_16; // 0x70
	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelRuntimeInspector* Field_1_17; // 0x78
	::System::Boolean Field_1_18; // 0x80
	::System::Boolean Field_1_19; // 0x81
	::System::Boolean Field_1_20; // 0x82

	::System::Void _ctor(::Class_1_2CDF619C23140440* a1, ::Class_3_D6E9A038FA23103A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2CDF619C23140440*, ::Class_3_D6E9A038FA23103A*))((::PBYTE)hIl2Cpp + CLASS_1_8B7E7C2DCDDA55DF__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8B7E7C2DCDDA55DF__CCTOR_OFFSET))();
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B7E7C2DCDDA55DF_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B7E7C2DCDDA55DF_INITIALIZE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B7E7C2DCDDA55DF_TEARDOWN_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B7E7C2DCDDA55DF_EXECUTE_OFFSET))(this);
	}

	::System::Void LateExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B7E7C2DCDDA55DF_LATEEXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_D308836DB54415C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B7E7C2DCDDA55DF_METHOD_1_D308836DB54415C3_OFFSET))(this);
	}

	::System::Void Method_1_076E1E2A0183A470(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8B7E7C2DCDDA55DF_METHOD_1_076E1E2A0183A470_OFFSET))(this, a1);
	}

	::System::Void Method_1_A37E414ACE798D5C(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_8B7E7C2DCDDA55DF_METHOD_1_A37E414ACE798D5C_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_18188D67877F2AFB(::UnityEngine::Camera* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8B7E7C2DCDDA55DF_METHOD_1_18188D67877F2AFB_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_91B48388F4BFAF76(::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::System::Collections::Generic::List_1<::Class_2_1A8148841049062A*>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::System::Collections::Generic::List_1<::Class_2_1A8148841049062A*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_8B7E7C2DCDDA55DF_METHOD_1_91B48388F4BFAF76_OFFSET))(this, a1);
	}

	::System::Void Method_1_52DC9CC69AE40BFA(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*))((::PBYTE)hIl2Cpp + CLASS_1_8B7E7C2DCDDA55DF_METHOD_1_52DC9CC69AE40BFA_OFFSET))(this, a1);
	}

	::System::Void Method_1_7EC249F73AD3704B(::Class_2_B8E38BF47138A2E5* a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView* a2, ::Class_2_1A8148841049062A* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*, ::Class_2_1A8148841049062A*))((::PBYTE)hIl2Cpp + CLASS_1_8B7E7C2DCDDA55DF_METHOD_1_7EC249F73AD3704B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_C88D2212B860B209(::System::Tuple_2<::System::Collections::Generic::List_1<::Class_2_1A8148841049062A*>*, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::Class_2_1A8148841049062A*>*>* a1, ::Class_2_B8E38BF47138A2E5* a2, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView* a3, ::Class_2_1A8148841049062A* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Tuple_2<::System::Collections::Generic::List_1<::Class_2_1A8148841049062A*>*, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::Class_2_1A8148841049062A*>*>*, ::Class_2_B8E38BF47138A2E5*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*, ::Class_2_1A8148841049062A*))((::PBYTE)hIl2Cpp + CLASS_1_8B7E7C2DCDDA55DF_METHOD_1_C88D2212B860B209_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void Method_1_4988666BECC8CE44(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView* a1, ::System::String* a2, ::UnityEngine::Color a3)
	{
		return ((::System::Void(*)(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_8B7E7C2DCDDA55DF_METHOD_1_4988666BECC8CE44_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_E41FCF4CAFD9C569(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView* a1, ::System::String* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8B7E7C2DCDDA55DF_METHOD_1_E41FCF4CAFD9C569_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_B1EA412ACAE87C15()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B7E7C2DCDDA55DF_METHOD_1_B1EA412ACAE87C15_OFFSET))(this);
	}

	::System::Void __Add2DBrickTutorialTrigger_b__16_0(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_1_8B7E7C2DCDDA55DF___ADD2DBRICKTUTORIALTRIGGER_B__16_0_OFFSET))(this, a1);
	}
};
