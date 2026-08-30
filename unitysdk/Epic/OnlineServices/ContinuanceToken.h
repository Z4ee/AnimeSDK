#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Handle.h"
#include "unitysdk/Epic/OnlineServices/Result.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_CONTINUANCETOKEN_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0xB34C140)
#define EPIC_ONLINESERVICES_CONTINUANCETOKEN_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB34BF20)
#define EPIC_ONLINESERVICES_CONTINUANCETOKEN__CTOR_1_OFFSET UNITYSDK_OFFSET(0xB34BF10)
#define EPIC_ONLINESERVICES_CONTINUANCETOKEN__CTOR_OFFSET UNITYSDK_OFFSET(0xB34BF00)

namespace Epic::OnlineServices
{
	inline static constexpr unsigned int ContinuanceToken_TypeDefinitionIndex = 44927;

	class ContinuanceToken : public ::Epic::OnlineServices::Handle
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONTINUANCETOKEN__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONTINUANCETOKEN__CTOR_1_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result ToString(::System::String*& a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONTINUANCETOKEN_TOSTRING_OFFSET))(this, a1);
		}

		::System::String* ToString_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONTINUANCETOKEN_TOSTRING_1_OFFSET))(this);
		}
	};
}
