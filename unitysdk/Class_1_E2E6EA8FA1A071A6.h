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
namespace UnityEngine { class Texture; }
namespace UnityEngine { class Transform; }

#define CLASS_1_E2E6EA8FA1A071A6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x176E7FB0)
#define CLASS_1_E2E6EA8FA1A071A6_METHOD_1_12BE22C06B351057_OFFSET UNITYSDK_OFFSET(0x176E74A0)
#define CLASS_1_E2E6EA8FA1A071A6_METHOD_1_2737134B8CCAE029_OFFSET UNITYSDK_OFFSET(0x176E6190)
#define CLASS_1_E2E6EA8FA1A071A6_METHOD_1_2CD02CB5F6AC0156_OFFSET UNITYSDK_OFFSET(0x176E5910)
#define CLASS_1_E2E6EA8FA1A071A6_METHOD_1_3633F1E1B7C3AA4D_OFFSET UNITYSDK_OFFSET(0x176E7D30)
#define CLASS_1_E2E6EA8FA1A071A6_METHOD_1_47E295756CEF8EC5_OFFSET UNITYSDK_OFFSET(0x176E82D0)
#define CLASS_1_E2E6EA8FA1A071A6_METHOD_1_4A996C75A3AFFD7E_OFFSET UNITYSDK_OFFSET(0x176E6B60)
#define CLASS_1_E2E6EA8FA1A071A6_METHOD_1_51C3B6728C421FAB_OFFSET UNITYSDK_OFFSET(0x176E8780)
#define CLASS_1_E2E6EA8FA1A071A6_METHOD_1_5BCE9210F4ACDD0B_OFFSET UNITYSDK_OFFSET(0x176E8000)
#define CLASS_1_E2E6EA8FA1A071A6_METHOD_1_5BF499DB6B3226E6_OFFSET UNITYSDK_OFFSET(0x176E6A50)
#define CLASS_1_E2E6EA8FA1A071A6_METHOD_1_9AF5681BC7C0DEF1_OFFSET UNITYSDK_OFFSET(0x176E6D90)
#define CLASS_1_E2E6EA8FA1A071A6_METHOD_1_9CE3056B66B7573D_OFFSET UNITYSDK_OFFSET(0x176E64D0)
#define CLASS_1_E2E6EA8FA1A071A6_METHOD_1_CFA60A71CF0EC8DF_OFFSET UNITYSDK_OFFSET(0x176E6840)
#define CLASS_1_E2E6EA8FA1A071A6_METHOD_1_D89C8C8F95667322_OFFSET UNITYSDK_OFFSET(0x176E5B50)
#define CLASS_1_E2E6EA8FA1A071A6_METHOD_1_D930B9B88E030E80_OFFSET UNITYSDK_OFFSET(0x176E65F0)
#define CLASS_1_E2E6EA8FA1A071A6_METHOD_1_DCE43D39BC6B3E29_OFFSET UNITYSDK_OFFSET(0x176E7150)
#define CLASS_1_E2E6EA8FA1A071A6_METHOD_1_E6D3C4C666E119D9_OFFSET UNITYSDK_OFFSET(0x176E7C20)
#define CLASS_1_E2E6EA8FA1A071A6_METHOD_1_E76A46153F73B863_OFFSET UNITYSDK_OFFSET(0x176E85C0)
#define CLASS_1_E2E6EA8FA1A071A6_METHOD_1_E82F923CA808CFCF_OFFSET UNITYSDK_OFFSET(0x176E6C90)
#define CLASS_1_E2E6EA8FA1A071A6_METHOD_1_F04D5959064B091B_OFFSET UNITYSDK_OFFSET(0x176E5BF0)
#define CLASS_1_E2E6EA8FA1A071A6_METHOD_1_F0A7C3FC61F8F7F3_OFFSET UNITYSDK_OFFSET(0x176E6F70)
#define CLASS_1_E2E6EA8FA1A071A6_METHOD_1_F7097473EC9DE578_OFFSET UNITYSDK_OFFSET(0x176E5670)
#define CLASS_1_E2E6EA8FA1A071A6_METHOD_1_F8F35CAAA21D6ACA_OFFSET UNITYSDK_OFFSET(0x176E7550)
#define CLASS_1_E2E6EA8FA1A071A6_METHOD_1_FEE7938AD36467E5_OFFSET UNITYSDK_OFFSET(0x176E79B0)
#define CLASS_1_E2E6EA8FA1A071A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x176E88F0)
#define CLASS_1_E2E6EA8FA1A071A6__CTOR_OFFSET UNITYSDK_OFFSET(0x176E54A0)

inline static constexpr unsigned int Class_1_E2E6EA8FA1A071A6_TypeDefinitionIndex = 80437;

