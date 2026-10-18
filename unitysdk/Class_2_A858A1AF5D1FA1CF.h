#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9BDABDE588395B65.h"

class Class_0_16E4307DCC419505_24;
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define CLASS_2_A858A1AF5D1FA1CF_DELETEKEY_OFFSET UNITYSDK_OFFSET(0x1EBDBD60)
#define CLASS_2_A858A1AF5D1FA1CF_FLUSH_OFFSET UNITYSDK_OFFSET(0x1EBDBC00)
#define CLASS_2_A858A1AF5D1FA1CF_GET_ISPARTIALSAVE_OFFSET UNITYSDK_OFFSET(0x1EBDBEB0)
#define CLASS_2_A858A1AF5D1FA1CF_LOAD_OFFSET UNITYSDK_OFFSET(0x1EBDBAA0)
#define CLASS_2_A858A1AF5D1FA1CF_METHOD_2_9A5BE36283614E71_OFFSET UNITYSDK_OFFSET(0x1EBDBEC0)
#define CLASS_2_A858A1AF5D1FA1CF__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBDBA70)

inline static constexpr unsigned int Class_2_A858A1AF5D1FA1CF_TypeDefinitionIndex = 35314;

class Class_2_A858A1AF5D1FA1CF : public ::Class_1_9BDABDE588395B65
{
public:
	static ::Class_0_16E4307DCC419505_24** StaticGet_CKILLMGJJPD()
	{
		return (::Class_0_16E4307DCC419505_24**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A858A1AF5D1FA1CF_TypeDefinitionIndex)->GetStaticField(0x50D00);
	}
	::System::String* CMDHEFBNLGP; // 0x10

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_A858A1AF5D1FA1CF__CTOR_OFFSET))(this, a1);
	}

	::System::Void Load(::System::String* a1, ::System::Type* a2, ::System::Object*& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*, ::System::Object*&))((::PBYTE)hIl2Cpp + CLASS_2_A858A1AF5D1FA1CF_LOAD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Flush(::System::String* a1, ::System::Type* a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A858A1AF5D1FA1CF_FLUSH_OFFSET))(this, a1, a2, a3);
	}

	::System::Void DeleteKey(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_A858A1AF5D1FA1CF_DELETEKEY_OFFSET))(this, a1);
	}

	::System::Boolean get_IsPartialSave()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A858A1AF5D1FA1CF_GET_ISPARTIALSAVE_OFFSET))(this);
	}

	static ::System::Void Method_2_9A5BE36283614E71(::Class_0_16E4307DCC419505_24* a1)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_24*))((::PBYTE)hIl2Cpp + CLASS_2_A858A1AF5D1FA1CF_METHOD_2_9A5BE36283614E71_OFFSET))(a1);
	}
};
