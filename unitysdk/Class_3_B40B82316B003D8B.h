#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_B40B82316B003D8B_AnimatedItem;
namespace RPG::Client { class BezierCurve; }
namespace RPG::Client { class GPUTransformLoopAnim; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture; }

#define CLASS_3_B40B82316B003D8B_METHOD_3_026849FDEA98D0B8_OFFSET UNITYSDK_OFFSET(0x15182E50)
#define CLASS_3_B40B82316B003D8B_METHOD_3_19FB5FBEA9EA66CD_OFFSET UNITYSDK_OFFSET(0x1517F8C0)
#define CLASS_3_B40B82316B003D8B_METHOD_3_1DE63FE11FA0D5B4_OFFSET UNITYSDK_OFFSET(0x15185040)
#define CLASS_3_B40B82316B003D8B_METHOD_3_20CDC371ED71E5E2_OFFSET UNITYSDK_OFFSET(0x15181F50)
#define CLASS_3_B40B82316B003D8B_METHOD_3_4DE5ABBA5DD8133A_OFFSET UNITYSDK_OFFSET(0x15184490)
#define CLASS_3_B40B82316B003D8B_METHOD_3_52539B863D789D1C_OFFSET UNITYSDK_OFFSET(0x1517F660)
#define CLASS_3_B40B82316B003D8B_METHOD_3_591751B175E01F00_OFFSET UNITYSDK_OFFSET(0x151849C0)
#define CLASS_3_B40B82316B003D8B_METHOD_3_602B796CAD5DBEDB_OFFSET UNITYSDK_OFFSET(0x15181D30)
#define CLASS_3_B40B82316B003D8B_METHOD_3_6055A93732CC885D_OFFSET UNITYSDK_OFFSET(0x1517FC20)
#define CLASS_3_B40B82316B003D8B_METHOD_3_63FEA79849598753_OFFSET UNITYSDK_OFFSET(0x15182BF0)
#define CLASS_3_B40B82316B003D8B_METHOD_3_704FAC4600717444_OFFSET UNITYSDK_OFFSET(0x1517F6E0)
#define CLASS_3_B40B82316B003D8B_METHOD_3_93C5F707B1EFA292_OFFSET UNITYSDK_OFFSET(0x15182CB0)
#define CLASS_3_B40B82316B003D8B_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1517F490)
#define CLASS_3_B40B82316B003D8B_METHOD_3_97EC28AD01095A44_OFFSET UNITYSDK_OFFSET(0x151858D0)
#define CLASS_3_B40B82316B003D8B_METHOD_3_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0x1517F520)
#define CLASS_3_B40B82316B003D8B_METHOD_3_B7839133A64B57AD_OFFSET UNITYSDK_OFFSET(0x15185220)
#define CLASS_3_B40B82316B003D8B_METHOD_3_C4EFD31239F98A71_OFFSET UNITYSDK_OFFSET(0x15181710)
#define CLASS_3_B40B82316B003D8B_METHOD_3_CAA16B0E09F56EC2_OFFSET UNITYSDK_OFFSET(0x15185B80)
#define CLASS_3_B40B82316B003D8B_METHOD_3_D17EEEA18F875CD1_OFFSET UNITYSDK_OFFSET(0x15182D20)
#define CLASS_3_B40B82316B003D8B_METHOD_3_DF7CEFC0E6C5FD0D_OFFSET UNITYSDK_OFFSET(0x15185AC0)
#define CLASS_3_B40B82316B003D8B_METHOD_3_F3DD04EBF5C76BDB_OFFSET UNITYSDK_OFFSET(0x15184670)
#define CLASS_3_B40B82316B003D8B_TICK_OFFSET UNITYSDK_OFFSET(0x1517FFC0)
#define CLASS_3_B40B82316B003D8B__CCTOR_OFFSET UNITYSDK_OFFSET(0x15185E80)
#define CLASS_3_B40B82316B003D8B__CTOR_OFFSET UNITYSDK_OFFSET(0x15185BE0)

inline static constexpr unsigned int Class_3_B40B82316B003D8B_TypeDefinitionIndex = 67169;

