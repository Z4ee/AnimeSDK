#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKRESULT.h"
#include "unitysdk/Enum_3_74B8771726734F6D.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_965;
class Class_2_F5737224A0253470;
class Class_4_DA19DD65175B97CF;
namespace System { class String; }

#define CLASS_1_E6ACCBF10F85E946_METHOD_1_12A5E06AEC40A5A6_OFFSET UNITYSDK_OFFSET(0x15928450)
#define CLASS_1_E6ACCBF10F85E946_METHOD_1_2069A3C22221F1F1_OFFSET UNITYSDK_OFFSET(0x15928AE0)
#define CLASS_1_E6ACCBF10F85E946_METHOD_1_38B19C59CAE25745_OFFSET UNITYSDK_OFFSET(0x15928320)
#define CLASS_1_E6ACCBF10F85E946_METHOD_1_4BD77A6A7E7AD414_OFFSET UNITYSDK_OFFSET(0x159279F0)
#define CLASS_1_E6ACCBF10F85E946_METHOD_1_6A0EBEECA245A27C_OFFSET UNITYSDK_OFFSET(0x159281E0)
#define CLASS_1_E6ACCBF10F85E946_METHOD_1_75E6A550EDFD39B6_OFFSET UNITYSDK_OFFSET(0x15928BF0)
#define CLASS_1_E6ACCBF10F85E946_METHOD_1_A88E4B47F5DBD946_OFFSET UNITYSDK_OFFSET(0x15927A80)
#define CLASS_1_E6ACCBF10F85E946_METHOD_1_C4B2F2765F061A72_OFFSET UNITYSDK_OFFSET(0x15927B10)
#define CLASS_1_E6ACCBF10F85E946_METHOD_1_C4CC3A5CB2FC5B23_OFFSET UNITYSDK_OFFSET(0x15927BD0)
#define CLASS_1_E6ACCBF10F85E946_METHOD_1_DFB3E3DF5DAF95EF_OFFSET UNITYSDK_OFFSET(0x15928A80)
#define CLASS_1_E6ACCBF10F85E946__CTOR_OFFSET UNITYSDK_OFFSET(0x15927920)

inline static constexpr unsigned int Class_1_E6ACCBF10F85E946_TypeDefinitionIndex = 49275;

class Class_1_E6ACCBF10F85E946 : public ::System::Object
{
public:
	::Class_4_DA19DD65175B97CF* Field_1_0; // 0x10
	::Class_2_F5737224A0253470* Field_1_4; // 0x18
	::System::String* Field_1_6; // 0x20
	::System::UInt32 Field_1_2; // 0x28
	::System::Int32 Field_1_5; // 0x2C
	::System::UInt32 Field_1_1; // 0x30
	::System::Boolean Field_1_3; // 0x34

	::System::Void _ctor(::Class_4_DA19DD65175B97CF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_DA19DD65175B97CF*))((::PBYTE)hIl2Cpp + CLASS_1_E6ACCBF10F85E946__CTOR_OFFSET))(this, a1);
	}

	::AKRESULT Method_1_4BD77A6A7E7AD414(::System::Int32 a1, ::System::Single a2)
	{
		return ((::AKRESULT(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E6ACCBF10F85E946_METHOD_1_4BD77A6A7E7AD414_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_A88E4B47F5DBD946(::System::Int32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E6ACCBF10F85E946_METHOD_1_A88E4B47F5DBD946_OFFSET))(this, a1);
	}

	::AKRESULT Method_1_C4B2F2765F061A72(::System::String* a1, ::System::Single a2)
	{
		return ((::AKRESULT(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E6ACCBF10F85E946_METHOD_1_C4B2F2765F061A72_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_1_C4CC3A5CB2FC5B23(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E6ACCBF10F85E946_METHOD_1_C4CC3A5CB2FC5B23_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_6A0EBEECA245A27C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6ACCBF10F85E946_METHOD_1_6A0EBEECA245A27C_OFFSET))(this);
	}

	::System::UInt32 Method_1_38B19C59CAE25745(::Class_2_208CC9941471731A_965* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_208CC9941471731A_965*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E6ACCBF10F85E946_METHOD_1_38B19C59CAE25745_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_DFB3E3DF5DAF95EF(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E6ACCBF10F85E946_METHOD_1_DFB3E3DF5DAF95EF_OFFSET))(this, a1, a2);
	}

	::AKRESULT Method_1_2069A3C22221F1F1(::System::Single a1)
	{
		return ((::AKRESULT(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E6ACCBF10F85E946_METHOD_1_2069A3C22221F1F1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_75E6A550EDFD39B6(::Enum_3_74B8771726734F6D a1, ::System::Boolean a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::Enum_3_74B8771726734F6D, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E6ACCBF10F85E946_METHOD_1_75E6A550EDFD39B6_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_1_12A5E06AEC40A5A6(::System::Int32 a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E6ACCBF10F85E946_METHOD_1_12A5E06AEC40A5A6_OFFSET))(this, a1, a2, a3, a4);
	}
};
