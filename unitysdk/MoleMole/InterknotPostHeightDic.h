#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_INTERKNOTPOSTHEIGHTDIC__CTOR_OFFSET UNITYSDK_OFFSET(0x12BC6DE0)

namespace MoleMole
{
	inline static constexpr unsigned int InterknotPostHeightDic_TypeDefinitionIndex = 39853;

	class InterknotPostHeightDic : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* postHeightDic; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INTERKNOTPOSTHEIGHTDIC__CTOR_OFFSET))(this);
		}
	};
}
