#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Code::Logic::Data::ScriptObject::Level { class MoveCoordinate; }

#define CLASS_1_755994DA329BE668_CLASS_1_B6C75A4937E7355C_METHOD_1_F5D10DA18B4DCF30_OFFSET UNITYSDK_OFFSET(0x10FBCF50)
#define CLASS_1_755994DA329BE668_CLASS_1_B6C75A4937E7355C__CTOR_OFFSET UNITYSDK_OFFSET(0x10FBCF40)

inline static constexpr unsigned int Class_1_755994DA329BE668_Class_1_B6C75A4937E7355C_TypeDefinitionIndex = 82666;

class Class_1_755994DA329BE668_Class_1_B6C75A4937E7355C : public ::System::Object
{
public:
	::Il2CppArray<::Code::Logic::Data::ScriptObject::Level::MoveCoordinate*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_755994DA329BE668_CLASS_1_B6C75A4937E7355C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_F5D10DA18B4DCF30(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_755994DA329BE668_CLASS_1_B6C75A4937E7355C_METHOD_1_F5D10DA18B4DCF30_OFFSET))(this, a1, a2);
	}
};