class Class_3_B40B82316B003D8B : public ::RPG::Client::TABehaviorBase
{
public:
	static ::System::String** StaticGet_Field_3_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_3_B40B82316B003D8B_TypeDefinitionIndex)->GetStaticField(0x33D30);
	}
	static ::UnityEngine::ComputeShader** StaticGet_Field_3_1()
	{
		return (::UnityEngine::ComputeShader**)Il2CppClass::FromTypeDefinitionIndex(Class_3_B40B82316B003D8B_TypeDefinitionIndex)->GetStaticField(0x33D38);
	}
	// static const ::System::Int32 Field_3_2 = 0xA; // 0x0
	::System::Collections::Generic::Dictionary_2<::Class_3_B40B82316B003D8B_AnimatedItem*, ::Il2CppArray<::UnityEngine::Matrix4x4>*>* Field_3_3; // 0x38
	::System::Collections::Generic::Dictionary_2<::Class_3_B40B82316B003D8B_AnimatedItem*, ::UnityEngine::Material*>* Field_3_4; // 0x40
	::System::Collections::Generic::Dictionary_2<::Class_3_B40B82316B003D8B_AnimatedItem*, ::Il2CppArray<::System::Single>*>* Field_3_5; // 0x48
	::System::Int32 Field_3_6; // 0x50
	::UnityEngine::Vector3 Field_3_7; // 0x54
	::System::Single Field_3_8; // 0x60
	::System::Int32 Field_3_9; // 0x64
	::System::Int32 Field_3_10; // 0x68
	::System::Boolean Field_3_11; // 0x6C
	::System::Int32 Field_3_12; // 0x70
	::System::Int32 Field_3_13; // 0x74
	::System::Int32 Field_3_14; // 0x78
	::System::Single Field_3_15; // 0x7C
	::UnityEngine::Quaternion Field_3_16; // 0x80
	::System::Single Field_3_17; // 0x90
	::System::Int32 Field_3_18; // 0x94
	::System::Int32 Field_3_19; // 0x98
	::System::Int32 Field_3_20; // 0x9C
	::System::Int32 Field_3_21; // 0xA0
	::System::Int32 Field_3_22; // 0xA4
	::System::Int32 Field_3_23; // 0xA8
	::System::Int32 Field_3_24; // 0xAC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B40B82316B003D8B__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_B40B82316B003D8B__CCTOR_OFFSET))();
	}

	::System::Void Method_3_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B40B82316B003D8B_METHOD_3_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_3_A1ADC999CFACEB89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B40B82316B003D8B_METHOD_3_A1ADC999CFACEB89_OFFSET))(this);
	}

	::System::Void Method_3_704FAC4600717444()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B40B82316B003D8B_METHOD_3_704FAC4600717444_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_B40B82316B003D8B_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_3_C4EFD31239F98A71()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B40B82316B003D8B_METHOD_3_C4EFD31239F98A71_OFFSET))(this);
	}

	::System::Void Method_3_1DE63FE11FA0D5B4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B40B82316B003D8B_METHOD_3_1DE63FE11FA0D5B4_OFFSET))(this);
	}

	::System::Void Method_3_19FB5FBEA9EA66CD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B40B82316B003D8B_METHOD_3_19FB5FBEA9EA66CD_OFFSET))(this);
	}

	::System::Void Method_3_602B796CAD5DBEDB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_B40B82316B003D8B_METHOD_3_602B796CAD5DBEDB_OFFSET))(this, a1);
	}

	::System::Void Method_3_20CDC371ED71E5E2(::Class_3_B40B82316B003D8B_AnimatedItem* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_B40B82316B003D8B_AnimatedItem*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_B40B82316B003D8B_METHOD_3_20CDC371ED71E5E2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_B7839133A64B57AD(::Class_3_B40B82316B003D8B_AnimatedItem* a1, ::System::Int32 a2, ::System::Single a3, ::UnityEngine::Vector3& a4, ::UnityEngine::Quaternion& a5, ::UnityEngine::Vector3& a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_B40B82316B003D8B_AnimatedItem*, ::System::Int32, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_3_B40B82316B003D8B_METHOD_3_B7839133A64B57AD_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_3_026849FDEA98D0B8(::Class_3_B40B82316B003D8B_AnimatedItem* a1, ::Il2CppArray<::System::Single>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_B40B82316B003D8B_AnimatedItem*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_3_B40B82316B003D8B_METHOD_3_026849FDEA98D0B8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_4DE5ABBA5DD8133A(::Class_3_B40B82316B003D8B_AnimatedItem* a1, ::UnityEngine::Material* a2, ::UnityEngine::Material*& a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_B40B82316B003D8B_AnimatedItem*, ::UnityEngine::Material*, ::UnityEngine::Material*&))((::PBYTE)hIl2Cpp + CLASS_3_B40B82316B003D8B_METHOD_3_4DE5ABBA5DD8133A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_F3DD04EBF5C76BDB(::Class_3_B40B82316B003D8B_AnimatedItem* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_B40B82316B003D8B_AnimatedItem*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_B40B82316B003D8B_METHOD_3_F3DD04EBF5C76BDB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_591751B175E01F00(::Class_3_B40B82316B003D8B_AnimatedItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_B40B82316B003D8B_AnimatedItem*))((::PBYTE)hIl2Cpp + CLASS_3_B40B82316B003D8B_METHOD_3_591751B175E01F00_OFFSET))(this, a1);
	}

	::UnityEngine::Bounds Method_3_97EC28AD01095A44()
	{
		return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B40B82316B003D8B_METHOD_3_97EC28AD01095A44_OFFSET))(this);
	}

	::System::Void Method_3_6055A93732CC885D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B40B82316B003D8B_METHOD_3_6055A93732CC885D_OFFSET))(this);
	}

	::System::Void Method_3_DF7CEFC0E6C5FD0D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_B40B82316B003D8B_METHOD_3_DF7CEFC0E6C5FD0D_OFFSET))(this, a1);
	}

	::UnityEngine::Texture* Method_3_63FEA79849598753()
	{
		return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B40B82316B003D8B_METHOD_3_63FEA79849598753_OFFSET))(this);
	}

	::System::Void Method_3_D17EEEA18F875CD1(::UnityEngine::Texture* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + CLASS_3_B40B82316B003D8B_METHOD_3_D17EEEA18F875CD1_OFFSET))(this, a1);
	}

	::UnityEngine::ComputeShader* Method_3_CAA16B0E09F56EC2()
	{
		return ((::UnityEngine::ComputeShader*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B40B82316B003D8B_METHOD_3_CAA16B0E09F56EC2_OFFSET))(this);
	}

	::RPG::Client::BezierCurve* Method_3_93C5F707B1EFA292()
	{
		return ((::RPG::Client::BezierCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B40B82316B003D8B_METHOD_3_93C5F707B1EFA292_OFFSET))(this);
	}

	::RPG::Client::GPUTransformLoopAnim* Method_3_52539B863D789D1C()
	{
		return ((::RPG::Client::GPUTransformLoopAnim*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B40B82316B003D8B_METHOD_3_52539B863D789D1C_OFFSET))(this);
	}
};
