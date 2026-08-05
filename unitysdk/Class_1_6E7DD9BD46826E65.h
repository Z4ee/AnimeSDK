#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigLogicRotationRegistry; }
namespace MoleMole::Config { class ConfigRotation; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6E7DD9BD46826E65_METHOD_1_1E16136912E0BFA9_OFFSET UNITYSDK_OFFSET(0x18CAD260)
#define CLASS_1_6E7DD9BD46826E65_METHOD_1_2E04E911EC2F4E81_OFFSET UNITYSDK_OFFSET(0x18CACB00)
#define CLASS_1_6E7DD9BD46826E65_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x18CAD1C0)
#define CLASS_1_6E7DD9BD46826E65_METHOD_1_4BFE4240535C31C9_OFFSET UNITYSDK_OFFSET(0x18CACA10)
#define CLASS_1_6E7DD9BD46826E65_METHOD_1_BF52648A94DBB8F3_OFFSET UNITYSDK_OFFSET(0x18CACD90)
#define CLASS_1_6E7DD9BD46826E65__CCTOR_OFFSET UNITYSDK_OFFSET(0x18CACA00)

inline static constexpr unsigned int Class_1_6E7DD9BD46826E65_TypeDefinitionIndex = 46116;

class Class_1_6E7DD9BD46826E65 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigRotation*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigRotation*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6E7DD9BD46826E65_TypeDefinitionIndex)->GetStaticField(0x35340);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6E7DD9BD46826E65__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_4BFE4240535C31C9(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6E7DD9BD46826E65_METHOD_1_4BFE4240535C31C9_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_BF52648A94DBB8F3(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigLogicRotationRegistry*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigLogicRotationRegistry*>*))((::PBYTE)hIl2Cpp + CLASS_1_6E7DD9BD46826E65_METHOD_1_BF52648A94DBB8F3_OFFSET))(a1);
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6E7DD9BD46826E65_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_2E04E911EC2F4E81(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_6E7DD9BD46826E65_METHOD_1_2E04E911EC2F4E81_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::ConfigRotation* Method_1_1E16136912E0BFA9(::System::String* a1)
	{
		return ((::MoleMole::Config::ConfigRotation*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6E7DD9BD46826E65_METHOD_1_1E16136912E0BFA9_OFFSET))(a1);
	}
};
