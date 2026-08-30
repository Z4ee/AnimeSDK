#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityHipplen/ActivityHipplenIncidentStepState.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1259;
class Class_1_DED4BA2FC834659B;
namespace System { class Action; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_8303B8E58A593199_GET_CONTROLLER_OFFSET UNITYSDK_OFFSET(0x15953B80)
#define CLASS_1_8303B8E58A593199_METHOD_1_394C43DAA425E94B_OFFSET UNITYSDK_OFFSET(0x15953CF0)
#define CLASS_1_8303B8E58A593199_METHOD_1_3C846407474D7238_OFFSET UNITYSDK_OFFSET(0x15953E90)
#define CLASS_1_8303B8E58A593199_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x15954020)
#define CLASS_1_8303B8E58A593199_METHOD_1_C356023981252F1E_OFFSET UNITYSDK_OFFSET(0x15953B90)
#define CLASS_1_8303B8E58A593199_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x15954270)
#define CLASS_1_8303B8E58A593199_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15954230)
#define CLASS_1_8303B8E58A593199_METHOD_1_E5973211D3458FCF_OFFSET UNITYSDK_OFFSET(0x15953BD0)
#define CLASS_1_8303B8E58A593199_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x159541F0)
#define CLASS_1_8303B8E58A593199__CTOR_OFFSET UNITYSDK_OFFSET(0x15953C40)

inline static constexpr unsigned int Class_1_8303B8E58A593199_TypeDefinitionIndex = 75252;

class Class_1_8303B8E58A593199 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Action_1<::Class_0_16E4307DCC419505_1259*>*>* EFBHGNCEAEE; // 0x10
	::Class_1_DED4BA2FC834659B* _Controller_k__BackingField; // 0x18
	::System::Action* BBAONIHHGGL; // 0x20
	::RPG::Client::ActivityHipplen::ActivityHipplenIncidentStepState DLNIGFGLPLJ; // 0x28

	::System::Void _ctor(::Class_1_DED4BA2FC834659B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DED4BA2FC834659B*))((::PBYTE)hIl2Cpp + CLASS_1_8303B8E58A593199__CTOR_OFFSET))(this, a1);
	}

	::Class_1_DED4BA2FC834659B* get_Controller()
	{
		return ((::Class_1_DED4BA2FC834659B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8303B8E58A593199_GET_CONTROLLER_OFFSET))(this);
	}

	::RPG::Client::ActivityHipplen::ActivityHipplenIncidentStepState Method_1_C356023981252F1E()
	{
		return ((::RPG::Client::ActivityHipplen::ActivityHipplenIncidentStepState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8303B8E58A593199_METHOD_1_C356023981252F1E_OFFSET))(this);
	}

	::System::Void Method_1_E5973211D3458FCF(::RPG::Client::ActivityHipplen::ActivityHipplenIncidentStepState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenIncidentStepState))((::PBYTE)hIl2Cpp + CLASS_1_8303B8E58A593199_METHOD_1_E5973211D3458FCF_OFFSET))(this, a1);
	}

	::System::Void Method_1_394C43DAA425E94B(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_8303B8E58A593199_METHOD_1_394C43DAA425E94B_OFFSET))(this, a1);
	}

	::System::Void Method_1_3C846407474D7238(::Class_0_16E4307DCC419505_1259* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1259*))((::PBYTE)hIl2Cpp + CLASS_1_8303B8E58A593199_METHOD_1_3C846407474D7238_OFFSET))(this, a1);
	}

	::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8303B8E58A593199_METHOD_1_41A074549EF25F63_OFFSET))(this);
	}

	::Class_1_8303B8E58A593199* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_8303B8E58A593199*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8303B8E58A593199_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8303B8E58A593199_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8303B8E58A593199_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}
};
