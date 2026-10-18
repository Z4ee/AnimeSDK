#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExpeditionBattleRecommendAvatarState.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_4;
class Class_1_65EC9CACFF41765E;
namespace RPG::Client { class ExpeditionBattleDisplayAvatar; }

#define CLASS_1_A56BADFD9939FC53_METHOD_1_04F50CB46F21FA17_OFFSET UNITYSDK_OFFSET(0x15954500)
#define CLASS_1_A56BADFD9939FC53_METHOD_1_5009D225E81B4AF7_OFFSET UNITYSDK_OFFSET(0x15954220)
#define CLASS_1_A56BADFD9939FC53_METHOD_1_ED0BB8952F9A1071_OFFSET UNITYSDK_OFFSET(0x159543F0)
#define CLASS_1_A56BADFD9939FC53__CTOR_OFFSET UNITYSDK_OFFSET(0x15954210)

inline static constexpr unsigned int Class_1_A56BADFD9939FC53_TypeDefinitionIndex = 63941;

class Class_1_A56BADFD9939FC53 : public ::System::Object
{
public:
	::Class_1_65EC9CACFF41765E* BOMFMBPNFJI; // 0x10

	::System::Void _ctor(::Class_1_65EC9CACFF41765E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_65EC9CACFF41765E*))((::PBYTE)hIl2Cpp + CLASS_1_A56BADFD9939FC53__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::ExpeditionBattleDisplayAvatar* Method_1_5009D225E81B4AF7(::Class_1_1CBA230307F9C289_4* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Boolean a4)
	{
		return ((::RPG::Client::ExpeditionBattleDisplayAvatar*(*)(::PVOID, ::Class_1_1CBA230307F9C289_4*, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A56BADFD9939FC53_METHOD_1_5009D225E81B4AF7_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::Client::ExpeditionBattleRecommendAvatarState Method_1_ED0BB8952F9A1071(::Class_1_1CBA230307F9C289_4* a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::RPG::Client::ExpeditionBattleRecommendAvatarState(*)(::PVOID, ::Class_1_1CBA230307F9C289_4*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A56BADFD9939FC53_METHOD_1_ED0BB8952F9A1071_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::ExpeditionBattleDisplayAvatar* Method_1_04F50CB46F21FA17(::Class_1_1CBA230307F9C289_4* a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::RPG::Client::ExpeditionBattleDisplayAvatar*(*)(::PVOID, ::Class_1_1CBA230307F9C289_4*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A56BADFD9939FC53_METHOD_1_04F50CB46F21FA17_OFFSET))(this, a1, a2, a3);
	}
};
