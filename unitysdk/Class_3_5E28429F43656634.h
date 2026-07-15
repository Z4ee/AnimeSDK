#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TalkDialogDecorationType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_5E28429F43656634_METHOD_3_237DE7154300C94D_OFFSET UNITYSDK_OFFSET(0x1B801E60)
#define CLASS_3_5E28429F43656634_METHOD_3_4EB4DD7CBD5AE076_OFFSET UNITYSDK_OFFSET(0x1B801EA0)
#define CLASS_3_5E28429F43656634__CTOR_OFFSET UNITYSDK_OFFSET(0x1B801E90)

inline static constexpr unsigned int Class_3_5E28429F43656634_TypeDefinitionIndex = 20286;

class Class_3_5E28429F43656634 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TalkDialogDecorationType Field_3_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5E28429F43656634__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_237DE7154300C94D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_5E28429F43656634*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_5E28429F43656634*&))((::PBYTE)hIl2Cpp + CLASS_3_5E28429F43656634_METHOD_3_237DE7154300C94D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_4EB4DD7CBD5AE076(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_5E28429F43656634* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_5E28429F43656634*))((::PBYTE)hIl2Cpp + CLASS_3_5E28429F43656634_METHOD_3_4EB4DD7CBD5AE076_OFFSET))(a1, a2);
	}
};
