#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_C4E182242E3E9AF6.h"
#include "unitysdk/MoleMole/DataStructures/Common/Optional_1.h"

#define MOLEMOLE_CONFIG_ZIPLINE_OPTIONALMOVEDIRECTIONTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4F60D0)

namespace MoleMole::Config::ZipLine
{
	inline static constexpr unsigned int OptionalMoveDirectionType_TypeDefinitionIndex = 64948;

	class OptionalMoveDirectionType : public ::MoleMole::DataStructures::Common::Optional_1<::Enum_3_C4E182242E3E9AF6>
	{
	public:
		::System::Void _ctor(::Enum_3_C4E182242E3E9AF6 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_C4E182242E3E9AF6))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZIPLINE_OPTIONALMOVEDIRECTIONTYPE__CTOR_OFFSET))(this, a1);
		}
	};
}
