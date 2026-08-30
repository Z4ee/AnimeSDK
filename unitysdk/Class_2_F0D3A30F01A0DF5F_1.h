#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0FEB237AF044DA54_1.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

namespace System { class String; }

#define CLASS_2_F0D3A30F01A0DF5F_1_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x16434500)
#define CLASS_2_F0D3A30F01A0DF5F_1_METHOD_2_455E250D679F9642_OFFSET UNITYSDK_OFFSET(0x16434730)
#define CLASS_2_F0D3A30F01A0DF5F_1_METHOD_2_BBA49FAB086F388D_OFFSET UNITYSDK_OFFSET(0x16434510)
#define CLASS_2_F0D3A30F01A0DF5F_1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x164346F0)
#define CLASS_2_F0D3A30F01A0DF5F_1__CTOR_OFFSET UNITYSDK_OFFSET(0x164347C0)

inline static constexpr unsigned int Class_2_F0D3A30F01A0DF5F_1_TypeDefinitionIndex = 56302;

class Class_2_F0D3A30F01A0DF5F_1 : public ::Class_1_0FEB237AF044DA54_1
{
public:
	::System::String* MCLLALGABAB; // 0x10
	::System::String* IFNAGLOMHBK; // 0x18
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F0D3A30F01A0DF5F_1__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::LogSamplerType get_Type()
	{
		return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F0D3A30F01A0DF5F_1_GET_TYPE_OFFSET))(this);
	}

	::System::Void Method_2_BBA49FAB086F388D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F0D3A30F01A0DF5F_1_METHOD_2_BBA49FAB086F388D_OFFSET))(this);
	}

	::System::Void Method_2_455E250D679F9642()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F0D3A30F01A0DF5F_1_METHOD_2_455E250D679F9642_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F0D3A30F01A0DF5F_1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
