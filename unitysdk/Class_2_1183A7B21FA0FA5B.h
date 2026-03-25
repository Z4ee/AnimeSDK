#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_298CB0A85460240D.h"

class Class_0_16E4307DCC419505_44;
namespace RPG::Client { class RPGProfilerMarker; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_1183A7B21FA0FA5B_METHOD_2_96BE5189E71F2DA4_OFFSET UNITYSDK_OFFSET(0x166EB5D0)
#define CLASS_2_1183A7B21FA0FA5B__CTOR_OFFSET UNITYSDK_OFFSET(0x166EB560)

inline static constexpr unsigned int Class_2_1183A7B21FA0FA5B_TypeDefinitionIndex = 28675;

class Class_2_1183A7B21FA0FA5B : public ::Class_1_298CB0A85460240D
{
public:
	::RPG::Client::RPGProfilerMarker* Field_2_0; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_44* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_44*))((::PBYTE)hIl2Cpp + CLASS_2_1183A7B21FA0FA5B__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_96BE5189E71F2DA4(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_1183A7B21FA0FA5B_METHOD_2_96BE5189E71F2DA4_OFFSET))(this, a1, a2);
	}
};
