#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TaskConfig; }

#define CLASS_2_E0E8B7AE6E718844_METHOD_2_1C228CF47BAE7E24_OFFSET UNITYSDK_OFFSET(0x1B50A330)
#define CLASS_2_E0E8B7AE6E718844__CTOR_OFFSET UNITYSDK_OFFSET(0x1B50A450)

inline static constexpr unsigned int Class_2_E0E8B7AE6E718844_TypeDefinitionIndex = 21596;

class Class_2_E0E8B7AE6E718844 : public ::RPG::GameCore::JsonConfig
{
public:
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_2_0; // 0x10
	::System::UInt32 Field_2_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E0E8B7AE6E718844__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_2_1C228CF47BAE7E24(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_E0E8B7AE6E718844*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_E0E8B7AE6E718844*&))((::PBYTE)hIl2Cpp + CLASS_2_E0E8B7AE6E718844_METHOD_2_1C228CF47BAE7E24_OFFSET))(a1, a2);
	}
};
