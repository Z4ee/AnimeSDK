#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class PlayerAccessoryTabData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_PLAYERACCESSORYSKINDATA_METHOD_1_0CCC0CF1772F4277_OFFSET UNITYSDK_OFFSET(0x1AA72A30)
#define MOLEMOLE_CONFIG_PLAYERACCESSORYSKINDATA_METHOD_1_FA58824BA12F6F62_OFFSET UNITYSDK_OFFSET(0x1AA728A0)
#define MOLEMOLE_CONFIG_PLAYERACCESSORYSKINDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA72890)

namespace MoleMole::Config
{
	inline static constexpr unsigned int PlayerAccessorySkinData_TypeDefinitionIndex = 86653;

	class PlayerAccessorySkinData : public ::System::Object
	{
	public:
		::System::Int32 AvatarID; // 0x10
		::System::String* Tips; // 0x18
		::Il2CppArray<::MoleMole::Config::PlayerAccessoryTabData*>* TabConfigs; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::PlayerAccessoryTabData*>* TabCfgDict; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PLAYERACCESSORYSKINDATA__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_FA58824BA12F6F62()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PLAYERACCESSORYSKINDATA_METHOD_1_FA58824BA12F6F62_OFFSET))(this);
		}

		::System::Boolean Method_1_0CCC0CF1772F4277(::System::Int32 a1, ::MoleMole::Config::PlayerAccessoryTabData*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MoleMole::Config::PlayerAccessoryTabData*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PLAYERACCESSORYSKINDATA_METHOD_1_0CCC0CF1772F4277_OFFSET))(this, a1, a2);
		}
	};
}
