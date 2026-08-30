#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_97E659ED8D5D259C_12;
class Class_1_CC4789213986EBB7_2;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_2839EDE8633A54DD_GET_LEVELS_OFFSET UNITYSDK_OFFSET(0xBA5A500)
#define CLASS_1_2839EDE8633A54DD_METHOD_1_CA99028638214CFF_OFFSET UNITYSDK_OFFSET(0xBA5A590)
#define CLASS_1_2839EDE8633A54DD__CTOR_OFFSET UNITYSDK_OFFSET(0xBA5A510)

inline static constexpr unsigned int Class_1_2839EDE8633A54DD_TypeDefinitionIndex = 63988;

class Class_1_2839EDE8633A54DD : public ::System::Object
{
public:
	::Class_1_CC4789213986EBB7_2* NKIJKACKJNL; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_97E659ED8D5D259C_12*>* _Levels_k__BackingField; // 0x18

	::System::Void _ctor(::Class_1_CC4789213986EBB7_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CC4789213986EBB7_2*))((::PBYTE)hIl2Cpp + CLASS_1_2839EDE8633A54DD__CTOR_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_97E659ED8D5D259C_12*>* get_Levels()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_97E659ED8D5D259C_12*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2839EDE8633A54DD_GET_LEVELS_OFFSET))(this);
	}

	::Class_1_97E659ED8D5D259C_12* Method_1_CA99028638214CFF(::System::UInt32 a1)
	{
		return ((::Class_1_97E659ED8D5D259C_12*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2839EDE8633A54DD_METHOD_1_CA99028638214CFF_OFFSET))(this, a1);
	}
};
