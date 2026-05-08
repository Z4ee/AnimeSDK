#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityAmplifyOcclusionEffects; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_960B0E9443A297A2_METHOD_1_A8E794BDD54EF717_OFFSET UNITYSDK_OFFSET(0x1311BE90)
#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_960B0E9443A297A2__CTOR_OFFSET UNITYSDK_OFFSET(0x1311BE80)

inline static constexpr unsigned int Class_1_5C5D1BCD30A891BA_Class_1_960B0E9443A297A2_TypeDefinitionIndex = 69918;

class Class_1_5C5D1BCD30A891BA_Class_1_960B0E9443A297A2 : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::System::Action_1<::MoleMole::Config::ConfigEntityAmplifyOcclusionEffects*>* Field_1_2; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_960B0E9443A297A2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A8E794BDD54EF717(::MoleMole::Config::ConfigEntityAmplifyOcclusionEffects* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityAmplifyOcclusionEffects*))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_960B0E9443A297A2_METHOD_1_A8E794BDD54EF717_OFFSET))(this, a1);
	}
};
