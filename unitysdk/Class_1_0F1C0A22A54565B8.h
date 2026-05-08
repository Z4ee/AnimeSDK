#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class EffectPatternInfoConfig; }
namespace MoleMole::Config { class EffectPatternInfoConfig_PatternInfoItem; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_0F1C0A22A54565B8_METHOD_1_0004EB5BFAE95784_OFFSET UNITYSDK_OFFSET(0x1461DF50)
#define CLASS_1_0F1C0A22A54565B8_METHOD_1_0947F577F1E5AE4F_OFFSET UNITYSDK_OFFSET(0x1461E0E0)
#define CLASS_1_0F1C0A22A54565B8_METHOD_1_691734491BCED0DD_OFFSET UNITYSDK_OFFSET(0x1461DFB0)
#define CLASS_1_0F1C0A22A54565B8_METHOD_1_8E2C129DE4FC3609_OFFSET UNITYSDK_OFFSET(0x1461E1D0)
#define CLASS_1_0F1C0A22A54565B8_METHOD_1_A7A48E71437C1EF5_OFFSET UNITYSDK_OFFSET(0x1461E3A0)
#define CLASS_1_0F1C0A22A54565B8_METHOD_1_FEE2FA448C7D6C8E_OFFSET UNITYSDK_OFFSET(0x1461E390)

inline static constexpr unsigned int Class_1_0F1C0A22A54565B8_TypeDefinitionIndex = 78459;

class Class_1_0F1C0A22A54565B8 : public ::System::Object
{
public:
	static ::MoleMole::Config::EffectPatternInfoConfig** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::EffectPatternInfoConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0F1C0A22A54565B8_TypeDefinitionIndex)->GetStaticField(0x40EF0);
	}

	static ::System::Boolean Method_1_0004EB5BFAE95784(::System::String* a1, ::MoleMole::Config::EffectPatternInfoConfig_PatternInfoItem*& a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::MoleMole::Config::EffectPatternInfoConfig_PatternInfoItem*&))((::PBYTE)hIl2Cpp + CLASS_1_0F1C0A22A54565B8_METHOD_1_0004EB5BFAE95784_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::EffectPatternInfoConfig_PatternInfoItem* Method_1_691734491BCED0DD(::System::String* a1)
	{
		return ((::MoleMole::Config::EffectPatternInfoConfig_PatternInfoItem*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0F1C0A22A54565B8_METHOD_1_691734491BCED0DD_OFFSET))(a1);
	}

	static ::System::Void Method_1_0947F577F1E5AE4F(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0F1C0A22A54565B8_METHOD_1_0947F577F1E5AE4F_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_FEE2FA448C7D6C8E(::MoleMole::Config::EffectPatternInfoConfig* a1)
	{
		return ((::System::Void(*)(::MoleMole::Config::EffectPatternInfoConfig*))((::PBYTE)hIl2Cpp + CLASS_1_0F1C0A22A54565B8_METHOD_1_FEE2FA448C7D6C8E_OFFSET))(a1);
	}

	static ::System::Void Method_1_8E2C129DE4FC3609(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_0F1C0A22A54565B8_METHOD_1_8E2C129DE4FC3609_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::EffectPatternInfoConfig* Method_1_A7A48E71437C1EF5()
	{
		return ((::MoleMole::Config::EffectPatternInfoConfig*(*)())((::PBYTE)hIl2Cpp + CLASS_1_0F1C0A22A54565B8_METHOD_1_A7A48E71437C1EF5_OFFSET))();
	}
};
