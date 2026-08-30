#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EmotionID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarEmotionClipConfig; }
namespace RPG::Client { class EmotionData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_BB7FD600EF1881BC_CLASS_1_8CE566E805114ABA__CTOR_OFFSET UNITYSDK_OFFSET(0xBA812A0)

inline static constexpr unsigned int Class_1_BB7FD600EF1881BC_Class_1_8CE566E805114ABA_TypeDefinitionIndex = 69386;

class Class_1_BB7FD600EF1881BC_Class_1_8CE566E805114ABA : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::EmotionData*>* PLNAPDCODIB; // 0x10
	::RPG::Client::AvatarEmotionClipConfig* GOKEDCLBHIJ; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::EmotionID, ::RPG::Client::EmotionData*>* AKNFCDPDNFF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB7FD600EF1881BC_CLASS_1_8CE566E805114ABA__CTOR_OFFSET))(this);
	}
};
