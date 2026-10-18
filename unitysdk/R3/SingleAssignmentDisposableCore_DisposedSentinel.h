#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define R3_SINGLEASSIGNMENTDISPOSABLECORE_DISPOSEDSENTINEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C3F6F50)
#define R3_SINGLEASSIGNMENTDISPOSABLECORE_DISPOSEDSENTINEL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C3F6F60)
#define R3_SINGLEASSIGNMENTDISPOSABLECORE_DISPOSEDSENTINEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3F6F40)

namespace R3
{
	inline static constexpr unsigned int SingleAssignmentDisposableCore_DisposedSentinel_TypeDefinitionIndex = 35970;

	class SingleAssignmentDisposableCore_DisposedSentinel : public ::System::Object
	{
	public:
		static ::R3::SingleAssignmentDisposableCore_DisposedSentinel** StaticGet_Instance()
		{
			return (::R3::SingleAssignmentDisposableCore_DisposedSentinel**)Il2CppClass::FromTypeDefinitionIndex(SingleAssignmentDisposableCore_DisposedSentinel_TypeDefinitionIndex)->GetStaticField(0xA80);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + R3_SINGLEASSIGNMENTDISPOSABLECORE_DISPOSEDSENTINEL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + R3_SINGLEASSIGNMENTDISPOSABLECORE_DISPOSEDSENTINEL__CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + R3_SINGLEASSIGNMENTDISPOSABLECORE_DISPOSEDSENTINEL_DISPOSE_OFFSET))(this);
		}
	};
}
