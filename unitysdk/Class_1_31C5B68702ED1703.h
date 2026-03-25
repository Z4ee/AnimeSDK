#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ElfRestaurant/SIMFoodState.h"
#include "unitysdk/System/Object.h"

class Class_1_ADC27DBA8547EDD7;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_31C5B68702ED1703_CLEAR_OFFSET UNITYSDK_OFFSET(0x1677BE60)
#define CLASS_1_31C5B68702ED1703_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1677BE00)
#define CLASS_1_31C5B68702ED1703__CTOR_OFFSET UNITYSDK_OFFSET(0x1677BEB0)

inline static constexpr unsigned int Class_1_31C5B68702ED1703_TypeDefinitionIndex = 32366;

class Class_1_31C5B68702ED1703 : public ::System::Object
{
public:
	::Class_1_ADC27DBA8547EDD7* Field_1_4; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_3; // 0x18
	::RPG::Client::LittleGame::ElfRestaurant::SIMFoodState Field_1_2; // 0x20
	::System::UInt32 Field_1_1; // 0x24
	::System::UInt32 Field_1_0; // 0x28
	::System::Int32 Field_1_5; // 0x2C
	::System::Boolean Field_1_6; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_31C5B68702ED1703__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_31C5B68702ED1703_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_31C5B68702ED1703_CLEAR_OFFSET))(this);
	}
};
