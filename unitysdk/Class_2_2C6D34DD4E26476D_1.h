#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5BE136E515AF9A61_1.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_2C6D34DD4E26476D_1_METHOD_2_0414B7E68ABA5085_OFFSET UNITYSDK_OFFSET(0x167ED130)
#define CLASS_2_2C6D34DD4E26476D_1_METHOD_2_1BC72208CAFF7D4E_OFFSET UNITYSDK_OFFSET(0x167ECA30)
#define CLASS_2_2C6D34DD4E26476D_1_METHOD_2_3F5962F94C41A5EA_OFFSET UNITYSDK_OFFSET(0x167EC190)
#define CLASS_2_2C6D34DD4E26476D_1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x167ED0F0)
#define CLASS_2_2C6D34DD4E26476D_1__CTOR_OFFSET UNITYSDK_OFFSET(0x167EC170)

inline static constexpr unsigned int Class_2_2C6D34DD4E26476D_1_TypeDefinitionIndex = 32947;

class Class_2_2C6D34DD4E26476D_1 : public ::Class_1_5BE136E515AF9A61_1
{
public:
	::System::Collections::Generic::List_1<::System::Single>* Field_2_5; // 0x18
	::System::Single Field_2_1; // 0x20
	::System::Single Field_2_0; // 0x24
	::System::Boolean Field_2_3; // 0x28
	::System::Int32 Field_2_2; // 0x2C
	::System::UInt32 Field_2_4; // 0x30

	::System::Void _ctor(::System::Boolean a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_2C6D34DD4E26476D_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3F5962F94C41A5EA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2C6D34DD4E26476D_1_METHOD_2_3F5962F94C41A5EA_OFFSET))(this);
	}

	::System::Void Method_2_1BC72208CAFF7D4E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2C6D34DD4E26476D_1_METHOD_2_1BC72208CAFF7D4E_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2C6D34DD4E26476D_1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_0414B7E68ABA5085(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2C6D34DD4E26476D_1_METHOD_2_0414B7E68ABA5085_OFFSET))(this, P0);
	}
};
