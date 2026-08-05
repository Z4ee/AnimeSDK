#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/Class_3_84CC77538196B5DA_Struct_2_04EE0A3341480476_4.h"
#include "unitysdk/MoleMole/Config/EntityType.h"

class Class_1_B7E341C5F1A6F199;
class Class_2_DC3AD3C88C3F75B6;
class Class_3_F29FF2F0F1D4B205;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace RootMotion::FinalIK { class GrounderIK; }
namespace RootMotion::FinalIK { class Grounding; }
namespace UnityEngine { class Transform; }

#define CLASS_3_84CC77538196B5DA_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x13E02CA0)
#define CLASS_3_84CC77538196B5DA_METHOD_3_0E58BF182CB80C6B_OFFSET UNITYSDK_OFFSET(0x13E04BF0)
#define CLASS_3_84CC77538196B5DA_METHOD_3_2D58832A36FF5158_OFFSET UNITYSDK_OFFSET(0x13E04970)
#define CLASS_3_84CC77538196B5DA_METHOD_3_48FFF4356E60B1FF_OFFSET UNITYSDK_OFFSET(0x13E03FC0)
#define CLASS_3_84CC77538196B5DA_METHOD_3_49581DC19BD3C45B_OFFSET UNITYSDK_OFFSET(0x13E03F40)
#define CLASS_3_84CC77538196B5DA_METHOD_3_4F6779D12170A74A_OFFSET UNITYSDK_OFFSET(0x13E03020)
#define CLASS_3_84CC77538196B5DA_METHOD_3_63C7B79046AECF31_OFFSET UNITYSDK_OFFSET(0x13E04090)
#define CLASS_3_84CC77538196B5DA_METHOD_3_6B6AE2B3E1C3264F_OFFSET UNITYSDK_OFFSET(0x13E049E0)
#define CLASS_3_84CC77538196B5DA_METHOD_3_7BED18A9902EC124_OFFSET UNITYSDK_OFFSET(0x13E05420)
#define CLASS_3_84CC77538196B5DA_METHOD_3_835661D840E47C6C_OFFSET UNITYSDK_OFFSET(0x13E05C30)
#define CLASS_3_84CC77538196B5DA_METHOD_3_919E2D6FE7349BBB_OFFSET UNITYSDK_OFFSET(0x13E05560)
#define CLASS_3_84CC77538196B5DA_METHOD_3_973FF6B39C1E1413_OFFSET UNITYSDK_OFFSET(0x13E03430)
#define CLASS_3_84CC77538196B5DA_METHOD_3_A101BAD47F5BF766_OFFSET UNITYSDK_OFFSET(0x13E038C0)
#define CLASS_3_84CC77538196B5DA_METHOD_3_AF54AE7430F3FA33_OFFSET UNITYSDK_OFFSET(0x13E05790)
#define CLASS_3_84CC77538196B5DA_METHOD_3_BA5179E8E253AA0F_OFFSET UNITYSDK_OFFSET(0x13E04A30)
#define CLASS_3_84CC77538196B5DA_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x13E03830)
#define CLASS_3_84CC77538196B5DA_METHOD_3_BFD3F1C8946B5E66_OFFSET UNITYSDK_OFFSET(0x13E035D0)
#define CLASS_3_84CC77538196B5DA_METHOD_3_C10FAB39C2B5344C_OFFSET UNITYSDK_OFFSET(0x13E05DB0)
#define CLASS_3_84CC77538196B5DA_METHOD_3_EFC58908CA350AE0_OFFSET UNITYSDK_OFFSET(0x13E03D20)
#define CLASS_3_84CC77538196B5DA_METHOD_3_F16DD98E6E45930B_OFFSET UNITYSDK_OFFSET(0x13E03150)
#define CLASS_3_84CC77538196B5DA_METHOD_3_F75669A3292D2D22_OFFSET UNITYSDK_OFFSET(0x13E04AF0)
#define CLASS_3_84CC77538196B5DA_METHOD_3_FEEEEA55007BEDD8_OFFSET UNITYSDK_OFFSET(0x13E04640)
#define CLASS_3_84CC77538196B5DA__CTOR_OFFSET UNITYSDK_OFFSET(0x13E02FD0)

inline static constexpr unsigned int Class_3_84CC77538196B5DA_TypeDefinitionIndex = 78695;

