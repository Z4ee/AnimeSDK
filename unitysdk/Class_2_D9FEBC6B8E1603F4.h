#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_97E659ED8D5D259C_23.h"

namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_2_D9FEBC6B8E1603F4_GET_BATTLETARGETIDS_OFFSET UNITYSDK_OFFSET(0x19FB9A20)
#define CLASS_2_D9FEBC6B8E1603F4_GET_CLEARSCORE_OFFSET UNITYSDK_OFFSET(0x19FB99E0)
#define CLASS_2_D9FEBC6B8E1603F4_GET_FEVERMAZEBUFFIDS_OFFSET UNITYSDK_OFFSET(0x19FB9A00)
#define CLASS_2_D9FEBC6B8E1603F4_SET_BATTLETARGETIDS_OFFSET UNITYSDK_OFFSET(0x19FB9A30)
#define CLASS_2_D9FEBC6B8E1603F4_SET_CLEARSCORE_OFFSET UNITYSDK_OFFSET(0x19FB99F0)
#define CLASS_2_D9FEBC6B8E1603F4_SET_FEVERMAZEBUFFIDS_OFFSET UNITYSDK_OFFSET(0x19FB9A10)
#define CLASS_2_D9FEBC6B8E1603F4__CTOR_OFFSET UNITYSDK_OFFSET(0x19FB9A40)

inline static constexpr unsigned int Class_2_D9FEBC6B8E1603F4_TypeDefinitionIndex = 80119;

class Class_2_D9FEBC6B8E1603F4 : public ::Class_1_97E659ED8D5D259C_23
{
public:
	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _BattleTargetIDs_k__BackingField; // 0x18
	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _FeverMazeBuffIDs_k__BackingField; // 0x20
	::System::Int32 _ClearScore_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9FEBC6B8E1603F4__CTOR_OFFSET))(this);
	}

	::System::Int32 get_ClearScore()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9FEBC6B8E1603F4_GET_CLEARSCORE_OFFSET))(this);
	}

	::System::Void set_ClearScore(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D9FEBC6B8E1603F4_SET_CLEARSCORE_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_FeverMazeBuffIDs()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9FEBC6B8E1603F4_GET_FEVERMAZEBUFFIDS_OFFSET))(this);
	}

	::System::Void set_FeverMazeBuffIDs(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_D9FEBC6B8E1603F4_SET_FEVERMAZEBUFFIDS_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_BattleTargetIDs()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9FEBC6B8E1603F4_GET_BATTLETARGETIDS_OFFSET))(this);
	}

	::System::Void set_BattleTargetIDs(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_D9FEBC6B8E1603F4_SET_BATTLETARGETIDS_OFFSET))(this, a1);
	}
};
