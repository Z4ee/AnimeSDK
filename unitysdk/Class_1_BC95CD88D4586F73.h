#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Newtonsoft::Json::Linq { class JToken; }
namespace System { class String; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define CLASS_1_BC95CD88D4586F73_METHOD_1_35B49A22B7095C59_OFFSET UNITYSDK_OFFSET(0xD7DAC10)
#define CLASS_1_BC95CD88D4586F73_METHOD_1_F03AAE4D1433A772_OFFSET UNITYSDK_OFFSET(0xD7DAAF0)
#define CLASS_1_BC95CD88D4586F73_METHOD_1_F122F1E0722CF168_OFFSET UNITYSDK_OFFSET(0xD7DA9F0)
#define CLASS_1_BC95CD88D4586F73__CTOR_OFFSET UNITYSDK_OFFSET(0xD7DA9E0)

inline static constexpr unsigned int Class_1_BC95CD88D4586F73_TypeDefinitionIndex = 40363;

class Class_1_BC95CD88D4586F73 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	::System::String* Field_1_1; // 0x10
	::System::String* Field_1_2; // 0x18

	::System::Void _ctor(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BC95CD88D4586F73__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Threading::Tasks::Task_1<::Il2CppArray<::Il2CppArray<::Newtonsoft::Json::Linq::JToken*>*>*>* Method_1_F122F1E0722CF168(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Threading::Tasks::Task_1<::Il2CppArray<::Il2CppArray<::Newtonsoft::Json::Linq::JToken*>*>*>*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BC95CD88D4586F73_METHOD_1_F122F1E0722CF168_OFFSET))(this, a1, a2);
	}

	::System::Threading::Tasks::Task_1<::System::String*>* Method_1_F03AAE4D1433A772(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Threading::Tasks::Task_1<::System::String*>*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BC95CD88D4586F73_METHOD_1_F03AAE4D1433A772_OFFSET))(this, a1, a2);
	}

	::System::Threading::Tasks::Task_1<::System::String*>* Method_1_35B49A22B7095C59()
	{
		return ((::System::Threading::Tasks::Task_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BC95CD88D4586F73_METHOD_1_35B49A22B7095C59_OFFSET))(this);
	}
};
