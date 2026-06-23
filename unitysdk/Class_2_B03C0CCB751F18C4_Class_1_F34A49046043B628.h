#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define CLASS_2_B03C0CCB751F18C4_CLASS_1_F34A49046043B628_METHOD_1_32ED00C1C62BDA5C_OFFSET UNITYSDK_OFFSET(0x16C63FC0)
#define CLASS_2_B03C0CCB751F18C4_CLASS_1_F34A49046043B628__CTOR_OFFSET UNITYSDK_OFFSET(0x16C63FB0)

inline static constexpr unsigned int Class_2_B03C0CCB751F18C4_Class_1_F34A49046043B628_TypeDefinitionIndex = 81130;

class Class_2_B03C0CCB751F18C4_Class_1_F34A49046043B628 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B03C0CCB751F18C4_CLASS_1_F34A49046043B628__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_32ED00C1C62BDA5C(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::MoleMole::Battle::Entity*> a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::MoleMole::Battle::Entity*>))((::PBYTE)hIl2Cpp + CLASS_2_B03C0CCB751F18C4_CLASS_1_F34A49046043B628_METHOD_1_32ED00C1C62BDA5C_OFFSET))(this, a1);
	}
};
