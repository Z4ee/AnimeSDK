#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_5;
namespace System { class String; }

#define CLASS_1_0C1DCA257F3A4F55_METHOD_1_207BC088BB22C9CD_1_OFFSET UNITYSDK_OFFSET(0x1831B390)
#define CLASS_1_0C1DCA257F3A4F55_METHOD_1_207BC088BB22C9CD_OFFSET UNITYSDK_OFFSET(0x1831B350)
#define CLASS_1_0C1DCA257F3A4F55_SET_OFFSET UNITYSDK_OFFSET(0x1831B1D0)
#define CLASS_1_0C1DCA257F3A4F55__CTOR_OFFSET UNITYSDK_OFFSET(0x1831B3D0)

inline static constexpr unsigned int Class_1_0C1DCA257F3A4F55_TypeDefinitionIndex = 9447;

class Class_1_0C1DCA257F3A4F55 : public ::System::Object
{
public:
	::System::UInt32 Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C1DCA257F3A4F55__CTOR_OFFSET))(this);
	}

	::System::Void Set(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0C1DCA257F3A4F55_SET_OFFSET))(this, a1);
	}

	static ::System::UInt32 Method_1_207BC088BB22C9CD(::Class_0_16E4307DCC419505_5* a1)
	{
		return ((::System::UInt32(*)(::Class_0_16E4307DCC419505_5*))((::PBYTE)hIl2Cpp + CLASS_1_0C1DCA257F3A4F55_METHOD_1_207BC088BB22C9CD_OFFSET))(a1);
	}

	static ::System::UInt32 Method_1_207BC088BB22C9CD_1(::Class_0_16E4307DCC419505_5* a1)
	{
		return ((::System::UInt32(*)(::Class_0_16E4307DCC419505_5*))((::PBYTE)hIl2Cpp + CLASS_1_0C1DCA257F3A4F55_METHOD_1_207BC088BB22C9CD_1_OFFSET))(a1);
	}
};
