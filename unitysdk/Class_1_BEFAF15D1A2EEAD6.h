#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_1_EF896E1D0FDF202A;
class Class_2_2A56CCCB20A346FA;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_BEFAF15D1A2EEAD6_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x164616B0)
#define CLASS_1_BEFAF15D1A2EEAD6_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16461C20)
#define CLASS_1_BEFAF15D1A2EEAD6_METHOD_1_5B0202969299569F_OFFSET UNITYSDK_OFFSET(0x16461CA0)
#define CLASS_1_BEFAF15D1A2EEAD6_METHOD_1_D2E6AD9D12C4D891_OFFSET UNITYSDK_OFFSET(0x16461710)
#define CLASS_1_BEFAF15D1A2EEAD6__CTOR_OFFSET UNITYSDK_OFFSET(0x16462490)

inline static constexpr unsigned int Class_1_BEFAF15D1A2EEAD6_TypeDefinitionIndex = 76907;

class Class_1_BEFAF15D1A2EEAD6 : public ::System::Object
{
public:
	::Il2CppArray<::Class_1_EF896E1D0FDF202A*>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x20
	::System::Boolean Field_1_6; // 0x24
	::System::Boolean Field_1_7; // 0x25

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BEFAF15D1A2EEAD6__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BEFAF15D1A2EEAD6_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_BEFAF15D1A2EEAD6_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_5B0202969299569F(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_BEFAF15D1A2EEAD6_METHOD_1_5B0202969299569F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D2E6AD9D12C4D891(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BEFAF15D1A2EEAD6_METHOD_1_D2E6AD9D12C4D891_OFFSET))(this, a1, a2);
	}
};
