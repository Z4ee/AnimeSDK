#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/Enum_3_1003E4A6E5149B9E.h"
#include "unitysdk/MoleMole/Config/AidAttackType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_B7E341C5F1A6F199;
class Class_2_208CC9941471731A_1184;
class Class_3_09C6D749A1B6BB3E;
class Class_3_707412604A129938;
class Class_3_F33F9DC5F4112336;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_3_8B5C246122C47145_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x13904740)
#define CLASS_3_8B5C246122C47145_METHOD_3_1ED899447436F000_OFFSET UNITYSDK_OFFSET(0x139093E0)
#define CLASS_3_8B5C246122C47145_METHOD_3_2E73654CA1679326_OFFSET UNITYSDK_OFFSET(0x13907A50)
#define CLASS_3_8B5C246122C47145_METHOD_3_4943333D131692A3_OFFSET UNITYSDK_OFFSET(0x13908330)
#define CLASS_3_8B5C246122C47145_METHOD_3_6A95C9C629848F04_OFFSET UNITYSDK_OFFSET(0x13907380)
#define CLASS_3_8B5C246122C47145_METHOD_3_837A059F503AC3E8_OFFSET UNITYSDK_OFFSET(0x139077E0)
#define CLASS_3_8B5C246122C47145_METHOD_3_90FAC76749C7F5B5_OFFSET UNITYSDK_OFFSET(0x139059B0)
#define CLASS_3_8B5C246122C47145_METHOD_3_AF8195137AC6C12D_OFFSET UNITYSDK_OFFSET(0x13907930)
#define CLASS_3_8B5C246122C47145_METHOD_3_B086B32153344FB5_OFFSET UNITYSDK_OFFSET(0x13906C50)
#define CLASS_3_8B5C246122C47145_METHOD_3_B27B8F5EF103A684_OFFSET UNITYSDK_OFFSET(0x13907EA0)
#define CLASS_3_8B5C246122C47145_METHOD_3_B9B2FC4F6DB802EB_OFFSET UNITYSDK_OFFSET(0x139058F0)
#define CLASS_3_8B5C246122C47145_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x139082A0)
#define CLASS_3_8B5C246122C47145_METHOD_3_BED82C557EE24F50_OFFSET UNITYSDK_OFFSET(0x13904DE0)
#define CLASS_3_8B5C246122C47145_METHOD_3_C5BE4B8898C2BADD_OFFSET UNITYSDK_OFFSET(0x13905F70)
#define CLASS_3_8B5C246122C47145_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x13907750)
#define CLASS_3_8B5C246122C47145_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13904D50)
#define CLASS_3_8B5C246122C47145_METHOD_3_DE4E1CCB1E828207_OFFSET UNITYSDK_OFFSET(0x13906A90)
#define CLASS_3_8B5C246122C47145_METHOD_3_E52A85E9F69A491B_OFFSET UNITYSDK_OFFSET(0x139076D0)
#define CLASS_3_8B5C246122C47145_METHOD_3_F702E6651D2A079D_OFFSET UNITYSDK_OFFSET(0x13905BB0)
#define CLASS_3_8B5C246122C47145_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x13904C70)
#define CLASS_3_8B5C246122C47145_UPDATE_OFFSET UNITYSDK_OFFSET(0x13904B10)
#define CLASS_3_8B5C246122C47145__CTOR_OFFSET UNITYSDK_OFFSET(0x13904D00)

