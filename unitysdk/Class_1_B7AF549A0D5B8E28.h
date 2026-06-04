#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_B7AF549A0D5B8E28_CLEAR_OFFSET UNITYSDK_OFFSET(0xAF6F4A0)
#define CLASS_1_B7AF549A0D5B8E28_METHOD_1_2B4161F098FEC4B5_OFFSET UNITYSDK_OFFSET(0xAF6F550)
#define CLASS_1_B7AF549A0D5B8E28_METHOD_1_EA672F77F1086A27_OFFSET UNITYSDK_OFFSET(0xAF6F4F0)
#define CLASS_1_B7AF549A0D5B8E28__CTOR_OFFSET UNITYSDK_OFFSET(0xAF6F5D0)

inline static constexpr unsigned int Class_1_B7AF549A0D5B8E28_TypeDefinitionIndex = 52042;

class Class_1_B7AF549A0D5B8E28 : public ::System::Object
{
public:
	::RPG::GameCore::FixPoint Field_1_0; // 0x10
	::RPG::GameCore::FixPoint Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7AF549A0D5B8E28__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7AF549A0D5B8E28_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_EA672F77F1086A27(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_B7AF549A0D5B8E28_METHOD_1_EA672F77F1086A27_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_2B4161F098FEC4B5()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7AF549A0D5B8E28_METHOD_1_2B4161F098FEC4B5_OFFSET))(this);
	}
};
