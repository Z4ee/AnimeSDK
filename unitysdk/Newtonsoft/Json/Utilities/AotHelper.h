#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define NEWTONSOFT_JSON_UTILITIES_AOTHELPER_ENSURE_OFFSET UNITYSDK_OFFSET(0x1F89F990)
#define NEWTONSOFT_JSON_UTILITIES_AOTHELPER_ISFALSE_OFFSET UNITYSDK_OFFSET(0x1F89FAC0)
#define NEWTONSOFT_JSON_UTILITIES_AOTHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F89FB30)
#define NEWTONSOFT_JSON_UTILITIES_AOTHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F89FB20)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int AotHelper_TypeDefinitionIndex = 7033;

	class AotHelper : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_s_alwaysFalse()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AotHelper_TypeDefinitionIndex)->GetStaticField(0x32B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_AOTHELPER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_AOTHELPER__CCTOR_OFFSET))();
		}

		static ::System::Void Ensure(::System::Action* action)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_AOTHELPER_ENSURE_OFFSET))(action);
		}

		static ::System::Boolean IsFalse()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_AOTHELPER_ISFALSE_OFFSET))();
		}
	};
}
