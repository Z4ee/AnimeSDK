#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameViewCoord.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_2CDF619C23140440;
class Class_1_63D18ECF87218619_1;
class Class_2_2661F5CE5402F421;
class Class_2_566E5C710244EEC1;
class Class_2_56DCA1B58073717B;
class Class_3_001D9EA49F6215B6;
namespace RPG::GameCore { class FiveDimEffectItem; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_3DFC0F2307E2DD03_METHOD_1_132A2FBBBB8FD3A3_OFFSET UNITYSDK_OFFSET(0x16703180)
#define CLASS_1_3DFC0F2307E2DD03_METHOD_1_165CC9E1117D9692_OFFSET UNITYSDK_OFFSET(0x16703D10)
#define CLASS_1_3DFC0F2307E2DD03_METHOD_1_256B6E165124982E_OFFSET UNITYSDK_OFFSET(0x166FF070)
#define CLASS_1_3DFC0F2307E2DD03_METHOD_1_2C26A86A4213D4A1_OFFSET UNITYSDK_OFFSET(0x167029E0)
#define CLASS_1_3DFC0F2307E2DD03_METHOD_1_3A1BC9FEAE4C080B_OFFSET UNITYSDK_OFFSET(0x166FF0E0)
#define CLASS_1_3DFC0F2307E2DD03_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x166FE6A0)
#define CLASS_1_3DFC0F2307E2DD03_METHOD_1_43B93E1B9E5AA1CA_OFFSET UNITYSDK_OFFSET(0x167043F0)
#define CLASS_1_3DFC0F2307E2DD03_METHOD_1_49CDC576190EE2D8_OFFSET UNITYSDK_OFFSET(0x166FFDF0)
#define CLASS_1_3DFC0F2307E2DD03_METHOD_1_52AB000CDD447745_OFFSET UNITYSDK_OFFSET(0x16703850)
#define CLASS_1_3DFC0F2307E2DD03_METHOD_1_57764B7E9A700C56_OFFSET UNITYSDK_OFFSET(0x167026C0)
#define CLASS_1_3DFC0F2307E2DD03_METHOD_1_619275184946389C_OFFSET UNITYSDK_OFFSET(0x16702480)
#define CLASS_1_3DFC0F2307E2DD03_METHOD_1_624DBDF4A574FC7F_OFFSET UNITYSDK_OFFSET(0x16701DC0)
#define CLASS_1_3DFC0F2307E2DD03_METHOD_1_65CA5E68995B45C7_OFFSET UNITYSDK_OFFSET(0x16701FF0)
#define CLASS_1_3DFC0F2307E2DD03_METHOD_1_71FE591D1DC4C15F_OFFSET UNITYSDK_OFFSET(0x16700660)
#define CLASS_1_3DFC0F2307E2DD03_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x166FE730)
#define CLASS_1_3DFC0F2307E2DD03_METHOD_1_89722C3AF775E8E3_OFFSET UNITYSDK_OFFSET(0x16702C60)
#define CLASS_1_3DFC0F2307E2DD03_METHOD_1_9A5A3DDD8033F2F1_OFFSET UNITYSDK_OFFSET(0x16703430)
#define CLASS_1_3DFC0F2307E2DD03_METHOD_1_9B2E710EB9D49BA6_OFFSET UNITYSDK_OFFSET(0x166FE850)
#define CLASS_1_3DFC0F2307E2DD03_METHOD_1_A7F299268469013A_OFFSET UNITYSDK_OFFSET(0x166FEDC0)
#define CLASS_1_3DFC0F2307E2DD03_METHOD_1_B6C43FEF8326F6DD_OFFSET UNITYSDK_OFFSET(0x166FF640)
#define CLASS_1_3DFC0F2307E2DD03_METHOD_1_B93DC4FCE6C33C32_OFFSET UNITYSDK_OFFSET(0x166FFF40)
#define CLASS_1_3DFC0F2307E2DD03_METHOD_1_B94B952E2B4ACDC7_OFFSET UNITYSDK_OFFSET(0x16703AF0)
#define CLASS_1_3DFC0F2307E2DD03_METHOD_1_BBADCEDDBDDAB300_OFFSET UNITYSDK_OFFSET(0x16700240)
#define CLASS_1_3DFC0F2307E2DD03_METHOD_1_BC3F3C7372F5EBA9_OFFSET UNITYSDK_OFFSET(0x16702D00)
#define CLASS_1_3DFC0F2307E2DD03_METHOD_1_BC6FFE61161D4A74_OFFSET UNITYSDK_OFFSET(0x16701630)
#define CLASS_1_3DFC0F2307E2DD03_METHOD_1_C8F5879DBA0FD644_OFFSET UNITYSDK_OFFSET(0x16700D50)
#define CLASS_1_3DFC0F2307E2DD03_METHOD_1_CC2292A902095331_OFFSET UNITYSDK_OFFSET(0x16703000)
#define CLASS_1_3DFC0F2307E2DD03_METHOD_1_CF4725CA3BDF0EED_OFFSET UNITYSDK_OFFSET(0x167021E0)
#define CLASS_1_3DFC0F2307E2DD03_METHOD_1_D9A354A391D440E6_OFFSET UNITYSDK_OFFSET(0x16704000)
#define CLASS_1_3DFC0F2307E2DD03_METHOD_1_E582F01DE701EC92_OFFSET UNITYSDK_OFFSET(0x166FEC40)
#define CLASS_1_3DFC0F2307E2DD03_METHOD_1_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x166FEF10)
#define CLASS_1_3DFC0F2307E2DD03_METHOD_1_ED4C9E77FA4022C8_OFFSET UNITYSDK_OFFSET(0x16700990)
#define CLASS_1_3DFC0F2307E2DD03_METHOD_1_EF69B4630C58B324_1_OFFSET UNITYSDK_OFFSET(0x166FF850)
#define CLASS_1_3DFC0F2307E2DD03_METHOD_1_EF69B4630C58B324_OFFSET UNITYSDK_OFFSET(0x166FF260)
#define CLASS_1_3DFC0F2307E2DD03_METHOD_1_FAAB32933D808AE0_OFFSET UNITYSDK_OFFSET(0x167018E0)
#define CLASS_1_3DFC0F2307E2DD03__CTOR_OFFSET UNITYSDK_OFFSET(0x166FE5F0)

inline static constexpr unsigned int Class_1_3DFC0F2307E2DD03_TypeDefinitionIndex = 72787;

class Class_1_3DFC0F2307E2DD03 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::Class_2_56DCA1B58073717B*, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FiveDimEffectItem*, ::UnityEngine::GameObject*>*>* Field_1_0; // 0x10
	::Class_2_566E5C710244EEC1* Field_1_1; // 0x18
	::Class_3_001D9EA49F6215B6* Field_1_2; // 0x20
	::Class_1_2CDF619C23140440* Field_1_3; // 0x28
	::UnityEngine::Vector3 Field_1_4; // 0x30
	::System::Boolean Field_1_5; // 0x3C
	::System::Boolean Field_1_6; // 0x3D

