#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_2_5436AF4270279182;
class Class_3_3D5E1B76CAB976F5_3;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_FE3BC0A9B1372E7D_4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14147E70)
#define CLASS_3_FE3BC0A9B1372E7D_4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14147910)
#define CLASS_3_FE3BC0A9B1372E7D_4__CTOR_OFFSET UNITYSDK_OFFSET(0x14147890)
#define CLASS_3_FE3BC0A9B1372E7D_4___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14147EC0)

inline static constexpr unsigned int Class_3_FE3BC0A9B1372E7D_4_TypeDefinitionIndex = 49259;

class Class_3_FE3BC0A9B1372E7D_4 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_3D5E1B76CAB976F5_3*>
{
public:
	::Class_2_5436AF4270279182* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_3D5E1B76CAB976F5_3* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_3D5E1B76CAB976F5_3*))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_4_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_4_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_4___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
