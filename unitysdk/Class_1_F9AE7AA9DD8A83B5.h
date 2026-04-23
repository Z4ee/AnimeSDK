#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtPropertyModifyData.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_F9AE7AA9DD8A83B5_EQUALS_OFFSET UNITYSDK_OFFSET(0x118971A0)
#define CLASS_1_F9AE7AA9DD8A83B5__CTOR_OFFSET UNITYSDK_OFFSET(0x11897220)

inline static constexpr unsigned int Class_1_F9AE7AA9DD8A83B5_TypeDefinitionIndex = 50055;

class Class_1_F9AE7AA9DD8A83B5 : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::RtPropertyModifyData>* Field_1_3; // 0x10
	::System::UInt32 Field_1_0; // 0x18
	::System::UInt32 Field_1_1; // 0x1C
	::System::UInt32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9AE7AA9DD8A83B5__CTOR_OFFSET))(this);
	}

	::System::Boolean Equals(::Class_1_F9AE7AA9DD8A83B5* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F9AE7AA9DD8A83B5*))((::PBYTE)hIl2Cpp + CLASS_1_F9AE7AA9DD8A83B5_EQUALS_OFFSET))(this, a1);
	}
};
