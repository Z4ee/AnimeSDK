#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_2BF31F3092BDFD9E;
class Class_3_5775A4FEC79026BC;
namespace RPG::Client { class WolfBroGunProjectile; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_E2DB55406F63CF97_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1057C160)
#define CLASS_1_E2DB55406F63CF97_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1057C800)
#define CLASS_1_E2DB55406F63CF97_METHOD_1_63ADCD25533276CB_OFFSET UNITYSDK_OFFSET(0x1057C570)
#define CLASS_1_E2DB55406F63CF97_METHOD_1_6C78BE0F58E59620_OFFSET UNITYSDK_OFFSET(0x1057C100)
#define CLASS_1_E2DB55406F63CF97_METHOD_1_777A48E663D88CE2_OFFSET UNITYSDK_OFFSET(0x1057C300)
#define CLASS_1_E2DB55406F63CF97_METHOD_1_B8A8E07261478334_OFFSET UNITYSDK_OFFSET(0x1057C770)
#define CLASS_1_E2DB55406F63CF97__CTOR_OFFSET UNITYSDK_OFFSET(0x1057C810)

inline static constexpr unsigned int Class_1_E2DB55406F63CF97_TypeDefinitionIndex = 56163;

class Class_1_E2DB55406F63CF97 : public ::System::Object
{
public:
	::Class_1_2BF31F3092BDFD9E* Field_1_0; // 0x10
	::UnityEngine::Transform* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::RPG::Client::WolfBroGunProjectile*>* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2DB55406F63CF97__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6C78BE0F58E59620(::Class_1_2BF31F3092BDFD9E* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2BF31F3092BDFD9E*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_E2DB55406F63CF97_METHOD_1_6C78BE0F58E59620_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2DB55406F63CF97_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_777A48E663D88CE2(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E2DB55406F63CF97_METHOD_1_777A48E663D88CE2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_63ADCD25533276CB(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::RPG::Client::WolfBroGunProjectile* a3, ::Class_3_5775A4FEC79026BC* a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RPG::Client::WolfBroGunProjectile*, ::Class_3_5775A4FEC79026BC*))((::PBYTE)hIl2Cpp + CLASS_1_E2DB55406F63CF97_METHOD_1_63ADCD25533276CB_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::Client::WolfBroGunProjectile* Method_1_B8A8E07261478334(::RPG::Client::WolfBroGunProjectile* a1)
	{
		return ((::RPG::Client::WolfBroGunProjectile*(*)(::PVOID, ::RPG::Client::WolfBroGunProjectile*))((::PBYTE)hIl2Cpp + CLASS_1_E2DB55406F63CF97_METHOD_1_B8A8E07261478334_OFFSET))(this, a1);
	}

	::Class_1_2BF31F3092BDFD9E* Method_1_24748FC20F375725()
	{
		return ((::Class_1_2BF31F3092BDFD9E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2DB55406F63CF97_METHOD_1_24748FC20F375725_OFFSET))(this);
	}
};
