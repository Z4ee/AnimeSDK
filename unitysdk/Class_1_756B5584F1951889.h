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
class Class_3_D6E9A038FA23103A;
namespace RPG::GameCore { class FiveDimEffectItem; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_756B5584F1951889_METHOD_1_00F9AD31EF774CB8_OFFSET UNITYSDK_OFFSET(0x142E62A0)
#define CLASS_1_756B5584F1951889_METHOD_1_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x142E4300)
#define CLASS_1_756B5584F1951889_METHOD_1_132A2FBBBB8FD3A3_OFFSET UNITYSDK_OFFSET(0x142E9430)
#define CLASS_1_756B5584F1951889_METHOD_1_17803874CE6A0BA4_OFFSET UNITYSDK_OFFSET(0x142E48E0)
#define CLASS_1_756B5584F1951889_METHOD_1_184E0E15804E96C6_OFFSET UNITYSDK_OFFSET(0x142E5260)
#define CLASS_1_756B5584F1951889_METHOD_1_256B6E165124982E_OFFSET UNITYSDK_OFFSET(0x142E4CA0)
#define CLASS_1_756B5584F1951889_METHOD_1_2C26A86A4213D4A1_OFFSET UNITYSDK_OFFSET(0x142E8C50)
#define CLASS_1_756B5584F1951889_METHOD_1_3A1BC9FEAE4C080B_OFFSET UNITYSDK_OFFSET(0x142E4D10)
#define CLASS_1_756B5584F1951889_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x142E4270)
#define CLASS_1_756B5584F1951889_METHOD_1_43B93E1B9E5AA1CA_OFFSET UNITYSDK_OFFSET(0x142EA6E0)
#define CLASS_1_756B5584F1951889_METHOD_1_49CDC576190EE2D8_OFFSET UNITYSDK_OFFSET(0x142E5A30)
#define CLASS_1_756B5584F1951889_METHOD_1_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x142E4B20)
#define CLASS_1_756B5584F1951889_METHOD_1_52AB000CDD447745_OFFSET UNITYSDK_OFFSET(0x142E9B10)
#define CLASS_1_756B5584F1951889_METHOD_1_587D790497AD1F3B_OFFSET UNITYSDK_OFFSET(0x142E7960)
#define CLASS_1_756B5584F1951889_METHOD_1_5E78F8E417766494_OFFSET UNITYSDK_OFFSET(0x142E7570)
#define CLASS_1_756B5584F1951889_METHOD_1_65CA5E68995B45C7_OFFSET UNITYSDK_OFFSET(0x142E81E0)
#define CLASS_1_756B5584F1951889_METHOD_1_695154087A3D19C6_OFFSET UNITYSDK_OFFSET(0x142E9270)
#define CLASS_1_756B5584F1951889_METHOD_1_72A13B166388C8CD_OFFSET UNITYSDK_OFFSET(0x142E69F0)
#define CLASS_1_756B5584F1951889_METHOD_1_7D71717700E12EEB_OFFSET UNITYSDK_OFFSET(0x142E5B80)
#define CLASS_1_756B5584F1951889_METHOD_1_7EAA8879197594BA_OFFSET UNITYSDK_OFFSET(0x142E4450)
#define CLASS_1_756B5584F1951889_METHOD_1_84FB5B8C61B5A164_OFFSET UNITYSDK_OFFSET(0x142E7F70)
#define CLASS_1_756B5584F1951889_METHOD_1_8549F6C6BAA054C1_OFFSET UNITYSDK_OFFSET(0x142E9FD0)
#define CLASS_1_756B5584F1951889_METHOD_1_89722C3AF775E8E3_OFFSET UNITYSDK_OFFSET(0x142E8ED0)
#define CLASS_1_756B5584F1951889_METHOD_1_9A5A3DDD8033F2F1_OFFSET UNITYSDK_OFFSET(0x142E96E0)
#define CLASS_1_756B5584F1951889_METHOD_1_A7F299268469013A_OFFSET UNITYSDK_OFFSET(0x142E49D0)
#define CLASS_1_756B5584F1951889_METHOD_1_A9243AAD1AB45AA2_OFFSET UNITYSDK_OFFSET(0x142E88E0)
#define CLASS_1_756B5584F1951889_METHOD_1_AB0D67FA9F333A53_OFFSET UNITYSDK_OFFSET(0x142E8670)
#define CLASS_1_756B5584F1951889_METHOD_1_B12DC1383CC9D4C7_OFFSET UNITYSDK_OFFSET(0x142E5EA0)
#define CLASS_1_756B5584F1951889_METHOD_1_B94B952E2B4ACDC7_OFFSET UNITYSDK_OFFSET(0x142E9DB0)
#define CLASS_1_756B5584F1951889_METHOD_1_BC3F3C7372F5EBA9_OFFSET UNITYSDK_OFFSET(0x142E8F70)
#define CLASS_1_756B5584F1951889_METHOD_1_CF4725CA3BDF0EED_OFFSET UNITYSDK_OFFSET(0x142E83D0)
#define CLASS_1_756B5584F1951889_METHOD_1_D9A354A391D440E6_OFFSET UNITYSDK_OFFSET(0x142EA2E0)
#define CLASS_1_756B5584F1951889_METHOD_1_ED4C9E77FA4022C8_OFFSET UNITYSDK_OFFSET(0x142E6610)
#define CLASS_1_756B5584F1951889_METHOD_1_EF69B4630C58B324_1_OFFSET UNITYSDK_OFFSET(0x142E5490)
#define CLASS_1_756B5584F1951889_METHOD_1_EF69B4630C58B324_OFFSET UNITYSDK_OFFSET(0x142E4E90)
#define CLASS_1_756B5584F1951889__CTOR_OFFSET UNITYSDK_OFFSET(0x142E41A0)

inline static constexpr unsigned int Class_1_756B5584F1951889_TypeDefinitionIndex = 71265;

class Class_1_756B5584F1951889 : public ::System::Object
{
public:
	::Class_1_2CDF619C23140440* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::Class_2_B8E38BF47138A2E5*, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FiveDimEffectItem*, ::UnityEngine::GameObject*>*>* Field_1_1; // 0x18
	::Class_2_31D39E0B0ADFB12E* Field_1_2; // 0x20
	::Class_3_D6E9A038FA23103A* Field_1_3; // 0x28
	::System::Boolean Field_1_4; // 0x30
	::System::Boolean Field_1_5; // 0x31
	::UnityEngine::Vector3 Field_1_6; // 0x34