	::System::Void _ctor(::Class_3_001D9EA49F6215B6* a1, ::Class_1_2CDF619C23140440* a2, ::Class_2_566E5C710244EEC1* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_001D9EA49F6215B6*, ::Class_1_2CDF619C23140440*, ::Class_2_566E5C710244EEC1*))((::PBYTE)hIl2Cpp + CLASS_1_3DFC0F2307E2DD03__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DFC0F2307E2DD03_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_9B2E710EB9D49BA6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DFC0F2307E2DD03_METHOD_1_9B2E710EB9D49BA6_OFFSET))(this);
	}

	::System::Void Method_1_A7F299268469013A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3DFC0F2307E2DD03_METHOD_1_A7F299268469013A_OFFSET))(this, a1);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DFC0F2307E2DD03_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Method_1_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DFC0F2307E2DD03_METHOD_1_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void Method_1_3A1BC9FEAE4C080B(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_3DFC0F2307E2DD03_METHOD_1_3A1BC9FEAE4C080B_OFFSET))(this, a1);
	}

	::System::Void Method_1_256B6E165124982E(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_3DFC0F2307E2DD03_METHOD_1_256B6E165124982E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_EF69B4630C58B324(::UnityEngine::Vector3 a1, ::System::Int32 a2, ::System::Int32& a3, ::System::Collections::Generic::HashSet_1<::Class_2_2661F5CE5402F421*>* a4, ::Class_2_2661F5CE5402F421*& a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32, ::System::Int32&, ::System::Collections::Generic::HashSet_1<::Class_2_2661F5CE5402F421*>*, ::Class_2_2661F5CE5402F421*&))((::PBYTE)hIl2Cpp + CLASS_1_3DFC0F2307E2DD03_METHOD_1_EF69B4630C58B324_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_EF69B4630C58B324_1(::UnityEngine::Vector3 a1, ::System::Int32 a2, ::System::Int32& a3, ::System::Collections::Generic::HashSet_1<::Class_2_2661F5CE5402F421*>* a4, ::Class_2_2661F5CE5402F421*& a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32, ::System::Int32&, ::System::Collections::Generic::HashSet_1<::Class_2_2661F5CE5402F421*>*, ::Class_2_2661F5CE5402F421*&))((::PBYTE)hIl2Cpp + CLASS_1_3DFC0F2307E2DD03_METHOD_1_EF69B4630C58B324_1_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_B6C43FEF8326F6DD(::System::Boolean& a1, ::System::Collections::Generic::HashSet_1<::Class_2_2661F5CE5402F421*>* a2, ::Class_2_2661F5CE5402F421*& a3, ::UnityEngine::Vector3 a4, ::System::Int32 a5, ::UnityEngine::Vector3 a6, ::System::Boolean a7, ::System::Boolean a8)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean&, ::System::Collections::Generic::HashSet_1<::Class_2_2661F5CE5402F421*>*, ::Class_2_2661F5CE5402F421*&, ::UnityEngine::Vector3, ::System::Int32, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3DFC0F2307E2DD03_METHOD_1_B6C43FEF8326F6DD_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::Class_2_2661F5CE5402F421* Method_1_49CDC576190EE2D8(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Int32 a3, ::System::Boolean a4)
	{
		return ((::Class_2_2661F5CE5402F421*(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3DFC0F2307E2DD03_METHOD_1_49CDC576190EE2D8_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::Vector3 Method_1_B93DC4FCE6C33C32(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::Class_2_2661F5CE5402F421* a4, ::System::Boolean a5)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::Class_2_2661F5CE5402F421*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3DFC0F2307E2DD03_METHOD_1_B93DC4FCE6C33C32_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::UnityEngine::Vector3 Method_1_BBADCEDDBDDAB300(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a4, ::System::Boolean a5)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3DFC0F2307E2DD03_METHOD_1_BBADCEDDBDDAB300_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::UnityEngine::Vector3 Method_1_71FE591D1DC4C15F(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::Class_2_2661F5CE5402F421* a4)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::Class_2_2661F5CE5402F421*))((::PBYTE)hIl2Cpp + CLASS_1_3DFC0F2307E2DD03_METHOD_1_71FE591D1DC4C15F_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::Vector3 Method_1_ED4C9E77FA4022C8(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a4)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + CLASS_1_3DFC0F2307E2DD03_METHOD_1_ED4C9E77FA4022C8_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_C8F5879DBA0FD644(::UnityEngine::Vector3 a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a2, ::UnityEngine::Vector3& a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Int32 a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::UnityEngine::Vector3&, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3DFC0F2307E2DD03_METHOD_1_C8F5879DBA0FD644_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_BC6FFE61161D4A74(::UnityEngine::Vector3 a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_3DFC0F2307E2DD03_METHOD_1_BC6FFE61161D4A74_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_FAAB32933D808AE0(::UnityEngine::Vector3 a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_3DFC0F2307E2DD03_METHOD_1_FAAB32933D808AE0_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::Vector3 Method_1_E582F01DE701EC92(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1, ::UnityEngine::Vector3 a2, ::System::Boolean a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3DFC0F2307E2DD03_METHOD_1_E582F01DE701EC92_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector3 Method_1_624DBDF4A574FC7F(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Boolean a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3DFC0F2307E2DD03_METHOD_1_624DBDF4A574FC7F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_65CA5E68995B45C7(::Class_2_56DCA1B58073717B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*))((::PBYTE)hIl2Cpp + CLASS_1_3DFC0F2307E2DD03_METHOD_1_65CA5E68995B45C7_OFFSET))(this, a1);
	}

	::System::Void Method_1_CF4725CA3BDF0EED(::Class_2_56DCA1B58073717B* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3DFC0F2307E2DD03_METHOD_1_CF4725CA3BDF0EED_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_619275184946389C(::Class_2_56DCA1B58073717B* a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3DFC0F2307E2DD03_METHOD_1_619275184946389C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_89722C3AF775E8E3(::Class_2_56DCA1B58073717B* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::RPG::Client::LittleGame::Move::MoveState a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + CLASS_1_3DFC0F2307E2DD03_METHOD_1_89722C3AF775E8E3_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_57764B7E9A700C56(::Class_2_56DCA1B58073717B* a1, ::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* a2, ::System::Boolean a3, ::System::Action* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*, ::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>*, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_3DFC0F2307E2DD03_METHOD_1_57764B7E9A700C56_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_2C26A86A4213D4A1(::Class_2_56DCA1B58073717B* a1, ::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*, ::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3DFC0F2307E2DD03_METHOD_1_2C26A86A4213D4A1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_CC2292A902095331(::Class_2_56DCA1B58073717B* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3DFC0F2307E2DD03_METHOD_1_CC2292A902095331_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_132A2FBBBB8FD3A3(::Class_2_56DCA1B58073717B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*))((::PBYTE)hIl2Cpp + CLASS_1_3DFC0F2307E2DD03_METHOD_1_132A2FBBBB8FD3A3_OFFSET))(this, a1);
	}

	::System::Void Method_1_52AB000CDD447745(::Class_2_56DCA1B58073717B* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3DFC0F2307E2DD03_METHOD_1_52AB000CDD447745_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B94B952E2B4ACDC7(::Class_2_56DCA1B58073717B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*))((::PBYTE)hIl2Cpp + CLASS_1_3DFC0F2307E2DD03_METHOD_1_B94B952E2B4ACDC7_OFFSET))(this, a1);
	}

	::System::Void Method_1_D9A354A391D440E6(::Class_2_56DCA1B58073717B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*))((::PBYTE)hIl2Cpp + CLASS_1_3DFC0F2307E2DD03_METHOD_1_D9A354A391D440E6_OFFSET))(this, a1);
	}

	::System::Void Method_1_9A5A3DDD8033F2F1(::Class_2_56DCA1B58073717B* a1, ::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* a2, ::System::String* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*, ::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3DFC0F2307E2DD03_METHOD_1_9A5A3DDD8033F2F1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_BC3F3C7372F5EBA9(::Class_2_56DCA1B58073717B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*))((::PBYTE)hIl2Cpp + CLASS_1_3DFC0F2307E2DD03_METHOD_1_BC3F3C7372F5EBA9_OFFSET))(this, a1);
	}

	::System::Void Method_1_165CC9E1117D9692(::Class_2_56DCA1B58073717B* a1, ::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*, ::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3DFC0F2307E2DD03_METHOD_1_165CC9E1117D9692_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_43B93E1B9E5AA1CA(::Class_2_56DCA1B58073717B* a1, ::Class_1_63D18ECF87218619_1* a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*, ::Class_1_63D18ECF87218619_1*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3DFC0F2307E2DD03_METHOD_1_43B93E1B9E5AA1CA_OFFSET))(this, a1, a2, a3, a4);
	}
};
