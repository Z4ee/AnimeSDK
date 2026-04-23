#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_6D0E8932F0D4E197.h"
#include "unitysdk/RPG/GameCore/BattleHintToastStyle.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_EFCC66A165448AE8;

#define CLASS_3_E176F9BBDDBAEBD0_METHOD_3_14B90E8D92C1073E_OFFSET UNITYSDK_OFFSET(0x187AD8C0)
#define CLASS_3_E176F9BBDDBAEBD0_METHOD_3_2DFC332AF3EA3B47_OFFSET UNITYSDK_OFFSET(0x187AD860)
#define CLASS_3_E176F9BBDDBAEBD0__CTOR_OFFSET UNITYSDK_OFFSET(0x187AD8B0)

inline static constexpr unsigned int Class_3_E176F9BBDDBAEBD0_TypeDefinitionIndex = 22308;

class Class_3_E176F9BBDDBAEBD0 : public ::Class_2_6D0E8932F0D4E197
{
public:
	::Class_2_EFCC66A165448AE8* Field_3_1; // 0x18
	::RPG::GameCore::BattleHintToastStyle Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E176F9BBDDBAEBD0__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2DFC332AF3EA3B47(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_E176F9BBDDBAEBD0*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_E176F9BBDDBAEBD0*&))((::PBYTE)hIl2Cpp + CLASS_3_E176F9BBDDBAEBD0_METHOD_3_2DFC332AF3EA3B47_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_14B90E8D92C1073E(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_E176F9BBDDBAEBD0* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_E176F9BBDDBAEBD0*))((::PBYTE)hIl2Cpp + CLASS_3_E176F9BBDDBAEBD0_METHOD_3_14B90E8D92C1073E_OFFSET))(a1, a2);
	}
};
