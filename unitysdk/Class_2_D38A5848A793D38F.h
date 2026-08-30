#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_D38A5848A793D38F_ShadowJobRunResult.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameViewCoord.h"
#include "unitysdk/RPG/Client/LittleGame/SimpleViewService_1.h"
#include "unitysdk/RPG/GameCore/FiveDimCameraPriority.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_111;
class Class_1_2CDF619C23140440;
class Class_2_31D39E0B0ADFB12E;
class Class_2_B8E38BF47138A2E5;
class Class_2_D38A5848A793D38F_Class_1_132A9C759E078134;
class Class_2_D38A5848A793D38F_Class_1_55262A0607A71E6F;
class Class_2_D38A5848A793D38F_Class_1_7CA9FA43FA484177;
class Class_2_D38A5848A793D38F_Class_1_BB648BB3C855DD6B;
class Class_2_D38A5848A793D38F_Class_1_BBB4552724B54098;
class Class_2_D38A5848A793D38F_Class_1_CBEAE0802531F3EF;
class Class_3_912CC478F2B21832;
class FiveDimRenderingItem;
class FiveDimRenderingPanelRuntime;
namespace RPG::Client { class RPGProfilerMarkerWithIntData; }
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelGameView; }
namespace RPG::GameCore { class FiveDimBaseCameraConfig; }
namespace RPG::GameCore { class FourRotateVoxelFinishPointConfig; }
namespace RPG::GameCore { class FourRotateVoxelRevert2DVoxelConfig; }
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_2_D38A5848A793D38F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x199F7140)
#define CLASS_2_D38A5848A793D38F_METHOD_2_06C00E90DDE55D30_OFFSET UNITYSDK_OFFSET(0x19A01AB0)
#define CLASS_2_D38A5848A793D38F_METHOD_2_081E84DBAB5CA72B_OFFSET UNITYSDK_OFFSET(0x199FDA90)
#define CLASS_2_D38A5848A793D38F_METHOD_2_1392F93CBBAA8B7E_OFFSET UNITYSDK_OFFSET(0x199F7B60)
#define CLASS_2_D38A5848A793D38F_METHOD_2_1BD63EC50F3374F5_OFFSET UNITYSDK_OFFSET(0x19A00AE0)
#define CLASS_2_D38A5848A793D38F_METHOD_2_201211AFA67A7D13_OFFSET UNITYSDK_OFFSET(0x199F9010)
#define CLASS_2_D38A5848A793D38F_METHOD_2_2027AC45A69D718B_OFFSET UNITYSDK_OFFSET(0x199FB910)
#define CLASS_2_D38A5848A793D38F_METHOD_2_2368DFE07F28F7DA_OFFSET UNITYSDK_OFFSET(0x199FC8A0)
#define CLASS_2_D38A5848A793D38F_METHOD_2_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x199FD140)
#define CLASS_2_D38A5848A793D38F_METHOD_2_289F28027FF47717_OFFSET UNITYSDK_OFFSET(0x199F7BA0)
#define CLASS_2_D38A5848A793D38F_METHOD_2_2BBDB9CC52AB9E15_OFFSET UNITYSDK_OFFSET(0x19A014F0)
#define CLASS_2_D38A5848A793D38F_METHOD_2_34659C288538AEDA_OFFSET UNITYSDK_OFFSET(0x199FF5F0)
#define CLASS_2_D38A5848A793D38F_METHOD_2_373B0BCF2C69A2AC_OFFSET UNITYSDK_OFFSET(0x19A008D0)
#define CLASS_2_D38A5848A793D38F_METHOD_2_3779201892A01BB4_OFFSET UNITYSDK_OFFSET(0x19A01820)
#define CLASS_2_D38A5848A793D38F_METHOD_2_3F9D02BB8E97A671_OFFSET UNITYSDK_OFFSET(0x199FFF10)
#define CLASS_2_D38A5848A793D38F_METHOD_2_3FEA4D0C613AEA1F_OFFSET UNITYSDK_OFFSET(0x199FCFE0)
#define CLASS_2_D38A5848A793D38F_METHOD_2_4D71BCFB74C16073_OFFSET UNITYSDK_OFFSET(0x19A025F0)
#define CLASS_2_D38A5848A793D38F_METHOD_2_513F60E1612756A9_OFFSET UNITYSDK_OFFSET(0x199FDA10)
#define CLASS_2_D38A5848A793D38F_METHOD_2_659B881A8763C779_OFFSET UNITYSDK_OFFSET(0x199FD7A0)
#define CLASS_2_D38A5848A793D38F_METHOD_2_6B1930E1B382906A_OFFSET UNITYSDK_OFFSET(0x19A02490)
#define CLASS_2_D38A5848A793D38F_METHOD_2_6D83A9CECE1AAD66_OFFSET UNITYSDK_OFFSET(0x199F8FC0)
#define CLASS_2_D38A5848A793D38F_METHOD_2_72987F735DC96B02_OFFSET UNITYSDK_OFFSET(0x199FD430)
#define CLASS_2_D38A5848A793D38F_METHOD_2_7B2415EF3B4401A0_OFFSET UNITYSDK_OFFSET(0x199FC960)
#define CLASS_2_D38A5848A793D38F_METHOD_2_83C0B11B8C3976F8_OFFSET UNITYSDK_OFFSET(0x199FFD90)
#define CLASS_2_D38A5848A793D38F_METHOD_2_905B2DEB08E997C5_OFFSET UNITYSDK_OFFSET(0x199FC420)
#define CLASS_2_D38A5848A793D38F_METHOD_2_92E07EF7AC627659_OFFSET UNITYSDK_OFFSET(0x19A02120)
#define CLASS_2_D38A5848A793D38F_METHOD_2_99EACDE0A0BA6D44_OFFSET UNITYSDK_OFFSET(0x19A01DB0)
#define CLASS_2_D38A5848A793D38F_METHOD_2_9A62B748CAFE062A_OFFSET UNITYSDK_OFFSET(0x199FEB30)
#define CLASS_2_D38A5848A793D38F_METHOD_2_A871253BFD471C99_1_OFFSET UNITYSDK_OFFSET(0x199FDD30)
#define CLASS_2_D38A5848A793D38F_METHOD_2_A871253BFD471C99_OFFSET UNITYSDK_OFFSET(0x199FDC40)
#define CLASS_2_D38A5848A793D38F_METHOD_2_A8B147B1CEEA0561_OFFSET UNITYSDK_OFFSET(0x19A00450)
#define CLASS_2_D38A5848A793D38F_METHOD_2_AD5E4ECAE2B6CA00_OFFSET UNITYSDK_OFFSET(0x199FC650)
#define CLASS_2_D38A5848A793D38F_METHOD_2_AEA49496C256D00F_OFFSET UNITYSDK_OFFSET(0x19A01EC0)
#define CLASS_2_D38A5848A793D38F_METHOD_2_AF088DD8936FBFFF_OFFSET UNITYSDK_OFFSET(0x199FCB80)
#define CLASS_2_D38A5848A793D38F_METHOD_2_AF88E1009F3A415B_OFFSET UNITYSDK_OFFSET(0x19A00B80)
#define CLASS_2_D38A5848A793D38F_METHOD_2_BB383A72088457E7_OFFSET UNITYSDK_OFFSET(0x199F8A60)
#define CLASS_2_D38A5848A793D38F_METHOD_2_BD52CAD6B019A93F_OFFSET UNITYSDK_OFFSET(0x199F9190)
#define CLASS_2_D38A5848A793D38F_METHOD_2_BDD79B65A8FD0174_OFFSET UNITYSDK_OFFSET(0x19A022D0)
#define CLASS_2_D38A5848A793D38F_METHOD_2_C4EFD31239F98A71_OFFSET UNITYSDK_OFFSET(0x199FCCE0)
#define CLASS_2_D38A5848A793D38F_METHOD_2_CA520EBCD834DA6F_OFFSET UNITYSDK_OFFSET(0x199FE1A0)
#define CLASS_2_D38A5848A793D38F_METHOD_2_CEE72EAC18ECC163_OFFSET UNITYSDK_OFFSET(0x199FD7F0)
#define CLASS_2_D38A5848A793D38F_METHOD_2_D755B8CE36940DF5_OFFSET UNITYSDK_OFFSET(0x199FDBB0)
#define CLASS_2_D38A5848A793D38F_METHOD_2_DDA8A2337932DF10_OFFSET UNITYSDK_OFFSET(0x199F86F0)
#define CLASS_2_D38A5848A793D38F_METHOD_2_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x199F72C0)
#define CLASS_2_D38A5848A793D38F_METHOD_2_ECEDD5BC2C1DAEA0_OFFSET UNITYSDK_OFFSET(0x199FF090)
#define CLASS_2_D38A5848A793D38F_METHOD_2_ED319F57A4262D59_OFFSET UNITYSDK_OFFSET(0x199FD2D0)
#define CLASS_2_D38A5848A793D38F_METHOD_2_F459DCF547E403D6_OFFSET UNITYSDK_OFFSET(0x19A00EA0)
#define CLASS_2_D38A5848A793D38F_METHOD_2_F4B543CA35778A4F_OFFSET UNITYSDK_OFFSET(0x199FBE50)
#define CLASS_2_D38A5848A793D38F_METHOD_2_F6B35431614CF1CB_OFFSET UNITYSDK_OFFSET(0x199F8E30)
#define CLASS_2_D38A5848A793D38F_METHOD_2_FC3098C82FA8FE63_OFFSET UNITYSDK_OFFSET(0x199FCB30)
#define CLASS_2_D38A5848A793D38F_METHOD_2_FCE3AD2C800BE87A_OFFSET UNITYSDK_OFFSET(0x19A01130)
#define CLASS_2_D38A5848A793D38F__CCTOR_OFFSET UNITYSDK_OFFSET(0x19A02600)
#define CLASS_2_D38A5848A793D38F__CTOR_OFFSET UNITYSDK_OFFSET(0x199F66D0)
#define CLASS_2_D38A5848A793D38F__GETMONOVIEW_OFFSET UNITYSDK_OFFSET(0x199F8800)
#define CLASS_2_D38A5848A793D38F__ONRELEASEVIEW_OFFSET UNITYSDK_OFFSET(0x199F7DD0)

