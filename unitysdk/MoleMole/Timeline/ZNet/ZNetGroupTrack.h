#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_716F9FCFF12A109B.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Timeline/GroupTrack.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_TIMELINE_ZNET_ZNETGROUPTRACK_GETCUSTOMCOLOR_OFFSET UNITYSDK_OFFSET(0x191C0E40)
#define MOLEMOLE_TIMELINE_ZNET_ZNETGROUPTRACK_HASCUSTOMCOLOR_OFFSET UNITYSDK_OFFSET(0x191C0E00)
#define MOLEMOLE_TIMELINE_ZNET_ZNETGROUPTRACK_METHOD_6_BFD792E814D995C0_OFFSET UNITYSDK_OFFSET(0x191C11D0)
#define MOLEMOLE_TIMELINE_ZNET_ZNETGROUPTRACK_METHOD_6_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x191C11C0)
#define MOLEMOLE_TIMELINE_ZNET_ZNETGROUPTRACK__CCTOR_OFFSET UNITYSDK_OFFSET(0x191C1020)
#define MOLEMOLE_TIMELINE_ZNET_ZNETGROUPTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x191C0FC0)

namespace MoleMole::Timeline::ZNet
{
	inline static constexpr unsigned int ZNetGroupTrack_TypeDefinitionIndex = 64537;

	class ZNetGroupTrack : public ::UnityEngine::Timeline::GroupTrack
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::Enum_3_716F9FCFF12A109B, ::UnityEngine::Color>** StaticGet_s_GroupTypeToTrackColor()
		{
			return (::System::Collections::Generic::Dictionary_2<::Enum_3_716F9FCFF12A109B, ::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(ZNetGroupTrack_TypeDefinitionIndex)->GetStaticField(0x48E70);
		}
		static ::UnityEngine::Color* StaticGet_s_DynamicAttachColor()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(ZNetGroupTrack_TypeDefinitionIndex)->GetStaticField(0x10D20);
		}
		static ::UnityEngine::Color* StaticGet_s_DefaultColor()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(ZNetGroupTrack_TypeDefinitionIndex)->GetStaticField(0x10D30);
		}
		::Enum_3_716F9FCFF12A109B groupTrackType; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETGROUPTRACK__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETGROUPTRACK__CCTOR_OFFSET))();
		}

		::System::Boolean HasCustomColor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETGROUPTRACK_HASCUSTOMCOLOR_OFFSET))(this);
		}

		::UnityEngine::Color GetCustomColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETGROUPTRACK_GETCUSTOMCOLOR_OFFSET))(this);
		}

		::System::Boolean Method_6_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETGROUPTRACK_METHOD_6_F0088C88851A7DFB_OFFSET))(this);
		}

		::UnityEngine::Color Method_6_BFD792E814D995C0()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETGROUPTRACK_METHOD_6_BFD792E814D995C0_OFFSET))(this);
		}
	};
}
