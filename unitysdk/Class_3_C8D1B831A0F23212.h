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

#define CLASS_3_C8D1B831A0F23212_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x127F4B70)
#define CLASS_3_C8D1B831A0F23212_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x127F5090)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x127F8CF0)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_0F68BB8F659534FC_OFFSET UNITYSDK_OFFSET(0x127F6320)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_1659BCB6D1A9FC34_OFFSET UNITYSDK_OFFSET(0x127F5120)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_17244FE20EF89B04_OFFSET UNITYSDK_OFFSET(0x127F8530)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_1C29F329446B030F_OFFSET UNITYSDK_OFFSET(0x127F6EB0)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_2E173CEF054660AF_OFFSET UNITYSDK_OFFSET(0x127F80B0)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x127F85F0)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_49AB361D7324E63A_OFFSET UNITYSDK_OFFSET(0x127F8B00)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_521898C224826215_OFFSET UNITYSDK_OFFSET(0x127F6870)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_5AEE27870320E10A_OFFSET UNITYSDK_OFFSET(0x127F78C0)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_724D2338ACD3E8A3_OFFSET UNITYSDK_OFFSET(0x127F7130)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_7E08EFCEB28F37EA_1_OFFSET UNITYSDK_OFFSET(0x127F8E70)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_7E08EFCEB28F37EA_OFFSET UNITYSDK_OFFSET(0x127F8AB0)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_919BC32C7F31A55F_OFFSET UNITYSDK_OFFSET(0x127F8ED0)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_9BD16B0F17F04BA9_OFFSET UNITYSDK_OFFSET(0x127F7B40)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_A0042105686D97E8_OFFSET UNITYSDK_OFFSET(0x127F8AA0)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_A74F5A60FA60DCDC_OFFSET UNITYSDK_OFFSET(0x127F8810)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x127F8020)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_BBC2AFCF04301CE6_OFFSET UNITYSDK_OFFSET(0x127F5900)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x127F5D50)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x127F6290)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0x127F7270)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_CA373AA1C7054598_4_OFFSET UNITYSDK_OFFSET(0x127F7830)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_CA373AA1C7054598_5_OFFSET UNITYSDK_OFFSET(0x127F7FE0)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_CA373AA1C7054598_6_OFFSET UNITYSDK_OFFSET(0x127F8A10)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x127F5CC0)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_CA6AD117DECD2B58_OFFSET UNITYSDK_OFFSET(0x127F7300)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_CA85150CEE3F23EB_OFFSET UNITYSDK_OFFSET(0x127F5DE0)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_E914F37E01BA0137_OFFSET UNITYSDK_OFFSET(0x127F5B80)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_F239777256F9BA8F_OFFSET UNITYSDK_OFFSET(0x127F8EC0)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_F716E0F70A83B170_1_OFFSET UNITYSDK_OFFSET(0x127F7180)
#define CLASS_3_C8D1B831A0F23212_METHOD_3_F716E0F70A83B170_OFFSET UNITYSDK_OFFSET(0x127F6DC0)
#define CLASS_3_C8D1B831A0F23212_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x127F46B0)
#define CLASS_3_C8D1B831A0F23212_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x127F5500)
#define CLASS_3_C8D1B831A0F23212_POSTPARTICLESYSTEMUPDATE_OFFSET UNITYSDK_OFFSET(0x127F50D0)
#define CLASS_3_C8D1B831A0F23212_START_OFFSET UNITYSDK_OFFSET(0x127F4540)
#define CLASS_3_C8D1B831A0F23212_UPDATE_OFFSET UNITYSDK_OFFSET(0x127F4F30)
#define CLASS_3_C8D1B831A0F23212__CCTOR_OFFSET UNITYSDK_OFFSET(0x127F58F0)
#define CLASS_3_C8D1B831A0F23212__CTOR_OFFSET UNITYSDK_OFFSET(0x127F58A0)

inline static constexpr unsigned int Class_3_C8D1B831A0F23212_TypeDefinitionIndex = 51795;