inline static constexpr unsigned int Class_2_D38A5848A793D38F_TypeDefinitionIndex = 76245;

class Class_2_D38A5848A793D38F : public ::RPG::Client::LittleGame::SimpleViewService_1<::Class_2_B8E38BF47138A2E5*>
{
public:
	static ::System::Collections::Generic::List_1<::Class_2_B8E38BF47138A2E5*>** StaticGet_CCDPKLNHOOE()
	{
		return (::System::Collections::Generic::List_1<::Class_2_B8E38BF47138A2E5*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D38A5848A793D38F_TypeDefinitionIndex)->GetStaticField(0x65230);
	}
	static ::RPG::Client::RPGProfilerMarkerWithIntData** StaticGet_DMEEFCFNNOA()
	{
		return (::RPG::Client::RPGProfilerMarkerWithIntData**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D38A5848A793D38F_TypeDefinitionIndex)->GetStaticField(0x65238);
	}
	static ::System::Int32* StaticGet_FIANHKJMJIH()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D38A5848A793D38F_TypeDefinitionIndex)->GetStaticField(0x14EC0);
	}
	// static const ::System::Int32 JNHHAALGGKF = 0x200; // 0x0
	::Class_2_D38A5848A793D38F_Class_1_7CA9FA43FA484177* IKDOGGNFCAJ; // 0x30
	::Class_2_D38A5848A793D38F_Class_1_55262A0607A71E6F* ELPALAMOMLO; // 0x38
	::Class_2_31D39E0B0ADFB12E* JAJOGJKHAJP; // 0x40
	::Class_3_912CC478F2B21832* CPDGCCILALB; // 0x48
	::System::Collections::Generic::Dictionary_2<::FiveDimRenderingPanelRuntime*, ::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Quaternion>>* BDABLFEIJJJ; // 0x50
	::Class_2_D38A5848A793D38F_Class_1_BBB4552724B54098* OKAIJPIGGAO; // 0x58
	::Class_1_2CDF619C23140440* FKINCGODJEP; // 0x60
	::Class_2_D38A5848A793D38F_Class_1_CBEAE0802531F3EF* MAALOPPHIGC; // 0x68
	::System::Collections::Generic::HashSet_1<::FiveDimRenderingPanelRuntime*>* PPAEODALOGI; // 0x70
	::System::Collections::Generic::HashSet_1<::Class_2_B8E38BF47138A2E5*>* LLPCMIOGDJF; // 0x78
	::System::Int32 JGDGCEDPFPH; // 0x80
	::System::Boolean AKEGHKKGMPL; // 0x84
	::System::Boolean MFEOGBAHJNF; // 0x85

	::System::Void _ctor(::Class_3_912CC478F2B21832* a1, ::Class_1_2CDF619C23140440* a2, ::Class_2_31D39E0B0ADFB12E* a3, ::UnityEngine::Transform* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_912CC478F2B21832*, ::Class_1_2CDF619C23140440*, ::Class_2_31D39E0B0ADFB12E*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F_DISPOSE_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::FiveDimRenderingPanelRuntime*, ::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Quaternion>>* Method_2_1392F93CBBAA8B7E()
	{
		return ((::System::Collections::Generic::Dictionary_2<::FiveDimRenderingPanelRuntime*, ::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Quaternion>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F_METHOD_2_1392F93CBBAA8B7E_OFFSET))(this);
	}

	::System::Void Method_2_289F28027FF47717()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F_METHOD_2_289F28027FF47717_OFFSET))(this);
	}

	::System::Void _OnReleaseView(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F__ONRELEASEVIEW_OFFSET))(this, a1);
	}

	::System::Void _GetMonoView(::Class_2_B8E38BF47138A2E5* a1, ::System::String* a2, ::UnityEngine::GameObject* a3, ::Class_0_16E4307DCC419505_111*& a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::System::String*, ::UnityEngine::GameObject*, ::Class_0_16E4307DCC419505_111*&))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F__GETMONOVIEW_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_2_B8E38BF47138A2E5* Method_2_BB383A72088457E7(::Class_2_B8E38BF47138A2E5* a1, ::RPG::GameCore::LittleGameEntityConfig* a2)
	{
		return ((::Class_2_B8E38BF47138A2E5*(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F_METHOD_2_BB383A72088457E7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F6B35431614CF1CB(::Class_2_B8E38BF47138A2E5* a1, ::RPG::GameCore::FiveDimBaseCameraConfig* a2, ::RPG::GameCore::FiveDimCameraPriority a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::RPG::GameCore::FiveDimBaseCameraConfig*, ::RPG::GameCore::FiveDimCameraPriority))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F_METHOD_2_F6B35431614CF1CB_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_6D83A9CECE1AAD66(::RPG::GameCore::FiveDimBaseCameraConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimBaseCameraConfig*))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F_METHOD_2_6D83A9CECE1AAD66_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* Method_2_201211AFA67A7D13(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F_METHOD_2_201211AFA67A7D13_OFFSET))(this, a1);
	}

	::System::Void Method_2_BD52CAD6B019A93F(::Class_2_B8E38BF47138A2E5* a1, ::RPG::GameCore::LittleGameEntityConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F_METHOD_2_BD52CAD6B019A93F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_905B2DEB08E997C5(::Class_2_B8E38BF47138A2E5* a1, ::RPG::GameCore::FourRotateVoxelFinishPointConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::RPG::GameCore::FourRotateVoxelFinishPointConfig*))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F_METHOD_2_905B2DEB08E997C5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2027AC45A69D718B(::FiveDimRenderingPanelRuntime* a1, ::Class_2_B8E38BF47138A2E5* a2, ::UnityEngine::GameObject* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::FiveDimRenderingPanelRuntime*, ::Class_2_B8E38BF47138A2E5*, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F_METHOD_2_2027AC45A69D718B_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_F4B543CA35778A4F(::Class_2_B8E38BF47138A2E5* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F_METHOD_2_F4B543CA35778A4F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AD5E4ECAE2B6CA00(::Class_2_B8E38BF47138A2E5* a1, ::RPG::GameCore::FourRotateVoxelRevert2DVoxelConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::RPG::GameCore::FourRotateVoxelRevert2DVoxelConfig*))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F_METHOD_2_AD5E4ECAE2B6CA00_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DDA8A2337932DF10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F_METHOD_2_DDA8A2337932DF10_OFFSET))(this);
	}

	::System::Void Method_2_2368DFE07F28F7DA(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F_METHOD_2_2368DFE07F28F7DA_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_FC3098C82FA8FE63()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F_METHOD_2_FC3098C82FA8FE63_OFFSET))(this);
	}

	::System::Boolean Method_2_AF088DD8936FBFFF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F_METHOD_2_AF088DD8936FBFFF_OFFSET))(this);
	}

	::System::Void Method_2_C4EFD31239F98A71()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F_METHOD_2_C4EFD31239F98A71_OFFSET))(this);
	}

	::System::Void Method_2_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F_METHOD_2_2450CFC043E97F54_OFFSET))(this);
	}

	::System::Void Method_2_659B881A8763C779()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F_METHOD_2_659B881A8763C779_OFFSET))(this);
	}

	::System::Void Method_2_CEE72EAC18ECC163(::System::Boolean a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F_METHOD_2_CEE72EAC18ECC163_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_081E84DBAB5CA72B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F_METHOD_2_081E84DBAB5CA72B_OFFSET))(this);
	}

	::System::Void Method_2_D755B8CE36940DF5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F_METHOD_2_D755B8CE36940DF5_OFFSET))(this);
	}

	::System::Boolean Method_2_A871253BFD471C99()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F_METHOD_2_A871253BFD471C99_OFFSET))(this);
	}

	::System::Boolean Method_2_A871253BFD471C99_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F_METHOD_2_A871253BFD471C99_1_OFFSET))(this);
	}

	::System::Void Method_2_ED319F57A4262D59(::System::Int32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F_METHOD_2_ED319F57A4262D59_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F_METHOD_2_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Boolean Method_2_513F60E1612756A9(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F_METHOD_2_513F60E1612756A9_OFFSET))(this, a1);
	}

	::Class_2_D38A5848A793D38F_ShadowJobRunResult Method_2_72987F735DC96B02(::System::Int32 a1)
	{
		return ((::Class_2_D38A5848A793D38F_ShadowJobRunResult(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F_METHOD_2_72987F735DC96B02_OFFSET))(this, a1);
	}

	::Class_2_D38A5848A793D38F_ShadowJobRunResult Method_2_CA520EBCD834DA6F(::System::Int32 a1)
	{
		return ((::Class_2_D38A5848A793D38F_ShadowJobRunResult(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F_METHOD_2_CA520EBCD834DA6F_OFFSET))(this, a1);
	}

	::System::Void Method_2_9A62B748CAFE062A(::FiveDimRenderingItem* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::FiveDimRenderingItem*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F_METHOD_2_9A62B748CAFE062A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_ECEDD5BC2C1DAEA0(::FiveDimRenderingItem* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::FiveDimRenderingItem*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F_METHOD_2_ECEDD5BC2C1DAEA0_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_34659C288538AEDA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F_METHOD_2_34659C288538AEDA_OFFSET))(this);
	}

	::System::Void Method_2_1BD63EC50F3374F5(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F_METHOD_2_1BD63EC50F3374F5_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_373B0BCF2C69A2AC(::Class_2_D38A5848A793D38F_Class_1_132A9C759E078134* a1, ::System::Int32 a2, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_D38A5848A793D38F_Class_1_132A9C759E078134*, ::System::Int32, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord&))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F_METHOD_2_373B0BCF2C69A2AC_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_AF88E1009F3A415B(::Class_2_D38A5848A793D38F_Class_1_132A9C759E078134* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D38A5848A793D38F_Class_1_132A9C759E078134*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F_METHOD_2_AF88E1009F3A415B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_83C0B11B8C3976F8(::FiveDimRenderingItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F_METHOD_2_83C0B11B8C3976F8_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_7B2415EF3B4401A0()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F_METHOD_2_7B2415EF3B4401A0_OFFSET))(this);
	}

	::System::Void Method_2_3F9D02BB8E97A671(::FiveDimRenderingItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F_METHOD_2_3F9D02BB8E97A671_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_FCE3AD2C800BE87A(::Class_2_D38A5848A793D38F_Class_1_BB648BB3C855DD6B* a1, ::FiveDimRenderingItem* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_D38A5848A793D38F_Class_1_BB648BB3C855DD6B*, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F_METHOD_2_FCE3AD2C800BE87A_OFFSET))(this, a1, a2);
	}

	static ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView* Method_2_2BBDB9CC52AB9E15(::UnityEngine::Transform* a1)
	{
		return ((::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F_METHOD_2_2BBDB9CC52AB9E15_OFFSET))(a1);
	}

	::System::Int32 Method_2_3FEA4D0C613AEA1F(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F_METHOD_2_3FEA4D0C613AEA1F_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_06C00E90DDE55D30(::Class_2_B8E38BF47138A2E5* a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F_METHOD_2_06C00E90DDE55D30_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_A8B147B1CEEA0561(::FiveDimRenderingItem* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::FiveDimRenderingItem*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F_METHOD_2_A8B147B1CEEA0561_OFFSET))(this, a1, a2);
	}

	static ::System::Int32 Method_2_F459DCF547E403D6(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Int32(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F_METHOD_2_F459DCF547E403D6_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_2_99EACDE0A0BA6D44(::System::Single a1)
	{
		return ((::System::Int32(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F_METHOD_2_99EACDE0A0BA6D44_OFFSET))(a1);
	}

	static ::System::Void Method_2_AEA49496C256D00F(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F_METHOD_2_AEA49496C256D00F_OFFSET))(a1);
	}

	static ::System::Void Method_2_92E07EF7AC627659(::System::Int32 a1, ::FiveDimRenderingItem* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::System::Int32, ::FiveDimRenderingItem*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F_METHOD_2_92E07EF7AC627659_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_2_3779201892A01BB4(::Il2CppArray<::System::Single>* a1, ::FiveDimRenderingItem* a2)
	{
		return ((::System::Void(*)(::Il2CppArray<::System::Single>*, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F_METHOD_2_3779201892A01BB4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_2_BDD79B65A8FD0174(::System::Collections::Generic::List_1<::System::Single>* a1, ::FiveDimRenderingItem* a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Single>*, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F_METHOD_2_BDD79B65A8FD0174_OFFSET))(a1, a2);
	}

	::System::Void Method_2_6B1930E1B382906A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F_METHOD_2_6B1930E1B382906A_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* Method_2_4D71BCFB74C16073()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F_METHOD_2_4D71BCFB74C16073_OFFSET))(this);
	}
};
