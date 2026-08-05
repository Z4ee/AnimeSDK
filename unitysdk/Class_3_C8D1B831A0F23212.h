#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_5653692493FD7DBE;
class Class_1_B7E341C5F1A6F199;
class Class_2_44D59DDDD1D4E4A6;
class Class_3_4875884AB352B34E;
class Class_3_4A501B6E10772D84;
class Class_3_D6DA183EF60F02C8;
class Class_3_F33F9DC5F4112336;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_C8D1B831A0F23212_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x148D9BC0)
#define CLASS_3_C8D1B831A0F23212_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x148DA0E0)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x148DDF10)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_0F68BB8F659534FC_OFFSET UNITYSDK_OFFSET(0x148DC940)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_1659BCB6D1A9FC34_OFFSET UNITYSDK_OFFSET(0x148DA170)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_17244FE20EF89B04_OFFSET UNITYSDK_OFFSET(0x148DDC60)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_1C29F329446B030F_OFFSET UNITYSDK_OFFSET(0x148DD7F0)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_2900BEA588B29C26_OFFSET UNITYSDK_OFFSET(0x148DB8A0)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_2E173CEF054660AF_OFFSET UNITYSDK_OFFSET(0x148DA940)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x148DC6E0)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_49AB361D7324E63A_OFFSET UNITYSDK_OFFSET(0x148DDA70)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_521898C224826215_OFFSET UNITYSDK_OFFSET(0x148DCE90)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_5AEE27870320E10A_OFFSET UNITYSDK_OFFSET(0x148DB3A0)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_5D55E55B9F239171_OFFSET UNITYSDK_OFFSET(0x148DBE80)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_724D2338ACD3E8A3_OFFSET UNITYSDK_OFFSET(0x148DD480)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_807F2A52783217B1_OFFSET UNITYSDK_OFFSET(0x148DB620)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_919BC32C7F31A55F_OFFSET UNITYSDK_OFFSET(0x148DDDB0)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_A0042105686D97E8_OFFSET UNITYSDK_OFFSET(0x148DD470)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_A74F5A60FA60DCDC_OFFSET UNITYSDK_OFFSET(0x148DD4D0)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_AA17958540C0BCF3_1_OFFSET UNITYSDK_OFFSET(0x148DC510)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_AA17958540C0BCF3_OFFSET UNITYSDK_OFFSET(0x148DC3D0)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x148DD6D0)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x148DC330)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x148DC650)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0x148DD3E0)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_CA373AA1C7054598_4_OFFSET UNITYSDK_OFFSET(0x148DD760)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_CA373AA1C7054598_5_OFFSET UNITYSDK_OFFSET(0x148DC900)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_CA373AA1C7054598_6_OFFSET UNITYSDK_OFFSET(0x148DDD20)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x148DB310)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_CA6AD117DECD2B58_OFFSET UNITYSDK_OFFSET(0x148DADC0)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_E914F37E01BA0137_OFFSET UNITYSDK_OFFSET(0x148DBD40)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_F239777256F9BA8F_OFFSET UNITYSDK_OFFSET(0x148DC3C0)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_F716E0F70A83B170_1_OFFSET UNITYSDK_OFFSET(0x148DC420)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_F716E0F70A83B170_OFFSET UNITYSDK_OFFSET(0x148DC560)
#define CLASS_3_C8D1B831A0F23212_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x148D9710)
#define CLASS_3_C8D1B831A0F23212_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x148DA550)
#define CLASS_3_C8D1B831A0F23212_POSTPARTICLESYSTEMUPDATE_OFFSET UNITYSDK_OFFSET(0x148DA120)
#define CLASS_3_C8D1B831A0F23212_START_OFFSET UNITYSDK_OFFSET(0x148D95A0)
#define CLASS_3_C8D1B831A0F23212_UPDATE_OFFSET UNITYSDK_OFFSET(0x148D9F80)
#define CLASS_3_C8D1B831A0F23212__CCTOR_OFFSET UNITYSDK_OFFSET(0x148DA930)
#define CLASS_3_C8D1B831A0F23212__CTOR_OFFSET UNITYSDK_OFFSET(0x148DA8E0)

inline static constexpr unsigned int Class_3_C8D1B831A0F23212_TypeDefinitionIndex = 60278;

