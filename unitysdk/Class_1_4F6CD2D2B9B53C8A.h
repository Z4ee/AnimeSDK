#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_4F6CD2D2B9B53C8A_METHOD_1_53922A4B004BF167_OFFSET UNITYSDK_OFFSET(0x11A58880)
#define CLASS_1_4F6CD2D2B9B53C8A_METHOD_1_A50ACCB607455BC4_1_OFFSET UNITYSDK_OFFSET(0x11A58830)
#define CLASS_1_4F6CD2D2B9B53C8A_METHOD_1_A50ACCB607455BC4_OFFSET UNITYSDK_OFFSET(0x11A587E0)
#define CLASS_1_4F6CD2D2B9B53C8A__CTOR_OFFSET UNITYSDK_OFFSET(0x11A588D0)

inline static constexpr unsigned int Class_1_4F6CD2D2B9B53C8A_TypeDefinitionIndex = 46241;

class Class_1_4F6CD2D2B9B53C8A : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F6CD2D2B9B53C8A__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_A50ACCB607455BC4(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
	{
		return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_4F6CD2D2B9B53C8A_METHOD_1_A50ACCB607455BC4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A50ACCB607455BC4_1(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
	{
		return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_4F6CD2D2B9B53C8A_METHOD_1_A50ACCB607455BC4_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_53922A4B004BF167(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
	{
		return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_4F6CD2D2B9B53C8A_METHOD_1_53922A4B004BF167_OFFSET))(a1, a2);
	}
};
