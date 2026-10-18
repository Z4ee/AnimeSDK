#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarCreateType.h"
#include "unitysdk/System/Object.h"

class Class_2_9D2DEA765AF5C2B0;
namespace RPG::GameCore { class AvatarDataComponent; }
namespace RPG::GameCore { class AvatarRowData; }
namespace RPG::GameCore { class IAvatarCommonRowWrap; }

#define CLASS_1_F4B1B74A0320FC41_GET_OWNER_OFFSET UNITYSDK_OFFSET(0xB13F9B0)
#define CLASS_1_F4B1B74A0320FC41_METHOD_1_23F6AE26773BF4D6_OFFSET UNITYSDK_OFFSET(0xB13F9C0)
#define CLASS_1_F4B1B74A0320FC41_METHOD_1_98511BB23D2E3748_OFFSET UNITYSDK_OFFSET(0xB13FA40)
#define CLASS_1_F4B1B74A0320FC41_METHOD_1_C40342CD77BDCCE0_OFFSET UNITYSDK_OFFSET(0xB13FB30)
#define CLASS_1_F4B1B74A0320FC41_METHOD_1_C8BB1D99D6ADB2E3_OFFSET UNITYSDK_OFFSET(0xB13FAE0)
#define CLASS_1_F4B1B74A0320FC41_METHOD_1_EB0CD123FED333EA_OFFSET UNITYSDK_OFFSET(0xB13FA90)
#define CLASS_1_F4B1B74A0320FC41__CTOR_OFFSET UNITYSDK_OFFSET(0xB13F9A0)

inline static constexpr unsigned int Class_1_F4B1B74A0320FC41_TypeDefinitionIndex = 56875;

class Class_1_F4B1B74A0320FC41 : public ::System::Object
{
public:
	::RPG::GameCore::AvatarDataComponent* _Owner_k__BackingField; // 0x10

	::System::Void _ctor(::RPG::GameCore::AvatarDataComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarDataComponent*))((::PBYTE)hIl2Cpp + CLASS_1_F4B1B74A0320FC41__CTOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::AvatarDataComponent* get_Owner()
	{
		return ((::RPG::GameCore::AvatarDataComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4B1B74A0320FC41_GET_OWNER_OFFSET))(this);
	}

	static ::Class_1_F4B1B74A0320FC41* Method_1_23F6AE26773BF4D6(::RPG::GameCore::AvatarDataComponent* a1)
	{
		return ((::Class_1_F4B1B74A0320FC41*(*)(::RPG::GameCore::AvatarDataComponent*))((::PBYTE)hIl2Cpp + CLASS_1_F4B1B74A0320FC41_METHOD_1_23F6AE26773BF4D6_OFFSET))(a1);
	}

	::System::Void Method_1_98511BB23D2E3748(::Class_2_9D2DEA765AF5C2B0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9D2DEA765AF5C2B0*))((::PBYTE)hIl2Cpp + CLASS_1_F4B1B74A0320FC41_METHOD_1_98511BB23D2E3748_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::UInt32>* Method_1_EB0CD123FED333EA(::RPG::GameCore::IAvatarCommonRowWrap* a1)
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::IAvatarCommonRowWrap*))((::PBYTE)hIl2Cpp + CLASS_1_F4B1B74A0320FC41_METHOD_1_EB0CD123FED333EA_OFFSET))(this, a1);
	}

	::System::Void Method_1_C8BB1D99D6ADB2E3(::RPG::GameCore::AvatarRowData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarRowData*))((::PBYTE)hIl2Cpp + CLASS_1_F4B1B74A0320FC41_METHOD_1_C8BB1D99D6ADB2E3_OFFSET))(this, a1);
	}

	::System::Void Method_1_C40342CD77BDCCE0(::RPG::GameCore::AvatarDataComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarDataComponent*))((::PBYTE)hIl2Cpp + CLASS_1_F4B1B74A0320FC41_METHOD_1_C40342CD77BDCCE0_OFFSET))(this, a1);
	}
};
