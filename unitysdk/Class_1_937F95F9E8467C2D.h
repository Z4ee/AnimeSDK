#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TimeRewindState.h"
#include "unitysdk/System/Object.h"

class Class_1_4E1996B50E2373CB;
class Class_1_F65DC6656DEF8159;
namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class SphereCollider; }

#define CLASS_1_937F95F9E8467C2D_CLEAR_OFFSET UNITYSDK_OFFSET(0x17F8E1A0)
#define CLASS_1_937F95F9E8467C2D_METHOD_1_14CC93689192A32B_OFFSET UNITYSDK_OFFSET(0x17F8E6C0)
#define CLASS_1_937F95F9E8467C2D_METHOD_1_1991A7B40B7BA36D_OFFSET UNITYSDK_OFFSET(0x17F8E2C0)
#define CLASS_1_937F95F9E8467C2D_METHOD_1_76BC447B9A4848CB_OFFSET UNITYSDK_OFFSET(0x17F8DFF0)
#define CLASS_1_937F95F9E8467C2D_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x17F8EED0)
#define CLASS_1_937F95F9E8467C2D_METHOD_1_907E24F785836BA0_OFFSET UNITYSDK_OFFSET(0x17F8EF50)
#define CLASS_1_937F95F9E8467C2D_METHOD_1_976CDF5EF06E0838_OFFSET UNITYSDK_OFFSET(0x17F8EFD0)
#define CLASS_1_937F95F9E8467C2D_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x17F8EA90)
#define CLASS_1_937F95F9E8467C2D_METHOD_1_A5624AB15FE32AEC_OFFSET UNITYSDK_OFFSET(0x17F8EC00)
#define CLASS_1_937F95F9E8467C2D_METHOD_1_B8739D0DE156F9EB_OFFSET UNITYSDK_OFFSET(0x17F8EAE0)
#define CLASS_1_937F95F9E8467C2D_METHOD_1_C51EDA5D6F7FA146_OFFSET UNITYSDK_OFFSET(0x17F8E320)
#define CLASS_1_937F95F9E8467C2D_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x17F8EB80)
#define CLASS_1_937F95F9E8467C2D_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x17F8EBC0)
#define CLASS_1_937F95F9E8467C2D_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17F8EB40)
#define CLASS_1_937F95F9E8467C2D_METHOD_1_D71F1E82F429310A_OFFSET UNITYSDK_OFFSET(0x17F8DED0)
#define CLASS_1_937F95F9E8467C2D__CCTOR_OFFSET UNITYSDK_OFFSET(0x17F8F160)
#define CLASS_1_937F95F9E8467C2D__CTOR_OFFSET UNITYSDK_OFFSET(0x17F8F110)

inline static constexpr unsigned int Class_1_937F95F9E8467C2D_TypeDefinitionIndex = 60892;

class Class_1_937F95F9E8467C2D : public ::System::Object
{
public:
	static ::System::String** StaticGet_PFAGLLLJLFO()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_937F95F9E8467C2D_TypeDefinitionIndex)->GetStaticField(0x56250);
	}
	::Class_1_4E1996B50E2373CB* NLAEJIIDEJC; // 0x10
	::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x18
	::Class_1_F65DC6656DEF8159* EPMPEFJBAPM; // 0x20
	::UnityEngine::SphereCollider* HKPKGJNFEDK; // 0x28
	::RPG::GameCore::TransformComponent* NIDHDAOGNKO; // 0x30
	::RPG::GameCore::CharacterModelComponent* OFGPBOKLGJJ; // 0x38
	::System::Collections::Generic::List_1<::Class_1_4E1996B50E2373CB*>* DPAFEHAOOGL; // 0x40
	::System::Boolean MCAPIAKDMAA; // 0x48
	::System::Single OIBEBCMDGPN; // 0x4C
	::System::Single HBDJCFFDGDD; // 0x50
	::RPG::GameCore::TimeRewindState MPGEHKEOCAK; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_937F95F9E8467C2D__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_937F95F9E8467C2D__CCTOR_OFFSET))();
	}

	::System::Void Method_1_D71F1E82F429310A(::RPG::GameCore::GameEntity* a1, ::Class_1_F65DC6656DEF8159* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_F65DC6656DEF8159*))((::PBYTE)hIl2Cpp + CLASS_1_937F95F9E8467C2D_METHOD_1_D71F1E82F429310A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_76BC447B9A4848CB(::System::Int32 a1, ::System::Int32 a2, ::System::Single a3, ::System::Single a4, ::Il2CppArray<::UnityEngine::AnimationCurve*>* a5, ::Il2CppArray<::UnityEngine::AnimationCurve*>* a6, ::System::Single a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::Il2CppArray<::UnityEngine::AnimationCurve*>*, ::Il2CppArray<::UnityEngine::AnimationCurve*>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_937F95F9E8467C2D_METHOD_1_76BC447B9A4848CB_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_937F95F9E8467C2D_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_1991A7B40B7BA36D(::RPG::GameCore::TimeRewindState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimeRewindState))((::PBYTE)hIl2Cpp + CLASS_1_937F95F9E8467C2D_METHOD_1_1991A7B40B7BA36D_OFFSET))(this, a1);
	}

	::System::Void Method_1_C51EDA5D6F7FA146(::System::Single a1, ::RPG::GameCore::TimeRewindState a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::GameCore::TimeRewindState))((::PBYTE)hIl2Cpp + CLASS_1_937F95F9E8467C2D_METHOD_1_C51EDA5D6F7FA146_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_937F95F9E8467C2D_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}

	::Class_1_4E1996B50E2373CB* Method_1_B8739D0DE156F9EB(::System::Single& a1)
	{
		return ((::Class_1_4E1996B50E2373CB*(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_937F95F9E8467C2D_METHOD_1_B8739D0DE156F9EB_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_937F95F9E8467C2D_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_937F95F9E8467C2D_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_937F95F9E8467C2D_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_1_14CC93689192A32B(::Class_1_4E1996B50E2373CB* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4E1996B50E2373CB*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_937F95F9E8467C2D_METHOD_1_14CC93689192A32B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A5624AB15FE32AEC(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_937F95F9E8467C2D_METHOD_1_A5624AB15FE32AEC_OFFSET))(this, a1);
	}

	::System::Void Method_1_976CDF5EF06E0838(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_937F95F9E8467C2D_METHOD_1_976CDF5EF06E0838_OFFSET))(this, a1);
	}

	::System::Void Method_1_907E24F785836BA0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_937F95F9E8467C2D_METHOD_1_907E24F785836BA0_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_937F95F9E8467C2D_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}
};
