#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityData; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_02F9B209796F3320_2_METHOD_1_E35B09364B35C46E_OFFSET UNITYSDK_OFFSET(0x104E9490)
#define CLASS_1_02F9B209796F3320_2__CTOR_OFFSET UNITYSDK_OFFSET(0x104E9370)

inline static constexpr unsigned int Class_1_02F9B209796F3320_2_TypeDefinitionIndex = 50077;

class Class_1_02F9B209796F3320_2 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02F9B209796F3320_2__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_E35B09364B35C46E(::RPG::Client::ActivityData* a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityData*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_02F9B209796F3320_2_METHOD_1_E35B09364B35C46E_OFFSET))(this, a1, a2);
	}
};
