#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUITextStyle; }
namespace System { class Action; }

#define CLASS_1_EE931C7FF49A3400_CLASS_1_EAAE72B12EDB0611_METHOD_1_9EC6D4B3ADA83C28_OFFSET UNITYSDK_OFFSET(0x174D4AC0)
#define CLASS_1_EE931C7FF49A3400_CLASS_1_EAAE72B12EDB0611__CTOR_OFFSET UNITYSDK_OFFSET(0x174D4AB0)

inline static constexpr unsigned int Class_1_EE931C7FF49A3400_Class_1_EAAE72B12EDB0611_TypeDefinitionIndex = 68062;

class Class_1_EE931C7FF49A3400_Class_1_EAAE72B12EDB0611 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE931C7FF49A3400_CLASS_1_EAAE72B12EDB0611__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9EC6D4B3ADA83C28(::MoleMole::Config::ConfigUITextStyle* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUITextStyle*))((::PBYTE)hIl2Cpp + CLASS_1_EE931C7FF49A3400_CLASS_1_EAAE72B12EDB0611_METHOD_1_9EC6D4B3ADA83C28_OFFSET))(this, a1);
	}
};