class Class_3_84CC77538196B5DA : public ::Class_2_40CD888D5D4FCB5B
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_84CC77538196B5DA__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_84CC77538196B5DA_CREATEFILTERS_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_4F6779D12170A74A(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_84CC77538196B5DA_METHOD_3_4F6779D12170A74A_OFFSET))(a1);
	}

	::System::Void Method_3_973FF6B39C1E1413(::Class_3_F29FF2F0F1D4B205* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F29FF2F0F1D4B205*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_3_84CC77538196B5DA_METHOD_3_973FF6B39C1E1413_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_BFD3F1C8946B5E66(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_84CC77538196B5DA_METHOD_3_BFD3F1C8946B5E66_OFFSET))(this, a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_84CC77538196B5DA_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::RootMotion::FinalIK::GrounderIK* Method_3_A101BAD47F5BF766(::UnityEngine::Transform* a1, ::MoleMole::Config::EntityType a2)
	{
		return ((::RootMotion::FinalIK::GrounderIK*(*)(::UnityEngine::Transform*, ::MoleMole::Config::EntityType))((::PBYTE)hIl2Cpp + CLASS_3_84CC77538196B5DA_METHOD_3_A101BAD47F5BF766_OFFSET))(a1, a2);
	}

	::System::Void Method_3_EFC58908CA350AE0(::Class_3_F29FF2F0F1D4B205* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F29FF2F0F1D4B205*))((::PBYTE)hIl2Cpp + CLASS_3_84CC77538196B5DA_METHOD_3_EFC58908CA350AE0_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_48FFF4356E60B1FF(::RootMotion::FinalIK::Grounding* a1, ::System::Single a2, ::System::Single a3, ::Class_3_84CC77538196B5DA_Struct_2_04EE0A3341480476_4& a4)
	{
		return ((::System::Void(*)(::RootMotion::FinalIK::Grounding*, ::System::Single, ::System::Single, ::Class_3_84CC77538196B5DA_Struct_2_04EE0A3341480476_4&))((::PBYTE)hIl2Cpp + CLASS_3_84CC77538196B5DA_METHOD_3_48FFF4356E60B1FF_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_3_49581DC19BD3C45B(::Class_3_F29FF2F0F1D4B205* a1)
	{
		return ((::System::Boolean(*)(::Class_3_F29FF2F0F1D4B205*))((::PBYTE)hIl2Cpp + CLASS_3_84CC77538196B5DA_METHOD_3_49581DC19BD3C45B_OFFSET))(a1);
	}

	::System::Void Method_3_63C7B79046AECF31(::Class_3_F29FF2F0F1D4B205* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F29FF2F0F1D4B205*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_3_84CC77538196B5DA_METHOD_3_63C7B79046AECF31_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_2D58832A36FF5158(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_84CC77538196B5DA_METHOD_3_2D58832A36FF5158_OFFSET))(this, a1);
	}

	::System::Void Method_3_6B6AE2B3E1C3264F(::Class_3_F29FF2F0F1D4B205* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F29FF2F0F1D4B205*))((::PBYTE)hIl2Cpp + CLASS_3_84CC77538196B5DA_METHOD_3_6B6AE2B3E1C3264F_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_BA5179E8E253AA0F(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_84CC77538196B5DA_METHOD_3_BA5179E8E253AA0F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_F75669A3292D2D22(::Class_2_DC3AD3C88C3F75B6* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_2_DC3AD3C88C3F75B6*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_84CC77538196B5DA_METHOD_3_F75669A3292D2D22_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7BED18A9902EC124(::System::Boolean a1, ::MoleMole::Battle::Entity* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::System::Boolean, ::MoleMole::Battle::Entity*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_84CC77538196B5DA_METHOD_3_7BED18A9902EC124_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_0E58BF182CB80C6B(::System::Boolean a1, ::MoleMole::Battle::Entity* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::System::Boolean, ::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_84CC77538196B5DA_METHOD_3_0E58BF182CB80C6B_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_919E2D6FE7349BBB(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_84CC77538196B5DA_METHOD_3_919E2D6FE7349BBB_OFFSET))(a1);
	}

	static ::System::Void Method_3_F16DD98E6E45930B(::Class_3_F29FF2F0F1D4B205* a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Class_3_F29FF2F0F1D4B205*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_84CC77538196B5DA_METHOD_3_F16DD98E6E45930B_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_FEEEEA55007BEDD8(::Class_3_F29FF2F0F1D4B205* a1)
	{
		return ((::System::Void(*)(::Class_3_F29FF2F0F1D4B205*))((::PBYTE)hIl2Cpp + CLASS_3_84CC77538196B5DA_METHOD_3_FEEEEA55007BEDD8_OFFSET))(a1);
	}

	::System::Void Method_3_AF54AE7430F3FA33(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_84CC77538196B5DA_METHOD_3_AF54AE7430F3FA33_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_835661D840E47C6C(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_84CC77538196B5DA_METHOD_3_835661D840E47C6C_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_C10FAB39C2B5344C(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_84CC77538196B5DA_METHOD_3_C10FAB39C2B5344C_OFFSET))(a1);
	}
};
