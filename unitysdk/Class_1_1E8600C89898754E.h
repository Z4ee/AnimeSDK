#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameEntityPosAdaptionResultFlag.h"
#include "unitysdk/Struct_2_38E37DE2621BD84C.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/AI/NavMeshHit.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class EntityPosAdaptionConfig; }
namespace UnityEngine { class Collider; }
namespace UnityEngine::AI { class NavMeshPath; }

#define CLASS_1_1E8600C89898754E_METHOD_1_17E83D96EAD18CC1_OFFSET UNITYSDK_OFFSET(0x1168E5B0)
#define CLASS_1_1E8600C89898754E_METHOD_1_18873864B15EBB78_OFFSET UNITYSDK_OFFSET(0x1168E740)
#define CLASS_1_1E8600C89898754E_METHOD_1_5210AFA5ABBBE999_OFFSET UNITYSDK_OFFSET(0x1168BF80)
#define CLASS_1_1E8600C89898754E_METHOD_1_5A98ABF022EC158B_OFFSET UNITYSDK_OFFSET(0x1168AF50)
#define CLASS_1_1E8600C89898754E_METHOD_1_5CDC1D7BE44865F9_OFFSET UNITYSDK_OFFSET(0x1168CEC0)
#define CLASS_1_1E8600C89898754E_METHOD_1_606869B38185856E_OFFSET UNITYSDK_OFFSET(0x1168C6F0)
#define CLASS_1_1E8600C89898754E_METHOD_1_6ED085522173BF47_OFFSET UNITYSDK_OFFSET(0x1168DA50)
#define CLASS_1_1E8600C89898754E_METHOD_1_6F7E6531413A130B_OFFSET UNITYSDK_OFFSET(0x11689510)
#define CLASS_1_1E8600C89898754E_METHOD_1_7077B389B6F133E5_OFFSET UNITYSDK_OFFSET(0x1168ECD0)
#define CLASS_1_1E8600C89898754E_METHOD_1_97BF2B6CD2EB9DA9_OFFSET UNITYSDK_OFFSET(0x11688700)
#define CLASS_1_1E8600C89898754E_METHOD_1_A86FF086B7592C6F_OFFSET UNITYSDK_OFFSET(0x11689620)
#define CLASS_1_1E8600C89898754E_METHOD_1_B66AA9046081A21D_OFFSET UNITYSDK_OFFSET(0x1168DBA0)
#define CLASS_1_1E8600C89898754E_METHOD_1_D506C698E73E5B06_OFFSET UNITYSDK_OFFSET(0x1168A050)
#define CLASS_1_1E8600C89898754E_METHOD_1_EF404A83A67B2E73_OFFSET UNITYSDK_OFFSET(0x1168A3A0)
#define CLASS_1_1E8600C89898754E_METHOD_1_F350D1E532F67F31_OFFSET UNITYSDK_OFFSET(0x1168A3F0)
#define CLASS_1_1E8600C89898754E_METHOD_1_FB333AE9321E637C_OFFSET UNITYSDK_OFFSET(0x1168CA30)
#define CLASS_1_1E8600C89898754E__CCTOR_OFFSET UNITYSDK_OFFSET(0x1168EDF0)

inline static constexpr unsigned int Class_1_1E8600C89898754E_TypeDefinitionIndex = 46611;

