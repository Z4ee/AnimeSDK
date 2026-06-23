#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MONOLEVELDOORWIDTHSYNC_CLASS_1_991BEB3714D9D0F5__CTOR_1_OFFSET UNITYSDK_OFFSET(0x16CD95B0)
#define MOLEMOLE_MONOLEVELDOORWIDTHSYNC_CLASS_1_991BEB3714D9D0F5__CTOR_OFFSET UNITYSDK_OFFSET(0x16CD95A0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoLevelDoorWidthSync_Class_1_991BEB3714D9D0F5_TypeDefinitionIndex = 56425;

	class MonoLevelDoorWidthSync_Class_1_991BEB3714D9D0F5 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Tuple_2<::System::Single, ::System::Int16>*>* Field_1_1; // 0x10
		::System::Single Field_1_0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELDOORWIDTHSYNC_CLASS_1_991BEB3714D9D0F5__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Single a1, ::System::Single a2, ::System::Int16 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Int16))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELDOORWIDTHSYNC_CLASS_1_991BEB3714D9D0F5__CTOR_1_OFFSET))(this, a1, a2, a3);
		}
	};
}
