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

#define CLASS_3_B40B82316B003D8B_METHOD_3_19FB5FBEA9EA66CD_OFFSET UNITYSDK_OFFSET(0x19C09310)
#define CLASS_3_B40B82316B003D8B_METHOD_3_1DE63FE11FA0D5B4_OFFSET UNITYSDK_OFFSET(0x19C0EBF0)
#define CLASS_3_B40B82316B003D8B_METHOD_3_20CDC371ED71E5E2_OFFSET UNITYSDK_OFFSET(0x19C0BA30)
#define CLASS_3_B40B82316B003D8B_METHOD_3_237A2CEB4A7BFB76_OFFSET UNITYSDK_OFFSET(0x19C0C930)
#define CLASS_3_B40B82316B003D8B_METHOD_3_4DE5ABBA5DD8133A_OFFSET UNITYSDK_OFFSET(0x19C0E000)
#define CLASS_3_B40B82316B003D8B_METHOD_3_52539B863D789D1C_OFFSET UNITYSDK_OFFSET(0x19C090B0)
#define CLASS_3_B40B82316B003D8B_METHOD_3_591751B175E01F00_OFFSET UNITYSDK_OFFSET(0x19C0E560)
#define CLASS_3_B40B82316B003D8B_METHOD_3_602B796CAD5DBEDB_OFFSET UNITYSDK_OFFSET(0x19C0B810)
#define CLASS_3_B40B82316B003D8B_METHOD_3_6055A93732CC885D_OFFSET UNITYSDK_OFFSET(0x19C09670)
#define CLASS_3_B40B82316B003D8B_METHOD_3_63FEA79849598753_OFFSET UNITYSDK_OFFSET(0x19C0C6D0)
#define CLASS_3_B40B82316B003D8B_METHOD_3_704FAC4600717444_OFFSET UNITYSDK_OFFSET(0x19C09130)
#define CLASS_3_B40B82316B003D8B_METHOD_3_93C5F707B1EFA292_OFFSET UNITYSDK_OFFSET(0x19C0C790)
#define CLASS_3_B40B82316B003D8B_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x19C08EE0)
#define CLASS_3_B40B82316B003D8B_METHOD_3_97EC28AD01095A44_OFFSET UNITYSDK_OFFSET(0x19C0F480)
#define CLASS_3_B40B82316B003D8B_METHOD_3_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0x19C08F70)
#define CLASS_3_B40B82316B003D8B_METHOD_3_B7839133A64B57AD_OFFSET UNITYSDK_OFFSET(0x19C0EDD0)
#define CLASS_3_B40B82316B003D8B_METHOD_3_C4EFD31239F98A71_OFFSET UNITYSDK_OFFSET(0x19C0B1F0)
#define CLASS_3_B40B82316B003D8B_METHOD_3_CAA16B0E09F56EC2_OFFSET UNITYSDK_OFFSET(0x19C0F730)
#define CLASS_3_B40B82316B003D8B_METHOD_3_CF384CA2A0DB5DE4_OFFSET UNITYSDK_OFFSET(0x19C0E1E0)
#define CLASS_3_B40B82316B003D8B_METHOD_3_D17EEEA18F875CD1_OFFSET UNITYSDK_OFFSET(0x19C0C800)
#define CLASS_3_B40B82316B003D8B_METHOD_3_DF7CEFC0E6C5FD0D_OFFSET UNITYSDK_OFFSET(0x19C0F670)
#define CLASS_3_B40B82316B003D8B_TICK_OFFSET UNITYSDK_OFFSET(0x19C09A10)
#define CLASS_3_B40B82316B003D8B__CCTOR_OFFSET UNITYSDK_OFFSET(0x19C0FA30)
#define CLASS_3_B40B82316B003D8B__CTOR_OFFSET UNITYSDK_OFFSET(0x19C0F790)

inline static constexpr unsigned int Class_3_B40B82316B003D8B_TypeDefinitionIndex = 70288;

class Class_3_B40B82316B003D8B : public ::RPG::Client::TABehaviorBase
{
public:
	static ::System::String** StaticGet_DLPLGPICFNC()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_3_B40B82316B003D8B_TypeDefinitionIndex)->GetStaticField(0x5CFC0);
	}
	static ::UnityEngine::ComputeShader** StaticGet_EGDOCDDNBHI()
	{
		return (::UnityEngine::ComputeShader**)Il2CppClass::FromTypeDefinitionIndex(Class_3_B40B82316B003D8B_TypeDefinitionIndex)->GetStaticField(0x5CFC8);
	}
	// static const ::System::Int32 HCJPHCDPMEE = 0xA; // 0x0
	::System::Collections::Generic::Dictionary_2<::Class_3_B40B82316B003D8B_AnimatedItem*, ::UnityEngine::Material*>* KCABHDGHJOI; // 0x38
	::System::Collections::Generic::Dictionary_2<::Class_3_B40B82316B003D8B_AnimatedItem*, ::Il2CppArray<::System::Single>*>* EFCCPGPEGHM; // 0x40
	::System::Collections::Generic::Dictionary_2<::Class_3_B40B82316B003D8B_AnimatedItem*, ::Il2CppArray<::UnityEngine::Matrix4x4>*>* AELNHCFMIHG; // 0x48
	::System::Single DADEEMLDLNC; // 0x50
	::System::Boolean GFGGJHIEPMN; // 0x54
	::UnityEngine::Vector3 BCJIIOELICG; // 0x58
	::System::Int32 EENJHKEBPBJ; // 0x64
	::System::Int32 OJLAALDNFMM; // 0x68
	::System::Int32 CNAGCEIFFFO; // 0x6C
	::System::Int32 HMBFGOAJDEL; // 0x70
	::System::Int32 NNLIABGLMAP; // 0x74
	::UnityEngine::Quaternion AIIALNAMCLJ; // 0x78
	::System::Int32 IJEBBKHNMDE; // 0x88
	::System::Int32 LOJEIJMMLFJ; // 0x8C
	::System::Single JBJNJAIMFGD; // 0x90
	::System::Int32 GNKPALAHKIN; // 0x94
	::System::Int32 HDOGJOBHHGF; // 0x98
	::System::Int32 AFDELOKGNCB; // 0x9C
	::System::Int32 LFDJKLLBDNJ; // 0xA0
	::System::Int32 NEPNKDLPPGL; // 0xA4
	::System::Single HDHPNOOMAGE; // 0xA8
	::System::Int32 ENKLELJAAEO; // 0xAC

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

	::System::Void Method_3_237A2CEB4A7BFB76(::Class_3_B40B82316B003D8B_AnimatedItem* a1, ::Il2CppArray<::System::Single>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_B40B82316B003D8B_AnimatedItem*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_3_B40B82316B003D8B_METHOD_3_237A2CEB4A7BFB76_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_4DE5ABBA5DD8133A(::Class_3_B40B82316B003D8B_AnimatedItem* a1, ::UnityEngine::Material* a2, ::UnityEngine::Material*& a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_B40B82316B003D8B_AnimatedItem*, ::UnityEngine::Material*, ::UnityEngine::Material*&))((::PBYTE)hIl2Cpp + CLASS_3_B40B82316B003D8B_METHOD_3_4DE5ABBA5DD8133A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_CF384CA2A0DB5DE4(::Class_3_B40B82316B003D8B_AnimatedItem* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_B40B82316B003D8B_AnimatedItem*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_B40B82316B003D8B_METHOD_3_CF384CA2A0DB5DE4_OFFSET))(this, a1, a2);
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
