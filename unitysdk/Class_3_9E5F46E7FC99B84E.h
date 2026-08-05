#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/MoleMole/Config/GuidePoint_AutoGenStrategy.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_E319123DCDD91C39;
class Class_3_32CD10484486A703;
namespace MoleMole { class UIInLevelGuideChildWindowController; }
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_9E5F46E7FC99B84E_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x13EC1FD0)
#define CLASS_3_9E5F46E7FC99B84E_METHOD_3_0253157EDF1A98D6_OFFSET UNITYSDK_OFFSET(0x13EC4900)
#define CLASS_3_9E5F46E7FC99B84E_METHOD_3_025C10A50003DFAB_OFFSET UNITYSDK_OFFSET(0x13EC2390)
#define CLASS_3_9E5F46E7FC99B84E_METHOD_3_138FB0876437E13A_OFFSET UNITYSDK_OFFSET(0x13EC3C40)
#define CLASS_3_9E5F46E7FC99B84E_METHOD_3_3E5C2F618819AA49_OFFSET UNITYSDK_OFFSET(0x13EC3680)
#define CLASS_3_9E5F46E7FC99B84E_METHOD_3_46E7892625173B17_OFFSET UNITYSDK_OFFSET(0x13EC2C30)
#define CLASS_3_9E5F46E7FC99B84E_METHOD_3_526DE5EF5895AF0D_OFFSET UNITYSDK_OFFSET(0x13EC4DD0)
#define CLASS_3_9E5F46E7FC99B84E_METHOD_3_544ADB79D0703036_OFFSET UNITYSDK_OFFSET(0x13EC4F10)
#define CLASS_3_9E5F46E7FC99B84E_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x13EC3F80)
#define CLASS_3_9E5F46E7FC99B84E_METHOD_3_7193A8D2BD222E73_OFFSET UNITYSDK_OFFSET(0x13EC47D0)
#define CLASS_3_9E5F46E7FC99B84E_METHOD_3_85D0FC6586C8F005_OFFSET UNITYSDK_OFFSET(0x13EC3AB0)
#define CLASS_3_9E5F46E7FC99B84E_METHOD_3_8CC7428A4822B88C_OFFSET UNITYSDK_OFFSET(0x13EC3340)
#define CLASS_3_9E5F46E7FC99B84E_METHOD_3_9A0D48D7EADC0B81_OFFSET UNITYSDK_OFFSET(0x13EC2580)
#define CLASS_3_9E5F46E7FC99B84E_METHOD_3_9D98D4947F30AE20_OFFSET UNITYSDK_OFFSET(0x13EC3020)
#define CLASS_3_9E5F46E7FC99B84E_METHOD_3_A26642ECF44B0929_OFFSET UNITYSDK_OFFSET(0x13EC4250)
#define CLASS_3_9E5F46E7FC99B84E_METHOD_3_AA7B5EEAC4068D02_OFFSET UNITYSDK_OFFSET(0x13EC5AC0)
#define CLASS_3_9E5F46E7FC99B84E_METHOD_3_AC9471A0B9837F12_OFFSET UNITYSDK_OFFSET(0x13EC5A20)
#define CLASS_3_9E5F46E7FC99B84E_METHOD_3_B68B05DC20355C9B_OFFSET UNITYSDK_OFFSET(0x13EC2FB0)
#define CLASS_3_9E5F46E7FC99B84E_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x13EC3BB0)
#define CLASS_3_9E5F46E7FC99B84E_METHOD_3_C5A45EC347147FEF_OFFSET UNITYSDK_OFFSET(0x13EC4670)
#define CLASS_3_9E5F46E7FC99B84E_METHOD_3_C91720EF8A3C5FAE_OFFSET UNITYSDK_OFFSET(0x13EC2B30)
#define CLASS_3_9E5F46E7FC99B84E_METHOD_3_C9CA821467649109_OFFSET UNITYSDK_OFFSET(0x13EC37E0)
#define CLASS_3_9E5F46E7FC99B84E_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13EC3500)
#define CLASS_3_9E5F46E7FC99B84E_METHOD_3_D891E4CBC425AC20_OFFSET UNITYSDK_OFFSET(0x13EC2620)
#define CLASS_3_9E5F46E7FC99B84E_METHOD_3_DED490E0B7706D20_OFFSET UNITYSDK_OFFSET(0x13EC3FC0)
#define CLASS_3_9E5F46E7FC99B84E_METHOD_3_E4C6B3C23E734984_OFFSET UNITYSDK_OFFSET(0x13EC5470)
#define CLASS_3_9E5F46E7FC99B84E_METHOD_3_FC82513215416ADD_OFFSET UNITYSDK_OFFSET(0x13EC3590)
#define CLASS_3_9E5F46E7FC99B84E_METHOD_3_FE275294F69C24FC_OFFSET UNITYSDK_OFFSET(0x13EC3DB0)
#define CLASS_3_9E5F46E7FC99B84E_METHOD_3_FF6C1876456BFBCC_OFFSET UNITYSDK_OFFSET(0x13EC3120)
#define CLASS_3_9E5F46E7FC99B84E_UPDATE_OFFSET UNITYSDK_OFFSET(0x13EC21D0)
#define CLASS_3_9E5F46E7FC99B84E__CCTOR_OFFSET UNITYSDK_OFFSET(0x13EC2380)
#define CLASS_3_9E5F46E7FC99B84E__CTOR_OFFSET UNITYSDK_OFFSET(0x13EC2330)

