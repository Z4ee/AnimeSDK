#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::TrainParty::Mapping { class SlotBtnMapping; }
namespace RPG::Client::TrainParty::Mapping { class SlotPosMapping; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_D704B32D505CBFB3_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x11E70380)
#define CLASS_1_D704B32D505CBFB3_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x11E70600)
#define CLASS_1_D704B32D505CBFB3_METHOD_1_4B6C7AC8E1357709_OFFSET UNITYSDK_OFFSET(0x11E701A0)
#define CLASS_1_D704B32D505CBFB3_METHOD_1_5C28A8AFAFD92C5B_1_OFFSET UNITYSDK_OFFSET(0x11E705A0)
#define CLASS_1_D704B32D505CBFB3_METHOD_1_5C28A8AFAFD92C5B_OFFSET UNITYSDK_OFFSET(0x11E70320)
#define CLASS_1_D704B32D505CBFB3_METHOD_1_66FF6A49D33160A6_OFFSET UNITYSDK_OFFSET(0x11E70710)
#define CLASS_1_D704B32D505CBFB3_METHOD_1_7146C27935210E93_OFFSET UNITYSDK_OFFSET(0x11E70420)
#define CLASS_1_D704B32D505CBFB3_METHOD_1_F705EE8C2D1B72F2_OFFSET UNITYSDK_OFFSET(0x11E70840)
#define CLASS_1_D704B32D505CBFB3__CTOR_OFFSET UNITYSDK_OFFSET(0x11E700C0)

inline static constexpr unsigned int Class_1_D704B32D505CBFB3_TypeDefinitionIndex = 68645;

class Class_1_D704B32D505CBFB3 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainParty::Mapping::SlotBtnMapping*>* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainParty::Mapping::SlotPosMapping*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D704B32D505CBFB3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4B6C7AC8E1357709(::System::UInt32 a1, ::RPG::Client::TrainParty::Mapping::SlotPosMapping* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::TrainParty::Mapping::SlotPosMapping*))((::PBYTE)hIl2Cpp + CLASS_1_D704B32D505CBFB3_METHOD_1_4B6C7AC8E1357709_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5C28A8AFAFD92C5B(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D704B32D505CBFB3_METHOD_1_5C28A8AFAFD92C5B_OFFSET))(this, a1);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D704B32D505CBFB3_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_7146C27935210E93(::System::UInt32 a1, ::RPG::Client::TrainParty::Mapping::SlotBtnMapping* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::TrainParty::Mapping::SlotBtnMapping*))((::PBYTE)hIl2Cpp + CLASS_1_D704B32D505CBFB3_METHOD_1_7146C27935210E93_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5C28A8AFAFD92C5B_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D704B32D505CBFB3_METHOD_1_5C28A8AFAFD92C5B_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D704B32D505CBFB3_METHOD_1_41A074549EF25F63_OFFSET))(this);
	}

	::System::Boolean Method_1_66FF6A49D33160A6(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_D704B32D505CBFB3_METHOD_1_66FF6A49D33160A6_OFFSET))(this, a1);
	}

	::RPG::Client::TrainParty::Mapping::SlotPosMapping* Method_1_F705EE8C2D1B72F2(::System::UInt32 a1)
	{
		return ((::RPG::Client::TrainParty::Mapping::SlotPosMapping*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D704B32D505CBFB3_METHOD_1_F705EE8C2D1B72F2_OFFSET))(this, a1);
	}
};
