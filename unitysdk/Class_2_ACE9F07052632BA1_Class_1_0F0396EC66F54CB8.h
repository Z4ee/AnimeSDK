#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D65512A83CF70AB7;
class Class_2_ACE9F07052632BA1;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_ACE9F07052632BA1_CLASS_1_0F0396EC66F54CB8_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x13651770)
#define CLASS_2_ACE9F07052632BA1_CLASS_1_0F0396EC66F54CB8__CTOR_OFFSET UNITYSDK_OFFSET(0x13651760)

inline static constexpr unsigned int Class_2_ACE9F07052632BA1_Class_1_0F0396EC66F54CB8_TypeDefinitionIndex = 53287;

class Class_2_ACE9F07052632BA1_Class_1_0F0396EC66F54CB8 : public ::System::Object
{
public:
	::System::String* Field_1_5; // 0x10
	::Class_2_ACE9F07052632BA1* Field_1_0; // 0x18
	::System::String* Field_1_2; // 0x20
	::MoleMole::Battle::Entity* Field_1_4; // 0x28
	::System::Action_1<::Class_1_D65512A83CF70AB7*>* Field_1_3; // 0x30
	::System::Int32 Field_1_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_CLASS_1_0F0396EC66F54CB8__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_CLASS_1_0F0396EC66F54CB8_METHOD_1_F0E307B84478A272_OFFSET))(this);
	}
};
