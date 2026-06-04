#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterPriority.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterPriorityGroup.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_6B6A4C789452DEC6_METHOD_1_2CFF050FB165446D_OFFSET UNITYSDK_OFFSET(0x140128B0)
#define CLASS_1_6B6A4C789452DEC6_METHOD_1_5B48DCA42B80B50C_OFFSET UNITYSDK_OFFSET(0x14012710)
#define CLASS_1_6B6A4C789452DEC6_METHOD_1_8E81EF423426308D_OFFSET UNITYSDK_OFFSET(0x14012960)
#define CLASS_1_6B6A4C789452DEC6_METHOD_1_966822940C15BB44_OFFSET UNITYSDK_OFFSET(0x14012750)
#define CLASS_1_6B6A4C789452DEC6_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x140129C0)
#define CLASS_1_6B6A4C789452DEC6__CTOR_OFFSET UNITYSDK_OFFSET(0x14012700)

inline static constexpr unsigned int Class_1_6B6A4C789452DEC6_TypeDefinitionIndex = 65602;

class Class_1_6B6A4C789452DEC6 : public ::System::Object
{
public:
	::RPG::GameCore::PPEffectFilterPriorityGroup Field_1_0; // 0x10
	::RPG::GameCore::PPEffectFilterPriority Field_1_1; // 0x14
	::System::Boolean Field_1_2; // 0x18
	::System::Boolean Field_1_3; // 0x19
	::System::Boolean Field_1_4; // 0x1A

	::System::Void _ctor(::RPG::GameCore::PPEffectFilterPriorityGroup a1, ::RPG::GameCore::PPEffectFilterPriority a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PPEffectFilterPriorityGroup, ::RPG::GameCore::PPEffectFilterPriority))((::PBYTE)hIl2Cpp + CLASS_1_6B6A4C789452DEC6__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::PPEffectFilterType Method_1_5B48DCA42B80B50C()
	{
		return ((::RPG::GameCore::PPEffectFilterType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6B6A4C789452DEC6_METHOD_1_5B48DCA42B80B50C_OFFSET))(this);
	}

	::System::Boolean Method_1_966822940C15BB44(::Class_1_6B6A4C789452DEC6* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6B6A4C789452DEC6*))((::PBYTE)hIl2Cpp + CLASS_1_6B6A4C789452DEC6_METHOD_1_966822940C15BB44_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_2CFF050FB165446D(::System::String* a1, ::RPG::GameCore::PPEffectFilterPriorityGroup a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::GameCore::PPEffectFilterPriorityGroup))((::PBYTE)hIl2Cpp + CLASS_1_6B6A4C789452DEC6_METHOD_1_2CFF050FB165446D_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_8E81EF423426308D(::RPG::GameCore::PPEffectFilterType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PPEffectFilterType))((::PBYTE)hIl2Cpp + CLASS_1_6B6A4C789452DEC6_METHOD_1_8E81EF423426308D_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6B6A4C789452DEC6_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
