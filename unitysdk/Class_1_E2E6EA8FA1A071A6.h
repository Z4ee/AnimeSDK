#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/B51Racing/CarSlotType.h"
#include "unitysdk/RPG/GameCore/B51RacingPartType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_5AD3EC2EA1B1D5CD;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class Transform; }

#define CLASS_1_E2E6EA8FA1A071A6_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBCE7C00)
#define CLASS_1_E2E6EA8FA1A071A6_METHOD_1_06976DABA4C1D46A_OFFSET UNITYSDK_OFFSET(0xBCE6520)
#define CLASS_1_E2E6EA8FA1A071A6_METHOD_1_06C39E6456363849_OFFSET UNITYSDK_OFFSET(0xBCE5E20)
#define CLASS_1_E2E6EA8FA1A071A6_METHOD_1_0D38B229BE724551_OFFSET UNITYSDK_OFFSET(0xBCE6430)
#define CLASS_1_E2E6EA8FA1A071A6_METHOD_1_0ED1963A672FB61E_OFFSET UNITYSDK_OFFSET(0xBCE6B00)
#define CLASS_1_E2E6EA8FA1A071A6_METHOD_1_12BE22C06B351057_OFFSET UNITYSDK_OFFSET(0xBCE6F30)
#define CLASS_1_E2E6EA8FA1A071A6_METHOD_1_1AA6DF5C5397283B_OFFSET UNITYSDK_OFFSET(0xBCE6240)
#define CLASS_1_E2E6EA8FA1A071A6_METHOD_1_2CD02CB5F6AC0156_OFFSET UNITYSDK_OFFSET(0xBCE5150)
#define CLASS_1_E2E6EA8FA1A071A6_METHOD_1_32B6D9C752517B2F_OFFSET UNITYSDK_OFFSET(0xBCE5430)
#define CLASS_1_E2E6EA8FA1A071A6_METHOD_1_47E295756CEF8EC5_OFFSET UNITYSDK_OFFSET(0xBCE7F30)
#define CLASS_1_E2E6EA8FA1A071A6_METHOD_1_4830558CB3168777_OFFSET UNITYSDK_OFFSET(0xBCE66F0)
#define CLASS_1_E2E6EA8FA1A071A6_METHOD_1_531820BC1A24DD85_OFFSET UNITYSDK_OFFSET(0xBCE83C0)
#define CLASS_1_E2E6EA8FA1A071A6_METHOD_1_74B606B7F04F3BC3_OFFSET UNITYSDK_OFFSET(0xBCE78E0)
#define CLASS_1_E2E6EA8FA1A071A6_METHOD_1_8422ABC65E83BF12_OFFSET UNITYSDK_OFFSET(0xBCE6050)
#define CLASS_1_E2E6EA8FA1A071A6_METHOD_1_8C104BCB4F4DD074_OFFSET UNITYSDK_OFFSET(0xBCE6620)
#define CLASS_1_E2E6EA8FA1A071A6_METHOD_1_8C883E690E4AB7C4_OFFSET UNITYSDK_OFFSET(0xBCE7440)
#define CLASS_1_E2E6EA8FA1A071A6_METHOD_1_924C62BE8591D2FD_OFFSET UNITYSDK_OFFSET(0xBCE79A0)
#define CLASS_1_E2E6EA8FA1A071A6_METHOD_1_9CE3056B66B7573D_OFFSET UNITYSDK_OFFSET(0xBCE5CF0)
#define CLASS_1_E2E6EA8FA1A071A6_METHOD_1_9E38127F40B34F1F_1_OFFSET UNITYSDK_OFFSET(0xBCE79F0)
#define CLASS_1_E2E6EA8FA1A071A6_METHOD_1_9E38127F40B34F1F_OFFSET UNITYSDK_OFFSET(0xBCE7C50)
#define CLASS_1_E2E6EA8FA1A071A6_METHOD_1_B2E4ED44D097E972_OFFSET UNITYSDK_OFFSET(0xBCE4EF0)
#define CLASS_1_E2E6EA8FA1A071A6_METHOD_1_C4991E45D3C772EA_OFFSET UNITYSDK_OFFSET(0xBCE6950)
#define CLASS_1_E2E6EA8FA1A071A6_METHOD_1_C72B925A491E9859_OFFSET UNITYSDK_OFFSET(0xBCE76A0)
#define CLASS_1_E2E6EA8FA1A071A6_METHOD_1_D89C8C8F95667322_OFFSET UNITYSDK_OFFSET(0xBCE5390)
#define CLASS_1_E2E6EA8FA1A071A6_METHOD_1_DCE43D39BC6B3E29_OFFSET UNITYSDK_OFFSET(0xBCE6BE0)
#define CLASS_1_E2E6EA8FA1A071A6_METHOD_1_DFAAD42DEA984B65_OFFSET UNITYSDK_OFFSET(0xBCE5990)
#define CLASS_1_E2E6EA8FA1A071A6_METHOD_1_E8D184655522851A_OFFSET UNITYSDK_OFFSET(0xBCE8220)
#define CLASS_1_E2E6EA8FA1A071A6_METHOD_1_F8F35CAAA21D6ACA_OFFSET UNITYSDK_OFFSET(0xBCE6FE0)
#define CLASS_1_E2E6EA8FA1A071A6__CCTOR_OFFSET UNITYSDK_OFFSET(0xBCE8500)
#define CLASS_1_E2E6EA8FA1A071A6__CTOR_OFFSET UNITYSDK_OFFSET(0xBCE4CD0)

