#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0FEB237AF044DA54.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

namespace System { class String; }

#define CLASS_2_749FF8846E8C5F68_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x14E59AC0)
#define CLASS_2_749FF8846E8C5F68_METHOD_2_19B91D58E02869BC_OFFSET UNITYSDK_OFFSET(0x14E59D50)
#define CLASS_2_749FF8846E8C5F68_METHOD_2_BBA49FAB086F388D_OFFSET UNITYSDK_OFFSET(0x14E59AD0)
#define CLASS_2_749FF8846E8C5F68_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14E59D10)
#define CLASS_2_749FF8846E8C5F68__CTOR_OFFSET UNITYSDK_OFFSET(0x14E59E60)

inline static constexpr unsigned int Class_2_749FF8846E8C5F68_TypeDefinitionIndex = 53579;

class Class_2_749FF8846E8C5F68 : public ::Class_1_0FEB237AF044DA54
{
public:
	::System::String* Field_2_0; // 0x10
	::System::String* Field_2_1; // 0x18
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x20
	::System::Int32 Field_2_3; // 0x24

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
