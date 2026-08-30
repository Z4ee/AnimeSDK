#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_9541CF6F5087409A.h"

class Class_4_93A9EED86FE5EFB4;
namespace RPG::GameCore { class ChimeraDuelCreateChimeraNode; }
namespace RPG::GameCore { class ChimeraDuelHysilensEffectNode; }
namespace RPG::GameCore { class ChimeraDuelReorderChimeraNode; }
namespace RPG::GameCore { class ChimeraDuelSetChimeraLightWeightActiveNode; }
namespace RPG::GameCore { class ChimeraDuelSummonNode; }
namespace RPG::GameCore { class ChimeraDuelUIMoveToSummonQueueNode; }

#define CLASS_4_B0BFA89BB6887FE8_METHOD_4_410E27A98D04D71C_OFFSET UNITYSDK_OFFSET(0xB727A20)
#define CLASS_4_B0BFA89BB6887FE8_METHOD_4_5AD21C5A44ED6F8A_OFFSET UNITYSDK_OFFSET(0xB727B10)
#define CLASS_4_B0BFA89BB6887FE8_METHOD_4_C6251B577ACF1BED_OFFSET UNITYSDK_OFFSET(0xB727D50)
#define CLASS_4_B0BFA89BB6887FE8_METHOD_4_C858DE8C9FF01301_OFFSET UNITYSDK_OFFSET(0xB727C20)
#define CLASS_4_B0BFA89BB6887FE8_METHOD_4_EA21D080C9050E03_OFFSET UNITYSDK_OFFSET(0xB7278B0)
#define CLASS_4_B0BFA89BB6887FE8_METHOD_4_EE589ED6D6262F2A_OFFSET UNITYSDK_OFFSET(0xB727970)
#define CLASS_4_B0BFA89BB6887FE8__CTOR_OFFSET UNITYSDK_OFFSET(0xB7278A0)

inline static constexpr unsigned int Class_4_B0BFA89BB6887FE8_TypeDefinitionIndex = 77175;

class Class_4_B0BFA89BB6887FE8 : public ::Class_3_9541CF6F5087409A
{
public:
	::Class_4_93A9EED86FE5EFB4* EEFMDEHLLFI; // 0x20

	::System::Void _ctor(::Class_4_93A9EED86FE5EFB4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_93A9EED86FE5EFB4*))((::PBYTE)hIl2Cpp + CLASS_4_B0BFA89BB6887FE8__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_EA21D080C9050E03(::RPG::GameCore::ChimeraDuelSummonNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelSummonNode*))((::PBYTE)hIl2Cpp + CLASS_4_B0BFA89BB6887FE8_METHOD_4_EA21D080C9050E03_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_EE589ED6D6262F2A(::RPG::GameCore::ChimeraDuelHysilensEffectNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelHysilensEffectNode*))((::PBYTE)hIl2Cpp + CLASS_4_B0BFA89BB6887FE8_METHOD_4_EE589ED6D6262F2A_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_410E27A98D04D71C(::RPG::GameCore::ChimeraDuelCreateChimeraNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelCreateChimeraNode*))((::PBYTE)hIl2Cpp + CLASS_4_B0BFA89BB6887FE8_METHOD_4_410E27A98D04D71C_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_5AD21C5A44ED6F8A(::RPG::GameCore::ChimeraDuelUIMoveToSummonQueueNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelUIMoveToSummonQueueNode*))((::PBYTE)hIl2Cpp + CLASS_4_B0BFA89BB6887FE8_METHOD_4_5AD21C5A44ED6F8A_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_C858DE8C9FF01301(::RPG::GameCore::ChimeraDuelSetChimeraLightWeightActiveNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelSetChimeraLightWeightActiveNode*))((::PBYTE)hIl2Cpp + CLASS_4_B0BFA89BB6887FE8_METHOD_4_C858DE8C9FF01301_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_C6251B577ACF1BED(::RPG::GameCore::ChimeraDuelReorderChimeraNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelReorderChimeraNode*))((::PBYTE)hIl2Cpp + CLASS_4_B0BFA89BB6887FE8_METHOD_4_C6251B577ACF1BED_OFFSET))(this, a1);
	}
};
