#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_A5486CBF53F749D6;
namespace RPG::Client { class ActivityFeverTimeToastHintItem; }
namespace RPG::Client { class IAssetOperation; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define RPG_CLIENT_ACTIVITYFEVERTIMEPILETOAST_METHOD_5_24B05D2E15A5C3C8_OFFSET UNITYSDK_OFFSET(0xC4EB350)
#define RPG_CLIENT_ACTIVITYFEVERTIMEPILETOAST_METHOD_5_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xC4EA650)
#define RPG_CLIENT_ACTIVITYFEVERTIMEPILETOAST_METHOD_5_485F3682F812D478_OFFSET UNITYSDK_OFFSET(0xC4EAEF0)
#define RPG_CLIENT_ACTIVITYFEVERTIMEPILETOAST_METHOD_5_4A111163FD8F1931_OFFSET UNITYSDK_OFFSET(0xC4EB020)
#define RPG_CLIENT_ACTIVITYFEVERTIMEPILETOAST_METHOD_5_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0xC4EB8B0)
#define RPG_CLIENT_ACTIVITYFEVERTIMEPILETOAST_METHOD_5_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0xC4EBAB0)
#define RPG_CLIENT_ACTIVITYFEVERTIMEPILETOAST_METHOD_5_8A05DE1403363D53_OFFSET UNITYSDK_OFFSET(0xC4EB0D0)
#define RPG_CLIENT_ACTIVITYFEVERTIMEPILETOAST_METHOD_5_94E49D8C890638E5_OFFSET UNITYSDK_OFFSET(0xC4EBB10)
#define RPG_CLIENT_ACTIVITYFEVERTIMEPILETOAST_METHOD_5_E29D671E35F6F43F_OFFSET UNITYSDK_OFFSET(0xC4EB780)
#define RPG_CLIENT_ACTIVITYFEVERTIMEPILETOAST_PILE_OFFSET UNITYSDK_OFFSET(0xC4EA560)
#define RPG_CLIENT_ACTIVITYFEVERTIMEPILETOAST_START_OFFSET UNITYSDK_OFFSET(0xC4EA740)
#define RPG_CLIENT_ACTIVITYFEVERTIMEPILETOAST_UPDATE_OFFSET UNITYSDK_OFFSET(0xC4EAA10)
#define RPG_CLIENT_ACTIVITYFEVERTIMEPILETOAST__CTOR_OFFSET UNITYSDK_OFFSET(0xC4EBF40)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityFeverTimePileToast_TypeDefinitionIndex = 71340;

	class ActivityFeverTimePileToast : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Int32 GKANCLPAJHA = 0x3; // 0x0
		// static const ::System::Single BOKCCOIEPBL; // 0x0
		// static const ::System::Single OFEBCGJLJLL; // 0x0
		::System::UInt32 CPEPOHBPJHM; // 0x18
		::System::Boolean LLNDBHENPCB; // 0x1C
		::System::Single NPAPMDBIHMD; // 0x20
		::System::Int32 BIEBKDACEPB; // 0x24
		::Il2CppArray<::RPG::Client::ActivityFeverTimeToastHintItem*>* GCIKKMGIPIO; // 0x28
		::System::Collections::Generic::Queue_1<::Class_1_A5486CBF53F749D6*>* BMOFKPFDKIC; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEPILETOAST__CTOR_OFFSET))(this);
		}

		::System::Void Pile(::RPG::Client::TextID a1, ::System::String* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEPILETOAST_PILE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEPILETOAST_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEPILETOAST_UPDATE_OFFSET))(this);
		}

		::System::Void Method_5_485F3682F812D478(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEPILETOAST_METHOD_5_485F3682F812D478_OFFSET))(this, a1);
		}

		::System::Void Method_5_4A111163FD8F1931(::System::UInt32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEPILETOAST_METHOD_5_4A111163FD8F1931_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_8A05DE1403363D53(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEPILETOAST_METHOD_5_8A05DE1403363D53_OFFSET))(this, a1);
		}

		::System::Void Method_5_51CFFE2AF748ECD7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEPILETOAST_METHOD_5_51CFFE2AF748ECD7_OFFSET))(this);
		}

		::System::Void Method_5_24B05D2E15A5C3C8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEPILETOAST_METHOD_5_24B05D2E15A5C3C8_OFFSET))(this);
		}

		::System::Void Method_5_4307B2A4B4A12C1A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEPILETOAST_METHOD_5_4307B2A4B4A12C1A_OFFSET))(this);
		}

		::System::Void Method_5_82E992240300FB30()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEPILETOAST_METHOD_5_82E992240300FB30_OFFSET))(this);
		}

		::System::Boolean Method_5_94E49D8C890638E5(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEPILETOAST_METHOD_5_94E49D8C890638E5_OFFSET))(this, a1);
		}

		::System::UInt32 Method_5_E29D671E35F6F43F(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEPILETOAST_METHOD_5_E29D671E35F6F43F_OFFSET))(this, a1);
		}
	};
}
