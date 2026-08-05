#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigLevelWeather; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1AB78DCCB9046E90_CLASS_1_C2D1ADCBC79867C5_METHOD_1_8ABE8F79FAD4B17B_OFFSET UNITYSDK_OFFSET(0x1CB8DF30)
#define CLASS_1_1AB78DCCB9046E90_CLASS_1_C2D1ADCBC79867C5__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB8DF20)

inline static constexpr unsigned int Class_1_1AB78DCCB9046E90_Class_1_C2D1ADCBC79867C5_TypeDefinitionIndex = 70979;

class Class_1_1AB78DCCB9046E90_Class_1_C2D1ADCBC79867C5 : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::ConfigLevelWeather*>* Field_1_7; // 0x10
	::System::Action* Field_1_0; // 0x18
	::System::Collections::Generic::List_1<::MoleMole::ConfigLevelWeather*>* Field_1_2; // 0x20
	::System::Int32 Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AB78DCCB9046E90_CLASS_1_C2D1ADCBC79867C5__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8ABE8F79FAD4B17B(::MoleMole::ConfigLevelWeather* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigLevelWeather*))((::PBYTE)hIl2Cpp + CLASS_1_1AB78DCCB9046E90_CLASS_1_C2D1ADCBC79867C5_METHOD_1_8ABE8F79FAD4B17B_OFFSET))(this, a1);
	}
};
