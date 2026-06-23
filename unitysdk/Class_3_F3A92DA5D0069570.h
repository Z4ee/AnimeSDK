#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_5560EE9F1F33A604.h"

class Class_5_3492E2216ECD9ABB;
namespace Nap::NapECS { class EcsWorld; }

#define CLASS_3_F3A92DA5D0069570_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x190C00A0)
#define CLASS_3_F3A92DA5D0069570_METHOD_3_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x190C0400)
#define CLASS_3_F3A92DA5D0069570_METHOD_3_9FDD6A4674A7DB23_OFFSET UNITYSDK_OFFSET(0x190C0210)
#define CLASS_3_F3A92DA5D0069570_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x190C0540)
#define CLASS_3_F3A92DA5D0069570_METHOD_3_E17853668FD4701B_OFFSET UNITYSDK_OFFSET(0x190C04A0)
#define CLASS_3_F3A92DA5D0069570__CTOR_OFFSET UNITYSDK_OFFSET(0x190C0390)

inline static constexpr unsigned int Class_3_F3A92DA5D0069570_TypeDefinitionIndex = 42754;

class Class_3_F3A92DA5D0069570 : public ::Class_2_5560EE9F1F33A604
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F3A92DA5D0069570__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_F3A92DA5D0069570_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Method_3_9FDD6A4674A7DB23(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_F3A92DA5D0069570_METHOD_3_9FDD6A4674A7DB23_OFFSET))(this, a1);
	}

	::System::Void Method_3_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_F3A92DA5D0069570_METHOD_3_2685B6183E614529_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_E17853668FD4701B(::Class_5_3492E2216ECD9ABB* a1)
	{
		return ((::System::Void(*)(::Class_5_3492E2216ECD9ABB*))((::PBYTE)hIl2Cpp + CLASS_3_F3A92DA5D0069570_METHOD_3_E17853668FD4701B_OFFSET))(a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_F3A92DA5D0069570_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}
};
