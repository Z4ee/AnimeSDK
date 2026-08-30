#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CrowdAnimator/CrowdAssetsPathConfig_CrowdVariantPathDict.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CROWDANIMATOR_CROWDASSETSPATHCONFIG_METHOD_3_2CBE0B79DD36047E_OFFSET UNITYSDK_OFFSET(0xCC76020)
#define RPG_CLIENT_CROWDANIMATOR_CROWDASSETSPATHCONFIG_METHOD_3_3543E185ADE7267F_OFFSET UNITYSDK_OFFSET(0xCC76280)
#define RPG_CLIENT_CROWDANIMATOR_CROWDASSETSPATHCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xCC76380)

namespace RPG::Client::CrowdAnimator
{
	inline static constexpr unsigned int CrowdAssetsPathConfig_TypeDefinitionIndex = 73609;

	class CrowdAssetsPathConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		// static const ::System::String* DEFAULT_CONFIG_PATH; // 0x0
		::System::Collections::Generic::List_1<::RPG::Client::CrowdAnimator::CrowdAssetsPathConfig_CrowdVariantPathDict>* CrowdVariantPath; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::CrowdAnimator::CrowdAssetsPathConfig_CrowdVariantPathDict>* _CrowdVariantPathDicts; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDASSETSPATHCONFIG__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_2CBE0B79DD36047E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDASSETSPATHCONFIG_METHOD_3_2CBE0B79DD36047E_OFFSET))(this);
		}

		::System::String* Method_3_3543E185ADE7267F(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDASSETSPATHCONFIG_METHOD_3_3543E185ADE7267F_OFFSET))(this, a1);
		}
	};
}