	::System::Void _ctor(::Class_3_D6E9A038FA23103A* a1, ::Class_1_2CDF619C23140440* a2, ::Class_2_31D39E0B0ADFB12E* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D6E9A038FA23103A*, ::Class_1_2CDF619C23140440*, ::Class_2_31D39E0B0ADFB12E*))((::PBYTE)hIl2Cpp + CLASS_1_756B5584F1951889__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_756B5584F1951889_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_7EAA8879197594BA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_756B5584F1951889_METHOD_1_7EAA8879197594BA_OFFSET))(this);
	}

	::System::Void Method_1_A7F299268469013A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_756B5584F1951889_METHOD_1_A7F299268469013A_OFFSET))(this, a1);
	}

	::System::Void Method_1_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_756B5584F1951889_METHOD_1_0865E94460F11643_OFFSET))(this);
	}

	::System::Void Method_1_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_756B5584F1951889_METHOD_1_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_1_3A1BC9FEAE4C080B(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_756B5584F1951889_METHOD_1_3A1BC9FEAE4C080B_OFFSET))(this, a1);
	}

	::System::Void Method_1_256B6E165124982E(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_756B5584F1951889_METHOD_1_256B6E165124982E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_EF69B4630C58B324(::UnityEngine::Vector3 a1, ::System::Int32 a2, ::System::Int32& a3, ::System::Collections::Generic::HashSet_1<::Class_2_1A8148841049062A*>* a4, ::Class_2_1A8148841049062A*& a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32, ::System::Int32&, ::System::Collections::Generic::HashSet_1<::Class_2_1A8148841049062A*>*, ::Class_2_1A8148841049062A*&))((::PBYTE)hIl2Cpp + CLASS_1_756B5584F1951889_METHOD_1_EF69B4630C58B324_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_EF69B4630C58B324_1(::UnityEngine::Vector3 a1, ::System::Int32 a2, ::System::Int32& a3, ::System::Collections::Generic::HashSet_1<::Class_2_1A8148841049062A*>* a4, ::Class_2_1A8148841049062A*& a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32, ::System::Int32&, ::System::Collections::Generic::HashSet_1<::Class_2_1A8148841049062A*>*, ::Class_2_1A8148841049062A*&))((::PBYTE)hIl2Cpp + CLASS_1_756B5584F1951889_METHOD_1_EF69B4630C58B324_1_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_184E0E15804E96C6(::System::Boolean& a1, ::System::Collections::Generic::HashSet_1<::Class_2_1A8148841049062A*>* a2, ::Class_2_1A8148841049062A*& a3, ::UnityEngine::Vector3 a4, ::System::Int32 a5, ::UnityEngine::Vector3 a6, ::System::Boolean a7, ::System::Boolean a8)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean&, ::System::Collections::Generic::HashSet_1<::Class_2_1A8148841049062A*>*, ::Class_2_1A8148841049062A*&, ::UnityEngine::Vector3, ::System::Int32, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_756B5584F1951889_METHOD_1_184E0E15804E96C6_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::Class_2_1A8148841049062A* Method_1_49CDC576190EE2D8(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Int32 a3, ::System::Boolean a4)
	{
		return ((::Class_2_1A8148841049062A*(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_756B5584F1951889_METHOD_1_49CDC576190EE2D8_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::Vector3 Method_1_7D71717700E12EEB(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::Class_2_1A8148841049062A* a4, ::System::Boolean a5)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::Class_2_1A8148841049062A*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_756B5584F1951889_METHOD_1_7D71717700E12EEB_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::UnityEngine::Vector3 Method_1_B12DC1383CC9D4C7(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a4, ::System::Boolean a5)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_756B5584F1951889_METHOD_1_B12DC1383CC9D4C7_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::UnityEngine::Vector3 Method_1_00F9AD31EF774CB8(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::Class_2_1A8148841049062A* a4)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::Class_2_1A8148841049062A*))((::PBYTE)hIl2Cpp + CLASS_1_756B5584F1951889_METHOD_1_00F9AD31EF774CB8_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::Vector3 Method_1_ED4C9E77FA4022C8(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a4)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + CLASS_1_756B5584F1951889_METHOD_1_ED4C9E77FA4022C8_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_72A13B166388C8CD(::UnityEngine::Vector3 a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a2, ::UnityEngine::Vector3& a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Int32 a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::UnityEngine::Vector3&, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_756B5584F1951889_METHOD_1_72A13B166388C8CD_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_5E78F8E417766494(::UnityEngine::Vector3 a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_756B5584F1951889_METHOD_1_5E78F8E417766494_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_587D790497AD1F3B(::UnityEngine::Vector3 a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_756B5584F1951889_METHOD_1_587D790497AD1F3B_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::Vector3 Method_1_17803874CE6A0BA4(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1, ::UnityEngine::Vector3 a2, ::System::Boolean a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_756B5584F1951889_METHOD_1_17803874CE6A0BA4_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector3 Method_1_84FB5B8C61B5A164(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Boolean a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_756B5584F1951889_METHOD_1_84FB5B8C61B5A164_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_65CA5E68995B45C7(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_1_756B5584F1951889_METHOD_1_65CA5E68995B45C7_OFFSET))(this, a1);
	}

	::System::Void Method_1_CF4725CA3BDF0EED(::Class_2_B8E38BF47138A2E5* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_756B5584F1951889_METHOD_1_CF4725CA3BDF0EED_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_AB0D67FA9F333A53(::Class_2_B8E38BF47138A2E5* a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_756B5584F1951889_METHOD_1_AB0D67FA9F333A53_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_89722C3AF775E8E3(::Class_2_B8E38BF47138A2E5* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::RPG::Client::LittleGame::Move::MoveState a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + CLASS_1_756B5584F1951889_METHOD_1_89722C3AF775E8E3_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_A9243AAD1AB45AA2(::Class_2_B8E38BF47138A2E5* a1, ::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* a2, ::System::Boolean a3, ::System::Action* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>*, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_756B5584F1951889_METHOD_1_A9243AAD1AB45AA2_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_2C26A86A4213D4A1(::Class_2_B8E38BF47138A2E5* a1, ::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_756B5584F1951889_METHOD_1_2C26A86A4213D4A1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_695154087A3D19C6(::Class_2_B8E38BF47138A2E5* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_756B5584F1951889_METHOD_1_695154087A3D19C6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_132A2FBBBB8FD3A3(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_1_756B5584F1951889_METHOD_1_132A2FBBBB8FD3A3_OFFSET))(this, a1);
	}

	::System::Void Method_1_52AB000CDD447745(::Class_2_B8E38BF47138A2E5* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_756B5584F1951889_METHOD_1_52AB000CDD447745_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B94B952E2B4ACDC7(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_1_756B5584F1951889_METHOD_1_B94B952E2B4ACDC7_OFFSET))(this, a1);
	}

	::System::Void Method_1_D9A354A391D440E6(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_1_756B5584F1951889_METHOD_1_D9A354A391D440E6_OFFSET))(this, a1);
	}

	::System::Void Method_1_9A5A3DDD8033F2F1(::Class_2_B8E38BF47138A2E5* a1, ::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* a2, ::System::String* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_756B5584F1951889_METHOD_1_9A5A3DDD8033F2F1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_BC3F3C7372F5EBA9(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_1_756B5584F1951889_METHOD_1_BC3F3C7372F5EBA9_OFFSET))(this, a1);
	}

	::System::Void Method_1_8549F6C6BAA054C1(::Class_2_B8E38BF47138A2E5* a1, ::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_756B5584F1951889_METHOD_1_8549F6C6BAA054C1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_43B93E1B9E5AA1CA(::Class_2_B8E38BF47138A2E5* a1, ::Class_1_63D18ECF87218619_1* a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::Class_1_63D18ECF87218619_1*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_756B5584F1951889_METHOD_1_43B93E1B9E5AA1CA_OFFSET))(this, a1, a2, a3, a4);
	}
};
