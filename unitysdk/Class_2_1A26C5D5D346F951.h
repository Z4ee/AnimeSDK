#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8303B8E58A593199.h"

class Class_1_DED4BA2FC834659B;
namespace RPG::GameCore { class EntityManager; }
namespace RPG::GameCore { class HipplenIncidentLevelGraphStepConfig; }
namespace RPG::GameCore { class LevelGraphComponent; }
namespace System { class String; }

#define CLASS_2_1A26C5D5D346F951_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1A85AA00)
#define CLASS_2_1A26C5D5D346F951_METHOD_2_31910FB02E3010D4_OFFSET UNITYSDK_OFFSET(0x1A85A6D0)
#define CLASS_2_1A26C5D5D346F951_METHOD_2_5BCE9210F4ACDD0B_OFFSET UNITYSDK_OFFSET(0x1A85A670)
#define CLASS_2_1A26C5D5D346F951_METHOD_2_BF961C009AF7A1E2_OFFSET UNITYSDK_OFFSET(0x1A85A5B0)
#define CLASS_2_1A26C5D5D346F951_METHOD_2_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x1A85A980)
#define CLASS_2_1A26C5D5D346F951_METHOD_2_F0D9B6AAFF504D87_OFFSET UNITYSDK_OFFSET(0x1A85AAA0)
#define CLASS_2_1A26C5D5D346F951_METHOD_2_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x1A85AA60)
#define CLASS_2_1A26C5D5D346F951__CTOR_OFFSET UNITYSDK_OFFSET(0x1A85A650)

inline static constexpr unsigned int Class_2_1A26C5D5D346F951_TypeDefinitionIndex = 75246;

class Class_2_1A26C5D5D346F951 : public ::Class_1_8303B8E58A593199
{
public:
	::RPG::GameCore::EntityManager* LPILDKDAGDP; // 0x30
	::RPG::GameCore::LevelGraphComponent* LJCPCPJJEIB; // 0x38
	::RPG::GameCore::HipplenIncidentLevelGraphStepConfig* IGHAHBNLIJA; // 0x40

	::System::Void _ctor(::RPG::GameCore::HipplenIncidentLevelGraphStepConfig* a1, ::Class_1_DED4BA2FC834659B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HipplenIncidentLevelGraphStepConfig*, ::Class_1_DED4BA2FC834659B*))((::PBYTE)hIl2Cpp + CLASS_2_1A26C5D5D346F951__CTOR_OFFSET))(this, a1, a2);
	}

	static ::Class_2_1A26C5D5D346F951* Method_2_BF961C009AF7A1E2(::RPG::GameCore::HipplenIncidentLevelGraphStepConfig* a1, ::Class_1_DED4BA2FC834659B* a2)
	{
		return ((::Class_2_1A26C5D5D346F951*(*)(::RPG::GameCore::HipplenIncidentLevelGraphStepConfig*, ::Class_1_DED4BA2FC834659B*))((::PBYTE)hIl2Cpp + CLASS_2_1A26C5D5D346F951_METHOD_2_BF961C009AF7A1E2_OFFSET))(a1, a2);
	}

	::System::Void Method_2_5BCE9210F4ACDD0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A26C5D5D346F951_METHOD_2_5BCE9210F4ACDD0B_OFFSET))(this);
	}

	::System::Void Method_2_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A26C5D5D346F951_METHOD_2_D3129FE8DF635B48_OFFSET))(this);
	}

	::Class_1_8303B8E58A593199* Method_2_F8B73ECE7F883AC1()
	{
		return ((::Class_1_8303B8E58A593199*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A26C5D5D346F951_METHOD_2_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::System::Boolean Method_2_31910FB02E3010D4(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_1A26C5D5D346F951_METHOD_2_31910FB02E3010D4_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A26C5D5D346F951_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_2_F0D9B6AAFF504D87()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A26C5D5D346F951_METHOD_2_F0D9B6AAFF504D87_OFFSET))(this);
	}
};
