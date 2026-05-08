#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NapStreaming { class NapStreamingManager_StreamingPosProvider; }
namespace System { class Action; }

#define CLASS_3_474F8DCAF16A784A___C_METHOD_1_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0x13AE1530)
#define CLASS_3_474F8DCAF16A784A___C_METHOD_1_F38398C364AE5340_OFFSET UNITYSDK_OFFSET(0x13AE1160)
#define CLASS_3_474F8DCAF16A784A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13AE1110)
#define CLASS_3_474F8DCAF16A784A___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13AE1150)

inline static constexpr unsigned int Class_3_474F8DCAF16A784A___c_TypeDefinitionIndex = 55613;

class Class_3_474F8DCAF16A784A___c : public ::System::Object
{
public:
	static ::Class_3_474F8DCAF16A784A___c** StaticGet___9()
	{
		return (::Class_3_474F8DCAF16A784A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_474F8DCAF16A784A___c_TypeDefinitionIndex)->GetStaticField(0x36560);
	}
	static ::NapStreaming::NapStreamingManager_StreamingPosProvider** StaticGet___9__50_0()
	{
		return (::NapStreaming::NapStreamingManager_StreamingPosProvider**)Il2CppClass::FromTypeDefinitionIndex(Class_3_474F8DCAF16A784A___c_TypeDefinitionIndex)->GetStaticField(0x36568);
	}
	static ::System::Action** StaticGet___9__37_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_3_474F8DCAF16A784A___c_TypeDefinitionIndex)->GetStaticField(0x36570);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_474F8DCAF16A784A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_474F8DCAF16A784A___C__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_F38398C364AE5340()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_474F8DCAF16A784A___C_METHOD_1_F38398C364AE5340_OFFSET))(this);
	}

	::System::Void Method_1_805C56F44231AEF9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_474F8DCAF16A784A___C_METHOD_1_805C56F44231AEF9_OFFSET))(this);
	}
};
