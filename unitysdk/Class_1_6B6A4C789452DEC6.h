#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterPriority.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterPriorityGroup.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_6B6A4C789452DEC6_METHOD_1_2CFF050FB165446D_OFFSET UNITYSDK_OFFSET(0x187DE830)
#define CLASS_1_6B6A4C789452DEC6_METHOD_1_5B48DCA42B80B50C_OFFSET UNITYSDK_OFFSET(0x187DE550)
#define CLASS_1_6B6A4C789452DEC6_METHOD_1_7084FF42BE358A08_OFFSET UNITYSDK_OFFSET(0x187DE590)
#define CLASS_1_6B6A4C789452DEC6_METHOD_1_BBB3C454899600EF_OFFSET UNITYSDK_OFFSET(0x187DE8E0)
#define CLASS_1_6B6A4C789452DEC6_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x187DE9A0)
#define CLASS_1_6B6A4C789452DEC6__CTOR_OFFSET UNITYSDK_OFFSET(0x187DE540)

inline static constexpr unsigned int Class_1_6B6A4C789452DEC6_TypeDefinitionIndex = 70124;

class Class_1_6B6A4C789452DEC6 : public ::System::Object
{
public:
	::System::Boolean KCOEPCMEJCB; // 0x10
	::System::Boolean BHMGBPJCFBK; // 0x11
	::System::Boolean IOBJFEJFLJP; // 0x12
	::RPG::GameCore::PPEffectFilterPriorityGroup OMJNGMHJPBD; // 0x14
	::RPG::GameCore::PPEffectFilterPriority NALMBOOCCIN; // 0x18

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
