#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityHipplen/ActivityHipplenIncidentStepState.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1153;
class Class_1_DED4BA2FC834659B;
namespace System { class Action; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_81F809EAA518CA97_GET_CONTROLLER_OFFSET UNITYSDK_OFFSET(0x1428C190)
#define CLASS_1_81F809EAA518CA97_METHOD_1_5F3AE37087DCC4E1_OFFSET UNITYSDK_OFFSET(0x1428C3A0)
#define CLASS_1_81F809EAA518CA97_METHOD_1_7318A452EAFD335A_OFFSET UNITYSDK_OFFSET(0x1428C1A0)
#define CLASS_1_81F809EAA518CA97_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x1428C500)
#define CLASS_1_81F809EAA518CA97_METHOD_1_C53E4338A57E6194_OFFSET UNITYSDK_OFFSET(0x1428C2D0)
#define CLASS_1_81F809EAA518CA97_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1428C650)
#define CLASS_1_81F809EAA518CA97_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1428C610)
#define CLASS_1_81F809EAA518CA97_METHOD_1_E5973211D3458FCF_OFFSET UNITYSDK_OFFSET(0x1428C1B0)
#define CLASS_1_81F809EAA518CA97_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x1428C5D0)
#define CLASS_1_81F809EAA518CA97__CTOR_OFFSET UNITYSDK_OFFSET(0x1428C220)

inline static constexpr unsigned int Class_1_81F809EAA518CA97_TypeDefinitionIndex = 70423;

class Class_1_81F809EAA518CA97 : public ::System::Object
{
public:
	::Class_1_DED4BA2FC834659B* _Controller_k__BackingField; // 0x10
	::System::Action* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Action_1<::Class_0_16E4307DCC419505_1153*>*>* Field_1_2; // 0x20
	::RPG::Client::ActivityHipplen::ActivityHipplenIncidentStepState Field_1_3; // 0x28

	::System::Void _ctor(::Class_1_DED4BA2FC834659B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DED4BA2FC834659B*))((::PBYTE)hIl2Cpp + CLASS_1_81F809EAA518CA97__CTOR_OFFSET))(this, a1);
	}

	::Class_1_DED4BA2FC834659B* get_Controller()
	{
		return ((::Class_1_DED4BA2FC834659B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81F809EAA518CA97_GET_CONTROLLER_OFFSET))(this);
	}

	::RPG::Client::ActivityHipplen::ActivityHipplenIncidentStepState Method_1_7318A452EAFD335A()
	{
		return ((::RPG::Client::ActivityHipplen::ActivityHipplenIncidentStepState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81F809EAA518CA97_METHOD_1_7318A452EAFD335A_OFFSET))(this);
	}

	::System::Void Method_1_E5973211D3458FCF(::RPG::Client::ActivityHipplen::ActivityHipplenIncidentStepState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenIncidentStepState))((::PBYTE)hIl2Cpp + CLASS_1_81F809EAA518CA97_METHOD_1_E5973211D3458FCF_OFFSET))(this, a1);
	}

	::System::Void Method_1_C53E4338A57E6194(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_81F809EAA518CA97_METHOD_1_C53E4338A57E6194_OFFSET))(this, a1);
	}

	::System::Void Method_1_5F3AE37087DCC4E1(::Class_0_16E4307DCC419505_1153* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1153*))((::PBYTE)hIl2Cpp + CLASS_1_81F809EAA518CA97_METHOD_1_5F3AE37087DCC4E1_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81F809EAA518CA97_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::Class_1_81F809EAA518CA97* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_81F809EAA518CA97*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81F809EAA518CA97_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81F809EAA518CA97_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81F809EAA518CA97_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}
};
