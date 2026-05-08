#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_1_AD23FB39B1539B2B;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B4D6442D209497A1_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x122A1580)
#define CLASS_1_B4D6442D209497A1_FROMFLX_OFFSET UNITYSDK_OFFSET(0x122A11A0)
#define CLASS_1_B4D6442D209497A1_METHOD_1_25996F1180FB0C28_OFFSET UNITYSDK_OFFSET(0x122A15E0)
#define CLASS_1_B4D6442D209497A1_METHOD_1_5B0202969299569F_OFFSET UNITYSDK_OFFSET(0x122A1220)
#define CLASS_1_B4D6442D209497A1__CTOR_OFFSET UNITYSDK_OFFSET(0x122A1890)

inline static constexpr unsigned int Class_1_B4D6442D209497A1_TypeDefinitionIndex = 46141;

class Class_1_B4D6442D209497A1 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_AD23FB39B1539B2B*>* Field_1_1; // 0x10
	::System::Int32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4D6442D209497A1__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_B4D6442D209497A1_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B4D6442D209497A1_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_25996F1180FB0C28(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B4D6442D209497A1_METHOD_1_25996F1180FB0C28_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_5B0202969299569F(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_B4D6442D209497A1_METHOD_1_5B0202969299569F_OFFSET))(this, a1);
	}
};
