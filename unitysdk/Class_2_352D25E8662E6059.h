#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F4B1B74A0320FC41.h"
#include "unitysdk/RPG/GameCore/AvatarCreateType.h"

class Class_2_9D2DEA765AF5C2B0;
namespace RPG::GameCore { class AvatarDataComponent; }
namespace RPG::GameCore { class AvatarRowData; }
namespace RPG::GameCore { class IAvatarCommonRowWrap; }

#define CLASS_2_352D25E8662E6059_METHOD_2_22A9D092E82B0E16_OFFSET UNITYSDK_OFFSET(0xB819470)
#define CLASS_2_352D25E8662E6059_METHOD_2_7B5CCC53EE5CBADF_OFFSET UNITYSDK_OFFSET(0xB819530)
#define CLASS_2_352D25E8662E6059_METHOD_2_81066FE31CBAC496_OFFSET UNITYSDK_OFFSET(0xB8195A0)
#define CLASS_2_352D25E8662E6059_METHOD_2_ACE808320A996584_OFFSET UNITYSDK_OFFSET(0xB819630)
#define CLASS_2_352D25E8662E6059_METHOD_2_CB90D463EEA11F23_OFFSET UNITYSDK_OFFSET(0xB819480)
#define CLASS_2_352D25E8662E6059__CTOR_OFFSET UNITYSDK_OFFSET(0xB819460)

inline static constexpr unsigned int Class_2_352D25E8662E6059_TypeDefinitionIndex = 56877;

class Class_2_352D25E8662E6059 : public ::Class_1_F4B1B74A0320FC41
{
public:
	::System::Void _ctor(::RPG::GameCore::AvatarDataComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarDataComponent*))((::PBYTE)hIl2Cpp + CLASS_2_352D25E8662E6059__CTOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::AvatarCreateType Method_2_22A9D092E82B0E16()
	{
		return ((::RPG::GameCore::AvatarCreateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_352D25E8662E6059_METHOD_2_22A9D092E82B0E16_OFFSET))(this);
	}

	::System::Void Method_2_CB90D463EEA11F23(::Class_2_9D2DEA765AF5C2B0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9D2DEA765AF5C2B0*))((::PBYTE)hIl2Cpp + CLASS_2_352D25E8662E6059_METHOD_2_CB90D463EEA11F23_OFFSET))(this, a1);
	}

	::System::Void Method_2_7B5CCC53EE5CBADF(::RPG::GameCore::AvatarDataComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarDataComponent*))((::PBYTE)hIl2Cpp + CLASS_2_352D25E8662E6059_METHOD_2_7B5CCC53EE5CBADF_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::UInt32>* Method_2_81066FE31CBAC496(::RPG::GameCore::IAvatarCommonRowWrap* a1)
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::IAvatarCommonRowWrap*))((::PBYTE)hIl2Cpp + CLASS_2_352D25E8662E6059_METHOD_2_81066FE31CBAC496_OFFSET))(this, a1);
	}

	::System::Void Method_2_ACE808320A996584(::RPG::GameCore::AvatarRowData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarRowData*))((::PBYTE)hIl2Cpp + CLASS_2_352D25E8662E6059_METHOD_2_ACE808320A996584_OFFSET))(this, a1);
	}
};
