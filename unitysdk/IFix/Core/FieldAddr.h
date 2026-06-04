#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IFIX_CORE_FIELDADDR__CTOR_OFFSET UNITYSDK_OFFSET(0x17F8A9A0)

namespace IFix::Core
{
	inline static constexpr unsigned int FieldAddr_TypeDefinitionIndex = 9778;

	class FieldAddr : public ::System::Object
	{
	public:
		::System::Object* Object; // 0x10
		::Il2CppArray<::System::Int32>* FieldIdList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_FIELDADDR__CTOR_OFFSET))(this);
		}
	};
}
