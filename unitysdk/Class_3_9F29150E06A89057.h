#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"

class Class_3_61A5922E5046F385;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define CLASS_3_9F29150E06A89057_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x15989690)
#define CLASS_3_9F29150E06A89057_METHOD_3_0D5E1D6B20EA2168_OFFSET UNITYSDK_OFFSET(0x15989D10)
#define CLASS_3_9F29150E06A89057_METHOD_3_0E80369A06E3FA5C_OFFSET UNITYSDK_OFFSET(0x1598B9C0)
#define CLASS_3_9F29150E06A89057_METHOD_3_1FC9FBD263A50050_OFFSET UNITYSDK_OFFSET(0x15989910)
#define CLASS_3_9F29150E06A89057_METHOD_3_2DA78CDD435DE429_OFFSET UNITYSDK_OFFSET(0x1598BA40)
#define CLASS_3_9F29150E06A89057_METHOD_3_30E66BD35ECFD66E_OFFSET UNITYSDK_OFFSET(0x1598A390)
#define CLASS_3_9F29150E06A89057_METHOD_3_405E61C2A86F0D26_OFFSET UNITYSDK_OFFSET(0x1598BF60)
#define CLASS_3_9F29150E06A89057_METHOD_3_583B85DC6A6892AB_OFFSET UNITYSDK_OFFSET(0x1598C1B0)
#define CLASS_3_9F29150E06A89057_METHOD_3_7B0937CF905FF793_OFFSET UNITYSDK_OFFSET(0x1598A620)
#define CLASS_3_9F29150E06A89057_METHOD_3_8D55F8F8C4496242_1_OFFSET UNITYSDK_OFFSET(0x1598C780)
#define CLASS_3_9F29150E06A89057_METHOD_3_8D55F8F8C4496242_OFFSET UNITYSDK_OFFSET(0x1598B310)
#define CLASS_3_9F29150E06A89057_METHOD_3_AACF3CA5ADA9346C_OFFSET UNITYSDK_OFFSET(0x1598BD90)
#define CLASS_3_9F29150E06A89057_METHOD_3_B08DE9FC4F7231EA_OFFSET UNITYSDK_OFFSET(0x1598AF90)
#define CLASS_3_9F29150E06A89057_METHOD_3_BA7E00F897B97B16_OFFSET UNITYSDK_OFFSET(0x1598C930)
#define CLASS_3_9F29150E06A89057_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x1598C6F0)
#define CLASS_3_9F29150E06A89057_METHOD_3_DD497E9B26C52514_OFFSET UNITYSDK_OFFSET(0x1598C5A0)
#define CLASS_3_9F29150E06A89057_METHOD_3_E4519497DD7CFEC9_OFFSET UNITYSDK_OFFSET(0x1598B4C0)
#define CLASS_3_9F29150E06A89057_METHOD_3_E74EB4A8D28B90B3_OFFSET UNITYSDK_OFFSET(0x1598C300)
#define CLASS_3_9F29150E06A89057__CTOR_OFFSET UNITYSDK_OFFSET(0x159898C0)

inline static constexpr unsigned int Class_3_9F29150E06A89057_TypeDefinitionIndex = 70392;

