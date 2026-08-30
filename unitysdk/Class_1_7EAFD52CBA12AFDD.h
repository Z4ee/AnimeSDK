#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameAbilityAttributeType.h"
#include "unitysdk/System/Object.h"

class Class_1_E87E20A464EBF92F;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_7EAFD52CBA12AFDD__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF9A180)

inline static constexpr unsigned int Class_1_7EAFD52CBA12AFDD_TypeDefinitionIndex = 40412;

class Class_1_7EAFD52CBA12AFDD : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::LittleGameAbilityAttributeType, ::Class_1_E87E20A464EBF92F*>* JOFJEIFLGBP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EAFD52CBA12AFDD__CTOR_OFFSET))(this);
	}
};
