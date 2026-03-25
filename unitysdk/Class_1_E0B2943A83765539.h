#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterPriority.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterPriorityGroup.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_E0B2943A83765539_METHOD_1_1E0EFB7EDC4FF8F7_OFFSET UNITYSDK_OFFSET(0x105C4D50)
#define CLASS_1_E0B2943A83765539_METHOD_1_5B48DCA42B80B50C_OFFSET UNITYSDK_OFFSET(0x105C4BD0)
#define CLASS_1_E0B2943A83765539_METHOD_1_83ABEDAA83837786_OFFSET UNITYSDK_OFFSET(0x105C4C10)
#define CLASS_1_E0B2943A83765539_METHOD_1_8E81EF423426308D_OFFSET UNITYSDK_OFFSET(0x105C4E00)
#define CLASS_1_E0B2943A83765539_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x105C4E60)
#define CLASS_1_E0B2943A83765539__CTOR_OFFSET UNITYSDK_OFFSET(0x105C4BC0)

inline static constexpr unsigned int Class_1_E0B2943A83765539_TypeDefinitionIndex = 57420;

class Class_1_E0B2943A83765539 : public ::System::Object
{
public:
	::RPG::GameCore::PPEffectFilterPriority Field_1_1; // 0x10
	::System::Boolean Field_1_4; // 0x14
	::System::Boolean Field_1_3; // 0x15
	::System::Boolean Field_1_2; // 0x16
	::RPG::GameCore::PPEffectFilterPriorityGroup Field_1_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::PPEffectFilterPriorityGroup a1, ::RPG::GameCore::PPEffectFilterPriority a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PPEffectFilterPriorityGroup, ::RPG::GameCore::PPEffectFilterPriority))((::PBYTE)hIl2Cpp + CLASS_1_E0B2943A83765539__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::PPEffectFilterType Method_1_5B48DCA42B80B50C()
	{
		return ((::RPG::GameCore::PPEffectFilterType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0B2943A83765539_METHOD_1_5B48DCA42B80B50C_OFFSET))(this);
	}

	::System::Boolean Method_1_83ABEDAA83837786(::Class_1_E0B2943A83765539* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E0B2943A83765539*))((::PBYTE)hIl2Cpp + CLASS_1_E0B2943A83765539_METHOD_1_83ABEDAA83837786_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1E0EFB7EDC4FF8F7(::System::String* a1, ::RPG::GameCore::PPEffectFilterPriorityGroup a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::GameCore::PPEffectFilterPriorityGroup))((::PBYTE)hIl2Cpp + CLASS_1_E0B2943A83765539_METHOD_1_1E0EFB7EDC4FF8F7_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_8E81EF423426308D(::RPG::GameCore::PPEffectFilterType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PPEffectFilterType))((::PBYTE)hIl2Cpp + CLASS_1_E0B2943A83765539_METHOD_1_8E81EF423426308D_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0B2943A83765539_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
