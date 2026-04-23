#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAssetOperation; }
namespace System { class String; }
namespace UnityEngine { class Object; }

#define CLASS_1_98114A4376157A5D_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB21C340)
#define CLASS_1_98114A4376157A5D__CTOR_OFFSET UNITYSDK_OFFSET(0xB21C390)

inline static constexpr unsigned int Class_1_98114A4376157A5D_TypeDefinitionIndex = 72669;

class Class_1_98114A4376157A5D : public ::System::Object
{
public:
	::RPG::Client::IAssetOperation* Field_1_3; // 0x10
	::UnityEngine::Object* Field_1_1; // 0x18
	::System::String* Field_1_0; // 0x20
	::System::Int64 Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98114A4376157A5D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98114A4376157A5D_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