class Class_1_1E8600C89898754E : public ::System::Object
{
public:
	static ::Il2CppArray<::UnityEngine::Collider*>** StaticGet_Field_1_6()
	{
		return (::Il2CppArray<::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1E8600C89898754E_TypeDefinitionIndex)->GetStaticField(0x46F50);
	}
	static ::RPG::GameCore::EntityPosAdaptionConfig** StaticGet_Field_1_5()
	{
		return (::RPG::GameCore::EntityPosAdaptionConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1E8600C89898754E_TypeDefinitionIndex)->GetStaticField(0x46F58);
	}
	static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1E8600C89898754E_TypeDefinitionIndex)->GetStaticField(0x46F60);
	}
	static ::UnityEngine::AI::NavMeshPath** StaticGet_Field_1_8()
	{
		return (::UnityEngine::AI::NavMeshPath**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1E8600C89898754E_TypeDefinitionIndex)->GetStaticField(0x46F68);
	}
	static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_Field_1_7()
	{
		return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1E8600C89898754E_TypeDefinitionIndex)->GetStaticField(0x46F70);
	}
	static ::Il2CppArray<::UnityEngine::Quaternion>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::UnityEngine::Quaternion>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1E8600C89898754E_TypeDefinitionIndex)->GetStaticField(0x46F78);
	}
	static ::System::Int32* StaticGet_Field_1_9()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1E8600C89898754E_TypeDefinitionIndex)->GetStaticField(0x12780);
	}
	// static const ::System::Single Field_1_2; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x14; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1E8600C89898754E__CCTOR_OFFSET))();
	}

	static ::Struct_2_38E37DE2621BD84C Method_1_97BF2B6CD2EB9DA9(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::RPG::GameCore::EntityPosAdaptionConfig* a4, ::UnityEngine::Collider* a5, ::System::Single a6)
	{
		return ((::Struct_2_38E37DE2621BD84C(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RPG::GameCore::EntityPosAdaptionConfig*, ::UnityEngine::Collider*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1E8600C89898754E_METHOD_1_97BF2B6CD2EB9DA9_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Boolean Method_1_EF404A83A67B2E73(::RPG::GameCore::GameEntityPosAdaptionResultFlag a1, ::RPG::GameCore::GameEntityPosAdaptionResultFlag a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::GameEntityPosAdaptionResultFlag, ::RPG::GameCore::GameEntityPosAdaptionResultFlag))((::PBYTE)hIl2Cpp + CLASS_1_1E8600C89898754E_METHOD_1_EF404A83A67B2E73_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::GameEntityPosAdaptionResultFlag Method_1_D506C698E73E5B06(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3& a2, ::System::Int32 a3)
	{
		return ((::RPG::GameCore::GameEntityPosAdaptionResultFlag(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1E8600C89898754E_METHOD_1_D506C698E73E5B06_OFFSET))(a1, a2, a3);
	}

	static ::RPG::GameCore::GameEntityPosAdaptionResultFlag Method_1_5210AFA5ABBBE999(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3& a2, ::System::Single a3, ::System::Int32 a4)
	{
		return ((::RPG::GameCore::GameEntityPosAdaptionResultFlag(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1E8600C89898754E_METHOD_1_5210AFA5ABBBE999_OFFSET))(a1, a2, a3, a4);
	}

	static ::RPG::GameCore::GameEntityPosAdaptionResultFlag Method_1_F350D1E532F67F31(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3& a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Int32 a6)
	{
		return ((::RPG::GameCore::GameEntityPosAdaptionResultFlag(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::System::Single, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1E8600C89898754E_METHOD_1_F350D1E532F67F31_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::ValueTuple_2<::RPG::GameCore::GameEntityPosAdaptionResultFlag, ::UnityEngine::Vector3> Method_1_6ED085522173BF47(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3, ::System::Boolean a4)
	{
		return ((::System::ValueTuple_2<::RPG::GameCore::GameEntityPosAdaptionResultFlag, ::UnityEngine::Vector3>(*)(::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1E8600C89898754E_METHOD_1_6ED085522173BF47_OFFSET))(a1, a2, a3, a4);
	}

	static ::RPG::GameCore::GameEntityPosAdaptionResultFlag Method_1_A86FF086B7592C6F(::UnityEngine::Vector3& a1, ::System::Single a2, ::System::Single a3, ::System::Int32 a4, ::System::Single a5, ::System::Int32 a6, ::System::Boolean a7)
	{
		return ((::RPG::GameCore::GameEntityPosAdaptionResultFlag(*)(::UnityEngine::Vector3&, ::System::Single, ::System::Single, ::System::Int32, ::System::Single, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1E8600C89898754E_METHOD_1_A86FF086B7592C6F_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::RPG::GameCore::GameEntityPosAdaptionResultFlag Method_1_5A98ABF022EC158B(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3& a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Int32 a6, ::System::Int32 a7, ::System::Boolean a8, ::System::Single a9, ::UnityEngine::Collider* a10, ::System::Int32 a11)
	{
		return ((::RPG::GameCore::GameEntityPosAdaptionResultFlag(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::System::Single, ::System::Single, ::System::Single, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Single, ::UnityEngine::Collider*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1E8600C89898754E_METHOD_1_5A98ABF022EC158B_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
	}

	static ::System::ValueTuple_2<::UnityEngine::Vector3, ::System::Int32> Method_1_B66AA9046081A21D(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Int32 a6, ::System::Int32 a7, ::System::Boolean a8, ::System::Single a9, ::UnityEngine::Collider* a10, ::System::Int32 a11)
	{
		return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::System::Int32>(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Single, ::UnityEngine::Collider*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1E8600C89898754E_METHOD_1_B66AA9046081A21D_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
	}

	static ::RPG::GameCore::GameEntityPosAdaptionResultFlag Method_1_FB333AE9321E637C(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3& a2, ::System::Single a3, ::System::Int32 a4, ::System::Int32 a5)
	{
		return ((::RPG::GameCore::GameEntityPosAdaptionResultFlag(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1E8600C89898754E_METHOD_1_FB333AE9321E637C_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::RPG::GameCore::GameEntityPosAdaptionResultFlag Method_1_606869B38185856E(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3& a2, ::System::Single a3, ::System::Int32 a4, ::System::Single a5)
	{
		return ((::RPG::GameCore::GameEntityPosAdaptionResultFlag(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::System::Single, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1E8600C89898754E_METHOD_1_606869B38185856E_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Boolean Method_1_18873864B15EBB78(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Int32 a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1E8600C89898754E_METHOD_1_18873864B15EBB78_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::RPG::GameCore::GameEntityPosAdaptionResultFlag Method_1_5CDC1D7BE44865F9(::UnityEngine::Vector3& a1, ::System::Single a2, ::System::Int32 a3, ::UnityEngine::Vector3 a4, ::System::Single a5)
	{
		return ((::RPG::GameCore::GameEntityPosAdaptionResultFlag(*)(::UnityEngine::Vector3&, ::System::Single, ::System::Int32, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1E8600C89898754E_METHOD_1_5CDC1D7BE44865F9_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Boolean Method_1_17E83D96EAD18CC1(::UnityEngine::Vector3 a1, ::UnityEngine::AI::NavMeshHit& a2, ::System::Single a3, ::System::Int32 a4)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::AI::NavMeshHit&, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1E8600C89898754E_METHOD_1_17E83D96EAD18CC1_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Single Method_1_7077B389B6F133E5(::Il2CppArray<::UnityEngine::Vector3>* a1)
	{
		return ((::System::Single(*)(::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_1_1E8600C89898754E_METHOD_1_7077B389B6F133E5_OFFSET))(a1);
	}

	static ::RPG::GameCore::EntityPosAdaptionConfig* Method_1_6F7E6531413A130B()
	{
		return ((::RPG::GameCore::EntityPosAdaptionConfig*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1E8600C89898754E_METHOD_1_6F7E6531413A130B_OFFSET))();
	}
};
