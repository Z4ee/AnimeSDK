#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_B4357A1C72BABC6B;
class Class_2_B9E8C2EEAA5C96EC;
class Class_3_1E4F9B0ED3BF21DE;
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IGroup_1; }
namespace RPG::GameCore { class FiveDimDashOrbConfig; }
namespace RPG::GameCore { class LevelTriggerInfo; }
namespace System { class String; }
namespace UnityEngine { class Collider; }

#define CLASS_1_BEFEB52C8A521728_EXECUTE_OFFSET UNITYSDK_OFFSET(0x15EC67F0)
#define CLASS_1_BEFEB52C8A521728_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x15EC6D40)
#define CLASS_1_BEFEB52C8A521728_METHOD_1_18B783781170954B_OFFSET UNITYSDK_OFFSET(0x15EC7100)
#define CLASS_1_BEFEB52C8A521728_METHOD_1_55B8349E0B606444_OFFSET UNITYSDK_OFFSET(0x15EC6D90)
#define CLASS_1_BEFEB52C8A521728_METHOD_1_7E9C4D81D04C3024_OFFSET UNITYSDK_OFFSET(0x15EC6930)
#define CLASS_1_BEFEB52C8A521728_METHOD_1_8A73BE5FA1F02FE1_OFFSET UNITYSDK_OFFSET(0x15EC7DE0)
#define CLASS_1_BEFEB52C8A521728_METHOD_1_8FAF839E0D712B9B_OFFSET UNITYSDK_OFFSET(0x15EC7210)
#define CLASS_1_BEFEB52C8A521728_METHOD_1_CF6D55E8C83E9BD1_OFFSET UNITYSDK_OFFSET(0x15EC6B20)
#define CLASS_1_BEFEB52C8A521728_METHOD_1_CF899F8F9C75FBBA_OFFSET UNITYSDK_OFFSET(0x15EC7840)
#define CLASS_1_BEFEB52C8A521728_METHOD_1_DB283A4197B01655_OFFSET UNITYSDK_OFFSET(0x15EC7A00)
#define CLASS_1_BEFEB52C8A521728_METHOD_1_E060CBA41FB153BB_OFFSET UNITYSDK_OFFSET(0x15EC7B20)
#define CLASS_1_BEFEB52C8A521728_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x15EC6FC0)
#define CLASS_1_BEFEB52C8A521728__CTOR_OFFSET UNITYSDK_OFFSET(0x15EC6580)

inline static constexpr unsigned int Class_1_BEFEB52C8A521728_TypeDefinitionIndex = 73131;

class Class_1_BEFEB52C8A521728 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::Single Field_1_1; // 0x0
	::Entitas::IGroup_1<::Class_2_B9E8C2EEAA5C96EC*>* Field_1_2; // 0x10
	::Class_3_1E4F9B0ED3BF21DE* Field_1_3; // 0x18
	::Class_1_B4357A1C72BABC6B* Field_1_4; // 0x20
	::Entitas::ICollector_1<::Class_2_B9E8C2EEAA5C96EC*>* Field_1_5; // 0x28

	::System::Void _ctor(::Class_1_B4357A1C72BABC6B* a1, ::Class_3_1E4F9B0ED3BF21DE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4357A1C72BABC6B*, ::Class_3_1E4F9B0ED3BF21DE*))((::PBYTE)hIl2Cpp + CLASS_1_BEFEB52C8A521728__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BEFEB52C8A521728_EXECUTE_OFFSET))(this);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BEFEB52C8A521728_INITIALIZE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BEFEB52C8A521728_TEARDOWN_OFFSET))(this);
	}

	::System::Void Method_1_55B8349E0B606444()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BEFEB52C8A521728_METHOD_1_55B8349E0B606444_OFFSET))(this);
	}

	::System::Void Method_1_7E9C4D81D04C3024()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BEFEB52C8A521728_METHOD_1_7E9C4D81D04C3024_OFFSET))(this);
	}

	::System::Void Method_1_18B783781170954B(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_BEFEB52C8A521728_METHOD_1_18B783781170954B_OFFSET))(this, a1);
	}

	::System::Void Method_1_CF6D55E8C83E9BD1(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_BEFEB52C8A521728_METHOD_1_CF6D55E8C83E9BD1_OFFSET))(this, a1);
	}

	::System::Void Method_1_CF899F8F9C75FBBA(::Class_2_B9E8C2EEAA5C96EC* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_BEFEB52C8A521728_METHOD_1_CF899F8F9C75FBBA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8FAF839E0D712B9B(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_BEFEB52C8A521728_METHOD_1_8FAF839E0D712B9B_OFFSET))(this, a1);
	}

	::RPG::GameCore::LevelTriggerInfo* Method_1_DB283A4197B01655(::RPG::GameCore::FiveDimDashOrbConfig* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::RPG::GameCore::LevelTriggerInfo*(*)(::PVOID, ::RPG::GameCore::FiveDimDashOrbConfig*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_BEFEB52C8A521728_METHOD_1_DB283A4197B01655_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E060CBA41FB153BB(::Class_2_B9E8C2EEAA5C96EC* a1, ::UnityEngine::Collider* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_BEFEB52C8A521728_METHOD_1_E060CBA41FB153BB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8A73BE5FA1F02FE1(::Class_2_B9E8C2EEAA5C96EC* a1, ::UnityEngine::Collider* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_BEFEB52C8A521728_METHOD_1_8A73BE5FA1F02FE1_OFFSET))(this, a1, a2);
	}
};
