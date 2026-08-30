#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::TrainParty::Mapping { class SlotBtnMapping; }
namespace RPG::Client::TrainParty::Mapping { class SlotPosMapping; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_8116AE3B07301E74_METHOD_1_3DAA43537C0C292D_OFFSET UNITYSDK_OFFSET(0x170BEC10)
#define CLASS_1_8116AE3B07301E74_METHOD_1_66FF6A49D33160A6_OFFSET UNITYSDK_OFFSET(0x170BEEE0)
#define CLASS_1_8116AE3B07301E74_METHOD_1_889E15060A54A5A2_1_OFFSET UNITYSDK_OFFSET(0x170BED60)
#define CLASS_1_8116AE3B07301E74_METHOD_1_889E15060A54A5A2_OFFSET UNITYSDK_OFFSET(0x170BEAF0)
#define CLASS_1_8116AE3B07301E74_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x170BEB80)
#define CLASS_1_8116AE3B07301E74_METHOD_1_D5DDF7C7ABD6EC37_OFFSET UNITYSDK_OFFSET(0x170BE9A0)
#define CLASS_1_8116AE3B07301E74_METHOD_1_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x170BEDF0)
#define CLASS_1_8116AE3B07301E74_METHOD_1_F62B735C6DBD4E7B_OFFSET UNITYSDK_OFFSET(0x170BF010)
#define CLASS_1_8116AE3B07301E74__CTOR_OFFSET UNITYSDK_OFFSET(0x170BE8C0)

inline static constexpr unsigned int Class_1_8116AE3B07301E74_TypeDefinitionIndex = 74277;

class Class_1_8116AE3B07301E74 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainParty::Mapping::SlotBtnMapping*>* EKPLJDLAPEN; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainParty::Mapping::SlotPosMapping*>* HGCAIBIDJNJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8116AE3B07301E74__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D5DDF7C7ABD6EC37(::System::UInt32 a1, ::RPG::Client::TrainParty::Mapping::SlotPosMapping* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::TrainParty::Mapping::SlotPosMapping*))((::PBYTE)hIl2Cpp + CLASS_1_8116AE3B07301E74_METHOD_1_D5DDF7C7ABD6EC37_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_889E15060A54A5A2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8116AE3B07301E74_METHOD_1_889E15060A54A5A2_OFFSET))(this, a1);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8116AE3B07301E74_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_3DAA43537C0C292D(::System::UInt32 a1, ::RPG::Client::TrainParty::Mapping::SlotBtnMapping* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::TrainParty::Mapping::SlotBtnMapping*))((::PBYTE)hIl2Cpp + CLASS_1_8116AE3B07301E74_METHOD_1_3DAA43537C0C292D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_889E15060A54A5A2_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8116AE3B07301E74_METHOD_1_889E15060A54A5A2_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8116AE3B07301E74_METHOD_1_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Boolean Method_1_66FF6A49D33160A6(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_8116AE3B07301E74_METHOD_1_66FF6A49D33160A6_OFFSET))(this, a1);
	}

	::RPG::Client::TrainParty::Mapping::SlotPosMapping* Method_1_F62B735C6DBD4E7B(::System::UInt32 a1)
	{
		return ((::RPG::Client::TrainParty::Mapping::SlotPosMapping*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8116AE3B07301E74_METHOD_1_F62B735C6DBD4E7B_OFFSET))(this, a1);
	}
};
