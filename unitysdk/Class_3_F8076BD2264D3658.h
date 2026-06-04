#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ArrayPoolWrapper_1.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_2_24193089A4D2255F;
class Class_3_39615F7C3ED4FB8D;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F8076BD2264D3658_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13B37D10)
#define CLASS_3_F8076BD2264D3658_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13B37D50)
#define CLASS_3_F8076BD2264D3658__CTOR_OFFSET UNITYSDK_OFFSET(0x13B37CE0)
#define CLASS_3_F8076BD2264D3658___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13B38230)

inline static constexpr unsigned int Class_3_F8076BD2264D3658_TypeDefinitionIndex = 50349;

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
