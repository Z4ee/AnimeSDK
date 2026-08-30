#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RtCharacterFlagVisual; }
namespace RPG::GameCore { class RtCharacterVisual; }

#define CLASS_3_CAD83FC079AAC20A_METHOD_3_B0B66673456EDDF6_OFFSET UNITYSDK_OFFSET(0x1C7DCE40)
#define CLASS_3_CAD83FC079AAC20A_METHOD_3_C17C5E1EBAECCBCD_OFFSET UNITYSDK_OFFSET(0x1C7DCE80)
#define CLASS_3_CAD83FC079AAC20A__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7DCE70)

inline static constexpr unsigned int Class_3_CAD83FC079AAC20A_TypeDefinitionIndex = 23815;

class Class_3_CAD83FC079AAC20A : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::RtCharacterVisual* FAHLGFCIDMN; // 0x18
	::Il2CppArray<::RPG::GameCore::RtCharacterFlagVisual*>* CKEEENLAOGF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CAD83FC079AAC20A__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_B0B66673456EDDF6(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_CAD83FC079AAC20A*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_CAD83FC079AAC20A*&))((::PBYTE)hIl2Cpp + CLASS_3_CAD83FC079AAC20A_METHOD_3_B0B66673456EDDF6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_C17C5E1EBAECCBCD(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_CAD83FC079AAC20A* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_CAD83FC079AAC20A*))((::PBYTE)hIl2Cpp + CLASS_3_CAD83FC079AAC20A_METHOD_3_C17C5E1EBAECCBCD_OFFSET))(a1, a2);
	}
};
