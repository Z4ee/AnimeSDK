#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_127;
class Class_1_864411A9CBACB9B1;
namespace R3 { template <typename T> class ReadOnlyReactiveProperty_1; }

#define CLASS_1_1A53BF9DB30E8C3F_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB0F7AE0)
#define CLASS_1_1A53BF9DB30E8C3F_GET_CURRENTPERCENT_OFFSET UNITYSDK_OFFSET(0xB0F7A90)
#define CLASS_1_1A53BF9DB30E8C3F_GET_DIVISIONLEVELUPRULE_OFFSET UNITYSDK_OFFSET(0xB0F7A80)
#define CLASS_1_1A53BF9DB30E8C3F_METHOD_1_37D0382D0C30A2DC_OFFSET UNITYSDK_OFFSET(0xB0F79F0)
#define CLASS_1_1A53BF9DB30E8C3F__CTOR_OFFSET UNITYSDK_OFFSET(0xB0F7AA0)

inline static constexpr unsigned int Class_1_1A53BF9DB30E8C3F_TypeDefinitionIndex = 79570;

class Class_1_1A53BF9DB30E8C3F : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_127* _DivisionLevelUpRule_k__BackingField; // 0x10
	::Class_1_864411A9CBACB9B1* JOKBAPFCJFM; // 0x18
	::R3::ReadOnlyReactiveProperty_1<::System::Int32>* _CurrentPercent_k__BackingField; // 0x20

	::System::Void _ctor(::Class_1_864411A9CBACB9B1* a1, ::Class_0_16E4307DCC419505_127* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_864411A9CBACB9B1*, ::Class_0_16E4307DCC419505_127*))((::PBYTE)hIl2Cpp + CLASS_1_1A53BF9DB30E8C3F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_37D0382D0C30A2DC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A53BF9DB30E8C3F_METHOD_1_37D0382D0C30A2DC_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_127* get_DivisionLevelUpRule()
	{
		return ((::Class_0_16E4307DCC419505_127*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A53BF9DB30E8C3F_GET_DIVISIONLEVELUPRULE_OFFSET))(this);
	}

	::R3::ReadOnlyReactiveProperty_1<::System::Int32>* get_CurrentPercent()
	{
		return ((::R3::ReadOnlyReactiveProperty_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A53BF9DB30E8C3F_GET_CURRENTPERCENT_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A53BF9DB30E8C3F_DISPOSE_OFFSET))(this);
	}
};
