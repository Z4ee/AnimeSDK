#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_B4DCA1274FB0525C_METHOD_1_1F4344ABBC58EE67_OFFSET UNITYSDK_OFFSET(0xABA1180)
#define CLASS_1_B4DCA1274FB0525C_METHOD_1_472BE0788A9A3CDD_OFFSET UNITYSDK_OFFSET(0xABA1230)
#define CLASS_1_B4DCA1274FB0525C_METHOD_1_A37EF40E0E62AE02_OFFSET UNITYSDK_OFFSET(0xABA0FB0)
#define CLASS_1_B4DCA1274FB0525C_METHOD_1_A7B88A7166E8B027_OFFSET UNITYSDK_OFFSET(0xABA10E0)
#define CLASS_1_B4DCA1274FB0525C_METHOD_1_E58C11AB0F8E4917_OFFSET UNITYSDK_OFFSET(0xABA1040)
#define CLASS_1_B4DCA1274FB0525C__CTOR_OFFSET UNITYSDK_OFFSET(0xABA12A0)

inline static constexpr unsigned int Class_1_B4DCA1274FB0525C_TypeDefinitionIndex = 71140;

class Class_1_B4DCA1274FB0525C : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4DCA1274FB0525C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A37EF40E0E62AE02(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B4DCA1274FB0525C_METHOD_1_A37EF40E0E62AE02_OFFSET))(this, a1);
	}

	::System::Void Method_1_E58C11AB0F8E4917(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B4DCA1274FB0525C_METHOD_1_E58C11AB0F8E4917_OFFSET))(this, a1);
	}

	::System::Void Method_1_A7B88A7166E8B027(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_B4DCA1274FB0525C_METHOD_1_A7B88A7166E8B027_OFFSET))(this, a1);
	}

	::System::Void Method_1_1F4344ABBC58EE67(::System::UInt32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B4DCA1274FB0525C_METHOD_1_1F4344ABBC58EE67_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_472BE0788A9A3CDD(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B4DCA1274FB0525C_METHOD_1_472BE0788A9A3CDD_OFFSET))(this, a1);
	}
};
