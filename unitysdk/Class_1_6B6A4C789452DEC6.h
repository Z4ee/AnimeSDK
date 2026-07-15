#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterPriority.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterPriorityGroup.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_6B6A4C789452DEC6_METHOD_1_2CFF050FB165446D_OFFSET UNITYSDK_OFFSET(0x15F2ECA0)
#define CLASS_1_6B6A4C789452DEC6_METHOD_1_5B48DCA42B80B50C_OFFSET UNITYSDK_OFFSET(0x15F2E9C0)
#define CLASS_1_6B6A4C789452DEC6_METHOD_1_7084FF42BE358A08_OFFSET UNITYSDK_OFFSET(0x15F2EA00)
#define CLASS_1_6B6A4C789452DEC6_METHOD_1_BBB3C454899600EF_OFFSET UNITYSDK_OFFSET(0x15F2ED50)
#define CLASS_1_6B6A4C789452DEC6_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15F2EE10)
#define CLASS_1_6B6A4C789452DEC6__CTOR_OFFSET UNITYSDK_OFFSET(0x15F2E9B0)

inline static constexpr unsigned int Class_1_6B6A4C789452DEC6_TypeDefinitionIndex = 67019;

class Class_1_6B6A4C789452DEC6 : public ::System::Object
{
public:
	::RPG::GameCore::PPEffectFilterPriority Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x14
	::System::Boolean Field_1_2; // 0x15
	::System::Boolean Field_1_3; // 0x16
	::RPG::GameCore::PPEffectFilterPriorityGroup Field_1_4; // 0x18

	::System::Void _ctor(::RPG::GameCore::PPEffectFilterPriorityGroup a1, ::RPG::GameCore::PPEffectFilterPriority a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PPEffectFilterPriorityGroup, ::RPG::GameCore::PPEffectFilterPriority))((::PBYTE)hIl2Cpp + CLASS_1_6B6A4C789452DEC6__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::PPEffectFilterType Method_1_5B48DCA42B80B50C()
	{
		return ((::RPG::GameCore::PPEffectFilterType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6B6A4C789452DEC6_METHOD_1_5B48DCA42B80B50C_OFFSET))(this);
	}

	::System::Boolean Method_1_7084FF42BE358A08(::Class_1_6B6A4C789452DEC6* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6B6A4C789452DEC6*))((::PBYTE)hIl2Cpp + CLASS_1_6B6A4C789452DEC6_METHOD_1_7084FF42BE358A08_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_2CFF050FB165446D(::System::String* a1, ::RPG::GameCore::PPEffectFilterPriorityGroup a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::GameCore::PPEffectFilterPriorityGroup))((::PBYTE)hIl2Cpp + CLASS_1_6B6A4C789452DEC6_METHOD_1_2CFF050FB165446D_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_BBB3C454899600EF(::RPG::GameCore::PPEffectFilterType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PPEffectFilterType))((::PBYTE)hIl2Cpp + CLASS_1_6B6A4C789452DEC6_METHOD_1_BBB3C454899600EF_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6B6A4C789452DEC6_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