class Class_1_E2E6EA8FA1A071A6 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_LMJPOMLNAJG()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E2E6EA8FA1A071A6_TypeDefinitionIndex)->GetStaticField(0x14F40);
	}
	// static const ::System::String* FMNHMAOJOIL; // 0x0
	// static const ::System::String* KNABIJOPHFE; // 0x0
	// static const ::System::String* EJHJELCIDJI; // 0x0
	// static const ::System::String* MFOJDDIDIFF; // 0x0
	// static const ::System::Int32 OLKODBGHJKM = 0x4; // 0x0
	// static const ::RPG::Client::B51Racing::CarSlotType JCMCCGNIALA; // 0x0
	::Il2CppArray<::UnityEngine::Texture*>* JMFOCJGFNDB; // 0x10
	::UnityEngine::GameObject* MIPBLBPFAHN; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::Client::B51Racing::CarSlotType, ::System::ValueTuple_2<::UnityEngine::GameObject*, ::UnityEngine::GameObject*>>* DEKIFDHJENM; // 0x20
	::System::Collections::Generic::Dictionary_2<::RPG::Client::B51Racing::CarSlotType, ::UnityEngine::Material*>* NNFPPGJJBDO; // 0x28
	::UnityEngine::GameObject* LAGMCOKAFNI; // 0x30
	::System::Collections::Generic::Dictionary_2<::RPG::Client::B51Racing::CarSlotType, ::System::String*>* MNAAOABJNBK; // 0x38
	::System::String* KPCBGLNNIPD; // 0x40
	::UnityEngine::Material* EPEDOBNKDLF; // 0x48
	::Il2CppArray<::UnityEngine::GameObject*>* OPMOMFEFAFP; // 0x50
	::UnityEngine::Color GLAMDOPKGIF; // 0x58
	::System::UInt32 FGDDLAMEBFP; // 0x68
	::System::Boolean NEOLELCAJEK; // 0x6C
	::System::Int32 FKBDOPJFBNI; // 0x70

	::System::Void _ctor(::UnityEngine::GameObject* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E2E6EA8FA1A071A6__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E2E6EA8FA1A071A6__CCTOR_OFFSET))();
	}

	::System::Void Method_1_F7097473EC9DE578(::Class_1_5AD3EC2EA1B1D5CD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5AD3EC2EA1B1D5CD*))((::PBYTE)hIl2Cpp + CLASS_1_E2E6EA8FA1A071A6_METHOD_1_F7097473EC9DE578_OFFSET))(this, a1);
	}

	::System::Void Method_1_F04D5959064B091B(::RPG::Client::B51Racing::CarSlotType a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::CarSlotType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E2E6EA8FA1A071A6_METHOD_1_F04D5959064B091B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CFA60A71CF0EC8DF(::RPG::Client::B51Racing::CarSlotType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::CarSlotType))((::PBYTE)hIl2Cpp + CLASS_1_E2E6EA8FA1A071A6_METHOD_1_CFA60A71CF0EC8DF_OFFSET))(this, a1);
	}

	::System::Void Method_1_D930B9B88E030E80(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E2E6EA8FA1A071A6_METHOD_1_D930B9B88E030E80_OFFSET))(this, a1);
	}

	::System::Void Method_1_2737134B8CCAE029(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E2E6EA8FA1A071A6_METHOD_1_2737134B8CCAE029_OFFSET))(this, a1);
	}

	::System::Void Method_1_9CE3056B66B7573D(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E2E6EA8FA1A071A6_METHOD_1_9CE3056B66B7573D_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2E6EA8FA1A071A6_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_5BCE9210F4ACDD0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2E6EA8FA1A071A6_METHOD_1_5BCE9210F4ACDD0B_OFFSET))(this);
	}

	::System::Void Method_1_FEE7938AD36467E5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2E6EA8FA1A071A6_METHOD_1_FEE7938AD36467E5_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_5BF499DB6B3226E6(::RPG::Client::B51Racing::CarSlotType a1)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::RPG::Client::B51Racing::CarSlotType))((::PBYTE)hIl2Cpp + CLASS_1_E2E6EA8FA1A071A6_METHOD_1_5BF499DB6B3226E6_OFFSET))(this, a1);
	}

	static ::UnityEngine::Transform* Method_1_E76A46153F73B863(::UnityEngine::Transform* a1, ::System::String* a2)
	{
		return ((::UnityEngine::Transform*(*)(::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E2E6EA8FA1A071A6_METHOD_1_E76A46153F73B863_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_4A996C75A3AFFD7E(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E2E6EA8FA1A071A6_METHOD_1_4A996C75A3AFFD7E_OFFSET))(a1);
	}

	static ::UnityEngine::Material* Method_1_E82F923CA808CFCF(::System::String* a1, ::System::String* a2)
	{
		return ((::UnityEngine::Material*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E2E6EA8FA1A071A6_METHOD_1_E82F923CA808CFCF_OFFSET))(a1, a2);
	}

	::System::Void Method_1_E6D3C4C666E119D9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2E6EA8FA1A071A6_METHOD_1_E6D3C4C666E119D9_OFFSET))(this);
	}

	static ::System::Void Method_1_9AF5681BC7C0DEF1(::UnityEngine::GameObject* a1, ::UnityEngine::Material* a2)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_1_E2E6EA8FA1A071A6_METHOD_1_9AF5681BC7C0DEF1_OFFSET))(a1, a2);
	}

	::System::Void Method_1_3633F1E1B7C3AA4D(::UnityEngine::Color a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_E2E6EA8FA1A071A6_METHOD_1_3633F1E1B7C3AA4D_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_F0A7C3FC61F8F7F3(::UnityEngine::GameObject* a1, ::UnityEngine::Color a2)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_E2E6EA8FA1A071A6_METHOD_1_F0A7C3FC61F8F7F3_OFFSET))(a1, a2);
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

	static ::System::Void Method_1_51C3B6728C421FAB(::UnityEngine::GameObject* a1, ::UnityEngine::Texture* a2)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + CLASS_1_E2E6EA8FA1A071A6_METHOD_1_51C3B6728C421FAB_OFFSET))(a1, a2);
	}

	::System::Void Method_1_2CD02CB5F6AC0156()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2E6EA8FA1A071A6_METHOD_1_2CD02CB5F6AC0156_OFFSET))(this);
	}

	::System::Void Method_1_47E295756CEF8EC5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2E6EA8FA1A071A6_METHOD_1_47E295756CEF8EC5_OFFSET))(this);
	}
};
