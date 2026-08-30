#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class TrainPartyPerformance; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C34EE1C299B5741D_STRUCT_2_86F7B03BFB86E0FA_METHOD_2_CB6EDBA5028E1F6A_OFFSET UNITYSDK_OFFSET(0x3AE81C0)
#define CLASS_1_C34EE1C299B5741D_STRUCT_2_86F7B03BFB86E0FA_METHOD_2_E631B63295647DB5_OFFSET UNITYSDK_OFFSET(0x3AE81B0)

inline static constexpr unsigned int Class_1_C34EE1C299B5741D_Struct_2_86F7B03BFB86E0FA_TypeDefinitionIndex = 60344;

struct alignas(8) Class_1_C34EE1C299B5741D_Struct_2_86F7B03BFB86E0FA
{
	::System::Collections::Generic::List_1<::RPG::GameCore::TrainPartyPerformance*>* GPBAGJPKIHJ; // 0x10
	::System::Collections::Generic::List_1<::RPG::GameCore::TrainPartyPerformance*>* ILJAEICNHKD; // 0x18

	::System::Void Method_2_E631B63295647DB5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C34EE1C299B5741D_STRUCT_2_86F7B03BFB86E0FA_METHOD_2_E631B63295647DB5_OFFSET))(this);
	}

	::System::Void Method_2_CB6EDBA5028E1F6A(::RPG::GameCore::TrainPartyPerformance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TrainPartyPerformance*))((::PBYTE)hIl2Cpp + CLASS_1_C34EE1C299B5741D_STRUCT_2_86F7B03BFB86E0FA_METHOD_2_CB6EDBA5028E1F6A_OFFSET))(this, a1);
	}
};
