#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/Class_3_0AECE78A0888504E_Struct_2_190AE11E313467F0.h"
#include "unitysdk/Class_3_0AECE78A0888504E_Struct_2_231DDD174FF79ED6.h"
#include "unitysdk/Class_3_0AECE78A0888504E_Struct_2_B020A6AF6EB8EC9A.h"
#include "unitysdk/Class_3_0AECE78A0888504E_Struct_2_CD6C81A54E1E6EBF.h"
#include "unitysdk/Enum_3_0DE7EC2BC9304BF2.h"
#include "unitysdk/Enum_3_A019F766F8C74696.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/Struct_2_8F09B36EC2E2FB2D.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_B7E341C5F1A6F199;
class Class_3_3B42BC0680587011;
class Class_3_BB861A5968D84F20;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Cameras { class OverShoulderCameraConfig; }
namespace MoleMole::Config { class CharacterAssistAimConfig; }
namespace MoleMole::Config { class CharacterAutoAimConfig; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Renderer; }

#define CLASS_3_0AECE78A0888504E_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x16C532B0)
#define CLASS_3_0AECE78A0888504E_LATEUPDATEAGAIN_OFFSET UNITYSDK_OFFSET(0x16C536E0)
#define CLASS_3_0AECE78A0888504E_METHOD_3_1ABCAE39D60564FA_OFFSET UNITYSDK_OFFSET(0x16C58AC0)
#define CLASS_3_0AECE78A0888504E_METHOD_3_2A77E68FCC7687A0_OFFSET UNITYSDK_OFFSET(0x16C56190)
#define CLASS_3_0AECE78A0888504E_METHOD_3_4617FA41BEC0E945_OFFSET UNITYSDK_OFFSET(0x16C54DD0)
#define CLASS_3_0AECE78A0888504E_METHOD_3_4FA263546972185D_OFFSET UNITYSDK_OFFSET(0x16C538B0)
#define CLASS_3_0AECE78A0888504E_METHOD_3_62FFA88589F1F6BE_OFFSET UNITYSDK_OFFSET(0x16C56070)
#define CLASS_3_0AECE78A0888504E_METHOD_3_6305A986177AA91B_OFFSET UNITYSDK_OFFSET(0x16C54510)
#define CLASS_3_0AECE78A0888504E_METHOD_3_6E248FFA912961D2_OFFSET UNITYSDK_OFFSET(0x16C58390)
#define CLASS_3_0AECE78A0888504E_METHOD_3_724D2338ACD3E8A3_OFFSET UNITYSDK_OFFSET(0x16C56260)
#define CLASS_3_0AECE78A0888504E_METHOD_3_87F73A810E384798_OFFSET UNITYSDK_OFFSET(0x16C53D50)
#define CLASS_3_0AECE78A0888504E_METHOD_3_87F7DFC7FDA53D2D_OFFSET UNITYSDK_OFFSET(0x16C58570)
#define CLASS_3_0AECE78A0888504E_METHOD_3_A3CA1727D80365BC_OFFSET UNITYSDK_OFFSET(0x16C54450)
#define CLASS_3_0AECE78A0888504E_METHOD_3_A9AF52554FF1EE29_OFFSET UNITYSDK_OFFSET(0x16C56370)
#define CLASS_3_0AECE78A0888504E_METHOD_3_B0AD050BA26C99D1_OFFSET UNITYSDK_OFFSET(0x16C57190)
#define CLASS_3_0AECE78A0888504E_METHOD_3_BAA81EDB15577597_OFFSET UNITYSDK_OFFSET(0x16C561B0)
#define CLASS_3_0AECE78A0888504E_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x16C58FA0)
#define CLASS_3_0AECE78A0888504E_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x16C584E0)
#define CLASS_3_0AECE78A0888504E_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16C562E0)
#define CLASS_3_0AECE78A0888504E_METHOD_3_E2A13B6BE7B1574D_OFFSET UNITYSDK_OFFSET(0x16C54D80)
#define CLASS_3_0AECE78A0888504E_UPDATE_OFFSET UNITYSDK_OFFSET(0x16C535B0)
#define CLASS_3_0AECE78A0888504E__CTOR_OFFSET UNITYSDK_OFFSET(0x16C53860)

