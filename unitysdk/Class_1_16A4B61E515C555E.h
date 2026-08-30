#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/RPG/Client/VoiceType.h"
#include "unitysdk/System/Object.h"

class AkCallbackInfo;
class Class_1_16A4B61E515C555E_Class_1_8F7D13CFDBFE37BA;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class TeamData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_16A4B61E515C555E_METHOD_1_067B87DE467587B8_OFFSET UNITYSDK_OFFSET(0x17E5ADF0)
#define CLASS_1_16A4B61E515C555E_METHOD_1_06A2B758FCB8A24E_OFFSET UNITYSDK_OFFSET(0x17E5B360)
#define CLASS_1_16A4B61E515C555E_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x17E5AEA0)
#define CLASS_1_16A4B61E515C555E_METHOD_1_5FBAD89A54D9F070_OFFSET UNITYSDK_OFFSET(0x17E59DF0)
#define CLASS_1_16A4B61E515C555E_METHOD_1_96A39C28104D76E1_OFFSET UNITYSDK_OFFSET(0x17E5AFC0)
#define CLASS_1_16A4B61E515C555E_METHOD_1_C2A42F57E0D73EF6_OFFSET UNITYSDK_OFFSET(0x17E59F70)
#define CLASS_1_16A4B61E515C555E_METHOD_1_DB555289F5744277_OFFSET UNITYSDK_OFFSET(0x17E5B2F0)
#define CLASS_1_16A4B61E515C555E_METHOD_1_F944CC0CE8B3E57A_OFFSET UNITYSDK_OFFSET(0x17E59EB0)
#define CLASS_1_16A4B61E515C555E_METHOD_1_FE275294F69C24FC_OFFSET UNITYSDK_OFFSET(0x17E5AB90)
#define CLASS_1_16A4B61E515C555E__CTOR_OFFSET UNITYSDK_OFFSET(0x17E59DA0)

inline static constexpr unsigned int Class_1_16A4B61E515C555E_TypeDefinitionIndex = 68107;

class Class_1_16A4B61E515C555E : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_16A4B61E515C555E_Class_1_8F7D13CFDBFE37BA*>* NNLADECPCEB; // 0x10
	::System::UInt32 KKBPMCFACNO; // 0x18
	::System::Boolean OHLPOMNGEPP; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16A4B61E515C555E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5FBAD89A54D9F070()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16A4B61E515C555E_METHOD_1_5FBAD89A54D9F070_OFFSET))(this);
	}

	::System::Void Method_1_F944CC0CE8B3E57A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16A4B61E515C555E_METHOD_1_F944CC0CE8B3E57A_OFFSET))(this);
	}

	::System::Void Method_1_C2A42F57E0D73EF6(::RPG::AvatarSystem::IAvatar* a1, ::RPG::Client::TeamData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::Client::TeamData*))((::PBYTE)hIl2Cpp + CLASS_1_16A4B61E515C555E_METHOD_1_C2A42F57E0D73EF6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16A4B61E515C555E_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_1_96A39C28104D76E1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_16A4B61E515C555E_METHOD_1_96A39C28104D76E1_OFFSET))(this, a1);
	}

	::System::Void Method_1_DB555289F5744277(::System::UInt32 a1, ::AkCallbackType a2, ::AkCallbackInfo* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + CLASS_1_16A4B61E515C555E_METHOD_1_DB555289F5744277_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_067B87DE467587B8(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::VoiceType a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::VoiceType))((::PBYTE)hIl2Cpp + CLASS_1_16A4B61E515C555E_METHOD_1_067B87DE467587B8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_FE275294F69C24FC(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_16A4B61E515C555E_METHOD_1_FE275294F69C24FC_OFFSET))(this, a1);
	}

	::System::Void Method_1_06A2B758FCB8A24E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16A4B61E515C555E_METHOD_1_06A2B758FCB8A24E_OFFSET))(this);
	}
};
