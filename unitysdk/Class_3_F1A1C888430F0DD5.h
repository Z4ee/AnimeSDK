#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_F1A1C888430F0DD5_METHOD_3_400CD15A8456AED9_OFFSET UNITYSDK_OFFSET(0x1CF18D60)
#define CLASS_3_F1A1C888430F0DD5_METHOD_3_7F22A781A9156478_OFFSET UNITYSDK_OFFSET(0x1CF18DA0)
#define CLASS_3_F1A1C888430F0DD5__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF18D90)

inline static constexpr unsigned int Class_3_F1A1C888430F0DD5_TypeDefinitionIndex = 21487;

class Class_3_F1A1C888430F0DD5 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::Boolean IOBCIMIPEOM; // 0x18
	::RPG::Client::TextID EONCGACNBFG; // 0x20
	::RPG::Client::TextID ONLODCLDLIO; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F1A1C888430F0DD5__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_400CD15A8456AED9(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_F1A1C888430F0DD5*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_F1A1C888430F0DD5*&))((::PBYTE)hIl2Cpp + CLASS_3_F1A1C888430F0DD5_METHOD_3_400CD15A8456AED9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7F22A781A9156478(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_F1A1C888430F0DD5* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_F1A1C888430F0DD5*))((::PBYTE)hIl2Cpp + CLASS_3_F1A1C888430F0DD5_METHOD_3_7F22A781A9156478_OFFSET))(a1, a2);
	}
};
