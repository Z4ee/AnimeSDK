#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class EvolveGearConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_03DFC5F304B992FF_CLASS_1_5A9588B06DE4C619_METHOD_1_2372762F4122DEB8_OFFSET UNITYSDK_OFFSET(0x11E4C860)
#define CLASS_1_03DFC5F304B992FF_CLASS_1_5A9588B06DE4C619_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x11E4C930)
#define CLASS_1_03DFC5F304B992FF_CLASS_1_5A9588B06DE4C619__CTOR_OFFSET UNITYSDK_OFFSET(0x11E4CA10)

inline static constexpr unsigned int Class_1_03DFC5F304B992FF_Class_1_5A9588B06DE4C619_TypeDefinitionIndex = 51677;

class Class_1_03DFC5F304B992FF_Class_1_5A9588B06DE4C619 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::EvolveGearConfig*>* Field_1_4; // 0x10
	::System::UInt32 Field_1_0; // 0x18
	::System::UInt32 Field_1_3; // 0x1C
	::RPG::GameCore::FixPoint Field_1_6; // 0x20
	::RPG::GameCore::FixPoint Field_1_1; // 0x28
	::RPG::GameCore::FixPoint Field_1_2; // 0x30
	::RPG::GameCore::FixPoint Field_1_5; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03DFC5F304B992FF_CLASS_1_5A9588B06DE4C619__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_1_2372762F4122DEB8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03DFC5F304B992FF_CLASS_1_5A9588B06DE4C619_METHOD_1_2372762F4122DEB8_OFFSET))(this);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03DFC5F304B992FF_CLASS_1_5A9588B06DE4C619_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}
};
