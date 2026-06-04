#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_2_5436AF4270279182;
class Class_3_C8EB502E39B055D1;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_FE3BC0A9B1372E7D_11_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA0B630)
#define CLASS_3_FE3BC0A9B1372E7D_11_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA0B1D0)
#define CLASS_3_FE3BC0A9B1372E7D_11_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBA0B5E0)
#define CLASS_3_FE3BC0A9B1372E7D_11__CTOR_OFFSET UNITYSDK_OFFSET(0xBA0B150)
#define CLASS_3_FE3BC0A9B1372E7D_11___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA0B6C0)
#define CLASS_3_FE3BC0A9B1372E7D_11___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBA0B670)

inline static constexpr unsigned int Class_3_FE3BC0A9B1372E7D_11_TypeDefinitionIndex = 49275;

class Class_3_FE3BC0A9B1372E7D_11 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_C8EB502E39B055D1*>
{
public:
	::Class_2_5436AF4270279182* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_C8EB502E39B055D1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_C8EB502E39B055D1*))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_11__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_11_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_11_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_11_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_11___IFIXBASEPROXY_ONTASKRESET_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_11___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
