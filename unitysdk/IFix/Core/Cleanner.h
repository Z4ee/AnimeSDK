#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IFIX_CORE_CLEANNER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x15B3FA10)
#define IFIX_CORE_CLEANNER_START_OFFSET UNITYSDK_OFFSET(0x15B3F910)
#define IFIX_CORE_CLEANNER_STOP_OFFSET UNITYSDK_OFFSET(0x15B3F9B0)
#define IFIX_CORE_CLEANNER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B3FD60)
#define IFIX_CORE_CLEANNER__CTOR_OFFSET UNITYSDK_OFFSET(0x15B3F900)

namespace IFix::Core
{
	inline static constexpr unsigned int Cleanner_TypeDefinitionIndex = 9817;

	class Cleanner : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_start()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Cleanner_TypeDefinitionIndex)->GetStaticField(0x500);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_CLEANNER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_CORE_CLEANNER__CCTOR_OFFSET))();
		}

		static ::System::Void Start()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_CORE_CLEANNER_START_OFFSET))();
		}

		static ::System::Void Stop()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_CORE_CLEANNER_STOP_OFFSET))();
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_CLEANNER_FINALIZE_OFFSET))(this);
		}
	};
}
