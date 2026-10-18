#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::CatGod { class CatGodGetShelfWindow; }

#define CLASS_1_26F4A90A6E6A3F1F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15ED6CB0)
#define CLASS_1_26F4A90A6E6A3F1F_METHOD_1_17C13EFA7C7D8092_OFFSET UNITYSDK_OFFSET(0x15ED6D50)
#define CLASS_1_26F4A90A6E6A3F1F_METHOD_1_52607DE4C357D269_OFFSET UNITYSDK_OFFSET(0x15ED6CF0)
#define CLASS_1_26F4A90A6E6A3F1F__CTOR_OFFSET UNITYSDK_OFFSET(0x15ED6E10)

inline static constexpr unsigned int Class_1_26F4A90A6E6A3F1F_TypeDefinitionIndex = 81653;

class Class_1_26F4A90A6E6A3F1F : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26F4A90A6E6A3F1F__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26F4A90A6E6A3F1F_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_52607DE4C357D269()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26F4A90A6E6A3F1F_METHOD_1_52607DE4C357D269_OFFSET))(this);
	}

	::RPG::Client::CatGod::CatGodGetShelfWindow* Method_1_17C13EFA7C7D8092()
	{
		return ((::RPG::Client::CatGod::CatGodGetShelfWindow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26F4A90A6E6A3F1F_METHOD_1_17C13EFA7C7D8092_OFFSET))(this);
	}
};
