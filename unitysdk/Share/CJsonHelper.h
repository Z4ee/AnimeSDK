#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Share { class IJsonHelper; }
namespace System { class String; }

#define SHARE_CJSONHELPER_GET_IMPL_OFFSET UNITYSDK_OFFSET(0x1D6542A0)
#define SHARE_CJSONHELPER_SET_IMPL_OFFSET UNITYSDK_OFFSET(0x1D6542B0)
#define SHARE_CJSONHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6542C0)

namespace Share
{
	inline static constexpr unsigned int CJsonHelper_TypeDefinitionIndex = 16740;

	class CJsonHelper : public ::System::Object
	{
	public:
		static ::Share::IJsonHelper** StaticGet__Impl_k__BackingField()
		{
			return (::Share::IJsonHelper**)Il2CppClass::FromTypeDefinitionIndex(CJsonHelper_TypeDefinitionIndex)->GetStaticField(0x7810);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CJSONHELPER__CTOR_OFFSET))(this);
		}

		static ::Share::IJsonHelper* get_Impl()
		{
			return ((::Share::IJsonHelper*(*)())((::PBYTE)hIl2Cpp + SHARE_CJSONHELPER_GET_IMPL_OFFSET))();
		}

		static ::System::Void set_Impl(::Share::IJsonHelper* value)
		{
			return ((::System::Void(*)(::Share::IJsonHelper*))((::PBYTE)hIl2Cpp + SHARE_CJSONHELPER_SET_IMPL_OFFSET))(value);
		}
	};
}
