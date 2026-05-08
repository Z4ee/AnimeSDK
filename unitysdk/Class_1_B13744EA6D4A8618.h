#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigLogicMovementRegistry; }
namespace MoleMole::Config { class ConfigMovement; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B13744EA6D4A8618_METHOD_1_2E04E911EC2F4E81_OFFSET UNITYSDK_OFFSET(0x132AFC80)
#define CLASS_1_B13744EA6D4A8618_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x132B0120)
#define CLASS_1_B13744EA6D4A8618_METHOD_1_4BFE4240535C31C9_OFFSET UNITYSDK_OFFSET(0x132B0020)
#define CLASS_1_B13744EA6D4A8618_METHOD_1_783DEC3826DD5400_OFFSET UNITYSDK_OFFSET(0x132AFF20)
#define CLASS_1_B13744EA6D4A8618_METHOD_1_7AA3E77D98430A08_OFFSET UNITYSDK_OFFSET(0x132B01C0)
#define CLASS_1_B13744EA6D4A8618__CCTOR_OFFSET UNITYSDK_OFFSET(0x132AFC70)

inline static constexpr unsigned int Class_1_B13744EA6D4A8618_TypeDefinitionIndex = 62089;

class Class_1_B13744EA6D4A8618 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigMovement*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigMovement*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B13744EA6D4A8618_TypeDefinitionIndex)->GetStaticField(0x3B880);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B13744EA6D4A8618__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_2E04E911EC2F4E81(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_B13744EA6D4A8618_METHOD_1_2E04E911EC2F4E81_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::ConfigMovement* Method_1_783DEC3826DD5400(::System::String* a1)
	{
		return ((::MoleMole::Config::ConfigMovement*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B13744EA6D4A8618_METHOD_1_783DEC3826DD5400_OFFSET))(a1);
	}

	static ::System::Void Method_1_4BFE4240535C31C9(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B13744EA6D4A8618_METHOD_1_4BFE4240535C31C9_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B13744EA6D4A8618_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_7AA3E77D98430A08(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigLogicMovementRegistry*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigLogicMovementRegistry*>*))((::PBYTE)hIl2Cpp + CLASS_1_B13744EA6D4A8618_METHOD_1_7AA3E77D98430A08_OFFSET))(a1);
	}
};
