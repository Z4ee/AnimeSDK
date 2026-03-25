#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IFIX_CORE_ANONYMOUSSTOREYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x15B3EA80)

namespace IFix::Core
{
	inline static constexpr unsigned int AnonymousStoreyInfo_TypeDefinitionIndex = 9793;

	class AnonymousStoreyInfo : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* VTable; // 0x10
		::Il2CppArray<::System::Int32>* Slots; // 0x18
		::Il2CppArray<::System::Int32>* FieldTypes; // 0x20
		::System::Int32 CtorId; // 0x28
		::System::Int32 CtorParamNum; // 0x2C
		::System::Int32 FieldNum; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_ANONYMOUSSTOREYINFO__CTOR_OFFSET))(this);
		}
	};
}