inline static constexpr unsigned int Class_3_9E5F46E7FC99B84E_TypeDefinitionIndex = 57799;

class Class_3_9E5F46E7FC99B84E : public ::Class_2_40CD888D5D4FCB5B
{
public:
	static ::MoleMole::Config::GuidePoint_AutoGenStrategy* StaticGet_Field_3_0()
	{
		return (::MoleMole::Config::GuidePoint_AutoGenStrategy*)Il2CppClass::FromTypeDefinitionIndex(Class_3_9E5F46E7FC99B84E_TypeDefinitionIndex)->GetStaticField(0x3E570);
	}
	static ::MoleMole::UIInLevelGuideChildWindowController** StaticGet_Field_3_7()
	{
		return (::MoleMole::UIInLevelGuideChildWindowController**)Il2CppClass::FromTypeDefinitionIndex(Class_3_9E5F46E7FC99B84E_TypeDefinitionIndex)->GetStaticField(0x3E5C0);
	}
	::Nap::NapECS::EcsFilter* Field_3_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9E5F46E7FC99B84E__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_9E5F46E7FC99B84E__CCTOR_OFFSET))();
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_9E5F46E7FC99B84E_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9E5F46E7FC99B84E_UPDATE_OFFSET))(this);
	}

	static ::System::Void Method_3_025C10A50003DFAB(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_9E5F46E7FC99B84E_METHOD_3_025C10A50003DFAB_OFFSET))(a1);
	}

	static ::System::Void Method_3_9A0D48D7EADC0B81(::UnityEngine::Vector3 a1, ::Class_3_32CD10484486A703* a2)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::Class_3_32CD10484486A703*))((::PBYTE)hIl2Cpp + CLASS_3_9E5F46E7FC99B84E_METHOD_3_9A0D48D7EADC0B81_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_3_C91720EF8A3C5FAE(::Class_3_32CD10484486A703* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Int32(*)(::Class_3_32CD10484486A703*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_9E5F46E7FC99B84E_METHOD_3_C91720EF8A3C5FAE_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_46E7892625173B17(::Class_3_32CD10484486A703* a1, ::System::Collections::Generic::List_1<::System::String*>* a2)
	{
		return ((::System::Void(*)(::Class_3_32CD10484486A703*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_3_9E5F46E7FC99B84E_METHOD_3_46E7892625173B17_OFFSET))(a1, a2);
	}

	static ::System::String* Method_3_9D98D4947F30AE20(::Class_3_32CD10484486A703* a1)
	{
		return ((::System::String*(*)(::Class_3_32CD10484486A703*))((::PBYTE)hIl2Cpp + CLASS_3_9E5F46E7FC99B84E_METHOD_3_9D98D4947F30AE20_OFFSET))(a1);
	}

	static ::Class_1_E319123DCDD91C39* Method_3_FF6C1876456BFBCC(::Class_3_32CD10484486A703* a1, ::System::String* a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::Boolean a5, ::System::UInt32 a6)
	{
		return ((::Class_1_E319123DCDD91C39*(*)(::Class_3_32CD10484486A703*, ::System::String*, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_9E5F46E7FC99B84E_METHOD_3_FF6C1876456BFBCC_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9E5F46E7FC99B84E_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_FC82513215416ADD(::Class_3_32CD10484486A703* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_3_32CD10484486A703*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_9E5F46E7FC99B84E_METHOD_3_FC82513215416ADD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_3E5C2F618819AA49(::Class_3_32CD10484486A703* a1)
	{
		return ((::System::Void(*)(::Class_3_32CD10484486A703*))((::PBYTE)hIl2Cpp + CLASS_3_9E5F46E7FC99B84E_METHOD_3_3E5C2F618819AA49_OFFSET))(a1);
	}

	static ::System::Int32 Method_3_C9CA821467649109(::Class_3_32CD10484486A703* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Int32(*)(::Class_3_32CD10484486A703*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_9E5F46E7FC99B84E_METHOD_3_C9CA821467649109_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_8CC7428A4822B88C(::Class_3_32CD10484486A703* a1, ::System::String* a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::Class_3_32CD10484486A703*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_9E5F46E7FC99B84E_METHOD_3_8CC7428A4822B88C_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_3_85D0FC6586C8F005(::Class_3_32CD10484486A703* a1)
	{
		return ((::System::Boolean(*)(::Class_3_32CD10484486A703*))((::PBYTE)hIl2Cpp + CLASS_3_9E5F46E7FC99B84E_METHOD_3_85D0FC6586C8F005_OFFSET))(a1);
	}

	static ::System::Void Method_3_D891E4CBC425AC20(::UnityEngine::Vector3 a1, ::System::Collections::Generic::List_1<::System::String*>* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_E319123DCDD91C39*>* a5)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Int32, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_E319123DCDD91C39*>*))((::PBYTE)hIl2Cpp + CLASS_3_9E5F46E7FC99B84E_METHOD_3_D891E4CBC425AC20_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_9E5F46E7FC99B84E_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_138FB0876437E13A(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_9E5F46E7FC99B84E_METHOD_3_138FB0876437E13A_OFFSET))(a1);
	}

	static ::System::Void Method_3_FE275294F69C24FC(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_9E5F46E7FC99B84E_METHOD_3_FE275294F69C24FC_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_3_DED490E0B7706D20(::Class_3_32CD10484486A703* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::Class_3_32CD10484486A703*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_9E5F46E7FC99B84E_METHOD_3_DED490E0B7706D20_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_A26642ECF44B0929(::Class_3_32CD10484486A703* a1)
	{
		return ((::System::Void(*)(::Class_3_32CD10484486A703*))((::PBYTE)hIl2Cpp + CLASS_3_9E5F46E7FC99B84E_METHOD_3_A26642ECF44B0929_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_3_C5A45EC347147FEF(::Class_3_32CD10484486A703* a1, ::System::String* a2)
	{
		return ((::UnityEngine::Vector3(*)(::Class_3_32CD10484486A703*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_9E5F46E7FC99B84E_METHOD_3_C5A45EC347147FEF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7193A8D2BD222E73(::Class_3_32CD10484486A703* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Class_3_32CD10484486A703*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_9E5F46E7FC99B84E_METHOD_3_7193A8D2BD222E73_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_0253157EDF1A98D6(::Class_3_32CD10484486A703* a1)
	{
		return ((::System::Void(*)(::Class_3_32CD10484486A703*))((::PBYTE)hIl2Cpp + CLASS_3_9E5F46E7FC99B84E_METHOD_3_0253157EDF1A98D6_OFFSET))(a1);
	}

	static ::System::Void Method_3_526DE5EF5895AF0D(::Class_3_32CD10484486A703* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::Class_3_32CD10484486A703*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_9E5F46E7FC99B84E_METHOD_3_526DE5EF5895AF0D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B68B05DC20355C9B(::Class_3_32CD10484486A703* a1)
	{
		return ((::System::Void(*)(::Class_3_32CD10484486A703*))((::PBYTE)hIl2Cpp + CLASS_3_9E5F46E7FC99B84E_METHOD_3_B68B05DC20355C9B_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_3_E4C6B3C23E734984(::Class_3_32CD10484486A703* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::Class_3_32CD10484486A703*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_9E5F46E7FC99B84E_METHOD_3_E4C6B3C23E734984_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_9E5F46E7FC99B84E_METHOD_3_5790A55946AA509D_OFFSET))();
	}

	static ::System::Void Method_3_544ADB79D0703036(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_E319123DCDD91C39*>* a4)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::String*>*, ::System::Int32, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_E319123DCDD91C39*>*))((::PBYTE)hIl2Cpp + CLASS_3_9E5F46E7FC99B84E_METHOD_3_544ADB79D0703036_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_AC9471A0B9837F12(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_9E5F46E7FC99B84E_METHOD_3_AC9471A0B9837F12_OFFSET))(a1);
	}

	static ::System::Void Method_3_AA7B5EEAC4068D02(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_9E5F46E7FC99B84E_METHOD_3_AA7B5EEAC4068D02_OFFSET))(a1);
	}
};
