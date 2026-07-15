#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CompilerFramework/DiagnosticSeverity.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Globalization { class CultureInfo; }

#define CLASS_1_872B9BFACDB0D272_METHOD_1_95ECE300AA2B7CB8_OFFSET UNITYSDK_OFFSET(0x1D2458A0)
#define CLASS_1_872B9BFACDB0D272__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2459E0)

inline static constexpr unsigned int Class_1_872B9BFACDB0D272_TypeDefinitionIndex = 39436;

class Class_1_872B9BFACDB0D272 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_872B9BFACDB0D272__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_95ECE300AA2B7CB8(::System::Int32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_872B9BFACDB0D272_METHOD_1_95ECE300AA2B7CB8_OFFSET))(this, a1);
	}
};
