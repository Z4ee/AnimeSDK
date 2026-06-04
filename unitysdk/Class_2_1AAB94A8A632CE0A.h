#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

namespace RPG::GameCore { class HoyoTag; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_1AAB94A8A632CE0A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x112C0790)
#define CLASS_2_1AAB94A8A632CE0A_METHOD_2_8D61BE16C9463302_OFFSET UNITYSDK_OFFSET(0x112C0EE0)
#define CLASS_2_1AAB94A8A632CE0A_METHOD_2_A5B6063FFC26FC8F_OFFSET UNITYSDK_OFFSET(0x112C0570)
#define CLASS_2_1AAB94A8A632CE0A_METHOD_2_E4DDE096FFC70385_OFFSET UNITYSDK_OFFSET(0x112C0660)
#define CLASS_2_1AAB94A8A632CE0A_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0x112C0880)
#define CLASS_2_1AAB94A8A632CE0A_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0x112C0BB0)
#define CLASS_2_1AAB94A8A632CE0A__CTOR_OFFSET UNITYSDK_OFFSET(0x112C0FA0)

inline static constexpr unsigned int Class_2_1AAB94A8A632CE0A_TypeDefinitionIndex = 53517;

class Class_2_1AAB94A8A632CE0A : public ::RPG::GameCore::GameComponentBase
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::HoyoTag*, ::System::Action*>* Field_2_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::HoyoTag*, ::System::Action*>* Field_2_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1AAB94A8A632CE0A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_A5B6063FFC26FC8F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1AAB94A8A632CE0A_METHOD_2_A5B6063FFC26FC8F_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1AAB94A8A632CE0A_DISPOSE_OFFSET))(this);
	}

	::System::Void OnModelArtLoaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1AAB94A8A632CE0A_ONMODELARTLOADED_OFFSET))(this);
	}

	::System::Void OnModelArtUnloaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1AAB94A8A632CE0A_ONMODELARTUNLOADED_OFFSET))(this);
	}

	static ::RPG::GameCore::HoyoTag* Method_2_E4DDE096FFC70385(::System::String* a1)
	{
		return ((::RPG::GameCore::HoyoTag*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_1AAB94A8A632CE0A_METHOD_2_E4DDE096FFC70385_OFFSET))(a1);
	}

	::System::Void Method_2_8D61BE16C9463302()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1AAB94A8A632CE0A_METHOD_2_8D61BE16C9463302_OFFSET))(this);
	}
};