class Class_3_9F29150E06A89057 : public ::Class_2_40CD888D5D4FCB5B
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9F29150E06A89057__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_9F29150E06A89057_CREATEFILTERS_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_1FC9FBD263A50050(::Class_3_61A5922E5046F385* a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::System::Int32>*& a3)
	{
		return ((::System::Void(*)(::Class_3_61A5922E5046F385*, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + CLASS_3_9F29150E06A89057_METHOD_3_1FC9FBD263A50050_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_30E66BD35ECFD66E(::Class_3_61A5922E5046F385* a1)
	{
		return ((::System::Void(*)(::Class_3_61A5922E5046F385*))((::PBYTE)hIl2Cpp + CLASS_3_9F29150E06A89057_METHOD_3_30E66BD35ECFD66E_OFFSET))(a1);
	}

	::System::Void Method_3_7B0937CF905FF793(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_9F29150E06A89057_METHOD_3_7B0937CF905FF793_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_0D5E1D6B20EA2168(::Class_3_61A5922E5046F385* a1)
	{
		return ((::System::Void(*)(::Class_3_61A5922E5046F385*))((::PBYTE)hIl2Cpp + CLASS_3_9F29150E06A89057_METHOD_3_0D5E1D6B20EA2168_OFFSET))(a1);
	}

	static ::UnityEngine::Collider* Method_3_B08DE9FC4F7231EA(::MoleMole::Battle::Entity* a1, ::System::Int32 a2)
	{
		return ((::UnityEngine::Collider*(*)(::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_9F29150E06A89057_METHOD_3_B08DE9FC4F7231EA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_8D55F8F8C4496242(::Class_3_61A5922E5046F385* a1, ::System::Int32 a2, ::System::String* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::Class_3_61A5922E5046F385*, ::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_9F29150E06A89057_METHOD_3_8D55F8F8C4496242_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_0E80369A06E3FA5C(::Class_3_61A5922E5046F385* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Class_3_61A5922E5046F385*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_9F29150E06A89057_METHOD_3_0E80369A06E3FA5C_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_2DA78CDD435DE429(::Class_3_61A5922E5046F385* a1, ::System::Boolean a2, ::System::Int32 a3, ::System::Collections::Generic::List_1<::System::Int32>*& a4)
	{
		return ((::System::Void(*)(::Class_3_61A5922E5046F385*, ::System::Boolean, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + CLASS_3_9F29150E06A89057_METHOD_3_2DA78CDD435DE429_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_AACF3CA5ADA9346C(::System::Boolean a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_9F29150E06A89057_METHOD_3_AACF3CA5ADA9346C_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_405E61C2A86F0D26(::Class_3_61A5922E5046F385* a1, ::System::Collections::Generic::List_1<::System::String*>* a2, ::System::Int32 a3)
	{
		return ((::System::Boolean(*)(::Class_3_61A5922E5046F385*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_9F29150E06A89057_METHOD_3_405E61C2A86F0D26_OFFSET))(a1, a2, a3);
	}

	static ::System::Int32 Method_3_583B85DC6A6892AB(::Class_3_61A5922E5046F385* a1, ::System::Boolean a2, ::System::String* a3, ::System::Boolean a4)
	{
		return ((::System::Int32(*)(::Class_3_61A5922E5046F385*, ::System::Boolean, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_9F29150E06A89057_METHOD_3_583B85DC6A6892AB_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_3_E74EB4A8D28B90B3(::Class_3_61A5922E5046F385* a1, ::System::Collections::Generic::List_1<::System::String*>* a2, ::System::Collections::Generic::List_1<::System::Int32>* a3)
	{
		return ((::System::Boolean(*)(::Class_3_61A5922E5046F385*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_9F29150E06A89057_METHOD_3_E74EB4A8D28B90B3_OFFSET))(a1, a2, a3);
	}

	static ::System::Int32 Method_3_DD497E9B26C52514(::Class_3_61A5922E5046F385* a1, ::System::Boolean a2, ::System::String* a3, ::System::Boolean a4)
	{
		return ((::System::Int32(*)(::Class_3_61A5922E5046F385*, ::System::Boolean, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_9F29150E06A89057_METHOD_3_DD497E9B26C52514_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_9F29150E06A89057_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_8D55F8F8C4496242_1(::Class_3_61A5922E5046F385* a1, ::System::Int32 a2, ::System::String* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::Class_3_61A5922E5046F385*, ::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_9F29150E06A89057_METHOD_3_8D55F8F8C4496242_1_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_3_BA7E00F897B97B16(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_9F29150E06A89057_METHOD_3_BA7E00F897B97B16_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_E4519497DD7CFEC9(::Class_3_61A5922E5046F385* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::Class_3_61A5922E5046F385*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_9F29150E06A89057_METHOD_3_E4519497DD7CFEC9_OFFSET))(a1, a2);
	}
};
