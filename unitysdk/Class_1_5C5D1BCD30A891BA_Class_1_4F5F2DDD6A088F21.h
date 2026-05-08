#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityFXColorCorrections; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_4F5F2DDD6A088F21_METHOD_1_A6BD3CFD1B816D46_OFFSET UNITYSDK_OFFSET(0x13F84E30)
#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_4F5F2DDD6A088F21__CTOR_OFFSET UNITYSDK_OFFSET(0x13F84E20)

inline static constexpr unsigned int Class_1_5C5D1BCD30A891BA_Class_1_4F5F2DDD6A088F21_TypeDefinitionIndex = 69914;

class Class_1_5C5D1BCD30A891BA_Class_1_4F5F2DDD6A088F21 : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::System::Action_1<::MoleMole::Config::ConfigEntityFXColorCorrections*>* Field_1_2; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_4F5F2DDD6A088F21__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A6BD3CFD1B816D46(::MoleMole::Config::ConfigEntityFXColorCorrections* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityFXColorCorrections*))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_4F5F2DDD6A088F21_METHOD_1_A6BD3CFD1B816D46_OFFSET))(this, a1);
	}
};
