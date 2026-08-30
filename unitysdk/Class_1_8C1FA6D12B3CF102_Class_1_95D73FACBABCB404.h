#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TrainParty/OutlinePost/TrainPartyBuildOutlineState.h"
#include "unitysdk/System/Object.h"

class Class_1_8C1FA6D12B3CF102;

#define CLASS_1_8C1FA6D12B3CF102_CLASS_1_95D73FACBABCB404_GET_STATE_OFFSET UNITYSDK_OFFSET(0x15777DC0)
#define CLASS_1_8C1FA6D12B3CF102_CLASS_1_95D73FACBABCB404_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x15777D80)
#define CLASS_1_8C1FA6D12B3CF102_CLASS_1_95D73FACBABCB404_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15777D40)
#define CLASS_1_8C1FA6D12B3CF102_CLASS_1_95D73FACBABCB404_SET_STATE_OFFSET UNITYSDK_OFFSET(0x15777DD0)
#define CLASS_1_8C1FA6D12B3CF102_CLASS_1_95D73FACBABCB404__CTOR_OFFSET UNITYSDK_OFFSET(0x15777D30)

inline static constexpr unsigned int Class_1_8C1FA6D12B3CF102_Class_1_95D73FACBABCB404_TypeDefinitionIndex = 74273;

class Class_1_8C1FA6D12B3CF102_Class_1_95D73FACBABCB404 : public ::System::Object
{
public:
	::Class_1_8C1FA6D12B3CF102* ADMKLAHAHAM; // 0x10
	::RPG::Client::TrainParty::OutlinePost::TrainPartyBuildOutlineState _State_k__BackingField; // 0x18

	::System::Void _ctor(::Class_1_8C1FA6D12B3CF102* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8C1FA6D12B3CF102*))((::PBYTE)hIl2Cpp + CLASS_1_8C1FA6D12B3CF102_CLASS_1_95D73FACBABCB404__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C1FA6D12B3CF102_CLASS_1_95D73FACBABCB404_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C1FA6D12B3CF102_CLASS_1_95D73FACBABCB404_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::RPG::Client::TrainParty::OutlinePost::TrainPartyBuildOutlineState get_State()
	{
		return ((::RPG::Client::TrainParty::OutlinePost::TrainPartyBuildOutlineState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C1FA6D12B3CF102_CLASS_1_95D73FACBABCB404_GET_STATE_OFFSET))(this);
	}

	::System::Void set_State(::RPG::Client::TrainParty::OutlinePost::TrainPartyBuildOutlineState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::OutlinePost::TrainPartyBuildOutlineState))((::PBYTE)hIl2Cpp + CLASS_1_8C1FA6D12B3CF102_CLASS_1_95D73FACBABCB404_SET_STATE_OFFSET))(this, a1);
	}
};
