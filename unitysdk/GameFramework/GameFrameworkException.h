#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define GAMEFRAMEWORK_GAMEFRAMEWORKEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CC57080)
#define GAMEFRAMEWORK_GAMEFRAMEWORKEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1CC58C50)
#define GAMEFRAMEWORK_GAMEFRAMEWORKEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1CC58CC0)
#define GAMEFRAMEWORK_GAMEFRAMEWORKEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC58BF0)

namespace GameFramework
{
	inline static constexpr unsigned int GameFrameworkException_TypeDefinitionIndex = 43842;

	class GameFrameworkException : public ::System::Exception
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMEFRAMEWORK_GAMEFRAMEWORKEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GAMEFRAMEWORK_GAMEFRAMEWORKEXCEPTION__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::String* a1, ::System::Exception* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + GAMEFRAMEWORK_GAMEFRAMEWORKEXCEPTION__CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_3(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + GAMEFRAMEWORK_GAMEFRAMEWORKEXCEPTION__CTOR_3_OFFSET))(this, a1, a2);
		}
	};
}
