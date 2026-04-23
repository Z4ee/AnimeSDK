#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3237A9B2FB9B276F_Struct_2_97AE06CE5D4F548E.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_3237A9B2FB9B276F;
class Class_1_8C1FA6D12B3CF102;
namespace RPG::Client { class MonoTrainPartyBuildItemDynamicBind; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::Client::TrainParty { class TrainPartyBuildDIYItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Transform; }

#define CLASS_1_3237A9B2FB9B276F_CLASS_1_ED591F162BC733AA_METHOD_1_00B59B66A70C27AA_OFFSET UNITYSDK_OFFSET(0x11BBB3D0)
#define CLASS_1_3237A9B2FB9B276F_CLASS_1_ED591F162BC733AA_METHOD_1_3500AFE3FDA66189_OFFSET UNITYSDK_OFFSET(0x11BBB720)
#define CLASS_1_3237A9B2FB9B276F_CLASS_1_ED591F162BC733AA_METHOD_1_4D1B4F142330FE72_OFFSET UNITYSDK_OFFSET(0x11BBAA80)
#define CLASS_1_3237A9B2FB9B276F_CLASS_1_ED591F162BC733AA_METHOD_1_55B8349E0B606444_OFFSET UNITYSDK_OFFSET(0x11BB86D0)
#define CLASS_1_3237A9B2FB9B276F_CLASS_1_ED591F162BC733AA_METHOD_1_5CC17D00CFA74CE5_OFFSET UNITYSDK_OFFSET(0x11BBB920)
#define CLASS_1_3237A9B2FB9B276F_CLASS_1_ED591F162BC733AA_METHOD_1_BDEF0A5B11A8DD88_OFFSET UNITYSDK_OFFSET(0x11BB9ED0)
#define CLASS_1_3237A9B2FB9B276F_CLASS_1_ED591F162BC733AA_METHOD_1_C849B83C7DC60D97_OFFSET UNITYSDK_OFFSET(0x11BB9F60)
#define CLASS_1_3237A9B2FB9B276F_CLASS_1_ED591F162BC733AA__CTOR_OFFSET UNITYSDK_OFFSET(0x11BBA070)

inline static constexpr unsigned int Class_1_3237A9B2FB9B276F_Class_1_ED591F162BC733AA_TypeDefinitionIndex = 55542;

class Class_1_3237A9B2FB9B276F_Class_1_ED591F162BC733AA : public ::System::Object
{
public:
	::RPG::Client::MonoTrainPartyBuildItemDynamicBind* Field_1_6; // 0x10
	::RPG::Client::OpenWorld::StreamingItemData* Field_1_5; // 0x18
	::System::String* Field_1_4; // 0x20
	::Class_1_3237A9B2FB9B276F* Field_1_0; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_3237A9B2FB9B276F_Struct_2_97AE06CE5D4F548E>* Field_1_8; // 0x30
	::RPG::Client::TrainParty::TrainPartyBuildDIYItem* Field_1_3; // 0x38
	::UnityEngine::Transform* Field_1_2; // 0x40
	::Class_1_8C1FA6D12B3CF102* Field_1_10; // 0x48
	::UnityEngine::MeshRenderer* Field_1_9; // 0x50
	::System::UInt32 Field_1_1; // 0x58
	::System::UInt32 Field_1_11; // 0x5C
	::System::Boolean Field_1_7; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F_CLASS_1_ED591F162BC733AA__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_1_BDEF0A5B11A8DD88()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F_CLASS_1_ED591F162BC733AA_METHOD_1_BDEF0A5B11A8DD88_OFFSET))(this);
	}

	::System::Void Method_1_4D1B4F142330FE72(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F_CLASS_1_ED591F162BC733AA_METHOD_1_4D1B4F142330FE72_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_00B59B66A70C27AA(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F_CLASS_1_ED591F162BC733AA_METHOD_1_00B59B66A70C27AA_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_3500AFE3FDA66189(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F_CLASS_1_ED591F162BC733AA_METHOD_1_3500AFE3FDA66189_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_55B8349E0B606444()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F_CLASS_1_ED591F162BC733AA_METHOD_1_55B8349E0B606444_OFFSET))(this);
	}

	::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3> Method_1_5CC17D00CFA74CE5()
	{
		return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F_CLASS_1_ED591F162BC733AA_METHOD_1_5CC17D00CFA74CE5_OFFSET))(this);
	}

	::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3> Method_1_C849B83C7DC60D97(::System::UInt32 a1)
	{
		return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F_CLASS_1_ED591F162BC733AA_METHOD_1_C849B83C7DC60D97_OFFSET))(this, a1);
	}
};
