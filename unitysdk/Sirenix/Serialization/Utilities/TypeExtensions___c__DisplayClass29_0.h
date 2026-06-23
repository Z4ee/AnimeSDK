#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class MethodInfo; }

#define SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS___C__DISPLAYCLASS29_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E04ED70)
#define SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS___C__DISPLAYCLASS29_0__GETCASTMETHODDELEGATE_B__0_OFFSET UNITYSDK_OFFSET(0x1E04ED80)

namespace Sirenix::Serialization::Utilities
{
	inline static constexpr unsigned int TypeExtensions___c__DisplayClass29_0_TypeDefinitionIndex = 7625;

	class TypeExtensions___c__DisplayClass29_0 : public ::System::Object
	{
	public:
		::System::Reflection::MethodInfo* method; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS___C__DISPLAYCLASS29_0__CTOR_OFFSET))(this);
		}

		::System::Object* _GetCastMethodDelegate_b__0(::System::Object* obj)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS___C__DISPLAYCLASS29_0__GETCASTMETHODDELEGATE_B__0_OFFSET))(this, obj);
		}
	};
}
