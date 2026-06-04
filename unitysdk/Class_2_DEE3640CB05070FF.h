#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_14.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define CLASS_2_DEE3640CB05070FF_DELETEKEY_OFFSET UNITYSDK_OFFSET(0x1AC0CC40)
#define CLASS_2_DEE3640CB05070FF_FLUSH_OFFSET UNITYSDK_OFFSET(0x1AC0C650)
#define CLASS_2_DEE3640CB05070FF_GET_ISPARTIALSAVE_OFFSET UNITYSDK_OFFSET(0x1AC0CC50)
#define CLASS_2_DEE3640CB05070FF_LOAD_OFFSET UNITYSDK_OFFSET(0x1AC0C130)
#define CLASS_2_DEE3640CB05070FF__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABE6720)

inline static constexpr unsigned int Class_2_DEE3640CB05070FF_TypeDefinitionIndex = 33515;

class Class_2_DEE3640CB05070FF : public ::Class_1_43BD383C98B4C0C5_14
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DEE3640CB05070FF__CTOR_OFFSET))(this);
	}

	::System::Void Load(::System::String* a1, ::System::Type* a2, ::System::Object*& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*, ::System::Object*&))((::PBYTE)hIl2Cpp + CLASS_2_DEE3640CB05070FF_LOAD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Flush(::System::String* a1, ::System::Type* a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_DEE3640CB05070FF_FLUSH_OFFSET))(this, a1, a2, a3);
	}

	::System::Void DeleteKey(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_DEE3640CB05070FF_DELETEKEY_OFFSET))(this, a1);
	}

	::System::Boolean get_IsPartialSave()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DEE3640CB05070FF_GET_ISPARTIALSAVE_OFFSET))(this);
	}
};
