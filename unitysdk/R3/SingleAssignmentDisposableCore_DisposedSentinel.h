#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define R3_SINGLEASSIGNMENTDISPOSABLECORE_DISPOSEDSENTINEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BF18F80)
#define R3_SINGLEASSIGNMENTDISPOSABLECORE_DISPOSEDSENTINEL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BF18F90)
#define R3_SINGLEASSIGNMENTDISPOSABLECORE_DISPOSEDSENTINEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF18F70)

namespace R3
{
	inline static constexpr unsigned int SingleAssignmentDisposableCore_DisposedSentinel_TypeDefinitionIndex = 35283;

	class SingleAssignmentDisposableCore_DisposedSentinel : public ::System::Object
	{
	public:
		static ::R3::SingleAssignmentDisposableCore_DisposedSentinel** StaticGet_Instance()
		{
			return (::R3::SingleAssignmentDisposableCore_DisposedSentinel**)Il2CppClass::FromTypeDefinitionIndex(SingleAssignmentDisposableCore_DisposedSentinel_TypeDefinitionIndex)->GetStaticField(0xDA0);
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
