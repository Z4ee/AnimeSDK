#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3CB0C58942F93508_Class_1_6BE7FCD5B1FC3308;
class Class_3_107D88E49CCA98ED;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_3CB0C58942F93508_DISPOSE_OFFSET UNITYSDK_OFFSET(0x171128B0)
#define CLASS_1_3CB0C58942F93508_METHOD_1_35D2E84278E299F3_OFFSET UNITYSDK_OFFSET(0x17112FF0)
#define CLASS_1_3CB0C58942F93508_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x17113170)
#define CLASS_1_3CB0C58942F93508_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17113130)
#define CLASS_1_3CB0C58942F93508_METHOD_1_E92CE2113FD5BE0B_OFFSET UNITYSDK_OFFSET(0x17112AE0)
#define CLASS_1_3CB0C58942F93508_METHOD_1_FCFC6D239F675EAB_OFFSET UNITYSDK_OFFSET(0x17112E00)
#define CLASS_1_3CB0C58942F93508__CTOR_OFFSET UNITYSDK_OFFSET(0x17112820)

inline static constexpr unsigned int Class_1_3CB0C58942F93508_TypeDefinitionIndex = 60336;

class Class_1_3CB0C58942F93508 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_3CB0C58942F93508_Class_1_6BE7FCD5B1FC3308*>* BMFEMCEAFBP; // 0x10
	::System::Boolean CNNEAPBBDIP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CB0C58942F93508__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CB0C58942F93508_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_E92CE2113FD5BE0B(::System::UInt32 a1, ::RPG::GameCore::GameEntity* a2, ::Class_3_107D88E49CCA98ED* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::GameEntity*, ::Class_3_107D88E49CCA98ED*))((::PBYTE)hIl2Cpp + CLASS_1_3CB0C58942F93508_METHOD_1_E92CE2113FD5BE0B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_FCFC6D239F675EAB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CB0C58942F93508_METHOD_1_FCFC6D239F675EAB_OFFSET))(this);
	}

	::System::Void Method_1_35D2E84278E299F3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3CB0C58942F93508_METHOD_1_35D2E84278E299F3_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CB0C58942F93508_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CB0C58942F93508_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}
};
