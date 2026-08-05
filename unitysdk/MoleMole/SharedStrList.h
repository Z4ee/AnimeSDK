#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/SharedVariable_1.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_SHAREDSTRLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x190B1710)

namespace MoleMole
{
	inline static constexpr unsigned int SharedStrList_TypeDefinitionIndex = 41081;

	class SharedStrList : public ::BehaviorDesigner::Runtime::SharedVariable_1<::System::Collections::Generic::List_1<::System::String*>*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHAREDSTRLIST__CTOR_OFFSET))(this);
		}
	};
}
