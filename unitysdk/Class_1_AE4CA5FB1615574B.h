#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameViewCoord.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_2CDF619C23140440;
class Class_1_63D18ECF87218619_1;
class Class_2_1A8148841049062A;
class Class_2_31D39E0B0ADFB12E;
class Class_2_B8E38BF47138A2E5;
class Class_3_912CC478F2B21832;
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::GameCore { class FiveDimEffectItem; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_AE4CA5FB1615574B_METHOD_1_00F9AD31EF774CB8_OFFSET UNITYSDK_OFFSET(0x18538780)
#define CLASS_1_AE4CA5FB1615574B_METHOD_1_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x18536350)
#define CLASS_1_AE4CA5FB1615574B_METHOD_1_122A7832C7A030C8_OFFSET UNITYSDK_OFFSET(0x18539730)
#define CLASS_1_AE4CA5FB1615574B_METHOD_1_17803874CE6A0BA4_OFFSET UNITYSDK_OFFSET(0x18536A30)
#define CLASS_1_AE4CA5FB1615574B_METHOD_1_184E0E15804E96C6_OFFSET UNITYSDK_OFFSET(0x18537740)
#define CLASS_1_AE4CA5FB1615574B_METHOD_1_1D3856CC3807A580_OFFSET UNITYSDK_OFFSET(0x1853BF20)
#define CLASS_1_AE4CA5FB1615574B_METHOD_1_1E5D842A629207ED_OFFSET UNITYSDK_OFFSET(0x18538ED0)
#define CLASS_1_AE4CA5FB1615574B_METHOD_1_256B6E165124982E_OFFSET UNITYSDK_OFFSET(0x18536E90)
#define CLASS_1_AE4CA5FB1615574B_METHOD_1_2C26A86A4213D4A1_OFFSET UNITYSDK_OFFSET(0x1853C7E0)
#define CLASS_1_AE4CA5FB1615574B_METHOD_1_2DFA5D0A2288CB8D_OFFSET UNITYSDK_OFFSET(0x18539180)
#define CLASS_1_AE4CA5FB1615574B_METHOD_1_32E7085136825B9D_OFFSET UNITYSDK_OFFSET(0x1853A9F0)
#define CLASS_1_AE4CA5FB1615574B_METHOD_1_3C76EF454D2B9456_OFFSET UNITYSDK_OFFSET(0x18536F00)
#define CLASS_1_AE4CA5FB1615574B_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x185362C0)
#define CLASS_1_AE4CA5FB1615574B_METHOD_1_43B93E1B9E5AA1CA_OFFSET UNITYSDK_OFFSET(0x1853E450)
#define CLASS_1_AE4CA5FB1615574B_METHOD_1_49CDC576190EE2D8_OFFSET UNITYSDK_OFFSET(0x18537F10)
#define CLASS_1_AE4CA5FB1615574B_METHOD_1_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x18536CF0)
#define CLASS_1_AE4CA5FB1615574B_METHOD_1_589340AD82337F8E_OFFSET UNITYSDK_OFFSET(0x18536B20)
#define CLASS_1_AE4CA5FB1615574B_METHOD_1_5B82E64C5FC8B398_OFFSET UNITYSDK_OFFSET(0x1853DD20)
#define CLASS_1_AE4CA5FB1615574B_METHOD_1_5C03A30A83CE9547_OFFSET UNITYSDK_OFFSET(0x18539850)
#define CLASS_1_AE4CA5FB1615574B_METHOD_1_602564279411879E_OFFSET UNITYSDK_OFFSET(0x1853CB00)
#define CLASS_1_AE4CA5FB1615574B_METHOD_1_6060D7FF2C469E9A_OFFSET UNITYSDK_OFFSET(0x1853D790)
#define CLASS_1_AE4CA5FB1615574B_METHOD_1_65CA5E68995B45C7_OFFSET UNITYSDK_OFFSET(0x1853BCC0)
#define CLASS_1_AE4CA5FB1615574B_METHOD_1_695154087A3D19C6_OFFSET UNITYSDK_OFFSET(0x1853CE70)
#define CLASS_1_AE4CA5FB1615574B_METHOD_1_7D71717700E12EEB_OFFSET UNITYSDK_OFFSET(0x18538060)
#define CLASS_1_AE4CA5FB1615574B_METHOD_1_81F1D0F2EF121C82_OFFSET UNITYSDK_OFFSET(0x1853D340)
#define CLASS_1_AE4CA5FB1615574B_METHOD_1_84FB5B8C61B5A164_OFFSET UNITYSDK_OFFSET(0x1853BA50)
#define CLASS_1_AE4CA5FB1615574B_METHOD_1_89722C3AF775E8E3_OFFSET UNITYSDK_OFFSET(0x1853CA60)
#define CLASS_1_AE4CA5FB1615574B_METHOD_1_99539B24CF2ECE3E_OFFSET UNITYSDK_OFFSET(0x1853D020)
#define CLASS_1_AE4CA5FB1615574B_METHOD_1_9B2E710EB9D49BA6_OFFSET UNITYSDK_OFFSET(0x185364A0)
#define CLASS_1_AE4CA5FB1615574B_METHOD_1_A4A982D612C90D94_OFFSET UNITYSDK_OFFSET(0x1853DAA0)
#define CLASS_1_AE4CA5FB1615574B_METHOD_1_A7F299268469013A_OFFSET UNITYSDK_OFFSET(0x18536BA0)
#define CLASS_1_AE4CA5FB1615574B_METHOD_1_A9243AAD1AB45AA2_OFFSET UNITYSDK_OFFSET(0x1853C480)
#define CLASS_1_AE4CA5FB1615574B_METHOD_1_AB0D67FA9F333A53_OFFSET UNITYSDK_OFFSET(0x1853C210)
#define CLASS_1_AE4CA5FB1615574B_METHOD_1_B12DC1383CC9D4C7_OFFSET UNITYSDK_OFFSET(0x18538380)
#define CLASS_1_AE4CA5FB1615574B_METHOD_1_B72FBAAA72695F2F_OFFSET UNITYSDK_OFFSET(0x1853AFE0)
#define CLASS_1_AE4CA5FB1615574B_METHOD_1_B7F599F4C2D61B15_OFFSET UNITYSDK_OFFSET(0x1853A930)
#define CLASS_1_AE4CA5FB1615574B_METHOD_1_BA078C8B64958DBE_OFFSET UNITYSDK_OFFSET(0x18538F80)
#define CLASS_1_AE4CA5FB1615574B_METHOD_1_CBB9A9ECD2C042E5_OFFSET UNITYSDK_OFFSET(0x1853B0E0)
#define CLASS_1_AE4CA5FB1615574B_METHOD_1_D9A354A391D440E6_OFFSET UNITYSDK_OFFSET(0x1853E050)
#define CLASS_1_AE4CA5FB1615574B_METHOD_1_E4E17221B185A7EC_OFFSET UNITYSDK_OFFSET(0x185372B0)
#define CLASS_1_AE4CA5FB1615574B_METHOD_1_ED4C9E77FA4022C8_OFFSET UNITYSDK_OFFSET(0x18538AF0)
#define CLASS_1_AE4CA5FB1615574B_METHOD_1_EF69B4630C58B324_1_OFFSET UNITYSDK_OFFSET(0x18537970)
#define CLASS_1_AE4CA5FB1615574B_METHOD_1_EF69B4630C58B324_OFFSET UNITYSDK_OFFSET(0x18537370)
#define CLASS_1_AE4CA5FB1615574B__CCTOR_OFFSET UNITYSDK_OFFSET(0x1853F2C0)
#define CLASS_1_AE4CA5FB1615574B__CTOR_OFFSET UNITYSDK_OFFSET(0x18536140)

inline static constexpr unsigned int Class_1_AE4CA5FB1615574B_TypeDefinitionIndex = 76227;

class Class_1_AE4CA5FB1615574B : public ::System::Object
{
public:
	static ::RPG::Client::RPGProfilerMarker** StaticGet_NFODGIGNIEG()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AE4CA5FB1615574B_TypeDefinitionIndex)->GetStaticField(0x5B930);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_COLACBAFCJA()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AE4CA5FB1615574B_TypeDefinitionIndex)->GetStaticField(0x5B938);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_CFOPGAFNBLL()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AE4CA5FB1615574B_TypeDefinitionIndex)->GetStaticField(0x5B940);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_FCAJGEDIELJ()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AE4CA5FB1615574B_TypeDefinitionIndex)->GetStaticField(0x5B948);
	}
	::System::Collections::Generic::HashSet_1<::Class_2_1A8148841049062A*>* MNPANGCABID; // 0x10
	::Class_1_2CDF619C23140440* FKINCGODJEP; // 0x18
	::Class_2_31D39E0B0ADFB12E* JAJOGJKHAJP; // 0x20
	::System::Collections::Generic::Dictionary_2<::Class_2_B8E38BF47138A2E5*, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FiveDimEffectItem*, ::UnityEngine::GameObject*>*>* JIEMPCNPJPO; // 0x28
	::Class_3_912CC478F2B21832* PDENFEFCAGN; // 0x30
	::UnityEngine::Vector3 GJDGCLKCMEF; // 0x38
	::System::Boolean LBIJFMLOLEI; // 0x44
	::System::Boolean OONEEOCDCHL; // 0x45

	::System::Void _ctor(::Class_3_912CC478F2B21832* a1, ::Class_1_2CDF619C23140440* a2, ::Class_2_31D39E0B0ADFB12E* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_912CC478F2B21832*, ::Class_1_2CDF619C23140440*, ::Class_2_31D39E0B0ADFB12E*))((::PBYTE)hIl2Cpp + CLASS_1_AE4CA5FB1615574B__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AE4CA5FB1615574B__CCTOR_OFFSET))();
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE4CA5FB1615574B_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_9B2E710EB9D49BA6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE4CA5FB1615574B_METHOD_1_9B2E710EB9D49BA6_OFFSET))(this);
	}

	::System::Void Method_1_A7F299268469013A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AE4CA5FB1615574B_METHOD_1_A7F299268469013A_OFFSET))(this, a1);
	}

	::System::Void Method_1_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE4CA5FB1615574B_METHOD_1_0865E94460F11643_OFFSET))(this);
	}

	::System::Void Method_1_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE4CA5FB1615574B_METHOD_1_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Void Method_1_3C76EF454D2B9456(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_AE4CA5FB1615574B_METHOD_1_3C76EF454D2B9456_OFFSET))(this, a1);
	}

	::System::Void Method_1_589340AD82337F8E(::System::String* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_AE4CA5FB1615574B_METHOD_1_589340AD82337F8E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_256B6E165124982E(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_AE4CA5FB1615574B_METHOD_1_256B6E165124982E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_E4E17221B185A7EC(::UnityEngine::Vector3 a1, ::System::Int32 a2, ::System::Int32& a3, ::System::Collections::Generic::HashSet_1<::Class_2_1A8148841049062A*>* a4, ::Class_2_1A8148841049062A*& a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32, ::System::Int32&, ::System::Collections::Generic::HashSet_1<::Class_2_1A8148841049062A*>*, ::Class_2_1A8148841049062A*&))((::PBYTE)hIl2Cpp + CLASS_1_AE4CA5FB1615574B_METHOD_1_E4E17221B185A7EC_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_EF69B4630C58B324(::UnityEngine::Vector3 a1, ::System::Int32 a2, ::System::Int32& a3, ::System::Collections::Generic::HashSet_1<::Class_2_1A8148841049062A*>* a4, ::Class_2_1A8148841049062A*& a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32, ::System::Int32&, ::System::Collections::Generic::HashSet_1<::Class_2_1A8148841049062A*>*, ::Class_2_1A8148841049062A*&))((::PBYTE)hIl2Cpp + CLASS_1_AE4CA5FB1615574B_METHOD_1_EF69B4630C58B324_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_EF69B4630C58B324_1(::UnityEngine::Vector3 a1, ::System::Int32 a2, ::System::Int32& a3, ::System::Collections::Generic::HashSet_1<::Class_2_1A8148841049062A*>* a4, ::Class_2_1A8148841049062A*& a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32, ::System::Int32&, ::System::Collections::Generic::HashSet_1<::Class_2_1A8148841049062A*>*, ::Class_2_1A8148841049062A*&))((::PBYTE)hIl2Cpp + CLASS_1_AE4CA5FB1615574B_METHOD_1_EF69B4630C58B324_1_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_184E0E15804E96C6(::System::Boolean& a1, ::System::Collections::Generic::HashSet_1<::Class_2_1A8148841049062A*>* a2, ::Class_2_1A8148841049062A*& a3, ::UnityEngine::Vector3 a4, ::System::Int32 a5, ::UnityEngine::Vector3 a6, ::System::Boolean a7, ::System::Boolean a8)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean&, ::System::Collections::Generic::HashSet_1<::Class_2_1A8148841049062A*>*, ::Class_2_1A8148841049062A*&, ::UnityEngine::Vector3, ::System::Int32, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AE4CA5FB1615574B_METHOD_1_184E0E15804E96C6_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::Class_2_1A8148841049062A* Method_1_49CDC576190EE2D8(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Int32 a3, ::System::Boolean a4)
	{
		return ((::Class_2_1A8148841049062A*(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AE4CA5FB1615574B_METHOD_1_49CDC576190EE2D8_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::Vector3 Method_1_7D71717700E12EEB(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::Class_2_1A8148841049062A* a4, ::System::Boolean a5)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::Class_2_1A8148841049062A*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AE4CA5FB1615574B_METHOD_1_7D71717700E12EEB_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::UnityEngine::Vector3 Method_1_B12DC1383CC9D4C7(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a4, ::System::Boolean a5)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AE4CA5FB1615574B_METHOD_1_B12DC1383CC9D4C7_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::UnityEngine::Vector3 Method_1_00F9AD31EF774CB8(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::Class_2_1A8148841049062A* a4)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::Class_2_1A8148841049062A*))((::PBYTE)hIl2Cpp + CLASS_1_AE4CA5FB1615574B_METHOD_1_00F9AD31EF774CB8_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::Vector3 Method_1_ED4C9E77FA4022C8(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a4)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + CLASS_1_AE4CA5FB1615574B_METHOD_1_ED4C9E77FA4022C8_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_1E5D842A629207ED(::Class_2_1A8148841049062A* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_1A8148841049062A*))((::PBYTE)hIl2Cpp + CLASS_1_AE4CA5FB1615574B_METHOD_1_1E5D842A629207ED_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_BA078C8B64958DBE(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + CLASS_1_AE4CA5FB1615574B_METHOD_1_BA078C8B64958DBE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_2DFA5D0A2288CB8D(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord& a1, ::UnityEngine::Vector3 a2, ::System::Int32 a3, ::System::Boolean a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord&, ::UnityEngine::Vector3, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AE4CA5FB1615574B_METHOD_1_2DFA5D0A2288CB8D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_122A7832C7A030C8(::UnityEngine::Vector3 a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a2, ::UnityEngine::Vector3& a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Int32 a6, ::System::Int32 a7)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::UnityEngine::Vector3&, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AE4CA5FB1615574B_METHOD_1_122A7832C7A030C8_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_1_5C03A30A83CE9547(::UnityEngine::Vector3 a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a2, ::UnityEngine::Vector3& a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Int32 a6, ::System::Int32 a7)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::UnityEngine::Vector3&, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AE4CA5FB1615574B_METHOD_1_5C03A30A83CE9547_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_1_B7F599F4C2D61B15(::UnityEngine::Vector3 a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_AE4CA5FB1615574B_METHOD_1_B7F599F4C2D61B15_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_32E7085136825B9D(::UnityEngine::Vector3 a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_AE4CA5FB1615574B_METHOD_1_32E7085136825B9D_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_B72FBAAA72695F2F(::UnityEngine::Vector3 a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_AE4CA5FB1615574B_METHOD_1_B72FBAAA72695F2F_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_CBB9A9ECD2C042E5(::UnityEngine::Vector3 a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_AE4CA5FB1615574B_METHOD_1_CBB9A9ECD2C042E5_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::Vector3 Method_1_17803874CE6A0BA4(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1, ::UnityEngine::Vector3 a2, ::System::Boolean a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AE4CA5FB1615574B_METHOD_1_17803874CE6A0BA4_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector3 Method_1_84FB5B8C61B5A164(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Boolean a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AE4CA5FB1615574B_METHOD_1_84FB5B8C61B5A164_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_65CA5E68995B45C7(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_1_AE4CA5FB1615574B_METHOD_1_65CA5E68995B45C7_OFFSET))(this, a1);
	}

	::System::Void Method_1_1D3856CC3807A580(::Class_2_B8E38BF47138A2E5* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AE4CA5FB1615574B_METHOD_1_1D3856CC3807A580_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_AB0D67FA9F333A53(::Class_2_B8E38BF47138A2E5* a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AE4CA5FB1615574B_METHOD_1_AB0D67FA9F333A53_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_89722C3AF775E8E3(::Class_2_B8E38BF47138A2E5* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::RPG::Client::LittleGame::Move::MoveState a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + CLASS_1_AE4CA5FB1615574B_METHOD_1_89722C3AF775E8E3_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_A9243AAD1AB45AA2(::Class_2_B8E38BF47138A2E5* a1, ::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* a2, ::System::Boolean a3, ::System::Action* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>*, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_AE4CA5FB1615574B_METHOD_1_A9243AAD1AB45AA2_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_2C26A86A4213D4A1(::Class_2_B8E38BF47138A2E5* a1, ::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AE4CA5FB1615574B_METHOD_1_2C26A86A4213D4A1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_695154087A3D19C6(::Class_2_B8E38BF47138A2E5* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AE4CA5FB1615574B_METHOD_1_695154087A3D19C6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_99539B24CF2ECE3E(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_1_AE4CA5FB1615574B_METHOD_1_99539B24CF2ECE3E_OFFSET))(this, a1);
	}

	::System::Void Method_1_6060D7FF2C469E9A(::Class_2_B8E38BF47138A2E5* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AE4CA5FB1615574B_METHOD_1_6060D7FF2C469E9A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A4A982D612C90D94(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_1_AE4CA5FB1615574B_METHOD_1_A4A982D612C90D94_OFFSET))(this, a1);
	}

	::System::Void Method_1_D9A354A391D440E6(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_1_AE4CA5FB1615574B_METHOD_1_D9A354A391D440E6_OFFSET))(this, a1);
	}

	::System::Void Method_1_81F1D0F2EF121C82(::Class_2_B8E38BF47138A2E5* a1, ::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* a2, ::System::String* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AE4CA5FB1615574B_METHOD_1_81F1D0F2EF121C82_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_602564279411879E(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_1_AE4CA5FB1615574B_METHOD_1_602564279411879E_OFFSET))(this, a1);
	}

	::System::Void Method_1_5B82E64C5FC8B398(::Class_2_B8E38BF47138A2E5* a1, ::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_AE4CA5FB1615574B_METHOD_1_5B82E64C5FC8B398_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_43B93E1B9E5AA1CA(::Class_2_B8E38BF47138A2E5* a1, ::Class_1_63D18ECF87218619_1* a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::Class_1_63D18ECF87218619_1*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AE4CA5FB1615574B_METHOD_1_43B93E1B9E5AA1CA_OFFSET))(this, a1, a2, a3, a4);
	}
};
