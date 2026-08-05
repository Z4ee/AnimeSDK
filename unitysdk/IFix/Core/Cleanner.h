#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IFIX_CORE_CLEANNER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1E07B9A0)
#define IFIX_CORE_CLEANNER_START_OFFSET UNITYSDK_OFFSET(0x1E07B930)
#define IFIX_CORE_CLEANNER_STOP_OFFSET UNITYSDK_OFFSET(0x1E07B990)
#define IFIX_CORE_CLEANNER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E07B980)

namespace IFix::Core
{
	inline static constexpr unsigned int Cleanner_TypeDefinitionIndex = 6952;

	class Cleanner : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_start()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Cleanner_TypeDefinitionIndex)->GetStaticField(0x3210);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_CLEANNER__CTOR_OFFSET))(this);
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
