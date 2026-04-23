#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6A1DFE1822B872F8.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
#include "unitysdk/Struct_2_9E453D160BF69F98.h"

namespace System { class String; }

#define CLASS_2_3A07F6BAC36C3AE8_1_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x12A56620)
#define CLASS_2_3A07F6BAC36C3AE8_1_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x12A56B10)
#define CLASS_2_3A07F6BAC36C3AE8_1_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x12A56A90)
#define CLASS_2_3A07F6BAC36C3AE8_1_METHOD_2_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x12A568F0)
#define CLASS_2_3A07F6BAC36C3AE8_1_METHOD_2_BB2928BEC244DEB7_OFFSET UNITYSDK_OFFSET(0x12A56A80)
#define CLASS_2_3A07F6BAC36C3AE8_1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12A568B0)
#define CLASS_2_3A07F6BAC36C3AE8_1_METHOD_2_D460587695D41831_OFFSET UNITYSDK_OFFSET(0x12A56630)
#define CLASS_2_3A07F6BAC36C3AE8_1__CTOR_OFFSET UNITYSDK_OFFSET(0x12A56A70)

inline static constexpr unsigned int Class_2_3A07F6BAC36C3AE8_1_TypeDefinitionIndex = 51750;

class Class_2_3A07F6BAC36C3AE8_1 : public ::Class_1_6A1DFE1822B872F8
{
public:
	::System::String* Field_2_1; // 0x10
	::Struct_2_9E453D160BF69F98 Field_2_0; // 0x18
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x30
	::RPG::GameCore::FixPoint Field_2_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A07F6BAC36C3AE8_1__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::LogSamplerType get_Type()
	{
		return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A07F6BAC36C3AE8_1_GET_TYPE_OFFSET))(this);
	}

	::System::Void Method_2_D460587695D41831()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A07F6BAC36C3AE8_1_METHOD_2_D460587695D41831_OFFSET))(this);
	}

	::System::Void Method_2_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A07F6BAC36C3AE8_1_METHOD_2_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A07F6BAC36C3AE8_1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_BB2928BEC244DEB7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A07F6BAC36C3AE8_1_METHOD_2_BB2928BEC244DEB7_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A07F6BAC36C3AE8_1_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A07F6BAC36C3AE8_1_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}
};
