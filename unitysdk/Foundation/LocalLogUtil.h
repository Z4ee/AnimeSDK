#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define FOUNDATION_LOCALLOGUTIL_LOG_OFFSET UNITYSDK_OFFSET(0x1DA37910)
#define FOUNDATION_LOCALLOGUTIL_OPENLOGFILEANDFLODER_OFFSET UNITYSDK_OFFSET(0x1DA37AC0)
#define FOUNDATION_LOCALLOGUTIL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DA37B90)

namespace Foundation
{
	inline static constexpr unsigned int LocalLogUtil_TypeDefinitionIndex = 7890;

	class LocalLogUtil : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_SavePath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LocalLogUtil_TypeDefinitionIndex)->GetStaticField(0x72D0);
		}
		static ::System::Boolean* StaticGet_wirteLog()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(LocalLogUtil_TypeDefinitionIndex)->GetStaticField(0x3A30);
		}
		static ::System::Boolean* StaticGet_Enable()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(LocalLogUtil_TypeDefinitionIndex)->GetStaticField(0x3A31);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_LOCALLOGUTIL__CCTOR_OFFSET))();
		}

		static ::System::Void Log(::System::String* msg)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_LOCALLOGUTIL_LOG_OFFSET))(msg);
		}

		static ::System::Void OpenLogFileAndFloder()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_LOCALLOGUTIL_OPENLOGFILEANDFLODER_OFFSET))();
		}
	};
}
