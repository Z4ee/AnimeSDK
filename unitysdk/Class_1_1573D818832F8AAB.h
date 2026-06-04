#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/RPG/Client/VoiceType.h"
#include "unitysdk/System/Object.h"

class AkCallbackInfo;
class Class_1_1573D818832F8AAB_Class_1_8F7D13CFDBFE37BA;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class TeamData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1573D818832F8AAB_METHOD_1_06A2B758FCB8A24E_OFFSET UNITYSDK_OFFSET(0xA5A1970)
#define CLASS_1_1573D818832F8AAB_METHOD_1_08A464DF8B3642D3_OFFSET UNITYSDK_OFFSET(0xA5A1520)
#define CLASS_1_1573D818832F8AAB_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xA5A15B0)
#define CLASS_1_1573D818832F8AAB_METHOD_1_2C8484BE9A26CCD5_OFFSET UNITYSDK_OFFSET(0xA5A05E0)
#define CLASS_1_1573D818832F8AAB_METHOD_1_5FBAD89A54D9F070_OFFSET UNITYSDK_OFFSET(0xA5A0520)
#define CLASS_1_1573D818832F8AAB_METHOD_1_7F0C8094100A93C6_OFFSET UNITYSDK_OFFSET(0xA5A16D0)
#define CLASS_1_1573D818832F8AAB_METHOD_1_C2A42F57E0D73EF6_OFFSET UNITYSDK_OFFSET(0xA5A06A0)
#define CLASS_1_1573D818832F8AAB_METHOD_1_DB555289F5744277_OFFSET UNITYSDK_OFFSET(0xA5A1900)
#define CLASS_1_1573D818832F8AAB_METHOD_1_FE275294F69C24FC_OFFSET UNITYSDK_OFFSET(0xA5A12D0)
#define CLASS_1_1573D818832F8AAB__CTOR_OFFSET UNITYSDK_OFFSET(0xA5A04D0)

inline static constexpr unsigned int Class_1_1573D818832F8AAB_TypeDefinitionIndex = 63730;

class Class_1_1573D818832F8AAB : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_1573D818832F8AAB_Class_1_8F7D13CFDBFE37BA*>* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1573D818832F8AAB__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5FBAD89A54D9F070()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1573D818832F8AAB_METHOD_1_5FBAD89A54D9F070_OFFSET))(this);
	}

	::System::Void Method_1_2C8484BE9A26CCD5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1573D818832F8AAB_METHOD_1_2C8484BE9A26CCD5_OFFSET))(this);
	}

	::System::Void Method_1_C2A42F57E0D73EF6(::RPG::AvatarSystem::IAvatar* a1, ::RPG::Client::TeamData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::Client::TeamData*))((::PBYTE)hIl2Cpp + CLASS_1_1573D818832F8AAB_METHOD_1_C2A42F57E0D73EF6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1573D818832F8AAB_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_1_7F0C8094100A93C6(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1573D818832F8AAB_METHOD_1_7F0C8094100A93C6_OFFSET))(this, a1);
	}

	::System::Void Method_1_DB555289F5744277(::System::UInt32 a1, ::AkCallbackType a2, ::AkCallbackInfo* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + CLASS_1_1573D818832F8AAB_METHOD_1_DB555289F5744277_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_08A464DF8B3642D3(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::VoiceType a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::VoiceType))((::PBYTE)hIl2Cpp + CLASS_1_1573D818832F8AAB_METHOD_1_08A464DF8B3642D3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_FE275294F69C24FC(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1573D818832F8AAB_METHOD_1_FE275294F69C24FC_OFFSET))(this, a1);
	}

	::System::Void Method_1_06A2B758FCB8A24E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1573D818832F8AAB_METHOD_1_06A2B758FCB8A24E_OFFSET))(this);
	}
};
