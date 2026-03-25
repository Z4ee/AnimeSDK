#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueMiracle; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_07BF3E8FC5117DF7_3_METHOD_1_BCAE9303D19217E3_OFFSET UNITYSDK_OFFSET(0x1136F7E0)
#define CLASS_1_07BF3E8FC5117DF7_3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1136F6B0)
#define CLASS_1_07BF3E8FC5117DF7_3_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x1136F740)
#define CLASS_1_07BF3E8FC5117DF7_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1136F630)
#define CLASS_1_07BF3E8FC5117DF7_3___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1136F7F0)

inline static constexpr unsigned int Class_1_07BF3E8FC5117DF7_3_TypeDefinitionIndex = 54546;

class Class_1_07BF3E8FC5117DF7_3 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::IRogueMiracle*>* Field_1_0; // 0x10

	::System::Void _ctor(::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueMiracle*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueMiracle*>*))((::PBYTE)hIl2Cpp + CLASS_1_07BF3E8FC5117DF7_3__CTOR_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07BF3E8FC5117DF7_3_TOSTRING_OFFSET))(this);
	}

	::System::Void TriggerAction()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07BF3E8FC5117DF7_3_TRIGGERACTION_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueMiracle*>* Method_1_BCAE9303D19217E3()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueMiracle*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07BF3E8FC5117DF7_3_METHOD_1_BCAE9303D19217E3_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07BF3E8FC5117DF7_3___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
