#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityHipplen/ActivityHipplenIncidentStepState.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1103;
class Class_1_DED4BA2FC834659B;
namespace System { class Action; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_D5FAA251D0AA82EB_GET_CONTROLLER_OFFSET UNITYSDK_OFFSET(0x9672670)
#define CLASS_1_D5FAA251D0AA82EB_METHOD_1_397043EF8DA4726F_OFFSET UNITYSDK_OFFSET(0x9672690)
#define CLASS_1_D5FAA251D0AA82EB_METHOD_1_7318A452EAFD335A_OFFSET UNITYSDK_OFFSET(0x9672680)
#define CLASS_1_D5FAA251D0AA82EB_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x96729E0)
#define CLASS_1_D5FAA251D0AA82EB_METHOD_1_C53E4338A57E6194_OFFSET UNITYSDK_OFFSET(0x96727B0)
#define CLASS_1_D5FAA251D0AA82EB_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x9672B30)
#define CLASS_1_D5FAA251D0AA82EB_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9672AF0)
#define CLASS_1_D5FAA251D0AA82EB_METHOD_1_CC03B00D7D862660_OFFSET UNITYSDK_OFFSET(0x9672880)
#define CLASS_1_D5FAA251D0AA82EB_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x9672AB0)
#define CLASS_1_D5FAA251D0AA82EB__CTOR_OFFSET UNITYSDK_OFFSET(0x9672700)

inline static constexpr unsigned int Class_1_D5FAA251D0AA82EB_TypeDefinitionIndex = 69611;

class Class_1_D5FAA251D0AA82EB : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Action_1<::Class_0_16E4307DCC419505_1103*>*>* Field_1_2; // 0x10
	::Class_1_DED4BA2FC834659B* _Controller_k__BackingField; // 0x18
	::System::Action* Field_1_1; // 0x20
	::RPG::Client::ActivityHipplen::ActivityHipplenIncidentStepState Field_1_0; // 0x28

	::System::Void _ctor(::Class_1_DED4BA2FC834659B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DED4BA2FC834659B*))((::PBYTE)hIl2Cpp + CLASS_1_D5FAA251D0AA82EB__CTOR_OFFSET))(this, a1);
	}

	::Class_1_DED4BA2FC834659B* get_Controller()
	{
		return ((::Class_1_DED4BA2FC834659B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5FAA251D0AA82EB_GET_CONTROLLER_OFFSET))(this);
	}

	::RPG::Client::ActivityHipplen::ActivityHipplenIncidentStepState Method_1_7318A452EAFD335A()
	{
		return ((::RPG::Client::ActivityHipplen::ActivityHipplenIncidentStepState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5FAA251D0AA82EB_METHOD_1_7318A452EAFD335A_OFFSET))(this);
	}

	::System::Void Method_1_397043EF8DA4726F(::RPG::Client::ActivityHipplen::ActivityHipplenIncidentStepState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenIncidentStepState))((::PBYTE)hIl2Cpp + CLASS_1_D5FAA251D0AA82EB_METHOD_1_397043EF8DA4726F_OFFSET))(this, a1);
	}

	::System::Void Method_1_C53E4338A57E6194(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_D5FAA251D0AA82EB_METHOD_1_C53E4338A57E6194_OFFSET))(this, a1);
	}

	::System::Void Method_1_CC03B00D7D862660(::Class_0_16E4307DCC419505_1103* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1103*))((::PBYTE)hIl2Cpp + CLASS_1_D5FAA251D0AA82EB_METHOD_1_CC03B00D7D862660_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5FAA251D0AA82EB_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::Class_1_D5FAA251D0AA82EB* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_D5FAA251D0AA82EB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5FAA251D0AA82EB_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5FAA251D0AA82EB_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5FAA251D0AA82EB_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}
};
