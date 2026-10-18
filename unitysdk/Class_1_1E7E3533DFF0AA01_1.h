#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DynamicValue; }

#define CLASS_1_1E7E3533DFF0AA01_1_CONVERTBOXED_OFFSET UNITYSDK_OFFSET(0x1CC61010)
#define CLASS_1_1E7E3533DFF0AA01_1_CONVERT_OFFSET UNITYSDK_OFFSET(0x1CC60FA0)
#define CLASS_1_1E7E3533DFF0AA01_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC61090)

inline static constexpr unsigned int Class_1_1E7E3533DFF0AA01_1_TypeDefinitionIndex = 43893;

class Class_1_1E7E3533DFF0AA01_1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E7E3533DFF0AA01_1__CTOR_OFFSET))(this);
	}

	::System::Double Convert(::RPG::GameCore::DynamicValue* a1)
	{
		return ((::System::Double(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + CLASS_1_1E7E3533DFF0AA01_1_CONVERT_OFFSET))(this, a1);
	}

	::System::Object* ConvertBoxed(::RPG::GameCore::DynamicValue* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + CLASS_1_1E7E3533DFF0AA01_1_CONVERTBOXED_OFFSET))(this, a1);
	}
};
