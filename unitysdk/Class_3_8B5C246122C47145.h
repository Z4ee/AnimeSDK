#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_B7E341C5F1A6F199;
class Class_2_208CC9941471731A_1037;
class Class_3_09C6D749A1B6BB3E;
class Class_3_3A3A95CA33F5CFBC;
class Class_3_F33F9DC5F4112336;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_3_8B5C246122C47145_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x13125890)
#define CLASS_3_8B5C246122C47145_METHOD_3_00DD5E22412E831E_OFFSET UNITYSDK_OFFSET(0x13127D20)
#define CLASS_3_8B5C246122C47145_METHOD_3_6A95C9C629848F04_OFFSET UNITYSDK_OFFSET(0x13129E10)
#define CLASS_3_8B5C246122C47145_METHOD_3_6EE6A27960654DB8_OFFSET UNITYSDK_OFFSET(0x13125EF0)
#define CLASS_3_8B5C246122C47145_METHOD_3_807F2A52783217B1_OFFSET UNITYSDK_OFFSET(0x131287B0)
#define CLASS_3_8B5C246122C47145_METHOD_3_90FAC76749C7F5B5_OFFSET UNITYSDK_OFFSET(0x13127B20)
#define CLASS_3_8B5C246122C47145_METHOD_3_9E768B9E7876D4DE_OFFSET UNITYSDK_OFFSET(0x13127FE0)
#define CLASS_3_8B5C246122C47145_METHOD_3_A0DC3805CCC8A542_OFFSET UNITYSDK_OFFSET(0x13127100)
#define CLASS_3_8B5C246122C47145_METHOD_3_AF8195137AC6C12D_OFFSET UNITYSDK_OFFSET(0x13126FE0)
#define CLASS_3_8B5C246122C47145_METHOD_3_B95AB671BE22D94D_OFFSET UNITYSDK_OFFSET(0x13129950)
#define CLASS_3_8B5C246122C47145_METHOD_3_B9B2FC4F6DB802EB_OFFSET UNITYSDK_OFFSET(0x13126040)
#define CLASS_3_8B5C246122C47145_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x13127F50)
#define CLASS_3_8B5C246122C47145_METHOD_3_BED82C557EE24F50_OFFSET UNITYSDK_OFFSET(0x131264D0)
#define CLASS_3_8B5C246122C47145_METHOD_3_BF6A40F21F41755D_OFFSET UNITYSDK_OFFSET(0x13127940)
#define CLASS_3_8B5C246122C47145_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13128720)
#define CLASS_3_8B5C246122C47145_METHOD_3_E52A85E9F69A491B_OFFSET UNITYSDK_OFFSET(0x13129D90)
#define CLASS_3_8B5C246122C47145_METHOD_3_F702E6651D2A079D_OFFSET UNITYSDK_OFFSET(0x13126100)
#define CLASS_3_8B5C246122C47145_UPDATE_OFFSET UNITYSDK_OFFSET(0x13125D70)
#define CLASS_3_8B5C246122C47145__CTOR_OFFSET UNITYSDK_OFFSET(0x13125EA0)

inline static constexpr unsigned int Class_3_8B5C246122C47145_TypeDefinitionIndex = 76033;

class Class_3_8B5C246122C47145 : public ::Class_2_40CD888D5D4FCB5B
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8B5C246122C47145__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_8B5C246122C47145_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8B5C246122C47145_UPDATE_OFFSET))(this);
	}

	static ::System::Void Method_3_6EE6A27960654DB8(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_8B5C246122C47145_METHOD_3_6EE6A27960654DB8_OFFSET))(a1);
	}

	static ::System::String* Method_3_B9B2FC4F6DB802EB(::MoleMole::Battle::Entity* a1, ::Class_3_3A3A95CA33F5CFBC* a2)
	{
		return ((::System::String*(*)(::MoleMole::Battle::Entity*, ::Class_3_3A3A95CA33F5CFBC*))((::PBYTE)hIl2Cpp + CLASS_3_8B5C246122C47145_METHOD_3_B9B2FC4F6DB802EB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_F702E6651D2A079D(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_8B5C246122C47145_METHOD_3_F702E6651D2A079D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_BED82C557EE24F50(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_8B5C246122C47145_METHOD_3_BED82C557EE24F50_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_AF8195137AC6C12D(::Class_3_09C6D749A1B6BB3E* a1, ::System::UInt32 a2, ::UnityEngine::GameObject*& a3)
	{
		return ((::System::Boolean(*)(::Class_3_09C6D749A1B6BB3E*, ::System::UInt32, ::UnityEngine::GameObject*&))((::PBYTE)hIl2Cpp + CLASS_3_8B5C246122C47145_METHOD_3_AF8195137AC6C12D_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_A0DC3805CCC8A542(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_8B5C246122C47145_METHOD_3_A0DC3805CCC8A542_OFFSET))(a1);
	}

	static ::System::Void Method_3_BF6A40F21F41755D(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_8B5C246122C47145_METHOD_3_BF6A40F21F41755D_OFFSET))(a1);
	}

	static ::System::Void Method_3_90FAC76749C7F5B5(::Class_3_09C6D749A1B6BB3E* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::Class_3_09C6D749A1B6BB3E*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_8B5C246122C47145_METHOD_3_90FAC76749C7F5B5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_00DD5E22412E831E(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_8B5C246122C47145_METHOD_3_00DD5E22412E831E_OFFSET))(a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_8B5C246122C47145_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_9E768B9E7876D4DE(::Class_3_09C6D749A1B6BB3E* a1, ::Class_3_3A3A95CA33F5CFBC* a2, ::Class_3_F33F9DC5F4112336* a3)
	{
		return ((::System::Void(*)(::Class_3_09C6D749A1B6BB3E*, ::Class_3_3A3A95CA33F5CFBC*, ::Class_3_F33F9DC5F4112336*))((::PBYTE)hIl2Cpp + CLASS_3_8B5C246122C47145_METHOD_3_9E768B9E7876D4DE_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8B5C246122C47145_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_807F2A52783217B1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_8B5C246122C47145_METHOD_3_807F2A52783217B1_OFFSET))(a1);
	}

	static ::UnityEngine::GameObject* Method_3_B95AB671BE22D94D(::Class_3_09C6D749A1B6BB3E* a1, ::UnityEngine::Vector3 a2, ::System::String* a3)
	{
		return ((::UnityEngine::GameObject*(*)(::Class_3_09C6D749A1B6BB3E*, ::UnityEngine::Vector3, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_8B5C246122C47145_METHOD_3_B95AB671BE22D94D_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_3_E52A85E9F69A491B(::Class_2_208CC9941471731A_1037* a1)
	{
		return ((::System::Boolean(*)(::Class_2_208CC9941471731A_1037*))((::PBYTE)hIl2Cpp + CLASS_3_8B5C246122C47145_METHOD_3_E52A85E9F69A491B_OFFSET))(a1);
	}

	static ::System::Void Method_3_6A95C9C629848F04(::Class_3_09C6D749A1B6BB3E* a1, ::System::UInt32 a2, ::UnityEngine::GameObject* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::Class_3_09C6D749A1B6BB3E*, ::System::UInt32, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_8B5C246122C47145_METHOD_3_6A95C9C629848F04_OFFSET))(a1, a2, a3, a4);
	}
};
