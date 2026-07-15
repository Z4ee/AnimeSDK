#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SwordTrainingEffectType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SwordTrainingStatusChangeInfo; }
namespace RPG::GameCore { class SwordTrainingEffectRow; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_1_5FB2896E6C484E49_METHOD_1_01D1F54E63BBBBF5_OFFSET UNITYSDK_OFFSET(0x16DDD2A0)
#define CLASS_1_5FB2896E6C484E49_METHOD_1_320B45F15633CA1A_OFFSET UNITYSDK_OFFSET(0x16DDD690)
#define CLASS_1_5FB2896E6C484E49_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x16DDD540)
#define CLASS_1_5FB2896E6C484E49_METHOD_1_3B5E9575B116991C_OFFSET UNITYSDK_OFFSET(0x16DDD5D0)
#define CLASS_1_5FB2896E6C484E49_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x16DDD300)
#define CLASS_1_5FB2896E6C484E49_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x16DDD1F0)
#define CLASS_1_5FB2896E6C484E49_METHOD_1_ACE88CDFBD6AF4B2_OFFSET UNITYSDK_OFFSET(0x16DDD6F0)
#define CLASS_1_5FB2896E6C484E49_METHOD_1_B7665EA621A70A4C_OFFSET UNITYSDK_OFFSET(0x16DDD580)
#define CLASS_1_5FB2896E6C484E49_METHOD_1_C42336B387968059_OFFSET UNITYSDK_OFFSET(0x16DDD360)
#define CLASS_1_5FB2896E6C484E49_METHOD_1_C98D8ED5133B6D9C_OFFSET UNITYSDK_OFFSET(0x16DDD4A0)
#define CLASS_1_5FB2896E6C484E49_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16DDD460)
#define CLASS_1_5FB2896E6C484E49_METHOD_1_E749B3FE1A1C218F_OFFSET UNITYSDK_OFFSET(0x16DDD740)
#define CLASS_1_5FB2896E6C484E49__CTOR_OFFSET UNITYSDK_OFFSET(0x16DD71E0)

inline static constexpr unsigned int Class_1_5FB2896E6C484E49_TypeDefinitionIndex = 71406;

class Class_1_5FB2896E6C484E49 : public ::System::Object
{
public:
	// static const ::System::UInt32 Field_1_0 = 0x1; // 0x0
	// static const ::System::UInt32 Field_1_1 = 0x0; // 0x0
	::RPG::GameCore::SwordTrainingEffectRow* Field_1_2; // 0x10
	::System::UInt64 Field_1_3; // 0x18
	::System::UInt32 Field_1_4; // 0x20
	::System::Boolean Field_1_5; // 0x24

	::System::Void _ctor(::RPG::GameCore::SwordTrainingEffectRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SwordTrainingEffectRow*))((::PBYTE)hIl2Cpp + CLASS_1_5FB2896E6C484E49__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FB2896E6C484E49_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FB2896E6C484E49_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Boolean Method_1_C42336B387968059(::RPG::Client::SwordTrainingStatusChangeInfo* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SwordTrainingStatusChangeInfo*))((::PBYTE)hIl2Cpp + CLASS_1_5FB2896E6C484E49_METHOD_1_C42336B387968059_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_C98D8ED5133B6D9C(::RPG::Client::SwordTrainingStatusChangeInfo* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SwordTrainingStatusChangeInfo*))((::PBYTE)hIl2Cpp + CLASS_1_5FB2896E6C484E49_METHOD_1_C98D8ED5133B6D9C_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FB2896E6C484E49_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FB2896E6C484E49_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Collections::Generic::IList_1<::System::UInt32>* Method_1_B7665EA621A70A4C()
	{
		return ((::System::Collections::Generic::IList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FB2896E6C484E49_METHOD_1_B7665EA621A70A4C_OFFSET))(this);
	}

	::System::Boolean Method_1_3B5E9575B116991C(::RPG::Client::SwordTrainingStatusChangeInfo* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SwordTrainingStatusChangeInfo*))((::PBYTE)hIl2Cpp + CLASS_1_5FB2896E6C484E49_METHOD_1_3B5E9575B116991C_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_320B45F15633CA1A(::RPG::GameCore::SwordTrainingEffectRow* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::SwordTrainingEffectRow*))((::PBYTE)hIl2Cpp + CLASS_1_5FB2896E6C484E49_METHOD_1_320B45F15633CA1A_OFFSET))(this, a1);
	}

	::System::Void Method_1_ACE88CDFBD6AF4B2(::RPG::GameCore::SwordTrainingEffectRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SwordTrainingEffectRow*))((::PBYTE)hIl2Cpp + CLASS_1_5FB2896E6C484E49_METHOD_1_ACE88CDFBD6AF4B2_OFFSET))(this, a1);
	}

	::System::Void Method_1_01D1F54E63BBBBF5(::RPG::GameCore::SwordTrainingEffectType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SwordTrainingEffectType))((::PBYTE)hIl2Cpp + CLASS_1_5FB2896E6C484E49_METHOD_1_01D1F54E63BBBBF5_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_E749B3FE1A1C218F(::RPG::Client::SwordTrainingStatusChangeInfo* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SwordTrainingStatusChangeInfo*))((::PBYTE)hIl2Cpp + CLASS_1_5FB2896E6C484E49_METHOD_1_E749B3FE1A1C218F_OFFSET))(this, a1);
	}
};
