#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_3_1DB39A48EB273481_METHOD_3_443B8314404AE95B_OFFSET UNITYSDK_OFFSET(0x195B26F0)
#define CLASS_3_1DB39A48EB273481_METHOD_3_B4C09A5853E73B8A_OFFSET UNITYSDK_OFFSET(0x195B2770)
#define CLASS_3_1DB39A48EB273481__CTOR_OFFSET UNITYSDK_OFFSET(0x195B2740)

inline static constexpr unsigned int Class_3_1DB39A48EB273481_TypeDefinitionIndex = 20299;

class Class_3_1DB39A48EB273481 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_0; // 0x18
	::System::String* Field_3_1; // 0x20
	::System::Boolean Field_3_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1DB39A48EB273481__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_443B8314404AE95B(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_1DB39A48EB273481*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_1DB39A48EB273481*&))((::PBYTE)hIl2Cpp + CLASS_3_1DB39A48EB273481_METHOD_3_443B8314404AE95B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B4C09A5853E73B8A(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_1DB39A48EB273481* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_1DB39A48EB273481*))((::PBYTE)hIl2Cpp + CLASS_3_1DB39A48EB273481_METHOD_3_B4C09A5853E73B8A_OFFSET))(a1, a2);
	}
};
