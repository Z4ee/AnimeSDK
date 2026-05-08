#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityScreenSpacePlanarReflectionEffects; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_AABC46ADA22DF521_METHOD_1_1A66B2484FF19D77_OFFSET UNITYSDK_OFFSET(0x11AE9220)
#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_AABC46ADA22DF521__CTOR_OFFSET UNITYSDK_OFFSET(0x11AE9210)

inline static constexpr unsigned int Class_1_5C5D1BCD30A891BA_Class_1_AABC46ADA22DF521_TypeDefinitionIndex = 69910;

class Class_1_5C5D1BCD30A891BA_Class_1_AABC46ADA22DF521 : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::Config::ConfigEntityScreenSpacePlanarReflectionEffects*>* Field_1_2; // 0x10
	::System::Action* Field_1_1; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_AABC46ADA22DF521__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1A66B2484FF19D77(::MoleMole::Config::ConfigEntityScreenSpacePlanarReflectionEffects* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenSpacePlanarReflectionEffects*))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_AABC46ADA22DF521_METHOD_1_1A66B2484FF19D77_OFFSET))(this, a1);
	}
};