inline static constexpr unsigned int Class_3_0AECE78A0888504E_TypeDefinitionIndex = 66377;

class Class_3_0AECE78A0888504E : public ::Class_2_40CD888D5D4FCB5B
{
public:
	static ::System::Single* StaticGet_Field_3_1()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_0AECE78A0888504E_TypeDefinitionIndex)->GetStaticField(0xE8B0);
	}
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0AECE78A0888504E__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_0AECE78A0888504E_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0AECE78A0888504E_UPDATE_OFFSET))(this);
	}

	::System::Void LateUpdateAgain()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0AECE78A0888504E_LATEUPDATEAGAIN_OFFSET))(this);
	}

	static ::System::Void Method_3_4FA263546972185D(::Class_3_BB861A5968D84F20* a1)
	{
		return ((::System::Void(*)(::Class_3_BB861A5968D84F20*))((::PBYTE)hIl2Cpp + CLASS_3_0AECE78A0888504E_METHOD_3_4FA263546972185D_OFFSET))(a1);
	}

	static ::System::Void Method_3_87F73A810E384798(::Class_3_BB861A5968D84F20* a1)
	{
		return ((::System::Void(*)(::Class_3_BB861A5968D84F20*))((::PBYTE)hIl2Cpp + CLASS_3_0AECE78A0888504E_METHOD_3_87F73A810E384798_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_3_6305A986177AA91B(::Class_3_BB861A5968D84F20* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::Class_3_BB861A5968D84F20*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_0AECE78A0888504E_METHOD_3_6305A986177AA91B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_E2A13B6BE7B1574D(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_0AECE78A0888504E_METHOD_3_E2A13B6BE7B1574D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_4617FA41BEC0E945(::Class_3_BB861A5968D84F20* a1, ::MoleMole::Config::CharacterAutoAimConfig* a2, ::PipelineCamera::WorldBasicCameraData& a3, ::Struct_2_8F09B36EC2E2FB2D& a4, ::Enum_3_A019F766F8C74696 a5)
	{
		return ((::System::Void(*)(::Class_3_BB861A5968D84F20*, ::MoleMole::Config::CharacterAutoAimConfig*, ::PipelineCamera::WorldBasicCameraData&, ::Struct_2_8F09B36EC2E2FB2D&, ::Enum_3_A019F766F8C74696))((::PBYTE)hIl2Cpp + CLASS_3_0AECE78A0888504E_METHOD_3_4617FA41BEC0E945_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0AECE78A0888504E_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Boolean Method_3_A9AF52554FF1EE29(::Class_3_3B42BC0680587011* a1, ::Class_3_BB861A5968D84F20* a2)
	{
		return ((::System::Boolean(*)(::Class_3_3B42BC0680587011*, ::Class_3_BB861A5968D84F20*))((::PBYTE)hIl2Cpp + CLASS_3_0AECE78A0888504E_METHOD_3_A9AF52554FF1EE29_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_2A77E68FCC7687A0(::Enum_3_0DE7EC2BC9304BF2 a1, ::Class_3_0AECE78A0888504E_Struct_2_190AE11E313467F0& a2)
	{
		return ((::System::Void(*)(::Enum_3_0DE7EC2BC9304BF2, ::Class_3_0AECE78A0888504E_Struct_2_190AE11E313467F0&))((::PBYTE)hIl2Cpp + CLASS_3_0AECE78A0888504E_METHOD_3_2A77E68FCC7687A0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_BAA81EDB15577597(::Struct_2_8F09B36EC2E2FB2D& a1, ::UnityEngine::Vector2 a2, ::Class_3_0AECE78A0888504E_Struct_2_190AE11E313467F0& a3)
	{
		return ((::System::Void(*)(::Struct_2_8F09B36EC2E2FB2D&, ::UnityEngine::Vector2, ::Class_3_0AECE78A0888504E_Struct_2_190AE11E313467F0&))((::PBYTE)hIl2Cpp + CLASS_3_0AECE78A0888504E_METHOD_3_BAA81EDB15577597_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_3_6E248FFA912961D2(::System::Single a1, ::System::Single a2, ::UnityEngine::AnimationCurve* a3, ::Class_3_0AECE78A0888504E_Struct_2_B020A6AF6EB8EC9A& a4, ::Class_3_0AECE78A0888504E_Struct_2_CD6C81A54E1E6EBF& a5)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*, ::Class_3_0AECE78A0888504E_Struct_2_B020A6AF6EB8EC9A&, ::Class_3_0AECE78A0888504E_Struct_2_CD6C81A54E1E6EBF&))((::PBYTE)hIl2Cpp + CLASS_3_0AECE78A0888504E_METHOD_3_6E248FFA912961D2_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0AECE78A0888504E_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	static ::System::Void Method_3_87F7DFC7FDA53D2D(::UnityEngine::Renderer* a1, ::Class_3_0AECE78A0888504E_Struct_2_231DDD174FF79ED6& a2)
	{
		return ((::System::Void(*)(::UnityEngine::Renderer*, ::Class_3_0AECE78A0888504E_Struct_2_231DDD174FF79ED6&))((::PBYTE)hIl2Cpp + CLASS_3_0AECE78A0888504E_METHOD_3_87F7DFC7FDA53D2D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B0AD050BA26C99D1(::Class_3_BB861A5968D84F20* a1, ::MoleMole::Config::CharacterAssistAimConfig* a2, ::PipelineCamera::WorldBasicCameraData& a3, ::Struct_2_8F09B36EC2E2FB2D& a4)
	{
		return ((::System::Void(*)(::Class_3_BB861A5968D84F20*, ::MoleMole::Config::CharacterAssistAimConfig*, ::PipelineCamera::WorldBasicCameraData&, ::Struct_2_8F09B36EC2E2FB2D&))((::PBYTE)hIl2Cpp + CLASS_3_0AECE78A0888504E_METHOD_3_B0AD050BA26C99D1_OFFSET))(a1, a2, a3, a4);
	}

	static ::UnityEngine::Vector2 Method_3_62FFA88589F1F6BE(::UnityEngine::Vector3 a1, ::Class_3_0AECE78A0888504E_Struct_2_190AE11E313467F0& a2)
	{
		return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector3, ::Class_3_0AECE78A0888504E_Struct_2_190AE11E313467F0&))((::PBYTE)hIl2Cpp + CLASS_3_0AECE78A0888504E_METHOD_3_62FFA88589F1F6BE_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_A3CA1727D80365BC(::Class_3_BB861A5968D84F20* a1)
	{
		return ((::System::Boolean(*)(::Class_3_BB861A5968D84F20*))((::PBYTE)hIl2Cpp + CLASS_3_0AECE78A0888504E_METHOD_3_A3CA1727D80365BC_OFFSET))(a1);
	}

	static ::System::Void Method_3_1ABCAE39D60564FA(::Class_3_BB861A5968D84F20* a1, ::System::Boolean a2, ::MoleMole::Cameras::OverShoulderCameraConfig* a3)
	{
		return ((::System::Void(*)(::Class_3_BB861A5968D84F20*, ::System::Boolean, ::MoleMole::Cameras::OverShoulderCameraConfig*))((::PBYTE)hIl2Cpp + CLASS_3_0AECE78A0888504E_METHOD_3_1ABCAE39D60564FA_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_724D2338ACD3E8A3(::Class_3_BB861A5968D84F20* a1)
	{
		return ((::System::Void(*)(::Class_3_BB861A5968D84F20*))((::PBYTE)hIl2Cpp + CLASS_3_0AECE78A0888504E_METHOD_3_724D2338ACD3E8A3_OFFSET))(a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_0AECE78A0888504E_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}
};
