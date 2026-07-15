#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ConvinceAnchorConfig_AnchorData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CONVINCEANCHORCONFIG_METHOD_1_72CA05BE564B70B7_OFFSET UNITYSDK_OFFSET(0x1802A720)
#define RPG_CLIENT_CONVINCEANCHORCONFIG_METHOD_1_A6ADFA379C021A61_1_OFFSET UNITYSDK_OFFSET(0x1802A850)
#define RPG_CLIENT_CONVINCEANCHORCONFIG_METHOD_1_A6ADFA379C021A61_OFFSET UNITYSDK_OFFSET(0x1802A6C0)
#define RPG_CLIENT_CONVINCEANCHORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1802A8B0)

namespace RPG::Client
{
	inline static constexpr unsigned int ConvinceAnchorConfig_TypeDefinitionIndex = 57951;

	class ConvinceAnchorConfig : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ConvinceAnchorConfig_AnchorData*>* LeftAnchors; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ConvinceAnchorConfig_AnchorData*>* RightAnchors; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONVINCEANCHORCONFIG__CTOR_OFFSET))(this);
		}

		::RPG::Client::ConvinceAnchorConfig_AnchorData* Method_1_A6ADFA379C021A61(::System::String* a1)
		{
			return ((::RPG::Client::ConvinceAnchorConfig_AnchorData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONVINCEANCHORCONFIG_METHOD_1_A6ADFA379C021A61_OFFSET))(this, a1);
		}

		::RPG::Client::ConvinceAnchorConfig_AnchorData* Method_1_A6ADFA379C021A61_1(::System::String* a1)
		{
			return ((::RPG::Client::ConvinceAnchorConfig_AnchorData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONVINCEANCHORCONFIG_METHOD_1_A6ADFA379C021A61_1_OFFSET))(this, a1);
		}

		::RPG::Client::ConvinceAnchorConfig_AnchorData* Method_1_72CA05BE564B70B7(::System::String* a1, ::System::Collections::Generic::List_1<::RPG::Client::ConvinceAnchorConfig_AnchorData*>* a2)
		{
			return ((::RPG::Client::ConvinceAnchorConfig_AnchorData*(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::RPG::Client::ConvinceAnchorConfig_AnchorData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONVINCEANCHORCONFIG_METHOD_1_72CA05BE564B70B7_OFFSET))(this, a1, a2);
		}
	};
}
