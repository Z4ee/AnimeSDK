#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_1.h"

class Class_1_D37BADBAF66E56C6;
namespace RPG::GameCore { class MarbleSetTechActive; }

#define CLASS_2_77C22DC70C6BEF56_METHOD_2_568AE7A1499723FD_OFFSET UNITYSDK_OFFSET(0x17E3EB10)
#define CLASS_2_77C22DC70C6BEF56_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17E3EBB0)
#define CLASS_2_77C22DC70C6BEF56__CTOR_OFFSET UNITYSDK_OFFSET(0x17E3EB00)

inline static constexpr unsigned int Class_2_77C22DC70C6BEF56_TypeDefinitionIndex = 38963;

class Class_2_77C22DC70C6BEF56 : public ::Class_1_F9FBCC956DFCF137_1
{
public:
	::RPG::GameCore::MarbleSetTechActive* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::MarbleSetTechActive* a1, ::Class_1_D37BADBAF66E56C6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleSetTechActive*, ::Class_1_D37BADBAF66E56C6*))((::PBYTE)hIl2Cpp + CLASS_2_77C22DC70C6BEF56__CTOR_OFFSET))(this, a1, a2);
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
