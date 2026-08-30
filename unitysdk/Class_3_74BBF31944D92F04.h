#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_74BBF31944D92F04_METHOD_3_237DE7154300C94D_OFFSET UNITYSDK_OFFSET(0x1CFA4680)
#define CLASS_3_74BBF31944D92F04_METHOD_3_9EA7A67A8BC52A5F_OFFSET UNITYSDK_OFFSET(0x1CFA46E0)
#define CLASS_3_74BBF31944D92F04__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFA46D0)

inline static constexpr unsigned int Class_3_74BBF31944D92F04_TypeDefinitionIndex = 20680;

class Class_3_74BBF31944D92F04 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::Boolean MOKNCFJICIC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_74BBF31944D92F04__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_237DE7154300C94D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_74BBF31944D92F04*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_74BBF31944D92F04*&))((::PBYTE)hIl2Cpp + CLASS_3_74BBF31944D92F04_METHOD_3_237DE7154300C94D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_9EA7A67A8BC52A5F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_74BBF31944D92F04* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_74BBF31944D92F04*))((::PBYTE)hIl2Cpp + CLASS_3_74BBF31944D92F04_METHOD_3_9EA7A67A8BC52A5F_OFFSET))(a1, a2);
	}
};
