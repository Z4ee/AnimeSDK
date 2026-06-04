#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_2_5436AF4270279182;
class Class_3_FCEBD307CFDA0CA4;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_FE3BC0A9B1372E7D_8_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA856AA0)
#define CLASS_3_FE3BC0A9B1372E7D_8_METHOD_3_B76CE55DBBE70D07_OFFSET UNITYSDK_OFFSET(0xA8565D0)
#define CLASS_3_FE3BC0A9B1372E7D_8_METHOD_3_DE2F25FD84F7D432_OFFSET UNITYSDK_OFFSET(0xA856830)
#define CLASS_3_FE3BC0A9B1372E7D_8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA856340)
#define CLASS_3_FE3BC0A9B1372E7D_8__CTOR_OFFSET UNITYSDK_OFFSET(0xA8562C0)
#define CLASS_3_FE3BC0A9B1372E7D_8___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA856AF0)

inline static constexpr unsigned int Class_3_FE3BC0A9B1372E7D_8_TypeDefinitionIndex = 49270;

class Class_3_FE3BC0A9B1372E7D_8 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_FCEBD307CFDA0CA4*>
{
public:
	::Class_2_5436AF4270279182* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_FCEBD307CFDA0CA4* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_FCEBD307CFDA0CA4*))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_8_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean Method_3_DE2F25FD84F7D432(::Class_2_5436AF4270279182* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_5436AF4270279182*))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_8_METHOD_3_DE2F25FD84F7D432_OFFSET))(this, a1);
	}

	::System::Void Method_3_B76CE55DBBE70D07(::Class_2_5436AF4270279182* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_5436AF4270279182*))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_8_METHOD_3_B76CE55DBBE70D07_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_8_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_8___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
