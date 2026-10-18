#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DynamicValue; }

#define CLASS_1_EFBBE4A782502831_CONVERTBOXED_OFFSET UNITYSDK_OFFSET(0x1CC64B80)
#define CLASS_1_EFBBE4A782502831_CONVERT_OFFSET UNITYSDK_OFFSET(0x1CC64B20)
#define CLASS_1_EFBBE4A782502831__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC64BF0)

inline static constexpr unsigned int Class_1_EFBBE4A782502831_TypeDefinitionIndex = 43902;

class Class_1_EFBBE4A782502831 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFBBE4A782502831__CTOR_OFFSET))(this);
	}

	::System::Int64 Convert(::RPG::GameCore::DynamicValue* a1)
	{
		return ((::System::Int64(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + CLASS_1_EFBBE4A782502831_CONVERT_OFFSET))(this, a1);
	}

	::System::Object* ConvertBoxed(::RPG::GameCore::DynamicValue* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + CLASS_1_EFBBE4A782502831_CONVERTBOXED_OFFSET))(this, a1);
	}
};