class Class_3_C8D1B831A0F23212 : public ::Class_2_40CD888D5D4FCB5B
{
public:
	static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet_Field_3_6()
	{
		return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_C8D1B831A0F23212_TypeDefinitionIndex)->GetStaticField(0x35110);
	}
	static ::System::Collections::Generic::List_1<::Class_1_5653692493FD7DBE*>** StaticGet_Field_3_7()
	{
		return (::System::Collections::Generic::List_1<::Class_1_5653692493FD7DBE*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_C8D1B831A0F23212_TypeDefinitionIndex)->GetStaticField(0x35118);
	}
	static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet_Field_3_5()
	{
		return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_C8D1B831A0F23212_TypeDefinitionIndex)->GetStaticField(0x35120);
	}
	static ::Class_3_C8D1B831A0F23212** StaticGet_Field_3_11()
	{
		return (::Class_3_C8D1B831A0F23212**)Il2CppClass::FromTypeDefinitionIndex(Class_3_C8D1B831A0F23212_TypeDefinitionIndex)->GetStaticField(0x35128);
	}
	static ::System::Boolean* StaticGet_Field_3_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_C8D1B831A0F23212_TypeDefinitionIndex)->GetStaticField(0xC4F0);
	}
	static ::Unity::Jobs::JobHandle* StaticGet_Field_3_1()
	{
		return (::Unity::Jobs::JobHandle*)Il2CppClass::FromTypeDefinitionIndex(Class_3_C8D1B831A0F23212_TypeDefinitionIndex)->GetStaticField(0xC4F8);
	}
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* Field_3_4; // 0x20
	::Nap::NapECS::EcsFilter* Field_3_10; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212__CCTOR_OFFSET))();
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_START_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_ONDESTROY_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_UPDATE_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_LATEUPDATE_OFFSET))(this);
	}

	::System::Void PostParticleSystemUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_POSTPARTICLESYSTEMUPDATE_OFFSET))(this);
	}

	::System::Void PostLateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_POSTLATEUPDATE_OFFSET))(this);
	}

	static ::System::Boolean Method_3_2E173CEF054660AF(::Class_3_4875884AB352B34E* a1, ::Class_3_4A501B6E10772D84* a2, ::System::Boolean a3, ::System::Int32 a4, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorStateInfo>* a5)
	{
		return ((::System::Boolean(*)(::Class_3_4875884AB352B34E*, ::Class_3_4A501B6E10772D84*, ::System::Boolean, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorStateInfo>*))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_2E173CEF054660AF_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_5AEE27870320E10A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_5AEE27870320E10A_OFFSET))(this);
	}

	static ::System::Void Method_3_E914F37E01BA0137(::Class_3_4875884AB352B34E* a1, ::Class_3_D6DA183EF60F02C8* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Class_3_4875884AB352B34E*, ::Class_3_D6DA183EF60F02C8*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_E914F37E01BA0137_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_5D55E55B9F239171(::MoleMole::Battle::Entity* a1, ::Class_2_44D59DDDD1D4E4A6* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Class_2_44D59DDDD1D4E4A6*))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_5D55E55B9F239171_OFFSET))(a1, a2);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	static ::Class_3_C8D1B831A0F23212* Method_3_F239777256F9BA8F()
	{
		return ((::Class_3_C8D1B831A0F23212*(*)())((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_F239777256F9BA8F_OFFSET))();
	}

	::System::Void Method_3_AA17958540C0BCF3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_AA17958540C0BCF3_OFFSET))(this, a1);
	}

	::System::Void Method_3_AA17958540C0BCF3_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_AA17958540C0BCF3_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_3_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_3_0F68BB8F659534FC(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_0F68BB8F659534FC_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_CA373AA1C7054598_3_OFFSET))(this);
	}

	static ::System::Void Method_3_A0042105686D97E8(::Class_3_C8D1B831A0F23212* a1)
	{
		return ((::System::Void(*)(::Class_3_C8D1B831A0F23212*))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_A0042105686D97E8_OFFSET))(a1);
	}

	static ::System::Void Method_3_724D2338ACD3E8A3(::Class_3_4A501B6E10772D84* a1)
	{
		return ((::System::Void(*)(::Class_3_4A501B6E10772D84*))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_724D2338ACD3E8A3_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_A74F5A60FA60DCDC(::Class_3_4875884AB352B34E* a1, ::Class_3_4A501B6E10772D84* a2)
	{
		return ((::System::Boolean(*)(::Class_3_4875884AB352B34E*, ::Class_3_4A501B6E10772D84*))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_A74F5A60FA60DCDC_OFFSET))(a1, a2);
	}

	::System::Void Method_3_2900BEA588B29C26(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_2900BEA588B29C26_OFFSET))(this, a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_CA373AA1C7054598_4_OFFSET))(this);
	}

	::System::Void Method_3_1C29F329446B030F(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_1C29F329446B030F_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_521898C224826215(::Class_3_4875884AB352B34E* a1, ::Class_3_4A501B6E10772D84* a2, ::System::Boolean a3, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorStateInfo>* a4)
	{
		return ((::System::Boolean(*)(::Class_3_4875884AB352B34E*, ::Class_3_4A501B6E10772D84*, ::System::Boolean, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorStateInfo>*))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_521898C224826215_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_3_F716E0F70A83B170(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_F716E0F70A83B170_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_49AB361D7324E63A(::Class_3_4875884AB352B34E* a1, ::Class_3_D6DA183EF60F02C8* a2)
	{
		return ((::System::Void(*)(::Class_3_4875884AB352B34E*, ::Class_3_D6DA183EF60F02C8*))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_49AB361D7324E63A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_17244FE20EF89B04(::MoleMole::Battle::Entity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_17244FE20EF89B04_OFFSET))(a1, a2);
	}

	::System::Void Method_3_CA373AA1C7054598_5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_CA373AA1C7054598_5_OFFSET))(this);
	}

	::System::Void Method_3_F716E0F70A83B170_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_F716E0F70A83B170_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598_6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_CA373AA1C7054598_6_OFFSET))(this);
	}

	::System::Void Method_3_807F2A52783217B1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_807F2A52783217B1_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_919BC32C7F31A55F(::Class_1_B7E341C5F1A6F199* a1)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_919BC32C7F31A55F_OFFSET))(a1);
	}

	::System::Void Method_3_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_0865E94460F11643_OFFSET))(this);
	}

	::System::Void Method_3_1659BCB6D1A9FC34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_1659BCB6D1A9FC34_OFFSET))(this);
	}

	static ::System::Boolean Method_3_CA6AD117DECD2B58(::Class_3_F33F9DC5F4112336* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3, ::Class_3_4A501B6E10772D84* a4)
	{
		return ((::System::Boolean(*)(::Class_3_F33F9DC5F4112336*, ::UnityEngine::AnimatorStateInfo, ::System::Int32, ::Class_3_4A501B6E10772D84*))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_CA6AD117DECD2B58_OFFSET))(a1, a2, a3, a4);
	}
};
