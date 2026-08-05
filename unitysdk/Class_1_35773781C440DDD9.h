#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_35773781C440DDD9_METHOD_1_68AA92DBDBFCA9AD_OFFSET UNITYSDK_OFFSET(0x194E7730)
#define CLASS_1_35773781C440DDD9_METHOD_1_CCFD131833AE484B_OFFSET UNITYSDK_OFFSET(0x194E75A0)
#define CLASS_1_35773781C440DDD9__CTOR_OFFSET UNITYSDK_OFFSET(0x194E7510)

inline static constexpr unsigned int Class_1_35773781C440DDD9_TypeDefinitionIndex = 62553;

class Class_1_35773781C440DDD9 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Action*>* Field_1_1; // 0x10
	::System::Single Field_1_7; // 0x18
	::System::Int32 Field_1_0; // 0x1C
	::System::Boolean Field_1_6; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35773781C440DDD9__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CCFD131833AE484B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35773781C440DDD9_METHOD_1_CCFD131833AE484B_OFFSET))(this);
	}

	::System::Boolean Method_1_68AA92DBDBFCA9AD(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_35773781C440DDD9_METHOD_1_68AA92DBDBFCA9AD_OFFSET))(this, a1, a2);
	}
};
