#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Newtonsoft::Json::Linq { class JToken; }
namespace System { class String; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define CLASS_1_90998AEA3C61F12E_METHOD_1_08B73798457994B5_OFFSET UNITYSDK_OFFSET(0x1237E4C0)
#define CLASS_1_90998AEA3C61F12E_METHOD_1_185276EAD7B5B322_OFFSET UNITYSDK_OFFSET(0x1237E5E0)
#define CLASS_1_90998AEA3C61F12E_METHOD_1_19245CCC668AF08F_OFFSET UNITYSDK_OFFSET(0x1237E3D0)
#define CLASS_1_90998AEA3C61F12E__CTOR_OFFSET UNITYSDK_OFFSET(0x1237E3C0)

inline static constexpr unsigned int Class_1_90998AEA3C61F12E_TypeDefinitionIndex = 46272;

class Class_1_90998AEA3C61F12E : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	::System::String* Field_1_2; // 0x10
	::System::String* Field_1_1; // 0x18

	::System::Void _ctor(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_90998AEA3C61F12E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Threading::Tasks::Task_1<::Il2CppArray<::Il2CppArray<::Newtonsoft::Json::Linq::JToken*>*>*>* Method_1_19245CCC668AF08F(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Threading::Tasks::Task_1<::Il2CppArray<::Il2CppArray<::Newtonsoft::Json::Linq::JToken*>*>*>*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_90998AEA3C61F12E_METHOD_1_19245CCC668AF08F_OFFSET))(this, a1, a2);
	}

	::System::Threading::Tasks::Task_1<::System::String*>* Method_1_08B73798457994B5(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Threading::Tasks::Task_1<::System::String*>*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_90998AEA3C61F12E_METHOD_1_08B73798457994B5_OFFSET))(this, a1, a2);
	}

	::System::Threading::Tasks::Task_1<::System::String*>* Method_1_185276EAD7B5B322()
	{
		return ((::System::Threading::Tasks::Task_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90998AEA3C61F12E_METHOD_1_185276EAD7B5B322_OFFSET))(this);
	}
};