inline static constexpr unsigned int Class_3_8B5C246122C47145_TypeDefinitionIndex = 44338;

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

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8B5C246122C47145_ONDESTROY_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8B5C246122C47145_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_BED82C557EE24F50(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_8B5C246122C47145_METHOD_3_BED82C557EE24F50_OFFSET))(a1);
	}

	static ::System::Void Method_3_90FAC76749C7F5B5(::Class_3_09C6D749A1B6BB3E* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::Class_3_09C6D749A1B6BB3E*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_8B5C246122C47145_METHOD_3_90FAC76749C7F5B5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_F702E6651D2A079D(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_8B5C246122C47145_METHOD_3_F702E6651D2A079D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_C5BE4B8898C2BADD(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_8B5C246122C47145_METHOD_3_C5BE4B8898C2BADD_OFFSET))(a1);
	}

	static ::System::Void Method_3_DE4E1CCB1E828207(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_8B5C246122C47145_METHOD_3_DE4E1CCB1E828207_OFFSET))(a1);
	}

	static ::System::Void Method_3_B086B32153344FB5(::Class_3_09C6D749A1B6BB3E* a1, ::Class_3_707412604A129938* a2, ::Class_3_F33F9DC5F4112336* a3)
	{
		return ((::System::Void(*)(::Class_3_09C6D749A1B6BB3E*, ::Class_3_707412604A129938*, ::Class_3_F33F9DC5F4112336*))((::PBYTE)hIl2Cpp + CLASS_3_8B5C246122C47145_METHOD_3_B086B32153344FB5_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_6A95C9C629848F04(::Class_3_09C6D749A1B6BB3E* a1, ::System::UInt32 a2, ::UnityEngine::GameObject* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::Class_3_09C6D749A1B6BB3E*, ::System::UInt32, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_8B5C246122C47145_METHOD_3_6A95C9C629848F04_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_3_E52A85E9F69A491B(::Class_2_208CC9941471731A_1184* a1)
	{
		return ((::System::Boolean(*)(::Class_2_208CC9941471731A_1184*))((::PBYTE)hIl2Cpp + CLASS_3_8B5C246122C47145_METHOD_3_E52A85E9F69A491B_OFFSET))(a1);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8B5C246122C47145_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	static ::System::Void Method_3_837A059F503AC3E8(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_8B5C246122C47145_METHOD_3_837A059F503AC3E8_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_AF8195137AC6C12D(::Class_3_09C6D749A1B6BB3E* a1, ::System::UInt32 a2, ::UnityEngine::GameObject*& a3)
	{
		return ((::System::Boolean(*)(::Class_3_09C6D749A1B6BB3E*, ::System::UInt32, ::UnityEngine::GameObject*&))((::PBYTE)hIl2Cpp + CLASS_3_8B5C246122C47145_METHOD_3_AF8195137AC6C12D_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::GameObject* Method_3_2E73654CA1679326(::Class_3_09C6D749A1B6BB3E* a1, ::UnityEngine::Vector3 a2, ::System::String* a3)
	{
		return ((::UnityEngine::GameObject*(*)(::Class_3_09C6D749A1B6BB3E*, ::UnityEngine::Vector3, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_8B5C246122C47145_METHOD_3_2E73654CA1679326_OFFSET))(a1, a2, a3);
	}

	static ::System::String* Method_3_B9B2FC4F6DB802EB(::MoleMole::Battle::Entity* a1, ::Class_3_707412604A129938* a2)
	{
		return ((::System::String*(*)(::MoleMole::Battle::Entity*, ::Class_3_707412604A129938*))((::PBYTE)hIl2Cpp + CLASS_3_8B5C246122C47145_METHOD_3_B9B2FC4F6DB802EB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B27B8F5EF103A684(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2, ::Enum_3_1003E4A6E5149B9E a3, ::MoleMole::Config::AidAttackType a4)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Enum_3_1003E4A6E5149B9E, ::MoleMole::Config::AidAttackType))((::PBYTE)hIl2Cpp + CLASS_3_8B5C246122C47145_METHOD_3_B27B8F5EF103A684_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_8B5C246122C47145_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_4943333D131692A3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_8B5C246122C47145_METHOD_3_4943333D131692A3_OFFSET))(a1);
	}

	static ::System::Void Method_3_1ED899447436F000(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_8B5C246122C47145_METHOD_3_1ED899447436F000_OFFSET))(a1);
	}
};
