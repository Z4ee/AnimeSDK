#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class LevelPedestrianV2MemberExtendFreeStyle; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E6A0859D5809DBE9_CLASS_1_3FF1714CB752E730_METHOD_1_2A2F00C68C55E889_OFFSET UNITYSDK_OFFSET(0xB6F1E40)
#define CLASS_1_E6A0859D5809DBE9_CLASS_1_3FF1714CB752E730_METHOD_1_ADBB0534A558AEF8_OFFSET UNITYSDK_OFFSET(0xB6F1D60)
#define CLASS_1_E6A0859D5809DBE9_CLASS_1_3FF1714CB752E730__CTOR_OFFSET UNITYSDK_OFFSET(0xB6F1D20)

inline static constexpr unsigned int Class_1_E6A0859D5809DBE9_Class_1_3FF1714CB752E730_TypeDefinitionIndex = 69244;

class Class_1_E6A0859D5809DBE9_Class_1_3FF1714CB752E730 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::LevelPedestrianV2MemberExtendFreeStyle*>* LHDBMGGLFCA; // 0x10
	::System::Single POMALHEBAGE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6A0859D5809DBE9_CLASS_1_3FF1714CB752E730__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::LevelPedestrianV2MemberExtendFreeStyle* Method_1_2A2F00C68C55E889()
	{
		return ((::RPG::GameCore::LevelPedestrianV2MemberExtendFreeStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6A0859D5809DBE9_CLASS_1_3FF1714CB752E730_METHOD_1_2A2F00C68C55E889_OFFSET))(this);
	}

	::System::Void Method_1_ADBB0534A558AEF8(::RPG::GameCore::LevelPedestrianV2MemberExtendFreeStyle* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelPedestrianV2MemberExtendFreeStyle*))((::PBYTE)hIl2Cpp + CLASS_1_E6A0859D5809DBE9_CLASS_1_3FF1714CB752E730_METHOD_1_ADBB0534A558AEF8_OFFSET))(this, a1);
	}
};
