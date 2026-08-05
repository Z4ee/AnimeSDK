#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Code::Logic::Data::ScriptObject::Level { class PatternTimeline; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_7B394DEAF79A418A___C_METHOD_1_6AC3C9EDFD9984F3_OFFSET UNITYSDK_OFFSET(0x145AD330)
#define CLASS_1_7B394DEAF79A418A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x145AD2E0)
#define CLASS_1_7B394DEAF79A418A___C__CTOR_OFFSET UNITYSDK_OFFSET(0x145AD320)

inline static constexpr unsigned int Class_1_7B394DEAF79A418A___c_TypeDefinitionIndex = 73406;

class Class_1_7B394DEAF79A418A___c : public ::System::Object
{
public:
	static ::System::Func_2<::Code::Logic::Data::ScriptObject::Level::PatternTimeline*, ::System::Int32>** StaticGet___9__4_0()
	{
		return (::System::Func_2<::Code::Logic::Data::ScriptObject::Level::PatternTimeline*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7B394DEAF79A418A___c_TypeDefinitionIndex)->GetStaticField(0x3EA80);
	}
	static ::Class_1_7B394DEAF79A418A___c** StaticGet___9()
	{
		return (::Class_1_7B394DEAF79A418A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7B394DEAF79A418A___c_TypeDefinitionIndex)->GetStaticField(0x3EA88);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7B394DEAF79A418A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B394DEAF79A418A___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_6AC3C9EDFD9984F3(::Code::Logic::Data::ScriptObject::Level::PatternTimeline* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Code::Logic::Data::ScriptObject::Level::PatternTimeline*))((::PBYTE)hIl2Cpp + CLASS_1_7B394DEAF79A418A___C_METHOD_1_6AC3C9EDFD9984F3_OFFSET))(this, a1);
	}
};
