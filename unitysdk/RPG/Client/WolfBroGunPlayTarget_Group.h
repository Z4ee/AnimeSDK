#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTarget.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTarget_Group_GroupMember.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_GROUP_ISBOOMABLE_OFFSET UNITYSDK_OFFSET(0xE477CB0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_GROUP_ISHITTABLE_OFFSET UNITYSDK_OFFSET(0xE477C70)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_GROUP_METHOD_6_356E5DD361D7C314_OFFSET UNITYSDK_OFFSET(0xE477D40)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_GROUP_METHOD_6_37C4724869F9DDDF_OFFSET UNITYSDK_OFFSET(0xE477ED0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_GROUP_METHOD_6_86D9A88811BF5A61_OFFSET UNITYSDK_OFFSET(0xE477FA0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_GROUP_METHOD_6_A86A455D6AB5B836_OFFSET UNITYSDK_OFFSET(0xE477CF0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_GROUP_SETPOSITION_OFFSET UNITYSDK_OFFSET(0xE477A50)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_GROUP__CTOR_OFFSET UNITYSDK_OFFSET(0xE478070)

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunPlayTarget_Group_TypeDefinitionIndex = 68727;

	class WolfBroGunPlayTarget_Group : public ::RPG::Client::WolfBroGunPlayTarget
	{
	public:
		::Il2CppArray<::RPG::Client::WolfBroGunPlayTarget_Group_GroupMember>* members; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_GROUP__CTOR_OFFSET))(this);
		}

		::System::Void SetPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_GROUP_SETPOSITION_OFFSET))(this, a1);
		}

		::System::Boolean IsHittable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_GROUP_ISHITTABLE_OFFSET))(this);
		}

		::System::Boolean IsBoomable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_GROUP_ISBOOMABLE_OFFSET))(this);
		}

		::System::Boolean Method_6_A86A455D6AB5B836(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_GROUP_METHOD_6_A86A455D6AB5B836_OFFSET))(this, a1);
		}

		::System::Boolean Method_6_356E5DD361D7C314(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_GROUP_METHOD_6_356E5DD361D7C314_OFFSET))(this, a1);
		}

		::System::Boolean Method_6_37C4724869F9DDDF(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_GROUP_METHOD_6_37C4724869F9DDDF_OFFSET))(this, a1);
		}

		::System::Void Method_6_86D9A88811BF5A61(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_GROUP_METHOD_6_86D9A88811BF5A61_OFFSET))(this, a1);
		}
	};
}
