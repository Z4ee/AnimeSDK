#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0325DE2FB16E7F2E.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define CLASS_2_BCC5174FAE21E04E_METHOD_2_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1719C1B0)
#define CLASS_2_BCC5174FAE21E04E_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1719C1C0)
#define CLASS_2_BCC5174FAE21E04E__CTOR_OFFSET UNITYSDK_OFFSET(0x1719C110)

inline static constexpr unsigned int Class_2_BCC5174FAE21E04E_TypeDefinitionIndex = 59500;

class Class_2_BCC5174FAE21E04E : public ::System::Exception
{
public:
	::Enum_3_0325DE2FB16E7F2E Field_2_0; // 0x88

	::System::Void _ctor(::Enum_3_0325DE2FB16E7F2E a1, ::System::String* a2, ::System::Exception* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0325DE2FB16E7F2E, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_2_BCC5174FAE21E04E__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_3DACC45AC8150727(::Enum_3_0325DE2FB16E7F2E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0325DE2FB16E7F2E))((::PBYTE)hIl2Cpp + CLASS_2_BCC5174FAE21E04E_METHOD_2_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Enum_3_0325DE2FB16E7F2E Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_0325DE2FB16E7F2E(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCC5174FAE21E04E_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}
};
