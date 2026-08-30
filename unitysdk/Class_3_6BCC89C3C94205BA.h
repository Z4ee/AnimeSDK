#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_6BCC89C3C94205BA_METHOD_3_469ECD10EF199C13_OFFSET UNITYSDK_OFFSET(0x1CA75BF0)
#define CLASS_3_6BCC89C3C94205BA_METHOD_3_9E3D0C5F7C38F16C_OFFSET UNITYSDK_OFFSET(0x1CA75BB0)
#define CLASS_3_6BCC89C3C94205BA__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA75BE0)

inline static constexpr unsigned int Class_3_6BCC89C3C94205BA_TypeDefinitionIndex = 19714;

class Class_3_6BCC89C3C94205BA : public ::RPG::GameCore::TaskConfig
{
public:
	::System::Boolean JFNHKEKIDKJ; // 0x18
	::RPG::Client::TextID KBEPAIAFLHL; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6BCC89C3C94205BA__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_9E3D0C5F7C38F16C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_6BCC89C3C94205BA*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_6BCC89C3C94205BA*&))((::PBYTE)hIl2Cpp + CLASS_3_6BCC89C3C94205BA_METHOD_3_9E3D0C5F7C38F16C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_469ECD10EF199C13(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_6BCC89C3C94205BA* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_6BCC89C3C94205BA*))((::PBYTE)hIl2Cpp + CLASS_3_6BCC89C3C94205BA_METHOD_3_469ECD10EF199C13_OFFSET))(a1, a2);
	}
};
