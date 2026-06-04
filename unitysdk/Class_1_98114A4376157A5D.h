#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAssetOperation; }
namespace System { class String; }
namespace UnityEngine { class Object; }

#define CLASS_1_98114A4376157A5D_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x112C0260)
#define CLASS_1_98114A4376157A5D__CTOR_OFFSET UNITYSDK_OFFSET(0x112C02B0)

inline static constexpr unsigned int Class_1_98114A4376157A5D_TypeDefinitionIndex = 74492;

class Class_1_98114A4376157A5D : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::RPG::Client::IAssetOperation* Field_1_1; // 0x18
	::UnityEngine::Object* Field_1_2; // 0x20
	::System::Int64 Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98114A4376157A5D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98114A4376157A5D_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
