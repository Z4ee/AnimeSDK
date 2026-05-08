#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/IDGenerator_Impl.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define FOUNDATION_IDGENERATOR_GETINTERNALCOUNTER_OFFSET UNITYSDK_OFFSET(0x1AB73030)
#define FOUNDATION_IDGENERATOR_INVOKE_OFFSET UNITYSDK_OFFSET(0x1AB731B0)

namespace Foundation
{
	inline static constexpr unsigned int IDGenerator_TypeDefinitionIndex = 9185;

	class IDGenerator : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet__threadID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(IDGenerator_TypeDefinitionIndex)->GetStaticField(0x3F20);
		}
		static ::System::Nullable_1<::Foundation::IDGenerator_Impl>* StaticGet__impl()
		{
			return (::System::Nullable_1<::Foundation::IDGenerator_Impl>*)Il2CppClass::FromTypeDefinitionIndex(IDGenerator_TypeDefinitionIndex)->GetStaticField(0x0);
		}

		static ::Foundation::IDGenerator_Impl GetInternalCounter()
		{
			return ((::Foundation::IDGenerator_Impl(*)())((::PBYTE)hIl2Cpp + FOUNDATION_IDGENERATOR_GETINTERNALCOUNTER_OFFSET))();
		}

		static ::System::UInt64 Invoke()
		{
			return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + FOUNDATION_IDGENERATOR_INVOKE_OFFSET))();
		}
	};
}
