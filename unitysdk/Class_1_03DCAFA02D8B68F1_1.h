#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElationTimeAtmosphereType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_03DCAFA02D8B68F1_1_METHOD_1_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x13B3AD00)
#define CLASS_1_03DCAFA02D8B68F1_1_METHOD_1_126AB3935214AA22_2_OFFSET UNITYSDK_OFFSET(0x13B3AD10)
#define CLASS_1_03DCAFA02D8B68F1_1_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x13B3ACF0)
#define CLASS_1_03DCAFA02D8B68F1_1_METHOD_1_1E578ED319BE3AC6_OFFSET UNITYSDK_OFFSET(0x13B3ACE0)
#define CLASS_1_03DCAFA02D8B68F1_1_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x13B3AD20)
#define CLASS_1_03DCAFA02D8B68F1_1__CTOR_OFFSET UNITYSDK_OFFSET(0x13B3AD30)

inline static constexpr unsigned int Class_1_03DCAFA02D8B68F1_1_TypeDefinitionIndex = 67450;

class Class_1_03DCAFA02D8B68F1_1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03DCAFA02D8B68F1_1__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::ElationTimeAtmosphereType Method_1_1E578ED319BE3AC6()
	{
		return ((::RPG::GameCore::ElationTimeAtmosphereType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03DCAFA02D8B68F1_1_METHOD_1_1E578ED319BE3AC6_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03DCAFA02D8B68F1_1_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03DCAFA02D8B68F1_1_METHOD_1_126AB3935214AA22_1_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22_2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03DCAFA02D8B68F1_1_METHOD_1_126AB3935214AA22_2_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03DCAFA02D8B68F1_1_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
