#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E84ADFE850BEF056.h"

namespace RPG::GameCore { class NewFireMultiProjectiles; }
namespace RPG::GameCore { class NewProjectileConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_0259ADDACF35069F_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAF3F090)
#define CLASS_3_0259ADDACF35069F_METHOD_3_821BBDC04720A2EB_OFFSET UNITYSDK_OFFSET(0xAF3EAC0)
#define CLASS_3_0259ADDACF35069F_METHOD_3_B43C848B078B3C34_OFFSET UNITYSDK_OFFSET(0xAF3F130)
#define CLASS_3_0259ADDACF35069F_METHOD_3_BC53D0C0E999F7DD_OFFSET UNITYSDK_OFFSET(0xAF3F120)
#define CLASS_3_0259ADDACF35069F_METHOD_3_BF9BB9E2BBF3B6F4_OFFSET UNITYSDK_OFFSET(0xAF3E7E0)
#define CLASS_3_0259ADDACF35069F_METHOD_3_E876C8B6D3B840A6_OFFSET UNITYSDK_OFFSET(0xAF3F140)
#define CLASS_3_0259ADDACF35069F_METHOD_3_F63FE1AA9633F811_OFFSET UNITYSDK_OFFSET(0xAF3EDD0)
#define CLASS_3_0259ADDACF35069F__CTOR_OFFSET UNITYSDK_OFFSET(0xAF3E7D0)
#define CLASS_3_0259ADDACF35069F___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAF3F150)

inline static constexpr unsigned int Class_3_0259ADDACF35069F_TypeDefinitionIndex = 51590;

class Class_3_0259ADDACF35069F : public ::Class_2_E84ADFE850BEF056
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::NewProjectileConfig*>* Field_3_0; // 0x68

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::NewFireMultiProjectiles* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::NewFireMultiProjectiles*))((::PBYTE)hIl2Cpp + CLASS_3_0259ADDACF35069F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_BF9BB9E2BBF3B6F4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0259ADDACF35069F_METHOD_3_BF9BB9E2BBF3B6F4_OFFSET))(this);
	}

	::System::Void Method_3_821BBDC04720A2EB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0259ADDACF35069F_METHOD_3_821BBDC04720A2EB_OFFSET))(this);
	}

	::System::Void Method_3_F63FE1AA9633F811()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0259ADDACF35069F_METHOD_3_F63FE1AA9633F811_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0259ADDACF35069F_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_3_BC53D0C0E999F7DD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0259ADDACF35069F_METHOD_3_BC53D0C0E999F7DD_OFFSET))(this);
	}

	::System::Void Method_3_B43C848B078B3C34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0259ADDACF35069F_METHOD_3_B43C848B078B3C34_OFFSET))(this);
	}

	::System::Void Method_3_E876C8B6D3B840A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0259ADDACF35069F_METHOD_3_E876C8B6D3B840A6_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0259ADDACF35069F___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
