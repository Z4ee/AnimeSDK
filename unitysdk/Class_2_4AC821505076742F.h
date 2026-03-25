#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7256E7A2FB36A46D.h"

class Class_1_303D5A33D1401D59;
class Class_1_56FF45D7B2C55655;
class Class_1_8A6989C352B0F0F0;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::GameCore { class StageSceneItemSerializationData; }
namespace RPG::GameCore { class StageSceneItemSharedSerializationData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_4AC821505076742F_METHOD_2_18BFDBBF8F66A0A6_OFFSET UNITYSDK_OFFSET(0x11765D30)
#define CLASS_2_4AC821505076742F_METHOD_2_1FF8160E7F36A0AB_OFFSET UNITYSDK_OFFSET(0x11766430)
#define CLASS_2_4AC821505076742F_METHOD_2_452287A14C366C72_OFFSET UNITYSDK_OFFSET(0x11765EC0)
#define CLASS_2_4AC821505076742F_METHOD_2_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0x11765A90)
#define CLASS_2_4AC821505076742F_METHOD_2_BA1A163457250A51_OFFSET UNITYSDK_OFFSET(0x117665C0)
#define CLASS_2_4AC821505076742F_METHOD_2_BD8017CB722F693E_OFFSET UNITYSDK_OFFSET(0x11766110)
#define CLASS_2_4AC821505076742F_METHOD_2_FD81F7AADF9AE741_OFFSET UNITYSDK_OFFSET(0x117662A0)
#define CLASS_2_4AC821505076742F__CTOR_OFFSET UNITYSDK_OFFSET(0x11765920)

inline static constexpr unsigned int Class_2_4AC821505076742F_TypeDefinitionIndex = 60584;

class Class_2_4AC821505076742F : public ::Class_1_7256E7A2FB36A46D
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_303D5A33D1401D59*>* Field_2_2; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::GameCore::StageSceneItemSerializationData*>* Field_2_0; // 0x20
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Collections::Generic::List_1<::RPG::GameCore::StageSceneItemSharedSerializationData*>*>* Field_2_1; // 0x28

	::System::Void _ctor(::Class_1_56FF45D7B2C55655* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_56FF45D7B2C55655*))((::PBYTE)hIl2Cpp + CLASS_2_4AC821505076742F__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_B387E1AED8A8F880()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4AC821505076742F_METHOD_2_B387E1AED8A8F880_OFFSET))(this);
	}

	::System::Void Method_2_18BFDBBF8F66A0A6(::Class_1_303D5A33D1401D59* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2, ::RPG::GameCore::StageSceneItemSerializationData* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::GameCore::StageSceneItemSerializationData*))((::PBYTE)hIl2Cpp + CLASS_2_4AC821505076742F_METHOD_2_18BFDBBF8F66A0A6_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_452287A14C366C72(::Class_1_303D5A33D1401D59* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2, ::RPG::GameCore::StageSceneItemSharedSerializationData* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::GameCore::StageSceneItemSharedSerializationData*))((::PBYTE)hIl2Cpp + CLASS_2_4AC821505076742F_METHOD_2_452287A14C366C72_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_BD8017CB722F693E(::Class_1_303D5A33D1401D59* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2, ::UnityEngine::GameObject* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_4AC821505076742F_METHOD_2_BD8017CB722F693E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_BA1A163457250A51(::Class_1_8A6989C352B0F0F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*))((::PBYTE)hIl2Cpp + CLASS_2_4AC821505076742F_METHOD_2_BA1A163457250A51_OFFSET))(this, a1);
	}

	::System::Void Method_2_1FF8160E7F36A0AB(::UnityEngine::GameObject* a1, ::RPG::GameCore::StageSceneItemSerializationData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::GameCore::StageSceneItemSerializationData*))((::PBYTE)hIl2Cpp + CLASS_2_4AC821505076742F_METHOD_2_1FF8160E7F36A0AB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_FD81F7AADF9AE741(::UnityEngine::GameObject* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::StageSceneItemSharedSerializationData*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::RPG::GameCore::StageSceneItemSharedSerializationData*>*))((::PBYTE)hIl2Cpp + CLASS_2_4AC821505076742F_METHOD_2_FD81F7AADF9AE741_OFFSET))(this, a1, a2);
	}
};
