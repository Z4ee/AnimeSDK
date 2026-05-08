#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F00DC819D834EFD2.h"
#include "unitysdk/Struct_2_733B8EC4B9916061.h"
#include "unitysdk/System/Object.h"

class Class_1_73F7DED90F9FA901;
class Class_1_D65512A83CF70AB7;
class Class_2_ACE9F07052632BA1;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_ACE9F07052632BA1_CLASS_1_9520270E9BD56898_METHOD_1_081E84DBAB5CA72B_OFFSET UNITYSDK_OFFSET(0xE511680)
#define CLASS_2_ACE9F07052632BA1_CLASS_1_9520270E9BD56898__CTOR_OFFSET UNITYSDK_OFFSET(0xE511670)

inline static constexpr unsigned int Class_2_ACE9F07052632BA1_Class_1_9520270E9BD56898_TypeDefinitionIndex = 53298;

class Class_2_ACE9F07052632BA1_Class_1_9520270E9BD56898 : public ::System::Object
{
public:
	::System::String* Field_1_4; // 0x10
	::Class_1_73F7DED90F9FA901* Field_1_7; // 0x18
	::Class_2_ACE9F07052632BA1* Field_1_0; // 0x20
	::System::Action_1<::Class_1_D65512A83CF70AB7*>* Field_1_2; // 0x28
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Field_1_3; // 0x30
	::System::Int32 Field_1_1; // 0x38
	::Enum_3_F00DC819D834EFD2 Field_1_5; // 0x3C
	::Struct_2_733B8EC4B9916061 Field_1_6; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_CLASS_1_9520270E9BD56898__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_081E84DBAB5CA72B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_CLASS_1_9520270E9BD56898_METHOD_1_081E84DBAB5CA72B_OFFSET))(this);
	}
};
