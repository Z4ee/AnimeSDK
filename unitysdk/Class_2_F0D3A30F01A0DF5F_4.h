#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0FEB237AF044DA54.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

namespace System { class String; }

#define CLASS_2_F0D3A30F01A0DF5F_4_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x16477F30)
#define CLASS_2_F0D3A30F01A0DF5F_4_METHOD_2_455E250D679F9642_OFFSET UNITYSDK_OFFSET(0x16478180)
#define CLASS_2_F0D3A30F01A0DF5F_4_METHOD_2_BBA49FAB086F388D_OFFSET UNITYSDK_OFFSET(0x16477F40)
#define CLASS_2_F0D3A30F01A0DF5F_4_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16478140)
#define CLASS_2_F0D3A30F01A0DF5F_4__CTOR_OFFSET UNITYSDK_OFFSET(0x16478220)

inline static constexpr unsigned int Class_2_F0D3A30F01A0DF5F_4_TypeDefinitionIndex = 53607;

class Class_2_F0D3A30F01A0DF5F_4 : public ::Class_1_0FEB237AF044DA54
{
public:
	::System::String* Field_2_0; // 0x10
	::System::String* Field_2_1; // 0x18
	::System::String* Field_2_2; // 0x20
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F0D3A30F01A0DF5F_4__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::LogSamplerType get_Type()
	{
		return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F0D3A30F01A0DF5F_4_GET_TYPE_OFFSET))(this);
	}

	::System::Void Method_2_BBA49FAB086F388D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F0D3A30F01A0DF5F_4_METHOD_2_BBA49FAB086F388D_OFFSET))(this);
	}

	::System::Void Method_2_455E250D679F9642()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F0D3A30F01A0DF5F_4_METHOD_2_455E250D679F9642_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F0D3A30F01A0DF5F_4_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
