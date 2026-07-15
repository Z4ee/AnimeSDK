#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_2_EFCC66A165448AE8_METHOD_2_F7D48A5F0FE8B616_OFFSET UNITYSDK_OFFSET(0x1B26AE20)
#define CLASS_2_EFCC66A165448AE8__CTOR_OFFSET UNITYSDK_OFFSET(0x1B26AFC0)

inline static constexpr unsigned int Class_2_EFCC66A165448AE8_TypeDefinitionIndex = 22495;

class Class_2_EFCC66A165448AE8 : public ::RPG::GameCore::JsonConfig
{
public:
	::Il2CppArray<::RPG::GameCore::DynamicFloat*>* Field_2_0; // 0x10
	::RPG::Client::TextID Field_2_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EFCC66A165448AE8__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_2_F7D48A5F0FE8B616(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_EFCC66A165448AE8*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_EFCC66A165448AE8*&))((::PBYTE)hIl2Cpp + CLASS_2_EFCC66A165448AE8_METHOD_2_F7D48A5F0FE8B616_OFFSET))(a1, a2);
	}
};
