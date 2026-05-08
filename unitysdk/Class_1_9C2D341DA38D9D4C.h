#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_9C2D341DA38D9D4C_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x128646E0)
#define CLASS_1_9C2D341DA38D9D4C_METHOD_1_13F1B56B940BB384_OFFSET UNITYSDK_OFFSET(0x128646D0)
#define CLASS_1_9C2D341DA38D9D4C_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x128643E0)
#define CLASS_1_9C2D341DA38D9D4C_METHOD_1_1FA4E790893BF3C8_OFFSET UNITYSDK_OFFSET(0x12864440)
#define CLASS_1_9C2D341DA38D9D4C_METHOD_1_4A89C54EBDE82CF7_OFFSET UNITYSDK_OFFSET(0x128644B0)
#define CLASS_1_9C2D341DA38D9D4C_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x12864350)
#define CLASS_1_9C2D341DA38D9D4C_METHOD_1_A4FD6CA2E917400D_OFFSET UNITYSDK_OFFSET(0x12864620)
#define CLASS_1_9C2D341DA38D9D4C_TOSTRING_OFFSET UNITYSDK_OFFSET(0x12863FF0)
#define CLASS_1_9C2D341DA38D9D4C__CTOR_1_OFFSET UNITYSDK_OFFSET(0x12863FE0)
#define CLASS_1_9C2D341DA38D9D4C__CTOR_OFFSET UNITYSDK_OFFSET(0x12863F70)

inline static constexpr unsigned int Class_1_9C2D341DA38D9D4C_TypeDefinitionIndex = 41246;

class Class_1_9C2D341DA38D9D4C : public ::System::Object
{
public:
	::MoleMole::Vector2Int Field_1_1; // 0x10
	::MoleMole::Vector2Int Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C2D341DA38D9D4C__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::MoleMole::Vector2Int a1, ::MoleMole::Vector2Int a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Vector2Int, ::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_1_9C2D341DA38D9D4C__CTOR_1_OFFSET))(this, a1, a2);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C2D341DA38D9D4C_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C2D341DA38D9D4C_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C2D341DA38D9D4C_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::MoleMole::Vector2Int Method_1_1FA4E790893BF3C8()
	{
		return ((::MoleMole::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C2D341DA38D9D4C_METHOD_1_1FA4E790893BF3C8_OFFSET))(this);
	}

	::Class_1_9C2D341DA38D9D4C* Method_1_4A89C54EBDE82CF7(::System::Single a1, ::System::Int32 a2)
	{
		return ((::Class_1_9C2D341DA38D9D4C*(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9C2D341DA38D9D4C_METHOD_1_4A89C54EBDE82CF7_OFFSET))(this, a1, a2);
	}

	::MoleMole::Vector2Int Method_1_A4FD6CA2E917400D()
	{
		return ((::MoleMole::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C2D341DA38D9D4C_METHOD_1_A4FD6CA2E917400D_OFFSET))(this);
	}

	::MoleMole::Vector2Int Method_1_13F1B56B940BB384()
	{
		return ((::MoleMole::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C2D341DA38D9D4C_METHOD_1_13F1B56B940BB384_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C2D341DA38D9D4C_METHOD_1_128774387667156B_OFFSET))(this);
	}
};
