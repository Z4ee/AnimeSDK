#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueMiracle; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_475B63C83D7BA117_2_METHOD_1_976CE8DBF12537DF_OFFSET UNITYSDK_OFFSET(0x1926F9C0)
#define CLASS_1_475B63C83D7BA117_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1926F890)
#define CLASS_1_475B63C83D7BA117_2_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x1926F920)
#define CLASS_1_475B63C83D7BA117_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1926F810)

inline static constexpr unsigned int Class_1_475B63C83D7BA117_2_TypeDefinitionIndex = 67022;

class Class_1_475B63C83D7BA117_2 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::IRogueMiracle*>* KILMJLFDOAA; // 0x10

	::System::Void _ctor(::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueMiracle*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueMiracle*>*))((::PBYTE)hIl2Cpp + CLASS_1_475B63C83D7BA117_2__CTOR_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_475B63C83D7BA117_2_TOSTRING_OFFSET))(this);
	}

	::System::Void TriggerAction()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_475B63C83D7BA117_2_TRIGGERACTION_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueMiracle*>* Method_1_976CE8DBF12537DF()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueMiracle*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_475B63C83D7BA117_2_METHOD_1_976CE8DBF12537DF_OFFSET))(this);
	}
};
