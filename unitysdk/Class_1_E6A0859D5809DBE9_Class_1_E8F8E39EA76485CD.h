#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NPCBodySize.h"
#include "unitysdk/System/Object.h"

class Class_1_B87B48EBDCE76E87;
class Class_1_E6A0859D5809DBE9;
class Class_1_E6A0859D5809DBE9_Class_1_3FF1714CB752E730;
class Class_2_15E5EFF5F7DD9F31;
namespace RPG::GameCore { class LevelPedestrianV2ExtendFreeStyle; }
namespace RPG::GameCore { class LevelPedestrianV2MemberExtendFreeStyle; }
namespace RPG::GameCore { class LevelPedestrianV2MemberExtendFreeStyleConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E6A0859D5809DBE9_CLASS_1_E8F8E39EA76485CD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB6F14A0)
#define CLASS_1_E6A0859D5809DBE9_CLASS_1_E8F8E39EA76485CD_METHOD_1_125D1D788056F439_OFFSET UNITYSDK_OFFSET(0xB6F1970)
#define CLASS_1_E6A0859D5809DBE9_CLASS_1_E8F8E39EA76485CD_METHOD_1_21A93A99770C00BA_OFFSET UNITYSDK_OFFSET(0xB6F1FD0)
#define CLASS_1_E6A0859D5809DBE9_CLASS_1_E8F8E39EA76485CD_METHOD_1_6A91C874B89FD45A_OFFSET UNITYSDK_OFFSET(0xB6F17D0)
#define CLASS_1_E6A0859D5809DBE9_CLASS_1_E8F8E39EA76485CD__CTOR_OFFSET UNITYSDK_OFFSET(0xB6F06B0)

inline static constexpr unsigned int Class_1_E6A0859D5809DBE9_Class_1_E8F8E39EA76485CD_TypeDefinitionIndex = 69243;

class Class_1_E6A0859D5809DBE9_Class_1_E8F8E39EA76485CD : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::String*>* EDHDDJKIFDO; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* EHLGLBENHEJ; // 0x18
	::System::Collections::Generic::HashSet_1<::System::String*>* BIDLPGEABJL; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_E6A0859D5809DBE9_Class_1_3FF1714CB752E730*>* LHDBMGGLFCA; // 0x28
	::RPG::GameCore::LevelPedestrianV2MemberExtendFreeStyleConfig* EABKOHGCHFP; // 0x30
	::System::Collections::Generic::HashSet_1<::System::String*>* LADEEJFDJOH; // 0x38
	::System::Collections::Generic::HashSet_1<::System::String*>* GBHBBLONPCN; // 0x40
	::RPG::GameCore::NPCBodySize FNCMBFHKKCK; // 0x48

	::System::Void _ctor(::Class_1_E6A0859D5809DBE9* a1, ::RPG::GameCore::LevelPedestrianV2ExtendFreeStyle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E6A0859D5809DBE9*, ::RPG::GameCore::LevelPedestrianV2ExtendFreeStyle*))((::PBYTE)hIl2Cpp + CLASS_1_E6A0859D5809DBE9_CLASS_1_E8F8E39EA76485CD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6A0859D5809DBE9_CLASS_1_E8F8E39EA76485CD_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_125D1D788056F439(::Class_2_15E5EFF5F7DD9F31* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_15E5EFF5F7DD9F31*))((::PBYTE)hIl2Cpp + CLASS_1_E6A0859D5809DBE9_CLASS_1_E8F8E39EA76485CD_METHOD_1_125D1D788056F439_OFFSET))(this, a1);
	}

	::System::String* Method_1_21A93A99770C00BA(::RPG::GameCore::LevelPedestrianV2MemberExtendFreeStyle* a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::LevelPedestrianV2MemberExtendFreeStyle*))((::PBYTE)hIl2Cpp + CLASS_1_E6A0859D5809DBE9_CLASS_1_E8F8E39EA76485CD_METHOD_1_21A93A99770C00BA_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_6A91C874B89FD45A(::Class_1_B87B48EBDCE76E87* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B87B48EBDCE76E87*))((::PBYTE)hIl2Cpp + CLASS_1_E6A0859D5809DBE9_CLASS_1_E8F8E39EA76485CD_METHOD_1_6A91C874B89FD45A_OFFSET))(this, a1);
	}
};
