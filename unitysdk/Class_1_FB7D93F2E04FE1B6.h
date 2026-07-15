#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameViewCoord.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_2CDF619C23140440;
class Class_1_FB7D93F2E04FE1B6_Class_1_F2D17E30E1E79D69;
class Class_2_2661F5CE5402F421;
class Class_2_56DCA1B58073717B;
class Class_3_001D9EA49F6215B6;
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

#define CLASS_1_FB7D93F2E04FE1B6_EXECUTE_OFFSET UNITYSDK_OFFSET(0x146CE390)
#define CLASS_1_FB7D93F2E04FE1B6_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x146CD8A0)
#define CLASS_1_FB7D93F2E04FE1B6_LATEEXECUTE_OFFSET UNITYSDK_OFFSET(0x146D3D80)
#define CLASS_1_FB7D93F2E04FE1B6_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x146CD830)
#define CLASS_1_FB7D93F2E04FE1B6_METHOD_1_18188D67877F2AFB_OFFSET UNITYSDK_OFFSET(0x146D59F0)
#define CLASS_1_FB7D93F2E04FE1B6_METHOD_1_4988666BECC8CE44_OFFSET UNITYSDK_OFFSET(0x146D7000)
#define CLASS_1_FB7D93F2E04FE1B6_METHOD_1_52DC9CC69AE40BFA_OFFSET UNITYSDK_OFFSET(0x146D0340)
#define CLASS_1_FB7D93F2E04FE1B6_METHOD_1_7566FC86813F9825_OFFSET UNITYSDK_OFFSET(0x146D4480)
#define CLASS_1_FB7D93F2E04FE1B6_METHOD_1_8058D67C1D5ABB82_OFFSET UNITYSDK_OFFSET(0x146D6350)
#define CLASS_1_FB7D93F2E04FE1B6_METHOD_1_91B48388F4BFAF76_OFFSET UNITYSDK_OFFSET(0x146D15C0)
#define CLASS_1_FB7D93F2E04FE1B6_METHOD_1_A2172401030892FD_OFFSET UNITYSDK_OFFSET(0x146D3DD0)
#define CLASS_1_FB7D93F2E04FE1B6_METHOD_1_B1EA412ACAE87C15_OFFSET UNITYSDK_OFFSET(0x146D7350)
#define CLASS_1_FB7D93F2E04FE1B6_METHOD_1_D258B8E464ACA319_OFFSET UNITYSDK_OFFSET(0x146D71B0)
#define CLASS_1_FB7D93F2E04FE1B6_METHOD_1_D4CB96FDA16D54B7_OFFSET UNITYSDK_OFFSET(0x146D0200)
#define CLASS_1_FB7D93F2E04FE1B6_METHOD_1_F79C6BF0DB0D13B3_OFFSET UNITYSDK_OFFSET(0x146D5B90)
#define CLASS_1_FB7D93F2E04FE1B6_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x146CDEC0)
#define CLASS_1_FB7D93F2E04FE1B6__CCTOR_OFFSET UNITYSDK_OFFSET(0x146D7700)
#define CLASS_1_FB7D93F2E04FE1B6__CTOR_OFFSET UNITYSDK_OFFSET(0x146CD560)
#define CLASS_1_FB7D93F2E04FE1B6___ADD2DBRICKTUTORIALTRIGGER_B__16_0_OFFSET UNITYSDK_OFFSET(0x146D7750)

inline static constexpr unsigned int Class_1_FB7D93F2E04FE1B6_TypeDefinitionIndex = 72869;

