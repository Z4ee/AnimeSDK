#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameEntityType.h"
#include "unitysdk/RPG/GameCore/LittleGameSmartObjectType.h"
#include "unitysdk/System/Object.h"

class Class_1_97AF24F8EB6B0441;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_ADC27DBA8547EDD7_CLEAR_OFFSET UNITYSDK_OFFSET(0x17F50F10)
#define CLASS_1_ADC27DBA8547EDD7_METHOD_1_6BB86695870EFBD1_OFFSET UNITYSDK_OFFSET(0x17F510F0)
#define CLASS_1_ADC27DBA8547EDD7_METHOD_1_7C6B8CFDC8D69152_OFFSET UNITYSDK_OFFSET(0x17F50F80)
#define CLASS_1_ADC27DBA8547EDD7__CTOR_OFFSET UNITYSDK_OFFSET(0x17F51240)

inline static constexpr unsigned int Class_1_ADC27DBA8547EDD7_TypeDefinitionIndex = 38064;

class Class_1_ADC27DBA8547EDD7 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_97AF24F8EB6B0441*>* Field_1_3; // 0x10
	::System::Int32 Field_1_0; // 0x18
	::RPG::GameCore::LittleGameSmartObjectType Field_1_2; // 0x1C
	::System::UInt32 Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ADC27DBA8547EDD7__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ADC27DBA8547EDD7_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_7C6B8CFDC8D69152(::RPG::GameCore::LittleGameEntityType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameEntityType))((::PBYTE)hIl2Cpp + CLASS_1_ADC27DBA8547EDD7_METHOD_1_7C6B8CFDC8D69152_OFFSET))(this, a1);
	}

	::System::Void Method_1_6BB86695870EFBD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ADC27DBA8547EDD7_METHOD_1_6BB86695870EFBD1_OFFSET))(this);
	}
};
