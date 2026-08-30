#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }

#define CLASS_1_E2741313800DD2F4_DELETEKEY_OFFSET UNITYSDK_OFFSET(0xB5A8C60)
#define CLASS_1_E2741313800DD2F4_FLUSH_OFFSET UNITYSDK_OFFSET(0xB5A8B70)
#define CLASS_1_E2741313800DD2F4_GET_ISPARTIALSAVE_OFFSET UNITYSDK_OFFSET(0xB5A8CD0)
#define CLASS_1_E2741313800DD2F4_LOAD_OFFSET UNITYSDK_OFFSET(0xB5A8AE0)
#define CLASS_1_E2741313800DD2F4__CTOR_OFFSET UNITYSDK_OFFSET(0xB5A8CE0)

inline static constexpr unsigned int Class_1_E2741313800DD2F4_TypeDefinitionIndex = 59500;

class Class_1_E2741313800DD2F4 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2741313800DD2F4__CTOR_OFFSET))(this);
	}

	::System::Void Load(::System::String* a1, ::System::Type* a2, ::System::Object*& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*, ::System::Object*&))((::PBYTE)hIl2Cpp + CLASS_1_E2741313800DD2F4_LOAD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Flush(::System::String* a1, ::System::Type* a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E2741313800DD2F4_FLUSH_OFFSET))(this, a1, a2, a3);
	}

	::System::Void DeleteKey(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E2741313800DD2F4_DELETEKEY_OFFSET))(this, a1);
	}

	::System::Boolean get_IsPartialSave()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2741313800DD2F4_GET_ISPARTIALSAVE_OFFSET))(this);
	}
};
