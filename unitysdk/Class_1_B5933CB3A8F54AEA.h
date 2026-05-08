#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_441CA76566B8E079.h"
#include "unitysdk/Enum_3_CFA256898B7F5607.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_3_4DE9364B75C28A4E;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_B5933CB3A8F54AEA_METHOD_1_0A83C9C92118C630_OFFSET UNITYSDK_OFFSET(0x114981E0)
#define CLASS_1_B5933CB3A8F54AEA_METHOD_1_0C87E6A2D02250D4_OFFSET UNITYSDK_OFFSET(0x11497FC0)
#define CLASS_1_B5933CB3A8F54AEA_METHOD_1_12A6D28FAB0DCA58_OFFSET UNITYSDK_OFFSET(0x11497DD0)
#define CLASS_1_B5933CB3A8F54AEA_METHOD_1_2278D82EC2977ADE_OFFSET UNITYSDK_OFFSET(0x114983E0)
#define CLASS_1_B5933CB3A8F54AEA_METHOD_1_2AB16C1FA4EAF6A2_1_OFFSET UNITYSDK_OFFSET(0x11499940)
#define CLASS_1_B5933CB3A8F54AEA_METHOD_1_2AB16C1FA4EAF6A2_OFFSET UNITYSDK_OFFSET(0x11497E80)
#define CLASS_1_B5933CB3A8F54AEA_METHOD_1_5317BDC14DE7C954_OFFSET UNITYSDK_OFFSET(0x11496F90)
#define CLASS_1_B5933CB3A8F54AEA_METHOD_1_63C909AAD784C637_OFFSET UNITYSDK_OFFSET(0x11497760)
#define CLASS_1_B5933CB3A8F54AEA_METHOD_1_69B2EC17288C0318_OFFSET UNITYSDK_OFFSET(0x11498BB0)
#define CLASS_1_B5933CB3A8F54AEA_METHOD_1_7513083F4512A7E2_OFFSET UNITYSDK_OFFSET(0x11498FE0)
#define CLASS_1_B5933CB3A8F54AEA_METHOD_1_77E8005F607610FC_OFFSET UNITYSDK_OFFSET(0x11497290)
#define CLASS_1_B5933CB3A8F54AEA_METHOD_1_81C6A00060976D24_OFFSET UNITYSDK_OFFSET(0x11498B60)
#define CLASS_1_B5933CB3A8F54AEA_METHOD_1_A18E033A45F59FB1_OFFSET UNITYSDK_OFFSET(0x114970D0)
#define CLASS_1_B5933CB3A8F54AEA_METHOD_1_A3ABE6AA9E43B0D2_OFFSET UNITYSDK_OFFSET(0x114994B0)
#define CLASS_1_B5933CB3A8F54AEA_METHOD_1_B19032C30A9D43F2_OFFSET UNITYSDK_OFFSET(0x11496F50)
#define CLASS_1_B5933CB3A8F54AEA_METHOD_1_B43D3E9B2147D436_OFFSET UNITYSDK_OFFSET(0x11498830)
#define CLASS_1_B5933CB3A8F54AEA_METHOD_1_D52F5EFE161A2EB2_OFFSET UNITYSDK_OFFSET(0x11497B70)
#define CLASS_1_B5933CB3A8F54AEA_METHOD_1_F57A706DCBDAAA29_OFFSET UNITYSDK_OFFSET(0x114992D0)
#define CLASS_1_B5933CB3A8F54AEA_METHOD_1_FD40F685A5E7410F_OFFSET UNITYSDK_OFFSET(0x114990E0)

inline static constexpr unsigned int Class_1_B5933CB3A8F54AEA_TypeDefinitionIndex = 68199;

class Class_1_B5933CB3A8F54AEA : public ::System::Object
{
public:
	static ::System::String* Method_1_B19032C30A9D43F2(::Enum_3_CFA256898B7F5607 a1)
	{
		return ((::System::String*(*)(::Enum_3_CFA256898B7F5607))((::PBYTE)hIl2Cpp + CLASS_1_B5933CB3A8F54AEA_METHOD_1_B19032C30A9D43F2_OFFSET))(a1);
	}

