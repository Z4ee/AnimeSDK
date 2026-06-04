#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_284;
class Class_1_74C6821D77CCA75B;
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine::Events { class UnityEventBase; }

#define CLASS_1_EBC8BFC37EF67FAD_METHOD_1_25149FD8B5B06D06_OFFSET UNITYSDK_OFFSET(0x1AC30540)
#define CLASS_1_EBC8BFC37EF67FAD_METHOD_1_3130418AA5AF97CF_OFFSET UNITYSDK_OFFSET(0x1AC2FF10)
#define CLASS_1_EBC8BFC37EF67FAD_METHOD_1_4849A3B35F49BB4F_OFFSET UNITYSDK_OFFSET(0x1AC30310)
#define CLASS_1_EBC8BFC37EF67FAD_METHOD_1_59C0845F0C353112_OFFSET UNITYSDK_OFFSET(0x1AC30970)
#define CLASS_1_EBC8BFC37EF67FAD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AC30F30)

inline static constexpr unsigned int Class_1_EBC8BFC37EF67FAD_TypeDefinitionIndex = 40618;

class Class_1_EBC8BFC37EF67FAD : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Type*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EBC8BFC37EF67FAD_TypeDefinitionIndex)->GetStaticField(0x50150);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EBC8BFC37EF67FAD__CCTOR_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_284* Method_1_3130418AA5AF97CF(::System::Object* a1, ::Class_1_74C6821D77CCA75B* a2)
	{
		return ((::Class_0_16E4307DCC419505_284*(*)(::System::Object*, ::Class_1_74C6821D77CCA75B*))((::PBYTE)hIl2Cpp + CLASS_1_EBC8BFC37EF67FAD_METHOD_1_3130418AA5AF97CF_OFFSET))(a1, a2);
	}

	static ::Class_0_16E4307DCC419505_284* Method_1_25149FD8B5B06D06(::System::Object* a1, ::UnityEngine::Events::UnityEventBase* a2, ::Il2CppArray<::System::Type*>* a3)
	{
		return ((::Class_0_16E4307DCC419505_284*(*)(::System::Object*, ::UnityEngine::Events::UnityEventBase*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + CLASS_1_EBC8BFC37EF67FAD_METHOD_1_25149FD8B5B06D06_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Events::UnityEventBase* Method_1_59C0845F0C353112(::System::Type* a1, ::System::Object* a2, ::System::String* a3)
	{
		return ((::UnityEngine::Events::UnityEventBase*(*)(::System::Type*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EBC8BFC37EF67FAD_METHOD_1_59C0845F0C353112_OFFSET))(a1, a2, a3);
	}

	static ::Il2CppArray<::System::Type*>* Method_1_4849A3B35F49BB4F(::System::Type* a1)
	{
		return ((::Il2CppArray<::System::Type*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_EBC8BFC37EF67FAD_METHOD_1_4849A3B35F49BB4F_OFFSET))(a1);
	}
};
