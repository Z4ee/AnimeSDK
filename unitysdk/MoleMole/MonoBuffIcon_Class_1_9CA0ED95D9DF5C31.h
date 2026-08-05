#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoBuffIcon; }

#define MOLEMOLE_MONOBUFFICON_CLASS_1_9CA0ED95D9DF5C31_METHOD_1_40E03D354D1ACC85_OFFSET UNITYSDK_OFFSET(0x1384CD10)
#define MOLEMOLE_MONOBUFFICON_CLASS_1_9CA0ED95D9DF5C31__CTOR_OFFSET UNITYSDK_OFFSET(0x1384CD00)

namespace MoleMole
{
	inline static constexpr unsigned int MonoBuffIcon_Class_1_9CA0ED95D9DF5C31_TypeDefinitionIndex = 41974;

	class MonoBuffIcon_Class_1_9CA0ED95D9DF5C31 : public ::System::Object
	{
	public:
		::MoleMole::MonoBuffIcon* Field_1_0; // 0x10
		::System::Int32 Field_1_7; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_CLASS_1_9CA0ED95D9DF5C31__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_40E03D354D1ACC85()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUFFICON_CLASS_1_9CA0ED95D9DF5C31_METHOD_1_40E03D354D1ACC85_OFFSET))(this);
		}
	};
}
