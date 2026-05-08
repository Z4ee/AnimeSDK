#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_11FD83788053949F_2.h"
#include "unitysdk/Struct_2_A840136A4E657746.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_133758782F531FFD_METHOD_1_0BF1620F1E4289BD_OFFSET UNITYSDK_OFFSET(0x10827A10)
#define CLASS_1_133758782F531FFD_METHOD_1_1EB0073A9B980AEF_OFFSET UNITYSDK_OFFSET(0x10827650)
#define CLASS_1_133758782F531FFD_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x108275B0)
#define CLASS_1_133758782F531FFD_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x108274E0)
#define CLASS_1_133758782F531FFD_METHOD_1_8BC6021020D15A44_OFFSET UNITYSDK_OFFSET(0x10827450)
#define CLASS_1_133758782F531FFD_METHOD_1_A79A00C5E3708315_OFFSET UNITYSDK_OFFSET(0x10827AD0)
#define CLASS_1_133758782F531FFD_METHOD_1_FBA744CE7479F95C_OFFSET UNITYSDK_OFFSET(0x10827870)
#define CLASS_1_133758782F531FFD__CTOR_OFFSET UNITYSDK_OFFSET(0x10827E10)

inline static constexpr unsigned int Class_1_133758782F531FFD_TypeDefinitionIndex = 59680;

class Class_1_133758782F531FFD : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_11FD83788053949F_2>* Field_1_1; // 0x10
	::Struct_2_A840136A4E657746 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_133758782F531FFD__CTOR_OFFSET))(this);
	}

	::System::Single Method_1_8BC6021020D15A44()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_133758782F531FFD_METHOD_1_8BC6021020D15A44_OFFSET))(this);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_133758782F531FFD_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_133758782F531FFD_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Single Method_1_1EB0073A9B980AEF(::System::String* a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_133758782F531FFD_METHOD_1_1EB0073A9B980AEF_OFFSET))(this, a1);
	}

	::System::Void Method_1_FBA744CE7479F95C(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_133758782F531FFD_METHOD_1_FBA744CE7479F95C_OFFSET))(this, a1);
	}

	::System::Void Method_1_0BF1620F1E4289BD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_133758782F531FFD_METHOD_1_0BF1620F1E4289BD_OFFSET))(this, a1);
	}

	::System::Void Method_1_A79A00C5E3708315(::System::String* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_133758782F531FFD_METHOD_1_A79A00C5E3708315_OFFSET))(this, a1, a2);
	}
};
