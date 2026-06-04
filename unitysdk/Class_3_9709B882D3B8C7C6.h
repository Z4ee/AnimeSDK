#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueByRandom; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9709B882D3B8C7C6_METHOD_3_3ABECAF2523BBBAF_OFFSET UNITYSDK_OFFSET(0xA79AE20)
#define CLASS_3_9709B882D3B8C7C6_METHOD_3_64F76641A31F82C6_OFFSET UNITYSDK_OFFSET(0xA79B540)
#define CLASS_3_9709B882D3B8C7C6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA79AD10)
#define CLASS_3_9709B882D3B8C7C6__CTOR_OFFSET UNITYSDK_OFFSET(0xA79AC30)

inline static constexpr unsigned int Class_3_9709B882D3B8C7C6_TypeDefinitionIndex = 51801;

class Class_3_9709B882D3B8C7C6 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueByRandom*>
{
public:
	::RPG::GameCore::StringHash Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByRandom* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByRandom*))((::PBYTE)hIl2Cpp + CLASS_3_9709B882D3B8C7C6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9709B882D3B8C7C6_ONTASKBEGIN_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_3_64F76641A31F82C6()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9709B882D3B8C7C6_METHOD_3_64F76641A31F82C6_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_3_3ABECAF2523BBBAF()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9709B882D3B8C7C6_METHOD_3_3ABECAF2523BBBAF_OFFSET))(this);
	}
};
