#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AudienceGroupInstance_Class_1_9A90CD018E72DF20_14.h"

namespace RPG::Client { class AudienceLayoutConfig; }
namespace RPG::GameCore { class LevelCurveInstance; }

#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_CLASS_2_BF64CE6D23787515_METHOD_2_2AD1F749AB39833A_OFFSET UNITYSDK_OFFSET(0xC793220)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_CLASS_2_BF64CE6D23787515__CTOR_OFFSET UNITYSDK_OFFSET(0xC793200)

namespace RPG::Client
{
	inline static constexpr unsigned int AudienceGroupInstance_Class_2_BF64CE6D23787515_TypeDefinitionIndex = 69109;

	class AudienceGroupInstance_Class_2_BF64CE6D23787515 : public ::RPG::Client::AudienceGroupInstance_Class_1_9A90CD018E72DF20_14
	{
	public:
		::RPG::Client::AudienceLayoutConfig* EABKOHGCHFP; // 0x10
		::System::Single BJPFKNECHPL; // 0x18
		::System::Single NPAFMEBNFOB; // 0x1C
		::System::Single NKPKPNKBBAP; // 0x20

		::System::Void _ctor(::RPG::Client::AudienceLayoutConfig* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AudienceLayoutConfig*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_CLASS_2_BF64CE6D23787515__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_2_2AD1F749AB39833A(::RPG::GameCore::LevelCurveInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCurveInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_CLASS_2_BF64CE6D23787515_METHOD_2_2AD1F749AB39833A_OFFSET))(this, a1);
		}
	};
}
