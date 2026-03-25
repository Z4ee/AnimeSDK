#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_6A1DFE1822B872F8_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9EE9D90)
#define CLASS_1_6A1DFE1822B872F8_METHOD_1_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0x9EE9CC0)
#define CLASS_1_6A1DFE1822B872F8_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x9EE9D40)
#define CLASS_1_6A1DFE1822B872F8_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9EE9C80)
#define CLASS_1_6A1DFE1822B872F8__CTOR_OFFSET UNITYSDK_OFFSET(0x9EE9DA0)

inline static constexpr unsigned int Class_1_6A1DFE1822B872F8_TypeDefinitionIndex = 45015;

class Class_1_6A1DFE1822B872F8 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A1DFE1822B872F8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A1DFE1822B872F8_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_B387E1AED8A8F880()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A1DFE1822B872F8_METHOD_1_B387E1AED8A8F880_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A1DFE1822B872F8_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::RPG::GameCore::LogSamplerType get_Type()
	{
		return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A1DFE1822B872F8_GET_TYPE_OFFSET))(this);
	}
};
