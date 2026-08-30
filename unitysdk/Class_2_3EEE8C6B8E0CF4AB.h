#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define CLASS_2_3EEE8C6B8E0CF4AB_METHOD_2_1A31ED6C317B4D6D_OFFSET UNITYSDK_OFFSET(0x1C7DDE80)
#define CLASS_2_3EEE8C6B8E0CF4AB__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7DE020)

inline static constexpr unsigned int Class_2_3EEE8C6B8E0CF4AB_TypeDefinitionIndex = 17943;

class Class_2_3EEE8C6B8E0CF4AB : public ::RPG::GameCore::JsonConfig
{
public:
	::System::String* IFNAGLOMHBK; // 0x10
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* NKCKAJPAJCJ; // 0x18
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* GMACMKDGHPP; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3EEE8C6B8E0CF4AB__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_2_1A31ED6C317B4D6D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_3EEE8C6B8E0CF4AB*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_3EEE8C6B8E0CF4AB*&))((::PBYTE)hIl2Cpp + CLASS_2_3EEE8C6B8E0CF4AB_METHOD_2_1A31ED6C317B4D6D_OFFSET))(a1, a2);
	}
};
