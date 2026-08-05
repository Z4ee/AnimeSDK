#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define CLASS_3_9CF54693D44DAA61_CLASS_1_F5182BAEBAA20D84_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x139221C0)
#define CLASS_3_9CF54693D44DAA61_CLASS_1_F5182BAEBAA20D84_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13922210)
#define CLASS_3_9CF54693D44DAA61_CLASS_1_F5182BAEBAA20D84_METHOD_1_DC134833AE9D4709_OFFSET UNITYSDK_OFFSET(0x139220F0)
#define CLASS_3_9CF54693D44DAA61_CLASS_1_F5182BAEBAA20D84_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x13922250)
#define CLASS_3_9CF54693D44DAA61_CLASS_1_F5182BAEBAA20D84__CTOR_OFFSET UNITYSDK_OFFSET(0x139220E0)

inline static constexpr unsigned int Class_3_9CF54693D44DAA61_Class_1_F5182BAEBAA20D84_TypeDefinitionIndex = 60320;

class Class_3_9CF54693D44DAA61_Class_1_F5182BAEBAA20D84 : public ::System::Object
{
public:
	::System::Single Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x14
	::System::Boolean Field_1_7; // 0x18
	::System::Boolean Field_1_6; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9CF54693D44DAA61_CLASS_1_F5182BAEBAA20D84__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_DC134833AE9D4709(::MoleMole::Battle::Entity* a1, ::System::Int32 a2, ::System::Single a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Int32, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_9CF54693D44DAA61_CLASS_1_F5182BAEBAA20D84_METHOD_1_DC134833AE9D4709_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9CF54693D44DAA61_CLASS_1_F5182BAEBAA20D84_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_9CF54693D44DAA61_CLASS_1_F5182BAEBAA20D84_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9CF54693D44DAA61_CLASS_1_F5182BAEBAA20D84_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
