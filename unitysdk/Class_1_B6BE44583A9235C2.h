#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/ViewModel/MechCraftExamItemState.h"
#include "unitysdk/System/Object.h"

class Class_1_9532A7052BD07626;
namespace System { class String; }

#define CLASS_1_B6BE44583A9235C2_GET_MODEL_OFFSET UNITYSDK_OFFSET(0x15810D30)
#define CLASS_1_B6BE44583A9235C2_GET_STATE_OFFSET UNITYSDK_OFFSET(0x15810D50)
#define CLASS_1_B6BE44583A9235C2_METHOD_1_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x15810DC0)
#define CLASS_1_B6BE44583A9235C2_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x15810D70)
#define CLASS_1_B6BE44583A9235C2_SET_MODEL_OFFSET UNITYSDK_OFFSET(0x15810D40)
#define CLASS_1_B6BE44583A9235C2_SET_STATE_OFFSET UNITYSDK_OFFSET(0x15810D60)
#define CLASS_1_B6BE44583A9235C2__CTOR_OFFSET UNITYSDK_OFFSET(0x15810E20)

inline static constexpr unsigned int Class_1_B6BE44583A9235C2_TypeDefinitionIndex = 79643;

class Class_1_B6BE44583A9235C2 : public ::System::Object
{
public:
	::Class_1_9532A7052BD07626* _Model_k__BackingField; // 0x10
	::RPG::Client::MechCraft::ViewModel::MechCraftExamItemState _State_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6BE44583A9235C2__CTOR_OFFSET))(this);
	}

	::Class_1_9532A7052BD07626* get_Model()
	{
		return ((::Class_1_9532A7052BD07626*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6BE44583A9235C2_GET_MODEL_OFFSET))(this);
	}

	::System::Void set_Model(::Class_1_9532A7052BD07626* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9532A7052BD07626*))((::PBYTE)hIl2Cpp + CLASS_1_B6BE44583A9235C2_SET_MODEL_OFFSET))(this, a1);
	}

	::RPG::Client::MechCraft::ViewModel::MechCraftExamItemState get_State()
	{
		return ((::RPG::Client::MechCraft::ViewModel::MechCraftExamItemState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6BE44583A9235C2_GET_STATE_OFFSET))(this);
	}

	::System::Void set_State(::RPG::Client::MechCraft::ViewModel::MechCraftExamItemState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftExamItemState))((::PBYTE)hIl2Cpp + CLASS_1_B6BE44583A9235C2_SET_STATE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6BE44583A9235C2_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::System::String* Method_1_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6BE44583A9235C2_METHOD_1_35EA095E1AFDD9C8_OFFSET))(this);
	}
};
