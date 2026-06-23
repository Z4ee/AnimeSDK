#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IFIX_IFIXPATCHED_ISPATCHED_OFFSET UNITYSDK_OFFSET(0x11A0A4D0)
#define IFIX_IFIXPATCHED_SETPATCH_OFFSET UNITYSDK_OFFSET(0x11A0A440)
#define IFIX_IFIXPATCHED__CCTOR_OFFSET UNITYSDK_OFFSET(0x11A0A430)

namespace IFix
{
	inline static constexpr unsigned int IFixPatched_TypeDefinitionIndex = 91472;

	class IFixPatched : public ::System::Object
	{
	public:
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED__CCTOR_OFFSET))();
		}

		static ::System::Void SetPatch(::Il2CppArray<::System::Boolean>* maps)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_SETPATCH_OFFSET))(maps);
		}

		static ::System::Boolean IsPatched(::System::Int32 id)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_ISPATCHED_OFFSET))(id);
		}
	};
}
