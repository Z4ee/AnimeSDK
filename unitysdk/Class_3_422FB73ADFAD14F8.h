#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LittleGameFireEffectParams; }

#define CLASS_3_422FB73ADFAD14F8_METHOD_3_79D2339C9987D6C4_OFFSET UNITYSDK_OFFSET(0x1AF353A0)
#define CLASS_3_422FB73ADFAD14F8_METHOD_3_9EA7A67A8BC52A5F_OFFSET UNITYSDK_OFFSET(0x1AF353E0)
#define CLASS_3_422FB73ADFAD14F8__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF353D0)

inline static constexpr unsigned int Class_3_422FB73ADFAD14F8_TypeDefinitionIndex = 20644;

class Class_3_422FB73ADFAD14F8 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::LittleGameFireEffectParams* Field_3_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_422FB73ADFAD14F8__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_79D2339C9987D6C4(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_422FB73ADFAD14F8*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_422FB73ADFAD14F8*&))((::PBYTE)hIl2Cpp + CLASS_3_422FB73ADFAD14F8_METHOD_3_79D2339C9987D6C4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_9EA7A67A8BC52A5F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_422FB73ADFAD14F8* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_422FB73ADFAD14F8*))((::PBYTE)hIl2Cpp + CLASS_3_422FB73ADFAD14F8_METHOD_3_9EA7A67A8BC52A5F_OFFSET))(a1, a2);
	}
};
