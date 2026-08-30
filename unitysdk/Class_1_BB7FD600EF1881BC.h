#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EmotionID.h"
#include "unitysdk/System/Object.h"

class Class_1_BB7FD600EF1881BC_Class_1_8CE566E805114ABA;
class Class_1_F132777AFBDFF108;
namespace RPG::Client { class AvatarEmotionClipConfig; }
namespace RPG::Client { class EmotionData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_BB7FD600EF1881BC_METHOD_1_0595F44BBF931972_OFFSET UNITYSDK_OFFSET(0x19A90EA0)
#define CLASS_1_BB7FD600EF1881BC_METHOD_1_0A7C75AE549C5CCF_OFFSET UNITYSDK_OFFSET(0x19A90C80)
#define CLASS_1_BB7FD600EF1881BC_METHOD_1_2255802C28C8E860_OFFSET UNITYSDK_OFFSET(0x19A90E40)
#define CLASS_1_BB7FD600EF1881BC_METHOD_1_5452473E07CC687D_OFFSET UNITYSDK_OFFSET(0x19A913D0)
#define CLASS_1_BB7FD600EF1881BC_METHOD_1_754229A14D8E13AF_OFFSET UNITYSDK_OFFSET(0x19A90FD0)
#define CLASS_1_BB7FD600EF1881BC_METHOD_1_9B1F59C1600F2999_OFFSET UNITYSDK_OFFSET(0x19A910D0)
#define CLASS_1_BB7FD600EF1881BC__CTOR_OFFSET UNITYSDK_OFFSET(0x19A91750)

inline static constexpr unsigned int Class_1_BB7FD600EF1881BC_TypeDefinitionIndex = 69385;

class Class_1_BB7FD600EF1881BC : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::EmotionData*>* AELAGDGDBNO; // 0x10
	::Class_1_F132777AFBDFF108* CEFLLELKFOP; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_BB7FD600EF1881BC_Class_1_8CE566E805114ABA*>* GDEICGCKOAM; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB7FD600EF1881BC__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0A7C75AE549C5CCF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB7FD600EF1881BC_METHOD_1_0A7C75AE549C5CCF_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::EmotionData*>* Method_1_2255802C28C8E860(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::EmotionData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BB7FD600EF1881BC_METHOD_1_2255802C28C8E860_OFFSET))(this, a1);
	}

	::RPG::Client::EmotionData* Method_1_754229A14D8E13AF(::System::UInt32 a1, ::RPG::GameCore::EmotionID a2)
	{
		return ((::RPG::Client::EmotionData*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::EmotionID))((::PBYTE)hIl2Cpp + CLASS_1_BB7FD600EF1881BC_METHOD_1_754229A14D8E13AF_OFFSET))(this, a1, a2);
	}

	::Class_1_BB7FD600EF1881BC_Class_1_8CE566E805114ABA* Method_1_0595F44BBF931972(::System::UInt32 a1)
	{
		return ((::Class_1_BB7FD600EF1881BC_Class_1_8CE566E805114ABA*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BB7FD600EF1881BC_METHOD_1_0595F44BBF931972_OFFSET))(this, a1);
	}

	::Class_1_BB7FD600EF1881BC_Class_1_8CE566E805114ABA* Method_1_9B1F59C1600F2999(::System::UInt32 a1)
	{
		return ((::Class_1_BB7FD600EF1881BC_Class_1_8CE566E805114ABA*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BB7FD600EF1881BC_METHOD_1_9B1F59C1600F2999_OFFSET))(this, a1);
	}

	::RPG::Client::AvatarEmotionClipConfig* Method_1_5452473E07CC687D(::System::UInt32 a1)
	{
		return ((::RPG::Client::AvatarEmotionClipConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BB7FD600EF1881BC_METHOD_1_5452473E07CC687D_OFFSET))(this, a1);
	}
};
