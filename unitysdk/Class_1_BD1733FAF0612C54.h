#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_BD1733FAF0612C54_METHOD_1_0175608C17B0E741_OFFSET UNITYSDK_OFFSET(0x8ADC930)
#define CLASS_1_BD1733FAF0612C54_METHOD_1_FDCE57C3E05D13CE_OFFSET UNITYSDK_OFFSET(0x8ADCCB0)

inline static constexpr unsigned int Class_1_BD1733FAF0612C54_TypeDefinitionIndex = 48318;

class Class_1_BD1733FAF0612C54 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0

	static ::System::Collections::Generic::List_1<::System::String*>* Method_1_0175608C17B0E741()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_BD1733FAF0612C54_METHOD_1_0175608C17B0E741_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::System::String*>* Method_1_FDCE57C3E05D13CE()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_BD1733FAF0612C54_METHOD_1_FDCE57C3E05D13CE_OFFSET))();
	}
};