inline static constexpr unsigned int Class_1_E2E6EA8FA1A071A6_TypeDefinitionIndex = 81765;

class Class_1_E2E6EA8FA1A071A6 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_LMJPOMLNAJG()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E2E6EA8FA1A071A6_TypeDefinitionIndex)->GetStaticField(0x12990);
	}
	// static const ::System::String* FMNHMAOJOIL; // 0x0
	// static const ::System::String* KNABIJOPHFE; // 0x0
	// static const ::System::String* EJHJELCIDJI; // 0x0
	// static const ::System::String* MFOJDDIDIFF; // 0x0
	// static const ::System::Int32 OLKODBGHJKM = 0x4; // 0x0
	// static const ::RPG::Client::B51Racing::CarSlotType JCMCCGNIALA; // 0x0
	::UnityEngine::Material* EPEDOBNKDLF; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::Client::B51Racing::CarSlotType, ::System::ValueTuple_2<::UnityEngine::GameObject*, ::UnityEngine::GameObject*>>* DEKIFDHJENM; // 0x18
	::Il2CppArray<::UnityEngine::Texture*>* JMFOCJGFNDB; // 0x20
	::UnityEngine::GameObject* MIPBLBPFAHN; // 0x28
	::System::Collections::Generic::Dictionary_2<::RPG::Client::B51Racing::CarSlotType, ::System::String*>* MNAAOABJNBK; // 0x30
	::System::String* KPCBGLNNIPD; // 0x38
	::Il2CppArray<::UnityEngine::GameObject*>* OPMOMFEFAFP; // 0x40
	::System::Collections::Generic::Dictionary_2<::RPG::Client::B51Racing::CarSlotType, ::UnityEngine::Material*>* NNFPPGJJBDO; // 0x48
	::UnityEngine::GameObject* LAGMCOKAFNI; // 0x50
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::UnityEngine::Material*>* AEIGNJDCKDN; // 0x58
	::System::UInt32 FGDDLAMEBFP; // 0x60
	::System::Int32 FKBDOPJFBNI; // 0x64
	::UnityEngine::Color GLAMDOPKGIF; // 0x68
	::System::Boolean NEOLELCAJEK; // 0x78

	::System::Void _ctor(::UnityEngine::GameObject* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E2E6EA8FA1A071A6__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E2E6EA8FA1A071A6__CCTOR_OFFSET))();
	}

	::System::Void Method_1_B2E4ED44D097E972(::Class_1_5AD3EC2EA1B1D5CD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5AD3EC2EA1B1D5CD*))((::PBYTE)hIl2Cpp + CLASS_1_E2E6EA8FA1A071A6_METHOD_1_B2E4ED44D097E972_OFFSET))(this, a1);
	}

	::System::Void Method_1_32B6D9C752517B2F(::RPG::Client::B51Racing::CarSlotType a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::CarSlotType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E2E6EA8FA1A071A6_METHOD_1_32B6D9C752517B2F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1AA6DF5C5397283B(::RPG::Client::B51Racing::CarSlotType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::CarSlotType))((::PBYTE)hIl2Cpp + CLASS_1_E2E6EA8FA1A071A6_METHOD_1_1AA6DF5C5397283B_OFFSET))(this, a1);
	}

	::System::Void Method_1_06C39E6456363849(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E2E6EA8FA1A071A6_METHOD_1_06C39E6456363849_OFFSET))(this, a1);
	}

	::System::Void Method_1_DFAAD42DEA984B65(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E2E6EA8FA1A071A6_METHOD_1_DFAAD42DEA984B65_OFFSET))(this, a1);
	}

	::System::Void Method_1_9CE3056B66B7573D(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E2E6EA8FA1A071A6_METHOD_1_9CE3056B66B7573D_OFFSET))(this, a1);
	}

	::System::Void Method_1_924C62BE8591D2FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2E6EA8FA1A071A6_METHOD_1_924C62BE8591D2FD_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2E6EA8FA1A071A6_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_9E38127F40B34F1F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2E6EA8FA1A071A6_METHOD_1_9E38127F40B34F1F_OFFSET))(this);
	}

	::System::Void Method_1_C72B925A491E9859()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2E6EA8FA1A071A6_METHOD_1_C72B925A491E9859_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_0D38B229BE724551(::RPG::Client::B51Racing::CarSlotType a1)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::RPG::Client::B51Racing::CarSlotType))((::PBYTE)hIl2Cpp + CLASS_1_E2E6EA8FA1A071A6_METHOD_1_0D38B229BE724551_OFFSET))(this, a1);
	}

	static ::UnityEngine::Transform* Method_1_E8D184655522851A(::UnityEngine::Transform* a1, ::System::String* a2)
	{
		return ((::UnityEngine::Transform*(*)(::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E2E6EA8FA1A071A6_METHOD_1_E8D184655522851A_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_06976DABA4C1D46A(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E2E6EA8FA1A071A6_METHOD_1_06976DABA4C1D46A_OFFSET))(a1);
	}

	static ::UnityEngine::Material* Method_1_8C104BCB4F4DD074(::System::String* a1, ::System::String* a2)
	{
		return ((::UnityEngine::Material*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E2E6EA8FA1A071A6_METHOD_1_8C104BCB4F4DD074_OFFSET))(a1, a2);
	}

	::System::Void Method_1_74B606B7F04F3BC3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2E6EA8FA1A071A6_METHOD_1_74B606B7F04F3BC3_OFFSET))(this);
	}

	::System::Void Method_1_4830558CB3168777(::UnityEngine::GameObject* a1, ::UnityEngine::Material* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_1_E2E6EA8FA1A071A6_METHOD_1_4830558CB3168777_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9E38127F40B34F1F_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2E6EA8FA1A071A6_METHOD_1_9E38127F40B34F1F_1_OFFSET))(this);
	}

	::System::Void Method_1_0ED1963A672FB61E(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_E2E6EA8FA1A071A6_METHOD_1_0ED1963A672FB61E_OFFSET))(this, a1);
	}

	::System::Void Method_1_8C883E690E4AB7C4(::UnityEngine::Color a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_E2E6EA8FA1A071A6_METHOD_1_8C883E690E4AB7C4_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_C4991E45D3C772EA(::UnityEngine::GameObject* a1, ::UnityEngine::Color a2)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_E2E6EA8FA1A071A6_METHOD_1_C4991E45D3C772EA_OFFSET))(a1, a2);
	}

	static ::System::Nullable_1<::RPG::Client::B51Racing::CarSlotType> Method_1_D89C8C8F95667322(::RPG::GameCore::B51RacingPartType a1)
	{
		return ((::System::Nullable_1<::RPG::Client::B51Racing::CarSlotType>(*)(::RPG::GameCore::B51RacingPartType))((::PBYTE)hIl2Cpp + CLASS_1_E2E6EA8FA1A071A6_METHOD_1_D89C8C8F95667322_OFFSET))(a1);
	}

	static ::System::Void Method_1_12BE22C06B351057(::System::UInt32 a1, ::System::Boolean& a2, ::System::Int32& a3, ::System::Int32& a4)
	{
		return ((::System::Void(*)(::System::UInt32, ::System::Boolean&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_E2E6EA8FA1A071A6_METHOD_1_12BE22C06B351057_OFFSET))(a1, a2, a3, a4);
	}

	::System::Boolean Method_1_DCE43D39BC6B3E29()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2E6EA8FA1A071A6_METHOD_1_DCE43D39BC6B3E29_OFFSET))(this);
	}

	::System::Void Method_1_F8F35CAAA21D6ACA(::System::Int32 a1, ::System::String* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E2E6EA8FA1A071A6_METHOD_1_F8F35CAAA21D6ACA_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void Method_1_531820BC1A24DD85(::UnityEngine::GameObject* a1, ::UnityEngine::Texture* a2)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + CLASS_1_E2E6EA8FA1A071A6_METHOD_1_531820BC1A24DD85_OFFSET))(a1, a2);
	}

	::System::Void Method_1_2CD02CB5F6AC0156()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2E6EA8FA1A071A6_METHOD_1_2CD02CB5F6AC0156_OFFSET))(this);
	}

	::System::Void Method_1_47E295756CEF8EC5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2E6EA8FA1A071A6_METHOD_1_47E295756CEF8EC5_OFFSET))(this);
	}

	::System::Void Method_1_8422ABC65E83BF12(::Class_1_5AD3EC2EA1B1D5CD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5AD3EC2EA1B1D5CD*))((::PBYTE)hIl2Cpp + CLASS_1_E2E6EA8FA1A071A6_METHOD_1_8422ABC65E83BF12_OFFSET))(this, a1);
	}
};
