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

#define CLASS_1_AE54088C838A17D2_METHOD_1_7DFB4B9C80198D98_OFFSET UNITYSDK_OFFSET(0x15E42E90)
#define CLASS_1_AE54088C838A17D2_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x15E43040)
#define CLASS_1_AE54088C838A17D2_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x15E43080)
#define CLASS_1_AE54088C838A17D2_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15E43000)
#define CLASS_1_AE54088C838A17D2_METHOD_1_D15708DF941619D4_OFFSET UNITYSDK_OFFSET(0x15E42EC0)
#define CLASS_1_AE54088C838A17D2_ONSELECT_OFFSET UNITYSDK_OFFSET(0x15E42FC0)
#define CLASS_1_AE54088C838A17D2__CTOR_OFFSET UNITYSDK_OFFSET(0x15E430C0)

inline static constexpr unsigned int Class_1_AE54088C838A17D2_TypeDefinitionIndex = 74099;

class Class_1_AE54088C838A17D2 : public ::System::Object
{
public:
	::RPG::Client::ActivityAlley::AlleyPackGoodData* OKDJPNMPIAF; // 0x10
	::RPG::Client::ActivityAlley::AlleyPackAnchor* GLCHNMCMIMI; // 0x18
	::RPG::Client::ActivityAlley::AlleyPackAnchorState MEPFOEEGBEA; // 0x20
	::UnityEngine::Vector3 HMPNOGFAFEM; // 0x24
	::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32> DLIJNFFLHHI; // 0x30
	::RPG::GameCore::AlleyPackAnchorType HPLKADFDFAI; // 0x3C
	::RPG::Client::ActivityAlley::AlleyPackAnchorDirType MLDNAFBHNKO; // 0x40
	::System::UInt32 NHHOBBKMIGF; // 0x44

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
