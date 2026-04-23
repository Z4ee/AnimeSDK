#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ArrayPoolWrapper_1.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_2_24193089A4D2255F;
class Class_3_39615F7C3ED4FB8D;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F8076BD2264D3658_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF2CE6F0)
#define CLASS_3_F8076BD2264D3658_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF2CE730)
#define CLASS_3_F8076BD2264D3658__CTOR_OFFSET UNITYSDK_OFFSET(0xF2CE6C0)
#define CLASS_3_F8076BD2264D3658___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF2CEC00)

inline static constexpr unsigned int Class_3_F8076BD2264D3658_TypeDefinitionIndex = 49682;

class Class_3_F8076BD2264D3658 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_39615F7C3ED4FB8D*>
{
public:
	::RPG::GameCore::ArrayPoolWrapper_1<::Class_2_24193089A4D2255F*> Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_39615F7C3ED4FB8D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_39615F7C3ED4FB8D*))((::PBYTE)hIl2Cpp + CLASS_3_F8076BD2264D3658__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F8076BD2264D3658_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F8076BD2264D3658_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F8076BD2264D3658___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
