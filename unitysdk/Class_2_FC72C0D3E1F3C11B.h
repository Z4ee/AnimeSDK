#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/OrbitAreaState.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_CA0A06DCFA703F36;
class Class_1_D27BF54F25500E5F;
class Class_1_E856DAA70D46D1F2;
class Class_3_71FA5F0CC77EA49D;
class Class_3_A149A6B784E8BE69;
class Class_3_CADEC115725602AC;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_2_FC72C0D3E1F3C11B_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAFA7D60)
#define CLASS_2_FC72C0D3E1F3C11B_GET_ANIMMOTIONDELTA_OFFSET UNITYSDK_OFFSET(0xAFA9280)
#define CLASS_2_FC72C0D3E1F3C11B_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xAFA79E0)
#define CLASS_2_FC72C0D3E1F3C11B_METHOD_2_068E873219CBBD31_OFFSET UNITYSDK_OFFSET(0xAFA7A50)
#define CLASS_2_FC72C0D3E1F3C11B_METHOD_2_06CACEC01F21D60D_OFFSET UNITYSDK_OFFSET(0xAFA7ED0)
#define CLASS_2_FC72C0D3E1F3C11B_METHOD_2_2C6826E6663451CE_OFFSET UNITYSDK_OFFSET(0xAFA92B0)
#define CLASS_2_FC72C0D3E1F3C11B_METHOD_2_34D5F4DBE622AF88_OFFSET UNITYSDK_OFFSET(0xAFA72F0)
#define CLASS_2_FC72C0D3E1F3C11B_METHOD_2_90EC931103FB6F31_OFFSET UNITYSDK_OFFSET(0xAFA9350)
#define CLASS_2_FC72C0D3E1F3C11B_METHOD_2_9F5EFD520A4A7427_OFFSET UNITYSDK_OFFSET(0xAFA9210)
#define CLASS_2_FC72C0D3E1F3C11B_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xAFA7960)
#define CLASS_2_FC72C0D3E1F3C11B_METHOD_2_D51EA2E667E14074_OFFSET UNITYSDK_OFFSET(0xAFA8B20)
#define CLASS_2_FC72C0D3E1F3C11B_METHOD_2_EAFCF37287F5ED1C_OFFSET UNITYSDK_OFFSET(0xAFA8F40)
#define CLASS_2_FC72C0D3E1F3C11B_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xAFA72E0)
#define CLASS_2_FC72C0D3E1F3C11B_METHOD_2_F6C3D22EF930EB92_OFFSET UNITYSDK_OFFSET(0xAFA83D0)
#define CLASS_2_FC72C0D3E1F3C11B_SET_ANIMMOTIONDELTA_OFFSET UNITYSDK_OFFSET(0xAFA92A0)
#define CLASS_2_FC72C0D3E1F3C11B_TICK_OFFSET UNITYSDK_OFFSET(0xAFA7030)
#define CLASS_2_FC72C0D3E1F3C11B__CTOR_OFFSET UNITYSDK_OFFSET(0xAFA93B0)
#define CLASS_2_FC72C0D3E1F3C11B___IFIXBASEPROXY_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xAFA9540)
#define CLASS_2_FC72C0D3E1F3C11B___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xAFA9530)

inline static constexpr unsigned int Class_2_FC72C0D3E1F3C11B_TypeDefinitionIndex = 53851;

