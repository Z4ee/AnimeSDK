#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NapStreaming { class NapStreamingManager_StreamingPosProvider; }
namespace System { class Action; }

#define CLASS_5_5D8179DA70178B73___C_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x12588290)
#define CLASS_5_5D8179DA70178B73___C_METHOD_1_A7C25C16DAF12EC1_OFFSET UNITYSDK_OFFSET(0x12588250)
#define CLASS_5_5D8179DA70178B73___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12588200)
#define CLASS_5_5D8179DA70178B73___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12588240)

inline static constexpr unsigned int Class_5_5D8179DA70178B73___c_TypeDefinitionIndex = 71214;

class Class_5_5D8179DA70178B73___c : public ::System::Object
{
public:
	static ::NapStreaming::NapStreamingManager_StreamingPosProvider** StaticGet___9__5_1()
	{
		return (::NapStreaming::NapStreamingManager_StreamingPosProvider**)Il2CppClass::FromTypeDefinitionIndex(Class_5_5D8179DA70178B73___c_TypeDefinitionIndex)->GetStaticField(0x49E50);
	}
	static ::System::Action** StaticGet___9__3_4()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_5_5D8179DA70178B73___c_TypeDefinitionIndex)->GetStaticField(0x49E58);
	}
	static ::Class_5_5D8179DA70178B73___c** StaticGet___9()
	{
		return (::Class_5_5D8179DA70178B73___c**)Il2CppClass::FromTypeDefinitionIndex(Class_5_5D8179DA70178B73___c_TypeDefinitionIndex)->GetStaticField(0x49E60);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_5_5D8179DA70178B73___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_5D8179DA70178B73___C__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_A7C25C16DAF12EC1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_5D8179DA70178B73___C_METHOD_1_A7C25C16DAF12EC1_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_5D8179DA70178B73___C_METHOD_1_832295EC279E5994_OFFSET))(this);
	}
};
