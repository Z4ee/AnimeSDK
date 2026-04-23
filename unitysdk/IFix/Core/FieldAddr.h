#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IFIX_CORE_FIELDADDR__CTOR_OFFSET UNITYSDK_OFFSET(0x1713F8E0)

namespace IFix::Core
{
	inline static constexpr unsigned int FieldAddr_TypeDefinitionIndex = 9951;

	class FieldAddr : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* FieldIdList; // 0x10
		::System::Object* Object; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_FIELDADDR__CTOR_OFFSET))(this);
		}
	};
}
