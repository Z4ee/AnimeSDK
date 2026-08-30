#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1835888C1E19F013.h"

class Class_1_0AD6129525BF5F86;
namespace RPG::GameCore { class StaticProjectileData; }

#define CLASS_2_298497410B14E048_METHOD_2_479759059E440327_OFFSET UNITYSDK_OFFSET(0x198699A0)
#define CLASS_2_298497410B14E048_METHOD_2_4F1FC11F602643B0_OFFSET UNITYSDK_OFFSET(0x198698A0)
#define CLASS_2_298497410B14E048_METHOD_2_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x19868C40)
#define CLASS_2_298497410B14E048__CTOR_OFFSET UNITYSDK_OFFSET(0x19868BE0)

inline static constexpr unsigned int Class_2_298497410B14E048_TypeDefinitionIndex = 54970;

class Class_2_298497410B14E048 : public ::Class_1_1835888C1E19F013
{
public:
	::RPG::GameCore::StaticProjectileData* HNKAPDKPKHM; // 0x48

	::System::Void _ctor(::Class_1_0AD6129525BF5F86* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0AD6129525BF5F86*))((::PBYTE)hIl2Cpp + CLASS_2_298497410B14E048__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_298497410B14E048_METHOD_2_6B72D4EE8C6E907F_OFFSET))(this);
	}

	::System::Void Method_2_4F1FC11F602643B0(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_298497410B14E048_METHOD_2_4F1FC11F602643B0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_298497410B14E048_METHOD_2_479759059E440327_OFFSET))(this, a1);
	}
};
