#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_1_6CE70F4211D79CD5_4;
namespace RPG::Client { class LocalizedText; }

#define CLASS_2_D8466ECD1143FCBF_METHOD_2_9A4B8D8B70CE3845_OFFSET UNITYSDK_OFFSET(0x12917F30)
#define CLASS_2_D8466ECD1143FCBF__CTOR_OFFSET UNITYSDK_OFFSET(0x12917F90)
#define CLASS_2_D8466ECD1143FCBF__ONBIND_OFFSET UNITYSDK_OFFSET(0x12917EB0)
#define CLASS_2_D8466ECD1143FCBF___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x12917FC0)

inline static constexpr unsigned int Class_2_D8466ECD1143FCBF_TypeDefinitionIndex = 65991;

class Class_2_D8466ECD1143FCBF : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::RPG::Client::LocalizedText* Field_2_0; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8466ECD1143FCBF__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8466ECD1143FCBF__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_9A4B8D8B70CE3845(::Class_1_6CE70F4211D79CD5_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6CE70F4211D79CD5_4*))((::PBYTE)hIl2Cpp + CLASS_2_D8466ECD1143FCBF_METHOD_2_9A4B8D8B70CE3845_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8466ECD1143FCBF___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
