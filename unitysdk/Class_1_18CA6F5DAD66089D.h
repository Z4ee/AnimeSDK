#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_6C22B2872997C699.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigRichtapResource_Resource; }
namespace System { class String; }
namespace UnityEngine { class Object; }

#define CLASS_1_18CA6F5DAD66089D_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x13A4DC00)
#define CLASS_1_18CA6F5DAD66089D_METHOD_1_4223E7B95960ACCF_OFFSET UNITYSDK_OFFSET(0x13A4DD50)
#define CLASS_1_18CA6F5DAD66089D_METHOD_1_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x13A4DFD0)
#define CLASS_1_18CA6F5DAD66089D_METHOD_1_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0x13A4E020)
#define CLASS_1_18CA6F5DAD66089D_METHOD_1_4343F372F34C05BF_3_OFFSET UNITYSDK_OFFSET(0x13A4E0D0)
#define CLASS_1_18CA6F5DAD66089D_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x13A4DF70)
#define CLASS_1_18CA6F5DAD66089D_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x13A4E070)
#define CLASS_1_18CA6F5DAD66089D_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13A4DD00)
#define CLASS_1_18CA6F5DAD66089D__CTOR_OFFSET UNITYSDK_OFFSET(0x13A4DBF0)

inline static constexpr unsigned int Class_1_18CA6F5DAD66089D_TypeDefinitionIndex = 68059;

class Class_1_18CA6F5DAD66089D : public ::System::Object
{
public:
	::MoleMole::ConfigRichtapResource_Resource* Field_1_4; // 0x10
	::System::String* Field_1_2; // 0x18
	::System::String* Field_1_3; // 0x20
	::System::UInt32 Field_1_0; // 0x28
	::System::Int32 Field_1_5; // 0x2C
	::Enum_3_6C22B2872997C699 Field_1_1; // 0x30
	::System::Single Field_1_6; // 0x34

	::System::Void _ctor(::System::UInt32 a1, ::MoleMole::ConfigRichtapResource_Resource* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::ConfigRichtapResource_Resource*))((::PBYTE)hIl2Cpp + CLASS_1_18CA6F5DAD66089D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18CA6F5DAD66089D_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18CA6F5DAD66089D_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_4223E7B95960ACCF(::UnityEngine::Object* a1, ::Foundation::AssetRequestHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + CLASS_1_18CA6F5DAD66089D_METHOD_1_4223E7B95960ACCF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18CA6F5DAD66089D_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18CA6F5DAD66089D_METHOD_1_4343F372F34C05BF_1_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18CA6F5DAD66089D_METHOD_1_4343F372F34C05BF_2_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18CA6F5DAD66089D_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18CA6F5DAD66089D_METHOD_1_4343F372F34C05BF_3_OFFSET))(this);
	}
};
