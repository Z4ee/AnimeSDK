#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PhotoGraphShowIdentifyResult; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B23F84BF53F3C716_METHOD_3_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0x8E21ED0)
#define CLASS_3_B23F84BF53F3C716_METHOD_3_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x8E22200)
#define CLASS_3_B23F84BF53F3C716_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8E21E50)
#define CLASS_3_B23F84BF53F3C716__CTOR_OFFSET UNITYSDK_OFFSET(0x8E21E20)

inline static constexpr unsigned int Class_3_B23F84BF53F3C716_TypeDefinitionIndex = 42964;

class Class_3_B23F84BF53F3C716 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PhotoGraphShowIdentifyResult*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PhotoGraphShowIdentifyResult* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PhotoGraphShowIdentifyResult*))((::PBYTE)hIl2Cpp + CLASS_3_B23F84BF53F3C716__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B23F84BF53F3C716_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_10054BB010E03EDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B23F84BF53F3C716_METHOD_3_10054BB010E03EDD_OFFSET))(this);
	}

	::System::Void Method_3_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B23F84BF53F3C716_METHOD_3_E7EF6BC52B28648C_OFFSET))(this);
	}
};
