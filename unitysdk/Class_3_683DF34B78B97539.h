#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"

class Class_3_6A6ED67B92DC299D;
class Class_3_DFD5D1FDB9D2A4AC;
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace UnityEngine { class Collider; }

#define CLASS_3_683DF34B78B97539_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x130BDA90)
#define CLASS_3_683DF34B78B97539_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x130BDC70)
#define CLASS_3_683DF34B78B97539_METHOD_3_52B00C2F22FDD052_OFFSET UNITYSDK_OFFSET(0x130BE430)
#define CLASS_3_683DF34B78B97539_METHOD_3_82AC87C4B49E102A_OFFSET UNITYSDK_OFFSET(0x130BE720)
#define CLASS_3_683DF34B78B97539_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x130BEA90)
#define CLASS_3_683DF34B78B97539_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x130BEB20)
#define CLASS_3_683DF34B78B97539_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x130BDDD0)
#define CLASS_3_683DF34B78B97539_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x130BE390)
#define CLASS_3_683DF34B78B97539__CTOR_OFFSET UNITYSDK_OFFSET(0x130BE3E0)

inline static constexpr unsigned int Class_3_683DF34B78B97539_TypeDefinitionIndex = 87224;

class Class_3_683DF34B78B97539 : public ::Class_2_40CD888D5D4FCB5B
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_683DF34B78B97539__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_683DF34B78B97539_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void FixedUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_683DF34B78B97539_FIXEDUPDATE_OFFSET))(this);
	}

	static ::System::Void OnTriggerEnter(::Class_3_6A6ED67B92DC299D* a1, ::UnityEngine::Collider* a2)
	{
		return ((::System::Void(*)(::Class_3_6A6ED67B92DC299D*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_3_683DF34B78B97539_ONTRIGGERENTER_OFFSET))(a1, a2);
	}

	static ::System::Void OnTriggerExit(::Class_3_6A6ED67B92DC299D* a1, ::UnityEngine::Collider* a2)
	{
		return ((::System::Void(*)(::Class_3_6A6ED67B92DC299D*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_3_683DF34B78B97539_ONTRIGGEREXIT_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_52B00C2F22FDD052(::Class_3_DFD5D1FDB9D2A4AC* a1, ::Class_3_6A6ED67B92DC299D* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::Class_3_6A6ED67B92DC299D*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_683DF34B78B97539_METHOD_3_52B00C2F22FDD052_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_82AC87C4B49E102A(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_683DF34B78B97539_METHOD_3_82AC87C4B49E102A_OFFSET))(this, a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_683DF34B78B97539_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_683DF34B78B97539_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