class Class_2_FC72C0D3E1F3C11B : public ::RPG::GameCore::GameComponentBase
{
public:
	::Class_1_E856DAA70D46D1F2* Field_2_0; // 0x18
	::System::String* Field_2_1; // 0x20
	::Class_1_D27BF54F25500E5F* Field_2_2; // 0x28
	::RPG::GameCore::GameEntity* Field_2_3; // 0x30
	::System::String* Field_2_4; // 0x38
	::Class_1_E856DAA70D46D1F2* Field_2_5; // 0x40
	::Class_1_CA0A06DCFA703F36* Field_2_6; // 0x48
	::UnityEngine::Vector3 Field_2_7; // 0x50
	::System::Int32 Field_2_8; // 0x5C
	::RPG::MVector3 _AnimMotionDelta_k__BackingField; // 0x60
	::System::Single Field_2_10; // 0x6C
	::UnityEngine::Vector3 Field_2_11; // 0x70
	::System::Int32 Field_2_12; // 0x7C
	::System::Single Field_2_13; // 0x80
	::RPG::GameCore::StringHash Field_2_14; // 0x84
	::System::Int32 Field_2_15; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC72C0D3E1F3C11B__CTOR_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FC72C0D3E1F3C11B_TICK_OFFSET))(this, a1);
	}

	::System::Void LateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FC72C0D3E1F3C11B_LATEUPDATE_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC72C0D3E1F3C11B_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_06CACEC01F21D60D(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::GameEntity* a3, ::Class_3_71FA5F0CC77EA49D* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GameEntity*, ::Class_3_71FA5F0CC77EA49D*))((::PBYTE)hIl2Cpp + CLASS_2_FC72C0D3E1F3C11B_METHOD_2_06CACEC01F21D60D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_F6C3D22EF930EB92(::RPG::GameCore::TaskContext* a1, ::Class_3_A149A6B784E8BE69* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_A149A6B784E8BE69*))((::PBYTE)hIl2Cpp + CLASS_2_FC72C0D3E1F3C11B_METHOD_2_F6C3D22EF930EB92_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D51EA2E667E14074(::RPG::GameCore::TaskContext* a1, ::Class_3_CADEC115725602AC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_CADEC115725602AC*))((::PBYTE)hIl2Cpp + CLASS_2_FC72C0D3E1F3C11B_METHOD_2_D51EA2E667E14074_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_EAFCF37287F5ED1C(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FC72C0D3E1F3C11B_METHOD_2_EAFCF37287F5ED1C_OFFSET))(this, a1);
	}

	::RPG::GameCore::OrbitAreaState Method_2_9F5EFD520A4A7427()
	{
		return ((::RPG::GameCore::OrbitAreaState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC72C0D3E1F3C11B_METHOD_2_9F5EFD520A4A7427_OFFSET))(this);
	}

	::RPG::MVector3 get_AnimMotionDelta()
	{
		return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC72C0D3E1F3C11B_GET_ANIMMOTIONDELTA_OFFSET))(this);
	}

	::System::Void set_AnimMotionDelta(::RPG::MVector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_2_FC72C0D3E1F3C11B_SET_ANIMMOTIONDELTA_OFFSET))(this, a1);
	}

	::RPG::MVector3 Method_2_2C6826E6663451CE(::RPG::MVector3 a1)
	{
		return ((::RPG::MVector3(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_2_FC72C0D3E1F3C11B_METHOD_2_2C6826E6663451CE_OFFSET))(this, a1);
	}

	::System::Void Method_2_34D5F4DBE622AF88(::Class_1_E856DAA70D46D1F2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E856DAA70D46D1F2*))((::PBYTE)hIl2Cpp + CLASS_2_FC72C0D3E1F3C11B_METHOD_2_34D5F4DBE622AF88_OFFSET))(this, a1);
	}

	::System::Void Method_2_068E873219CBBD31(::Class_1_E856DAA70D46D1F2* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E856DAA70D46D1F2*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FC72C0D3E1F3C11B_METHOD_2_068E873219CBBD31_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC72C0D3E1F3C11B_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC72C0D3E1F3C11B_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_2_90EC931103FB6F31()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC72C0D3E1F3C11B_METHOD_2_90EC931103FB6F31_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FC72C0D3E1F3C11B___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_LateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FC72C0D3E1F3C11B___IFIXBASEPROXY_LATEUPDATE_OFFSET))(this, a1);
	}
};
