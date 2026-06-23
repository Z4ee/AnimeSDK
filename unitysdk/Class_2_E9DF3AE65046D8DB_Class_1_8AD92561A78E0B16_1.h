#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_2_E9DF3AE65046D8DB;
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_E9DF3AE65046D8DB_CLASS_1_8AD92561A78E0B16_1_METHOD_1_5AFFA079DA8B20AA_OFFSET UNITYSDK_OFFSET(0x11398B10)
#define CLASS_2_E9DF3AE65046D8DB_CLASS_1_8AD92561A78E0B16_1_METHOD_1_FACDAC340AD292AB_OFFSET UNITYSDK_OFFSET(0x11398B60)
#define CLASS_2_E9DF3AE65046D8DB_CLASS_1_8AD92561A78E0B16_1__CTOR_OFFSET UNITYSDK_OFFSET(0x11398B00)

inline static constexpr unsigned int Class_2_E9DF3AE65046D8DB_Class_1_8AD92561A78E0B16_1_TypeDefinitionIndex = 70971;

class Class_2_E9DF3AE65046D8DB_Class_1_8AD92561A78E0B16_1 : public ::System::Object
{
public:
	::Class_2_E9DF3AE65046D8DB* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Action_4<::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*>*, ::System::String*>>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_CLASS_1_8AD92561A78E0B16_1__CTOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* Method_1_5AFFA079DA8B20AA()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_CLASS_1_8AD92561A78E0B16_1_METHOD_1_5AFFA079DA8B20AA_OFFSET))(this);
	}

	::System::Void Method_1_FACDAC340AD292AB(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_CLASS_1_8AD92561A78E0B16_1_METHOD_1_FACDAC340AD292AB_OFFSET))(this, a1);
	}
};