class Class_1_FB7D93F2E04FE1B6 : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB7D93F2E04FE1B6_TypeDefinitionIndex)->GetStaticField(0x69C0);
	}
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB7D93F2E04FE1B6_TypeDefinitionIndex)->GetStaticField(0x69C4);
	}
	static ::System::Int32* StaticGet_Field_1_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB7D93F2E04FE1B6_TypeDefinitionIndex)->GetStaticField(0x69C8);
	}
	// static const ::System::String* Field_1_3; // 0x0
	::UnityEngine::Transform* Field_1_4; // 0x10
	::UnityEngine::Transform* Field_1_5; // 0x18
	::Class_3_001D9EA49F6215B6* Field_1_6; // 0x20
	::System::Collections::Generic::HashSet_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*>* Field_1_7; // 0x28
	::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*>*>* Field_1_8; // 0x30
	::System::Collections::Generic::Dictionary_2<::Class_2_2661F5CE5402F421*, ::Class_2_2661F5CE5402F421*>* Field_1_9; // 0x38
	::UnityEngine::Coroutine* Field_1_10; // 0x40
	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelRuntimeInspector* Field_1_11; // 0x48
	::System::Collections::Generic::Dictionary_2<::Class_2_2661F5CE5402F421*, ::System::Tuple_2<::UnityEngine::GameObject*, ::BansheeGz::BGSpline::Curve::BGCurve*>*>* Field_1_12; // 0x50
	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGlobalData* Field_1_13; // 0x58
	::System::Collections::Generic::Dictionary_2<::Class_2_56DCA1B58073717B*, ::Class_1_FB7D93F2E04FE1B6_Class_1_F2D17E30E1E79D69*>* Field_1_14; // 0x60
	::System::Collections::Generic::List_1<::UnityEngine::Coroutine*>* Field_1_15; // 0x68
	::System::Collections::Generic::List_1<::FiveDimRenderingPanelRuntime*>* Field_1_16; // 0x70
	::Class_1_2CDF619C23140440* Field_1_17; // 0x78
	::System::Boolean Field_1_18; // 0x80
	::System::Boolean Field_1_19; // 0x81
	::System::Boolean Field_1_20; // 0x82

	::System::Void _ctor(::Class_1_2CDF619C23140440* a1, ::Class_3_001D9EA49F6215B6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2CDF619C23140440*, ::Class_3_001D9EA49F6215B6*))((::PBYTE)hIl2Cpp + CLASS_1_FB7D93F2E04FE1B6__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FB7D93F2E04FE1B6__CCTOR_OFFSET))();
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB7D93F2E04FE1B6_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB7D93F2E04FE1B6_INITIALIZE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB7D93F2E04FE1B6_TEARDOWN_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB7D93F2E04FE1B6_EXECUTE_OFFSET))(this);
	}

	::System::Void LateExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB7D93F2E04FE1B6_LATEEXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_A2172401030892FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB7D93F2E04FE1B6_METHOD_1_A2172401030892FD_OFFSET))(this);
	}

	::System::Void Method_1_D4CB96FDA16D54B7(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FB7D93F2E04FE1B6_METHOD_1_D4CB96FDA16D54B7_OFFSET))(this, a1);
	}

	::System::Void Method_1_7566FC86813F9825(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FB7D93F2E04FE1B6_METHOD_1_7566FC86813F9825_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_18188D67877F2AFB(::UnityEngine::Camera* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FB7D93F2E04FE1B6_METHOD_1_18188D67877F2AFB_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_91B48388F4BFAF76(::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::System::Collections::Generic::List_1<::Class_2_2661F5CE5402F421*>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::System::Collections::Generic::List_1<::Class_2_2661F5CE5402F421*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_FB7D93F2E04FE1B6_METHOD_1_91B48388F4BFAF76_OFFSET))(this, a1);
	}

	::System::Void Method_1_52DC9CC69AE40BFA(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*))((::PBYTE)hIl2Cpp + CLASS_1_FB7D93F2E04FE1B6_METHOD_1_52DC9CC69AE40BFA_OFFSET))(this, a1);
	}

	::System::Void Method_1_8058D67C1D5ABB82(::Class_2_56DCA1B58073717B* a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView* a2, ::Class_2_2661F5CE5402F421* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*, ::Class_2_2661F5CE5402F421*))((::PBYTE)hIl2Cpp + CLASS_1_FB7D93F2E04FE1B6_METHOD_1_8058D67C1D5ABB82_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_F79C6BF0DB0D13B3(::System::Tuple_2<::System::Collections::Generic::List_1<::Class_2_2661F5CE5402F421*>*, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::Class_2_2661F5CE5402F421*>*>* a1, ::Class_2_56DCA1B58073717B* a2, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView* a3, ::Class_2_2661F5CE5402F421* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Tuple_2<::System::Collections::Generic::List_1<::Class_2_2661F5CE5402F421*>*, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::Class_2_2661F5CE5402F421*>*>*, ::Class_2_56DCA1B58073717B*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*, ::Class_2_2661F5CE5402F421*))((::PBYTE)hIl2Cpp + CLASS_1_FB7D93F2E04FE1B6_METHOD_1_F79C6BF0DB0D13B3_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void Method_1_4988666BECC8CE44(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView* a1, ::System::String* a2, ::UnityEngine::Color a3)
	{
		return ((::System::Void(*)(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_FB7D93F2E04FE1B6_METHOD_1_4988666BECC8CE44_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_D258B8E464ACA319(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView* a1, ::System::String* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FB7D93F2E04FE1B6_METHOD_1_D258B8E464ACA319_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_B1EA412ACAE87C15()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB7D93F2E04FE1B6_METHOD_1_B1EA412ACAE87C15_OFFSET))(this);
	}

	::System::Void __Add2DBrickTutorialTrigger_b__16_0(::Class_2_56DCA1B58073717B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*))((::PBYTE)hIl2Cpp + CLASS_1_FB7D93F2E04FE1B6___ADD2DBRICKTUTORIALTRIGGER_B__16_0_OFFSET))(this, a1);
	}
};
