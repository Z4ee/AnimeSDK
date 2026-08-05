#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_61B3F00B9B88D294.h"
#include "unitysdk/Struct_2_01B5071406F53CB4.h"
#include "unitysdk/System/Object.h"

class Class_1_AFABD9AB64AEC106;

#define CLASS_1_859CB3FB5B8591B6_METHOD_1_0E023B688E2A5CBD_OFFSET UNITYSDK_OFFSET(0x194644A0)
#define CLASS_1_859CB3FB5B8591B6_METHOD_1_7EA816242B6DC57A_OFFSET UNITYSDK_OFFSET(0x19464670)
#define CLASS_1_859CB3FB5B8591B6_METHOD_1_85A93BFC46CDB487_OFFSET UNITYSDK_OFFSET(0x194645F0)
#define CLASS_1_859CB3FB5B8591B6_METHOD_1_9E2827A2323B7F01_OFFSET UNITYSDK_OFFSET(0x194644C0)
#define CLASS_1_859CB3FB5B8591B6__CTOR_OFFSET UNITYSDK_OFFSET(0x194644B0)

inline static constexpr unsigned int Class_1_859CB3FB5B8591B6_TypeDefinitionIndex = 42493;

class Class_1_859CB3FB5B8591B6 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_2 = 0x100; // 0x0
	::Class_1_AFABD9AB64AEC106* Field_1_7; // 0x10
	::System::Char Field_1_0; // 0x18
	::System::Int16 Field_1_1; // 0x1A

	::System::Void _ctor(::System::Char a1, ::Class_1_AFABD9AB64AEC106* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Char, ::Class_1_AFABD9AB64AEC106*))((::PBYTE)hIl2Cpp + CLASS_1_859CB3FB5B8591B6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Int16 Method_1_0E023B688E2A5CBD()
	{
		return ((::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_859CB3FB5B8591B6_METHOD_1_0E023B688E2A5CBD_OFFSET))(this);
	}

	::Enum_3_61B3F00B9B88D294 Method_1_9E2827A2323B7F01(::Struct_2_01B5071406F53CB4& a1, ::System::Char a2)
	{
		return ((::Enum_3_61B3F00B9B88D294(*)(::PVOID, ::Struct_2_01B5071406F53CB4&, ::System::Char))((::PBYTE)hIl2Cpp + CLASS_1_859CB3FB5B8591B6_METHOD_1_9E2827A2323B7F01_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_85A93BFC46CDB487(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_859CB3FB5B8591B6_METHOD_1_85A93BFC46CDB487_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7EA816242B6DC57A(::System::Int16 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CLASS_1_859CB3FB5B8591B6_METHOD_1_7EA816242B6DC57A_OFFSET))(this, a1);
	}
};
