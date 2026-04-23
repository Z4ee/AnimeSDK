#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_298CB0A85460240D.h"

class Class_0_16E4307DCC419505_44;
namespace RPG::Client { class RPGProfilerMarker; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_72643AB9418B308C_METHOD_2_BA83EFFBF24411C4_OFFSET UNITYSDK_OFFSET(0x17D72D30)
#define CLASS_2_72643AB9418B308C__CTOR_OFFSET UNITYSDK_OFFSET(0x17D72CC0)

inline static constexpr unsigned int Class_2_72643AB9418B308C_TypeDefinitionIndex = 34402;

class Class_2_72643AB9418B308C : public ::Class_1_298CB0A85460240D
{
public:
	::RPG::Client::RPGProfilerMarker* Field_2_0; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_44* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_44*))((::PBYTE)hIl2Cpp + CLASS_2_72643AB9418B308C__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_BA83EFFBF24411C4(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_72643AB9418B308C_METHOD_2_BA83EFFBF24411C4_OFFSET))(this, a1, a2);
	}
};
