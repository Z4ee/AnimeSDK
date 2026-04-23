#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityAlley/AlleyPackAnchorDirType.h"
#include "unitysdk/RPG/Client/ActivityAlley/AlleyPackAnchorState.h"
#include "unitysdk/RPG/GameCore/AlleyPackAnchorType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::ActivityAlley { class AlleyPackAnchor; }
namespace RPG::Client::ActivityAlley { class AlleyPackGoodData; }

#define CLASS_1_AE54088C838A17D2_METHOD_1_7DFB4B9C80198D98_OFFSET UNITYSDK_OFFSET(0x124DD6F0)
#define CLASS_1_AE54088C838A17D2_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x124DD8A0)
#define CLASS_1_AE54088C838A17D2_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x124DD8E0)
#define CLASS_1_AE54088C838A17D2_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x124DD860)
#define CLASS_1_AE54088C838A17D2_METHOD_1_D15708DF941619D4_OFFSET UNITYSDK_OFFSET(0x124DD720)
#define CLASS_1_AE54088C838A17D2_ONSELECT_OFFSET UNITYSDK_OFFSET(0x124DD820)
#define CLASS_1_AE54088C838A17D2__CTOR_OFFSET UNITYSDK_OFFSET(0x124DD920)

inline static constexpr unsigned int Class_1_AE54088C838A17D2_TypeDefinitionIndex = 68205;

class Class_1_AE54088C838A17D2 : public ::System::Object
{
public:
	::RPG::Client::ActivityAlley::AlleyPackAnchor* Field_1_3; // 0x10
	::RPG::Client::ActivityAlley::AlleyPackGoodData* Field_1_4; // 0x18
	::UnityEngine::Vector3 Field_1_7; // 0x20
	::System::UInt32 Field_1_2; // 0x2C
	::RPG::GameCore::AlleyPackAnchorType Field_1_0; // 0x30
	::RPG::Client::ActivityAlley::AlleyPackAnchorState Field_1_5; // 0x34
	::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32> Field_1_6; // 0x38
	::RPG::Client::ActivityAlley::AlleyPackAnchorDirType Field_1_1; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE54088C838A17D2__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_7DFB4B9C80198D98()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE54088C838A17D2_METHOD_1_7DFB4B9C80198D98_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_D15708DF941619D4()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE54088C838A17D2_METHOD_1_D15708DF941619D4_OFFSET))(this);
	}

	::System::Void OnSelect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE54088C838A17D2_ONSELECT_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE54088C838A17D2_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE54088C838A17D2_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE54088C838A17D2_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
	}
};
