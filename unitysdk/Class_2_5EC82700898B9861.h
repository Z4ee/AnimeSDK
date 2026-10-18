#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0FEB237AF044DA54_1.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

namespace System { class String; }

#define CLASS_2_5EC82700898B9861_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xBE33E50)
#define CLASS_2_5EC82700898B9861_METHOD_2_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0xBE341B0)
#define CLASS_2_5EC82700898B9861_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBE34170)
#define CLASS_2_5EC82700898B9861_METHOD_2_D460587695D41831_OFFSET UNITYSDK_OFFSET(0xBE33E60)
#define CLASS_2_5EC82700898B9861__CTOR_OFFSET UNITYSDK_OFFSET(0xBE34390)

inline static constexpr unsigned int Class_2_5EC82700898B9861_TypeDefinitionIndex = 56107;

class Class_2_5EC82700898B9861 : public ::Class_1_0FEB237AF044DA54_1
{
public:
	::System::String* EOBLJJBOBIN; // 0x10
	::System::String* MCLLALGABAB; // 0x18
	::System::Byte JBCBONFABOM; // 0x20
	::System::Int32 HFOGMCJCIAI; // 0x24
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x28
	::System::Int32 KBAPBCNJHDB; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5EC82700898B9861__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::LogSamplerType get_Type()
	{
		return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5EC82700898B9861_GET_TYPE_OFFSET))(this);
	}

	::System::Void Method_2_D460587695D41831()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5EC82700898B9861_METHOD_2_D460587695D41831_OFFSET))(this);
	}

	::System::Void Method_2_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5EC82700898B9861_METHOD_2_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5EC82700898B9861_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
