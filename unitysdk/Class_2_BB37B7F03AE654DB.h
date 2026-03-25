#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class Class_0_16E4307DCC419505_447;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_BB37B7F03AE654DB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1145AD90)
#define CLASS_2_BB37B7F03AE654DB_METHOD_2_2A883DD032F22BF2_OFFSET UNITYSDK_OFFSET(0x1145B190)
#define CLASS_2_BB37B7F03AE654DB_METHOD_2_2F0F99A12DB93F30_OFFSET UNITYSDK_OFFSET(0x1145ADE0)
#define CLASS_2_BB37B7F03AE654DB_METHOD_2_9DB2C80C0CD4760B_OFFSET UNITYSDK_OFFSET(0x1145AD20)
#define CLASS_2_BB37B7F03AE654DB_TICK_OFFSET UNITYSDK_OFFSET(0x1145AFC0)
#define CLASS_2_BB37B7F03AE654DB__CTOR_OFFSET UNITYSDK_OFFSET(0x1145B200)
#define CLASS_2_BB37B7F03AE654DB___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x1145B210)

inline static constexpr unsigned int Class_2_BB37B7F03AE654DB_TypeDefinitionIndex = 46087;

class Class_2_BB37B7F03AE654DB : public ::RPG::GameCore::GameComponentBase
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_447*>* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BB37B7F03AE654DB__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9DB2C80C0CD4760B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BB37B7F03AE654DB_METHOD_2_9DB2C80C0CD4760B_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BB37B7F03AE654DB_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BB37B7F03AE654DB_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_2A883DD032F22BF2(::Class_0_16E4307DCC419505_447* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_447*))((::PBYTE)hIl2Cpp + CLASS_2_BB37B7F03AE654DB_METHOD_2_2A883DD032F22BF2_OFFSET))(this, a1);
	}

	::System::Void Method_2_2F0F99A12DB93F30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BB37B7F03AE654DB_METHOD_2_2F0F99A12DB93F30_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BB37B7F03AE654DB___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
