#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_E01A963C39A160F3_METHOD_1_F8E6145ED0829339_OFFSET UNITYSDK_OFFSET(0x1850DD70)
#define CLASS_1_E01A963C39A160F3__CTOR_OFFSET UNITYSDK_OFFSET(0x1850E070)

inline static constexpr unsigned int Class_1_E01A963C39A160F3_TypeDefinitionIndex = 64838;

class Class_1_E01A963C39A160F3 : public ::System::Object
{
public:
	static ::Class_1_E01A963C39A160F3** StaticGet_OEHHIIEPDIK()
	{
		return (::Class_1_E01A963C39A160F3**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E01A963C39A160F3_TypeDefinitionIndex)->GetStaticField(0x5BDE0);
	}
	::System::String* Game; // 0x10
	::System::String* AuthKey; // 0x18
	::System::String* Lang; // 0x20
	::System::String* AuthAppID; // 0x28
	::System::String* SignType; // 0x30
	::System::String* GameBiz; // 0x38
	::System::String* AuthkeyVer; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E01A963C39A160F3__CTOR_OFFSET))(this);
	}

	static ::Class_1_E01A963C39A160F3* Method_1_F8E6145ED0829339(::System::String* a1)
	{
		return ((::Class_1_E01A963C39A160F3*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E01A963C39A160F3_METHOD_1_F8E6145ED0829339_OFFSET))(a1);
	}
};
