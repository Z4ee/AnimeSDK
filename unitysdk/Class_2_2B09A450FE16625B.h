#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_15.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define CLASS_2_2B09A450FE16625B_DELETEKEY_OFFSET UNITYSDK_OFFSET(0x1C8A2A20)
#define CLASS_2_2B09A450FE16625B_FLUSH_OFFSET UNITYSDK_OFFSET(0x1C8A2390)
#define CLASS_2_2B09A450FE16625B_GET_ISPARTIALSAVE_OFFSET UNITYSDK_OFFSET(0x1C8A2A30)
#define CLASS_2_2B09A450FE16625B_LOAD_OFFSET UNITYSDK_OFFSET(0x1C8A1DE0)
#define CLASS_2_2B09A450FE16625B__CTOR_OFFSET UNITYSDK_OFFSET(0x1C878ED0)

inline static constexpr unsigned int Class_2_2B09A450FE16625B_TypeDefinitionIndex = 34652;

class Class_2_2B09A450FE16625B : public ::Class_1_43BD383C98B4C0C5_15
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B09A450FE16625B__CTOR_OFFSET))(this);
	}

	::System::Void Load(::System::String* a1, ::System::Type* a2, ::System::Object*& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*, ::System::Object*&))((::PBYTE)hIl2Cpp + CLASS_2_2B09A450FE16625B_LOAD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Flush(::System::String* a1, ::System::Type* a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2B09A450FE16625B_FLUSH_OFFSET))(this, a1, a2, a3);
	}

	::System::Void DeleteKey(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_2B09A450FE16625B_DELETEKEY_OFFSET))(this, a1);
	}

	::System::Boolean get_IsPartialSave()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B09A450FE16625B_GET_ISPARTIALSAVE_OFFSET))(this);
	}
};
