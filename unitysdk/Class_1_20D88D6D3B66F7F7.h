#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_20D88D6D3B66F7F7_CLEAR_OFFSET UNITYSDK_OFFSET(0x1187B9C0)
#define CLASS_1_20D88D6D3B66F7F7_METHOD_1_246EA52E96B2CFB5_OFFSET UNITYSDK_OFFSET(0x1187BA10)
#define CLASS_1_20D88D6D3B66F7F7_METHOD_1_E2C273CA106EBD0B_OFFSET UNITYSDK_OFFSET(0x1187BAA0)
#define CLASS_1_20D88D6D3B66F7F7__CTOR_OFFSET UNITYSDK_OFFSET(0x1187BB20)

inline static constexpr unsigned int Class_1_20D88D6D3B66F7F7_TypeDefinitionIndex = 51374;

class Class_1_20D88D6D3B66F7F7 : public ::System::Object
{
public:
	::RPG::GameCore::FixPoint Field_1_1; // 0x10
	::RPG::GameCore::FixPoint Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20D88D6D3B66F7F7__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20D88D6D3B66F7F7_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_246EA52E96B2CFB5(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_20D88D6D3B66F7F7_METHOD_1_246EA52E96B2CFB5_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_E2C273CA106EBD0B()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20D88D6D3B66F7F7_METHOD_1_E2C273CA106EBD0B_OFFSET))(this);
	}
};
