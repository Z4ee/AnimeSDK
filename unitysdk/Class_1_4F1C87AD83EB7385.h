#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BaseGameFlow; }
namespace RPG::Client { class ParkourGameTalkEventInfo; }
namespace RPG::Client::ParkourGame { class MonoParkourTalkEvent; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_4F1C87AD83EB7385_METHOD_1_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0xEA78AA0)
#define CLASS_1_4F1C87AD83EB7385_METHOD_1_2857E587A86D1531_OFFSET UNITYSDK_OFFSET(0xEA78FA0)
#define CLASS_1_4F1C87AD83EB7385_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xEA790D0)
#define CLASS_1_4F1C87AD83EB7385_METHOD_1_42AA9A78CFDCA6A5_OFFSET UNITYSDK_OFFSET(0xEA78A50)
#define CLASS_1_4F1C87AD83EB7385_METHOD_1_6A52E00ED36A3484_OFFSET UNITYSDK_OFFSET(0xEA79060)
#define CLASS_1_4F1C87AD83EB7385_METHOD_1_A4A5585C8E73BD81_OFFSET UNITYSDK_OFFSET(0xEA78BF0)
#define CLASS_1_4F1C87AD83EB7385__CTOR_OFFSET UNITYSDK_OFFSET(0xEA791E0)

inline static constexpr unsigned int Class_1_4F1C87AD83EB7385_TypeDefinitionIndex = 50206;

class Class_1_4F1C87AD83EB7385 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ParkourGame::MonoParkourTalkEvent*>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ParkourGameTalkEventInfo*>* Field_1_1; // 0x18
	::RPG::Client::BaseGameFlow* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F1C87AD83EB7385__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_42AA9A78CFDCA6A5(::RPG::Client::BaseGameFlow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + CLASS_1_4F1C87AD83EB7385_METHOD_1_42AA9A78CFDCA6A5_OFFSET))(this, a1);
	}

	::System::Void Method_1_0BDFAC56E6B704CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F1C87AD83EB7385_METHOD_1_0BDFAC56E6B704CB_OFFSET))(this);
	}

	::System::Void Method_1_A4A5585C8E73BD81(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4F1C87AD83EB7385_METHOD_1_A4A5585C8E73BD81_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_2857E587A86D1531(::System::UInt32 a1, ::RPG::Client::ParkourGame::MonoParkourTalkEvent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::ParkourGame::MonoParkourTalkEvent*))((::PBYTE)hIl2Cpp + CLASS_1_4F1C87AD83EB7385_METHOD_1_2857E587A86D1531_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6A52E00ED36A3484(::System::UInt32 a1, ::RPG::Client::ParkourGame::MonoParkourTalkEvent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::ParkourGame::MonoParkourTalkEvent*))((::PBYTE)hIl2Cpp + CLASS_1_4F1C87AD83EB7385_METHOD_1_6A52E00ED36A3484_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F1C87AD83EB7385_METHOD_1_41A074549EF25F63_OFFSET))(this);
	}
};