	static ::UnityEngine::GameObject* Method_1_A18E033A45F59FB1(::System::Int32 a1, ::UnityEngine::Transform* a2)
	{
		return ((::UnityEngine::GameObject*(*)(::System::Int32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_B5933CB3A8F54AEA_METHOD_1_A18E033A45F59FB1_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::Dictionary_2<::Enum_3_441CA76566B8E079, ::System::Int32>* Method_1_77E8005F607610FC(::Enum_3_CFA256898B7F5607 a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::Enum_3_441CA76566B8E079, ::System::Int32>*(*)(::Enum_3_CFA256898B7F5607))((::PBYTE)hIl2Cpp + CLASS_1_B5933CB3A8F54AEA_METHOD_1_77E8005F607610FC_OFFSET))(a1);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Foundation::AssetPath>*>* Method_1_63C909AAD784C637(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Foundation::AssetPath>*>*(*)(::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_B5933CB3A8F54AEA_METHOD_1_63C909AAD784C637_OFFSET))(a1);
	}

	static ::System::Void Method_1_D52F5EFE161A2EB2(::Foundation::AssetPath a1, ::UnityEngine::Transform* a2, ::System::Collections::Generic::List_1<::Foundation::AssetPath>* a3, ::System::Action_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>* a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::Foundation::AssetPath, ::UnityEngine::Transform*, ::System::Collections::Generic::List_1<::Foundation::AssetPath>*, ::System::Action_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B5933CB3A8F54AEA_METHOD_1_D52F5EFE161A2EB2_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::Enum_3_441CA76566B8E079 Method_1_2AB16C1FA4EAF6A2(::System::Int32 a1)
	{
		return ((::Enum_3_441CA76566B8E079(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B5933CB3A8F54AEA_METHOD_1_2AB16C1FA4EAF6A2_OFFSET))(a1);
	}

	static ::System::Collections::Generic::Dictionary_2<::Enum_3_441CA76566B8E079, ::System::Int32>* Method_1_0C87E6A2D02250D4(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::Enum_3_441CA76566B8E079, ::System::Int32>*(*)(::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_B5933CB3A8F54AEA_METHOD_1_0C87E6A2D02250D4_OFFSET))(a1);
	}

	static ::System::Void Method_1_0A83C9C92118C630(::UnityEngine::GameObject* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Action_1<::System::Collections::Generic::List_1<::System::Int32>*>* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Action_1<::System::Collections::Generic::List_1<::System::Int32>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B5933CB3A8F54AEA_METHOD_1_0A83C9C92118C630_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Collections::Generic::List_1<::Foundation::AssetPath>* Method_1_81C6A00060976D24(::System::Collections::Generic::IReadOnlyList_1<::Class_3_4DE9364B75C28A4E*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::Foundation::AssetPath>*(*)(::System::Collections::Generic::IReadOnlyList_1<::Class_3_4DE9364B75C28A4E*>*))((::PBYTE)hIl2Cpp + CLASS_1_B5933CB3A8F54AEA_METHOD_1_81C6A00060976D24_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::System::Int32>* Method_1_2278D82EC2977ADE(::Enum_3_CFA256898B7F5607 a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::Enum_3_CFA256898B7F5607))((::PBYTE)hIl2Cpp + CLASS_1_B5933CB3A8F54AEA_METHOD_1_2278D82EC2977ADE_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_7513083F4512A7E2(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B5933CB3A8F54AEA_METHOD_1_7513083F4512A7E2_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::Foundation::AssetPath>* Method_1_B43D3E9B2147D436(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Collections::Generic::List_1<::Foundation::AssetPath>*(*)(::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_B5933CB3A8F54AEA_METHOD_1_B43D3E9B2147D436_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_FD40F685A5E7410F(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B5933CB3A8F54AEA_METHOD_1_FD40F685A5E7410F_OFFSET))(a1);
	}

	static ::System::Void Method_1_F57A706DCBDAAA29(::UnityEngine::GameObject* a1, ::System::Collections::Generic::IReadOnlyList_1<::Class_3_4DE9364B75C28A4E*>* a2, ::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::Class_3_4DE9364B75C28A4E*>*>* a3)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Collections::Generic::IReadOnlyList_1<::Class_3_4DE9364B75C28A4E*>*, ::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::Class_3_4DE9364B75C28A4E*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_B5933CB3A8F54AEA_METHOD_1_F57A706DCBDAAA29_OFFSET))(a1, a2, a3);
	}

	static ::System::String* Method_1_5317BDC14DE7C954(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B5933CB3A8F54AEA_METHOD_1_5317BDC14DE7C954_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::System::Int32>* Method_1_69B2EC17288C0318(::System::Collections::Generic::IReadOnlyList_1<::Class_3_4DE9364B75C28A4E*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::System::Collections::Generic::IReadOnlyList_1<::Class_3_4DE9364B75C28A4E*>*))((::PBYTE)hIl2Cpp + CLASS_1_B5933CB3A8F54AEA_METHOD_1_69B2EC17288C0318_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_A3ABE6AA9E43B0D2(::Enum_3_CFA256898B7F5607 a1, ::Enum_3_441CA76566B8E079 a2)
	{
		return ((::System::Int32(*)(::Enum_3_CFA256898B7F5607, ::Enum_3_441CA76566B8E079))((::PBYTE)hIl2Cpp + CLASS_1_B5933CB3A8F54AEA_METHOD_1_A3ABE6AA9E43B0D2_OFFSET))(a1, a2);
	}

	static ::Enum_3_CFA256898B7F5607 Method_1_2AB16C1FA4EAF6A2_1(::System::Int32 a1)
	{
		return ((::Enum_3_CFA256898B7F5607(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B5933CB3A8F54AEA_METHOD_1_2AB16C1FA4EAF6A2_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_12A6D28FAB0DCA58(::Foundation::AssetPath a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_B5933CB3A8F54AEA_METHOD_1_12A6D28FAB0DCA58_OFFSET))(a1, a2);
	}
};
