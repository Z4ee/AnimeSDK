#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SwordTrainingEffectType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SwordTrainingStatusChangeInfo; }
namespace RPG::GameCore { class SwordTrainingEffectRow; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_1_5FB2896E6C484E49_METHOD_1_01D1F54E63BBBBF5_OFFSET UNITYSDK_OFFSET(0x8CDCFF0)
#define CLASS_1_5FB2896E6C484E49_METHOD_1_320B45F15633CA1A_OFFSET UNITYSDK_OFFSET(0x8CDD320)
#define CLASS_1_5FB2896E6C484E49_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x8CDD230)
#define CLASS_1_5FB2896E6C484E49_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x8CDD050)
#define CLASS_1_5FB2896E6C484E49_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x8CDCF40)
#define CLASS_1_5FB2896E6C484E49_METHOD_1_ACE88CDFBD6AF4B2_OFFSET UNITYSDK_OFFSET(0x8CDD380)
#define CLASS_1_5FB2896E6C484E49_METHOD_1_B7665EA621A70A4C_OFFSET UNITYSDK_OFFSET(0x8CDD270)
#define CLASS_1_5FB2896E6C484E49_METHOD_1_BC2A7B2EB34706E5_OFFSET UNITYSDK_OFFSET(0x8CDD0B0)
#define CLASS_1_5FB2896E6C484E49_METHOD_1_C98D8ED5133B6D9C_OFFSET UNITYSDK_OFFSET(0x8CDD190)
#define CLASS_1_5FB2896E6C484E49_METHOD_1_C9CBBF74ABAE7CED_OFFSET UNITYSDK_OFFSET(0x8CDD3D0)
#define CLASS_1_5FB2896E6C484E49_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8CDD150)
#define CLASS_1_5FB2896E6C484E49_METHOD_1_D4FE0D71B65CFD8E_OFFSET UNITYSDK_OFFSET(0x8CDD2C0)
#define CLASS_1_5FB2896E6C484E49__CTOR_OFFSET UNITYSDK_OFFSET(0x8CDCF30)

inline static constexpr unsigned int Class_1_5FB2896E6C484E49_TypeDefinitionIndex = 61559;

class Class_1_5FB2896E6C484E49 : public ::System::Object
{
public:
	// static const ::System::UInt32 Field_1_4 = 0x1; // 0x0
	// static const ::System::UInt32 Field_1_5 = 0x0; // 0x0
	::RPG::GameCore::SwordTrainingEffectRow* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18
	::System::Boolean Field_1_3; // 0x1C
	::System::UInt64 Field_1_2; // 0x20

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

	::System::Boolean Method_1_BC2A7B2EB34706E5(::RPG::Client::SwordTrainingStatusChangeInfo* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SwordTrainingStatusChangeInfo*))((::PBYTE)hIl2Cpp + CLASS_1_5FB2896E6C484E49_METHOD_1_BC2A7B2EB34706E5_OFFSET))(this, a1);
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

	::System::Boolean Method_1_D4FE0D71B65CFD8E(::RPG::Client::SwordTrainingStatusChangeInfo* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SwordTrainingStatusChangeInfo*))((::PBYTE)hIl2Cpp + CLASS_1_5FB2896E6C484E49_METHOD_1_D4FE0D71B65CFD8E_OFFSET))(this, a1);
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

	::System::Boolean Method_1_C9CBBF74ABAE7CED(::RPG::Client::SwordTrainingStatusChangeInfo* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SwordTrainingStatusChangeInfo*))((::PBYTE)hIl2Cpp + CLASS_1_5FB2896E6C484E49_METHOD_1_C9CBBF74ABAE7CED_OFFSET))(this, a1);
	}
};
