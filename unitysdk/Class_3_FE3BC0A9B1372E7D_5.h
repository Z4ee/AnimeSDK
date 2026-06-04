#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_2_5436AF4270279182;
class Class_3_ED9DAF7806ABA6FC;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_FE3BC0A9B1372E7D_5_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA831E60)
#define CLASS_3_FE3BC0A9B1372E7D_5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA8319D0)
#define CLASS_3_FE3BC0A9B1372E7D_5__CTOR_OFFSET UNITYSDK_OFFSET(0xA831950)
#define CLASS_3_FE3BC0A9B1372E7D_5___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA831EB0)

inline static constexpr unsigned int Class_3_FE3BC0A9B1372E7D_5_TypeDefinitionIndex = 49261;

class Class_3_FE3BC0A9B1372E7D_5 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_ED9DAF7806ABA6FC*>
{
public:
	::Class_2_5436AF4270279182* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_ED9DAF7806ABA6FC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_ED9DAF7806ABA6FC*))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_5_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_5_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_5___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
