#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_410757201D519965_METHOD_1_36F545CC9D94904E_OFFSET UNITYSDK_OFFSET(0x1EC8ABB0)
#define CLASS_1_410757201D519965_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1EC8ACE0)
#define CLASS_1_410757201D519965_METHOD_1_CC5CE2E05C46A526_OFFSET UNITYSDK_OFFSET(0x1EC8AC60)
#define CLASS_1_410757201D519965_METHOD_1_F00C9C530ADB1CA9_OFFSET UNITYSDK_OFFSET(0x1EC8AD70)
#define CLASS_1_410757201D519965__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC8AE00)

inline static constexpr unsigned int Class_1_410757201D519965_TypeDefinitionIndex = 44109;

class Class_1_410757201D519965 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* GFOPFBIHFFE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_410757201D519965__CTOR_OFFSET))(this);
	}

	::System::Object* Method_1_36F545CC9D94904E(::System::String* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_410757201D519965_METHOD_1_36F545CC9D94904E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_CC5CE2E05C46A526(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_410757201D519965_METHOD_1_CC5CE2E05C46A526_OFFSET))(this, a1);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_410757201D519965_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Boolean Method_1_F00C9C530ADB1CA9(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_410757201D519965_METHOD_1_F00C9C530ADB1CA9_OFFSET))(this, a1);
	}
};
