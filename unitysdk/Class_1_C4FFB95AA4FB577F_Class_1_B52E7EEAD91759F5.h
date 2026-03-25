#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C4FFB95AA4FB577F_Struct_2_97AE06CE5D4F548E.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_C4FFB95AA4FB577F;
namespace RPG::Client { class MonoTrainPartyBuildItemDynamicBind; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_C4FFB95AA4FB577F_CLASS_1_B52E7EEAD91759F5_METHOD_1_55B8349E0B606444_OFFSET UNITYSDK_OFFSET(0x8C5EAE0)
#define CLASS_1_C4FFB95AA4FB577F_CLASS_1_B52E7EEAD91759F5_METHOD_1_5CC17D00CFA74CE5_OFFSET UNITYSDK_OFFSET(0x8C62FB0)
#define CLASS_1_C4FFB95AA4FB577F_CLASS_1_B52E7EEAD91759F5_METHOD_1_9D29EFC7C0D4250E_OFFSET UNITYSDK_OFFSET(0x8C62E40)
#define CLASS_1_C4FFB95AA4FB577F_CLASS_1_B52E7EEAD91759F5_METHOD_1_C1E157F8B6849FEB_OFFSET UNITYSDK_OFFSET(0x8C629E0)
#define CLASS_1_C4FFB95AA4FB577F_CLASS_1_B52E7EEAD91759F5_METHOD_1_C34B4C47377170EE_OFFSET UNITYSDK_OFFSET(0x8C62F50)
#define CLASS_1_C4FFB95AA4FB577F_CLASS_1_B52E7EEAD91759F5_METHOD_1_C849B83C7DC60D97_OFFSET UNITYSDK_OFFSET(0x8C60170)
#define CLASS_1_C4FFB95AA4FB577F_CLASS_1_B52E7EEAD91759F5__CTOR_OFFSET UNITYSDK_OFFSET(0x8C60280)

inline static constexpr unsigned int Class_1_C4FFB95AA4FB577F_Class_1_B52E7EEAD91759F5_TypeDefinitionIndex = 48778;

class Class_1_C4FFB95AA4FB577F_Class_1_B52E7EEAD91759F5 : public ::System::Object
{
public:
	::RPG::Client::MonoTrainPartyBuildItemDynamicBind* Field_1_6; // 0x10
	::UnityEngine::Transform* Field_1_2; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_C4FFB95AA4FB577F_Struct_2_97AE06CE5D4F548E>* Field_1_8; // 0x20
	::Class_1_C4FFB95AA4FB577F* Field_1_0; // 0x28
	::System::String* Field_1_4; // 0x30
	::RPG::Client::OpenWorld::StreamingItemData* Field_1_5; // 0x38
	::System::UInt32 Field_1_1; // 0x40
	::System::Boolean Field_1_7; // 0x44
	::System::UInt32 Field_1_3; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F_CLASS_1_B52E7EEAD91759F5__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C1E157F8B6849FEB(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F_CLASS_1_B52E7EEAD91759F5_METHOD_1_C1E157F8B6849FEB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9D29EFC7C0D4250E(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F_CLASS_1_B52E7EEAD91759F5_METHOD_1_9D29EFC7C0D4250E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_C34B4C47377170EE(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F_CLASS_1_B52E7EEAD91759F5_METHOD_1_C34B4C47377170EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_55B8349E0B606444()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F_CLASS_1_B52E7EEAD91759F5_METHOD_1_55B8349E0B606444_OFFSET))(this);
	}

	::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3> Method_1_5CC17D00CFA74CE5()
	{
		return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F_CLASS_1_B52E7EEAD91759F5_METHOD_1_5CC17D00CFA74CE5_OFFSET))(this);
	}

	::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3> Method_1_C849B83C7DC60D97(::System::UInt32 a1)
	{
		return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F_CLASS_1_B52E7EEAD91759F5_METHOD_1_C849B83C7DC60D97_OFFSET))(this, a1);
	}
};
