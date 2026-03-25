#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137.h"

class Class_1_C03F4DDB5A53142C;
namespace RPG::GameCore { class MarbleSetTechActive; }

#define CLASS_2_77C22DC70C6BEF56_METHOD_2_568AE7A1499723FD_OFFSET UNITYSDK_OFFSET(0x16A0F700)
#define CLASS_2_77C22DC70C6BEF56_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16A0F7A0)
#define CLASS_2_77C22DC70C6BEF56__CTOR_OFFSET UNITYSDK_OFFSET(0x16A0F6E0)

inline static constexpr unsigned int Class_2_77C22DC70C6BEF56_TypeDefinitionIndex = 33173;

class Class_2_77C22DC70C6BEF56 : public ::Class_1_F9FBCC956DFCF137
{
public:
	::RPG::GameCore::MarbleSetTechActive* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::MarbleSetTechActive* a1, ::Class_1_C03F4DDB5A53142C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleSetTechActive*, ::Class_1_C03F4DDB5A53142C*))((::PBYTE)hIl2Cpp + CLASS_2_77C22DC70C6BEF56__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_568AE7A1499723FD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_77C22DC70C6BEF56_METHOD_2_568AE7A1499723FD_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_77C22DC70C6BEF56_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
