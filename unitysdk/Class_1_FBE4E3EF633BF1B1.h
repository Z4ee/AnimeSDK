#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_600;
namespace RPG::GameCore { class MiParameterConfigBase; }

#define CLASS_1_FBE4E3EF633BF1B1_METHOD_1_ED0FFC39CFA27CB9_OFFSET UNITYSDK_OFFSET(0x143E3F50)
#define CLASS_1_FBE4E3EF633BF1B1__CTOR_OFFSET UNITYSDK_OFFSET(0x143E40C0)

inline static constexpr unsigned int Class_1_FBE4E3EF633BF1B1_TypeDefinitionIndex = 74350;

class Class_1_FBE4E3EF633BF1B1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBE4E3EF633BF1B1__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_600* Method_1_ED0FFC39CFA27CB9(::RPG::GameCore::MiParameterConfigBase* a1)
	{
		return ((::Class_0_16E4307DCC419505_600*(*)(::PVOID, ::RPG::GameCore::MiParameterConfigBase*))((::PBYTE)hIl2Cpp + CLASS_1_FBE4E3EF633BF1B1_METHOD_1_ED0FFC39CFA27CB9_OFFSET))(this, a1);
	}
};
