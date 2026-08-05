#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"

class Class_1_5DA2E7556103D5A3_39;
class Class_3_3522289DFBB97479;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }

#define CLASS_3_214153E9FA0522B4_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x1239E4B0)
#define CLASS_3_214153E9FA0522B4_METHOD_3_02001876846502BF_OFFSET UNITYSDK_OFFSET(0x123A0800)
#define CLASS_3_214153E9FA0522B4_METHOD_3_180AB596178ABB61_OFFSET UNITYSDK_OFFSET(0x1239FB30)
#define CLASS_3_214153E9FA0522B4_METHOD_3_2111CC3CBBA1080E_OFFSET UNITYSDK_OFFSET(0x1239F320)
#define CLASS_3_214153E9FA0522B4_METHOD_3_4057D796AB024FE2_OFFSET UNITYSDK_OFFSET(0x1239EC80)
#define CLASS_3_214153E9FA0522B4_METHOD_3_40A429291FCE60C7_OFFSET UNITYSDK_OFFSET(0x1239E860)
#define CLASS_3_214153E9FA0522B4_METHOD_3_41C149BE8D128EA8_OFFSET UNITYSDK_OFFSET(0x1239F450)
#define CLASS_3_214153E9FA0522B4_METHOD_3_739AACE06091AA85_1_OFFSET UNITYSDK_OFFSET(0x1239FFC0)
#define CLASS_3_214153E9FA0522B4_METHOD_3_739AACE06091AA85_OFFSET UNITYSDK_OFFSET(0x1239F610)
#define CLASS_3_214153E9FA0522B4_METHOD_3_7EE99EE6AA394745_OFFSET UNITYSDK_OFFSET(0x1239EAE0)
#define CLASS_3_214153E9FA0522B4_METHOD_3_9D6D482D0D66151C_OFFSET UNITYSDK_OFFSET(0x1239F2E0)
#define CLASS_3_214153E9FA0522B4_METHOD_3_9F01B448AD7A04F2_OFFSET UNITYSDK_OFFSET(0x123A0510)
#define CLASS_3_214153E9FA0522B4_METHOD_3_B6A1BBF297E35785_OFFSET UNITYSDK_OFFSET(0x123A09B0)
#define CLASS_3_214153E9FA0522B4_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x1239F3C0)
#define CLASS_3_214153E9FA0522B4__CCTOR_OFFSET UNITYSDK_OFFSET(0x1239E850)
#define CLASS_3_214153E9FA0522B4__CTOR_OFFSET UNITYSDK_OFFSET(0x1239E800)

inline static constexpr unsigned int Class_3_214153E9FA0522B4_TypeDefinitionIndex = 76559;

class Class_3_214153E9FA0522B4 : public ::Class_2_40CD888D5D4FCB5B
{
public:
	static ::MoleMole::Battle::Entity** StaticGet_Field_3_0()
	{
		return (::MoleMole::Battle::Entity**)Il2CppClass::FromTypeDefinitionIndex(Class_3_214153E9FA0522B4_TypeDefinitionIndex)->GetStaticField(0x3E030);
	}
	::Nap::NapECS::EcsFilter* Field_3_1; // 0x20
	::Nap::NapECS::EcsFilter* Field_3_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_214153E9FA0522B4__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_214153E9FA0522B4__CCTOR_OFFSET))();
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_214153E9FA0522B4_CREATEFILTERS_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_40A429291FCE60C7(::System::String* a1, ::System::Single& a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_3_214153E9FA0522B4_METHOD_3_40A429291FCE60C7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7EE99EE6AA394745(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_214153E9FA0522B4_METHOD_3_7EE99EE6AA394745_OFFSET))(a1);
	}

	static ::System::Void Method_3_9D6D482D0D66151C(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_214153E9FA0522B4_METHOD_3_9D6D482D0D66151C_OFFSET))(a1);
	}

	static ::System::Void Method_3_2111CC3CBBA1080E(::MoleMole::Battle::Entity* a1, ::Class_3_3522289DFBB97479* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Class_3_3522289DFBB97479*))((::PBYTE)hIl2Cpp + CLASS_3_214153E9FA0522B4_METHOD_3_2111CC3CBBA1080E_OFFSET))(a1, a2);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_214153E9FA0522B4_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_41C149BE8D128EA8(::Class_1_5DA2E7556103D5A3_39* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Boolean(*)(::Class_1_5DA2E7556103D5A3_39*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_214153E9FA0522B4_METHOD_3_41C149BE8D128EA8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_739AACE06091AA85(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_214153E9FA0522B4_METHOD_3_739AACE06091AA85_OFFSET))(a1);
	}

	static ::System::Void Method_3_739AACE06091AA85_1(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_214153E9FA0522B4_METHOD_3_739AACE06091AA85_1_OFFSET))(a1);
	}

	static ::System::Void Method_3_9F01B448AD7A04F2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_214153E9FA0522B4_METHOD_3_9F01B448AD7A04F2_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_180AB596178ABB61(::Class_1_5DA2E7556103D5A3_39* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Boolean(*)(::Class_1_5DA2E7556103D5A3_39*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_214153E9FA0522B4_METHOD_3_180AB596178ABB61_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_4057D796AB024FE2(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_214153E9FA0522B4_METHOD_3_4057D796AB024FE2_OFFSET))(a1);
	}

	static ::System::Void Method_3_B6A1BBF297E35785(::Class_3_3522289DFBB97479* a1, ::Class_1_5DA2E7556103D5A3_39* a2)
	{
		return ((::System::Void(*)(::Class_3_3522289DFBB97479*, ::Class_1_5DA2E7556103D5A3_39*))((::PBYTE)hIl2Cpp + CLASS_3_214153E9FA0522B4_METHOD_3_B6A1BBF297E35785_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_02001876846502BF(::MoleMole::Battle::Entity* a1, ::Class_1_5DA2E7556103D5A3_39* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Class_1_5DA2E7556103D5A3_39*))((::PBYTE)hIl2Cpp + CLASS_3_214153E9FA0522B4_METHOD_3_02001876846502BF_OFFSET))(a1, a2);
	}
};
