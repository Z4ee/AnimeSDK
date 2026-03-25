#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_131.h"
#include "unitysdk/RPG/Client/PamChatQuickFunctionType.h"

namespace RPG::Client { class PamChatRelicExplainData; }
namespace RPG::Client { class PamChatTeamExplainData; }
namespace System { class String; }

#define CLASS_2_9282C6D0EF75B690_METHOD_2_05222139E3148F79_OFFSET UNITYSDK_OFFSET(0xB8D2320)
#define CLASS_2_9282C6D0EF75B690_METHOD_2_1014B103699F4843_OFFSET UNITYSDK_OFFSET(0xB8D24C0)
#define CLASS_2_9282C6D0EF75B690_METHOD_2_218BC7450B9D3A55_OFFSET UNITYSDK_OFFSET(0xB8D23D0)
#define CLASS_2_9282C6D0EF75B690_METHOD_2_4A0D719D9B6F0E01_OFFSET UNITYSDK_OFFSET(0xB8D2600)
#define CLASS_2_9282C6D0EF75B690_METHOD_2_5EDF3A8A854471A7_OFFSET UNITYSDK_OFFSET(0xB8D28A0)
#define CLASS_2_9282C6D0EF75B690_METHOD_2_B22AC62BCA1F71BE_OFFSET UNITYSDK_OFFSET(0xB8D2560)
#define CLASS_2_9282C6D0EF75B690_METHOD_2_BB881F05E41D3A04_OFFSET UNITYSDK_OFFSET(0xB8D27C0)
#define CLASS_2_9282C6D0EF75B690_METHOD_2_FFDDD9CC0D2E78CB_1_OFFSET UNITYSDK_OFFSET(0xB8D2730)
#define CLASS_2_9282C6D0EF75B690_METHOD_2_FFDDD9CC0D2E78CB_OFFSET UNITYSDK_OFFSET(0xB8D26A0)
#define CLASS_2_9282C6D0EF75B690__CTOR_OFFSET UNITYSDK_OFFSET(0xB8D2940)

inline static constexpr unsigned int Class_2_9282C6D0EF75B690_TypeDefinitionIndex = 51362;

class Class_2_9282C6D0EF75B690 : public ::Class_1_43BD383C98B4C0C5_131
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9282C6D0EF75B690__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_05222139E3148F79(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_9282C6D0EF75B690_METHOD_2_05222139E3148F79_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_218BC7450B9D3A55(::RPG::Client::PamChatQuickFunctionType a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PamChatQuickFunctionType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_9282C6D0EF75B690_METHOD_2_218BC7450B9D3A55_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1014B103699F4843(::RPG::Client::PamChatRelicExplainData* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PamChatRelicExplainData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_9282C6D0EF75B690_METHOD_2_1014B103699F4843_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B22AC62BCA1F71BE(::RPG::Client::PamChatTeamExplainData* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PamChatTeamExplainData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_9282C6D0EF75B690_METHOD_2_B22AC62BCA1F71BE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4A0D719D9B6F0E01(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_9282C6D0EF75B690_METHOD_2_4A0D719D9B6F0E01_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_FFDDD9CC0D2E78CB(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_9282C6D0EF75B690_METHOD_2_FFDDD9CC0D2E78CB_OFFSET))(this, a1);
	}

	::System::Void Method_2_FFDDD9CC0D2E78CB_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_9282C6D0EF75B690_METHOD_2_FFDDD9CC0D2E78CB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_BB881F05E41D3A04()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9282C6D0EF75B690_METHOD_2_BB881F05E41D3A04_OFFSET))(this);
	}

	::System::Void Method_2_5EDF3A8A854471A7(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_9282C6D0EF75B690_METHOD_2_5EDF3A8A854471A7_OFFSET))(this, a1, a2);
	}
};
