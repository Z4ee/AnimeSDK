#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0FEB237AF044DA54_1.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

namespace System { class String; }

#define CLASS_2_749FF8846E8C5F68_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x17A0ED50)
#define CLASS_2_749FF8846E8C5F68_METHOD_2_19B91D58E02869BC_OFFSET UNITYSDK_OFFSET(0x17A0EFE0)
#define CLASS_2_749FF8846E8C5F68_METHOD_2_BBA49FAB086F388D_OFFSET UNITYSDK_OFFSET(0x17A0ED60)
#define CLASS_2_749FF8846E8C5F68_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17A0EFA0)
#define CLASS_2_749FF8846E8C5F68__CTOR_OFFSET UNITYSDK_OFFSET(0x17A0F0F0)

inline static constexpr unsigned int Class_2_749FF8846E8C5F68_TypeDefinitionIndex = 56293;

class Class_2_749FF8846E8C5F68 : public ::Class_1_0FEB237AF044DA54_1
{
public:
	::System::String* MCLLALGABAB; // 0x10
	::System::String* GDCCJFKJGPD; // 0x18
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x20
	::System::Int32 KBAPBCNJHDB; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_749FF8846E8C5F68__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::LogSamplerType get_Type()
	{
		return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_749FF8846E8C5F68_GET_TYPE_OFFSET))(this);
	}

	::System::Void Method_2_BBA49FAB086F388D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_749FF8846E8C5F68_METHOD_2_BBA49FAB086F388D_OFFSET))(this);
	}

	::System::Void Method_2_19B91D58E02869BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_749FF8846E8C5F68_METHOD_2_19B91D58E02869BC_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_749FF8846E8C5F68_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
