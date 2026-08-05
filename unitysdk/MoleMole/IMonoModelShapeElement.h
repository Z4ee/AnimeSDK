#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3855198EDB5CF06A.h"
#include "unitysdk/Struct_2_71706210729AB681.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_IMONOMODELSHAPEELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x19258870)

namespace MoleMole
{
	inline static constexpr unsigned int IMonoModelShapeElement_TypeDefinitionIndex = 83442;

	class IMonoModelShapeElement : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IMONOMODELSHAPEELEMENT__CTOR_OFFSET))(this);
		}
	};
}
