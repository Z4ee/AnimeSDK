#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/OrbitAreaState.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_D27BF54F25500E5F;
class Class_1_D62C2C8EAA687B3C;
class Class_1_E856DAA70D46D1F2;
class Class_3_71FA5F0CC77EA49D;
class Class_3_A149A6B784E8BE69;
class Class_3_CADEC115725602AC;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_2_FC72C0D3E1F3C11B_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCB1E3A0)
#define CLASS_2_FC72C0D3E1F3C11B_GET_ANIMMOTIONDELTA_OFFSET UNITYSDK_OFFSET(0xCB1F0E0)
#define CLASS_2_FC72C0D3E1F3C11B_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xCB1E020)
#define CLASS_2_FC72C0D3E1F3C11B_METHOD_2_068E873219CBBD31_OFFSET UNITYSDK_OFFSET(0xCB1E090)
#define CLASS_2_FC72C0D3E1F3C11B_METHOD_2_06CACEC01F21D60D_OFFSET UNITYSDK_OFFSET(0xCB1E500)
#define CLASS_2_FC72C0D3E1F3C11B_METHOD_2_2C6826E6663451CE_OFFSET UNITYSDK_OFFSET(0xCB1F110)
#define CLASS_2_FC72C0D3E1F3C11B_METHOD_2_368884BBCA3D2697_OFFSET UNITYSDK_OFFSET(0xCB1D920)
#define CLASS_2_FC72C0D3E1F3C11B_METHOD_2_90EC931103FB6F31_OFFSET UNITYSDK_OFFSET(0xCB1F230)
#define CLASS_2_FC72C0D3E1F3C11B_METHOD_2_9F5EFD520A4A7427_OFFSET UNITYSDK_OFFSET(0xCB1F070)
#define CLASS_2_FC72C0D3E1F3C11B_METHOD_2_ACCAF16FF481A760_OFFSET UNITYSDK_OFFSET(0xCB1E9C0)
#define CLASS_2_FC72C0D3E1F3C11B_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xCB1DFA0)
#define CLASS_2_FC72C0D3E1F3C11B_METHOD_2_EAFCF37287F5ED1C_OFFSET UNITYSDK_OFFSET(0xCB1EDA0)
#define CLASS_2_FC72C0D3E1F3C11B_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xCB1D910)
#define CLASS_2_FC72C0D3E1F3C11B_METHOD_2_F6C3D22EF930EB92_OFFSET UNITYSDK_OFFSET(0xCB1A130)
#define CLASS_2_FC72C0D3E1F3C11B_SET_ANIMMOTIONDELTA_OFFSET UNITYSDK_OFFSET(0xCB1F100)
#define CLASS_2_FC72C0D3E1F3C11B_TICK_OFFSET UNITYSDK_OFFSET(0xCB1D660)
#define CLASS_2_FC72C0D3E1F3C11B__CTOR_OFFSET UNITYSDK_OFFSET(0xCB1F2A0)
#define CLASS_2_FC72C0D3E1F3C11B___IFIXBASEPROXY_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xCB1F420)
#define CLASS_2_FC72C0D3E1F3C11B___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xCB1F410)

inline static constexpr unsigned int Class_2_FC72C0D3E1F3C11B_TypeDefinitionIndex = 46453;

class Class_2_FC72C0D3E1F3C11B : public ::RPG::GameCore::GameComponentBase
{
public:
	::System::String* Field_2_6; // 0x18
	::Class_1_D27BF54F25500E5F* Field_2_15; // 0x20
	::Class_1_E856DAA70D46D1F2* Field_2_7; // 0x28
	::RPG::GameCore::GameEntity* Field_2_3; // 0x30
	::System::String* Field_2_0; // 0x38
	::Class_1_D62C2C8EAA687B3C* Field_2_4; // 0x40
	::Class_1_E856DAA70D46D1F2* Field_2_2; // 0x48
	::System::Single Field_2_13; // 0x50
	::RPG::GameCore::StringHash Field_2_10; // 0x54
	::System::Int32 Field_2_5; // 0x58
	::System::Int32 Field_2_14; // 0x5C
	::RPG::MVector3 _AnimMotionDelta_k__BackingField; // 0x60
	::System::Single Field_2_12; // 0x6C
	::UnityEngine::Vector3 Field_2_8; // 0x70
	::UnityEngine::Vector3 Field_2_11; // 0x7C
	::System::Int32 Field_2_9; // 0x88

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

	::System::Void Method_2_ACCAF16FF481A760(::RPG::GameCore::TaskContext* a1, ::Class_3_CADEC115725602AC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_CADEC115725602AC*))((::PBYTE)hIl2Cpp + CLASS_2_FC72C0D3E1F3C11B_METHOD_2_ACCAF16FF481A760_OFFSET))(this, a1, a2);
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

	::System::Void set_AnimMotionDelta(::RPG::MVector3 value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_2_FC72C0D3E1F3C11B_SET_ANIMMOTIONDELTA_OFFSET))(this, value);
	}

	::RPG::MVector3 Method_2_2C6826E6663451CE(::RPG::MVector3 a1)
	{
		return ((::RPG::MVector3(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_2_FC72C0D3E1F3C11B_METHOD_2_2C6826E6663451CE_OFFSET))(this, a1);
	}

	::System::Void Method_2_368884BBCA3D2697(::Class_1_E856DAA70D46D1F2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E856DAA70D46D1F2*))((::PBYTE)hIl2Cpp + CLASS_2_FC72C0D3E1F3C11B_METHOD_2_368884BBCA3D2697_OFFSET))(this, a1);
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

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FC72C0D3E1F3C11B___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_LateUpdate(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FC72C0D3E1F3C11B___IFIXBASEPROXY_LATEUPDATE_OFFSET))(this, P0);
	}
};
