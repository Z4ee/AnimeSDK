#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_8B550A61FC9DDA82_CLASS_1_8A8DD3DABCDD7857_METHOD_1_7E8C9A58664BFB52_OFFSET UNITYSDK_OFFSET(0x17071D80)
#define CLASS_1_8B550A61FC9DDA82_CLASS_1_8A8DD3DABCDD7857__CTOR_OFFSET UNITYSDK_OFFSET(0x17071D70)

inline static constexpr unsigned int Class_1_8B550A61FC9DDA82_Class_1_8A8DD3DABCDD7857_TypeDefinitionIndex = 50177;

class Class_1_8B550A61FC9DDA82_Class_1_8A8DD3DABCDD7857 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int64>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B550A61FC9DDA82_CLASS_1_8A8DD3DABCDD7857__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_7E8C9A58664BFB52(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8B550A61FC9DDA82_CLASS_1_8A8DD3DABCDD7857_METHOD_1_7E8C9A58664BFB52_OFFSET))(this, a1, a2);
	}
};
