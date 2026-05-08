#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigDynamicObjectRegistry; }
namespace MoleMole::Config { class DynamicObjectEntry; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_10CDF64C2DBF3F33_METHOD_1_2E04E911EC2F4E81_OFFSET UNITYSDK_OFFSET(0x13350030)
#define CLASS_1_10CDF64C2DBF3F33_METHOD_1_4866E4935B0E3697_OFFSET UNITYSDK_OFFSET(0x133502C0)
#define CLASS_1_10CDF64C2DBF3F33_METHOD_1_4BFE4240535C31C9_OFFSET UNITYSDK_OFFSET(0x133503C0)
#define CLASS_1_10CDF64C2DBF3F33_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x133504B0)
#define CLASS_1_10CDF64C2DBF3F33_METHOD_1_93D2AE9BCBB6C824_OFFSET UNITYSDK_OFFSET(0x13350500)
#define CLASS_1_10CDF64C2DBF3F33__CCTOR_OFFSET UNITYSDK_OFFSET(0x13350020)

inline static constexpr unsigned int Class_1_10CDF64C2DBF3F33_TypeDefinitionIndex = 76994;

class Class_1_10CDF64C2DBF3F33 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::DynamicObjectEntry*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::DynamicObjectEntry*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_10CDF64C2DBF3F33_TypeDefinitionIndex)->GetStaticField(0x39330);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_10CDF64C2DBF3F33__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_2E04E911EC2F4E81(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_10CDF64C2DBF3F33_METHOD_1_2E04E911EC2F4E81_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::DynamicObjectEntry* Method_1_4866E4935B0E3697(::System::String* a1)
	{
		return ((::MoleMole::Config::DynamicObjectEntry*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_10CDF64C2DBF3F33_METHOD_1_4866E4935B0E3697_OFFSET))(a1);
	}

	static ::System::Void Method_1_4BFE4240535C31C9(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_10CDF64C2DBF3F33_METHOD_1_4BFE4240535C31C9_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_10CDF64C2DBF3F33_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	static ::System::Void Method_1_93D2AE9BCBB6C824(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigDynamicObjectRegistry*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigDynamicObjectRegistry*>*))((::PBYTE)hIl2Cpp + CLASS_1_10CDF64C2DBF3F33_METHOD_1_93D2AE9BCBB6C824_OFFSET))(a1);
	}
};
