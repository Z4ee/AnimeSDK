#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1835888C1E19F013.h"

class Class_1_0AD6129525BF5F86;
namespace RPG::GameCore { class StaticProjectileData; }

#define CLASS_2_298497410B14E048_METHOD_2_479759059E440327_OFFSET UNITYSDK_OFFSET(0x1179C1E0)
#define CLASS_2_298497410B14E048_METHOD_2_4F1FC11F602643B0_OFFSET UNITYSDK_OFFSET(0x1179C0E0)
#define CLASS_2_298497410B14E048_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x1179C270)
#define CLASS_2_298497410B14E048_METHOD_2_735EE20B25F86BF4_OFFSET UNITYSDK_OFFSET(0x1179B4F0)
#define CLASS_2_298497410B14E048__CTOR_OFFSET UNITYSDK_OFFSET(0x1179B470)

inline static constexpr unsigned int Class_2_298497410B14E048_TypeDefinitionIndex = 43824;

class Class_2_298497410B14E048 : public ::Class_1_1835888C1E19F013
{
public:
	::RPG::GameCore::StaticProjectileData* Field_2_0; // 0x48

	::System::Void _ctor(::Class_1_0AD6129525BF5F86* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0AD6129525BF5F86*))((::PBYTE)hIl2Cpp + CLASS_2_298497410B14E048__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_735EE20B25F86BF4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_298497410B14E048_METHOD_2_735EE20B25F86BF4_OFFSET))(this);
	}

	::System::Void Method_2_4F1FC11F602643B0(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_298497410B14E048_METHOD_2_4F1FC11F602643B0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_298497410B14E048_METHOD_2_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_298497410B14E048_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