class Class_3_C8D1B831A0F23212 : public ::Class_2_40CD888D5D4FCB5B
{
public:
	static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet_Field_3_4()
	{
		return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_C8D1B831A0F23212_TypeDefinitionIndex)->GetStaticField(0x3B400);
	}
	static ::Class_3_C8D1B831A0F23212** StaticGet_Field_3_6()
	{
		return (::Class_3_C8D1B831A0F23212**)Il2CppClass::FromTypeDefinitionIndex(Class_3_C8D1B831A0F23212_TypeDefinitionIndex)->GetStaticField(0x3B408);
	}
	static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet_Field_3_3()
	{
		return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_C8D1B831A0F23212_TypeDefinitionIndex)->GetStaticField(0x3B410);
	}
	static ::System::Collections::Generic::List_1<::Class_1_5653692493FD7DBE*>** StaticGet_Field_3_2()
	{
		return (::System::Collections::Generic::List_1<::Class_1_5653692493FD7DBE*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_C8D1B831A0F23212_TypeDefinitionIndex)->GetStaticField(0x3B418);
	}
	static ::System::Boolean* StaticGet_Field_3_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_C8D1B831A0F23212_TypeDefinitionIndex)->GetStaticField(0xE8D0);
	}
	static ::Unity::Jobs::JobHandle* StaticGet_Field_3_0()
	{
		return (::Unity::Jobs::JobHandle*)Il2CppClass::FromTypeDefinitionIndex(Class_3_C8D1B831A0F23212_TypeDefinitionIndex)->GetStaticField(0xE8D8);
	}
	::Nap::NapECS::EcsFilter* Field_3_7; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* Field_3_5; // 0x28

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

	::System::Void Method_3_BBC2AFCF04301CE6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_BBC2AFCF04301CE6_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_E914F37E01BA0137(::Class_3_4875884AB352B34E* a1, ::Class_3_D6DA183EF60F02C8* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Class_3_4875884AB352B34E*, ::Class_3_D6DA183EF60F02C8*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_E914F37E01BA0137_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_3_CA85150CEE3F23EB(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_CA85150CEE3F23EB_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_3_0F68BB8F659534FC(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_0F68BB8F659534FC_OFFSET))(this, a1);
	}

	::System::Void Method_3_1C29F329446B030F(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_1C29F329446B030F_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_CA373AA1C7054598_3_OFFSET))(this);
	}

	static ::System::Boolean Method_3_521898C224826215(::Class_3_4875884AB352B34E* a1, ::Class_3_4A501B6E10772D84* a2, ::System::Boolean a3, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorStateInfo>* a4)
	{
		return ((::System::Boolean(*)(::Class_3_4875884AB352B34E*, ::Class_3_4A501B6E10772D84*, ::System::Boolean, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorStateInfo>*))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_521898C224826215_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_3_CA373AA1C7054598_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_CA373AA1C7054598_4_OFFSET))(this);
	}

	::System::Void Method_3_5AEE27870320E10A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_5AEE27870320E10A_OFFSET))(this);
	}

	static ::System::Void Method_3_9BD16B0F17F04BA9(::MoleMole::Battle::Entity* a1, ::Class_2_44D59DDDD1D4E4A6* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Class_2_44D59DDDD1D4E4A6*))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_9BD16B0F17F04BA9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_724D2338ACD3E8A3(::Class_3_4A501B6E10772D84* a1)
	{
		return ((::System::Void(*)(::Class_3_4A501B6E10772D84*))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_724D2338ACD3E8A3_OFFSET))(a1);
	}

	::System::Void Method_3_CA373AA1C7054598_5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_CA373AA1C7054598_5_OFFSET))(this);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_2E173CEF054660AF(::Class_3_4875884AB352B34E* a1, ::Class_3_4A501B6E10772D84* a2, ::System::Boolean a3, ::System::Int32 a4, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorStateInfo>* a5)
	{
		return ((::System::Boolean(*)(::Class_3_4875884AB352B34E*, ::Class_3_4A501B6E10772D84*, ::System::Boolean, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorStateInfo>*))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_2E173CEF054660AF_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_17244FE20EF89B04(::MoleMole::Battle::Entity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_17244FE20EF89B04_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_CA6AD117DECD2B58(::Class_3_F33F9DC5F4112336* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3, ::Class_3_4A501B6E10772D84* a4)
	{
		return ((::System::Boolean(*)(::Class_3_F33F9DC5F4112336*, ::UnityEngine::AnimatorStateInfo, ::System::Int32, ::Class_3_4A501B6E10772D84*))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_CA6AD117DECD2B58_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_3_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_4307B2A4B4A12C1A_OFFSET))(this);
	}

	static ::System::Boolean Method_3_A74F5A60FA60DCDC(::Class_3_4875884AB352B34E* a1, ::Class_3_4A501B6E10772D84* a2)
	{
		return ((::System::Boolean(*)(::Class_3_4875884AB352B34E*, ::Class_3_4A501B6E10772D84*))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_A74F5A60FA60DCDC_OFFSET))(a1, a2);
	}

	::System::Void Method_3_F716E0F70A83B170(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_F716E0F70A83B170_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598_6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_CA373AA1C7054598_6_OFFSET))(this);
	}

	static ::System::Void Method_3_A0042105686D97E8(::Class_3_C8D1B831A0F23212* a1)
	{
		return ((::System::Void(*)(::Class_3_C8D1B831A0F23212*))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_A0042105686D97E8_OFFSET))(a1);
	}

	::System::Void Method_3_7E08EFCEB28F37EA(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_7E08EFCEB28F37EA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_49AB361D7324E63A(::Class_3_4875884AB352B34E* a1, ::Class_3_D6DA183EF60F02C8* a2)
	{
		return ((::System::Void(*)(::Class_3_4875884AB352B34E*, ::Class_3_D6DA183EF60F02C8*))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_49AB361D7324E63A_OFFSET))(a1, a2);
	}

	::System::Void Method_3_1659BCB6D1A9FC34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_1659BCB6D1A9FC34_OFFSET))(this);
	}

	::System::Void Method_3_7E08EFCEB28F37EA_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_7E08EFCEB28F37EA_1_OFFSET))(this, a1);
	}

	static ::Class_3_C8D1B831A0F23212* Method_3_F239777256F9BA8F()
	{
		return ((::Class_3_C8D1B831A0F23212*(*)())((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_F239777256F9BA8F_OFFSET))();
	}

	static ::System::Void Method_3_919BC32C7F31A55F(::Class_1_B7E341C5F1A6F199* a1)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_919BC32C7F31A55F_OFFSET))(a1);
	}

	::System::Void Method_3_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_0865E94460F11643_OFFSET))(this);
	}

	::System::Void Method_3_F716E0F70A83B170_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_C8D1B831A0F23212_METHOD_3_F716E0F70A83B170_1_OFFSET))(this, a1);
	}
};
