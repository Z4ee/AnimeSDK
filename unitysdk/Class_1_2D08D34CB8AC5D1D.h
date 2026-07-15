#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DynamicValue; }

#define CLASS_1_2D08D34CB8AC5D1D_CONVERTBOXED_OFFSET UNITYSDK_OFFSET(0x1D2BE6E0)
#define CLASS_1_2D08D34CB8AC5D1D_CONVERT_OFFSET UNITYSDK_OFFSET(0x1D2BE670)
#define CLASS_1_2D08D34CB8AC5D1D__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2BE760)

inline static constexpr unsigned int Class_1_2D08D34CB8AC5D1D_TypeDefinitionIndex = 42412;

class Class_1_2D08D34CB8AC5D1D : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D08D34CB8AC5D1D__CTOR_OFFSET))(this);
	}

	::System::Boolean Convert(::RPG::GameCore::DynamicValue* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + CLASS_1_2D08D34CB8AC5D1D_CONVERT_OFFSET))(this, a1);
	}

	::System::Object* ConvertBoxed(::RPG::GameCore::DynamicValue* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + CLASS_1_2D08D34CB8AC5D1D_CONVERTBOXED_OFFSET))(this, a1);
	}
};
