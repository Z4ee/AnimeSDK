#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelAppendKeyType.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_208;
class Class_1_A92BC063ED2379EB;
class Class_2_B66C1067C0468FBB;
namespace RPG::GameCore { class BaseChimeraDuelValueGetter; }
namespace RPG::GameCore { class ChimeraDuelCasterAttributeValueGetter; }
namespace RPG::GameCore { class ChimeraDuelChimeraCasterAttributeDivideValueGetter; }
namespace RPG::GameCore { class ChimeraDuelChimeraDynamicValueGetter; }
namespace RPG::GameCore { class ChimeraDuelExcelValueGetter; }
namespace RPG::GameCore { class ChimeraDuelGlobalDynamicValueGetter; }
namespace RPG::GameCore { class ChimeraDuelMasterIDValueGetter; }
namespace RPG::GameCore { class ChimeraDuelSelectionCountValueGetter; }
namespace RPG::GameCore { class ChimeraDuelStatusGetter; }
namespace RPG::GameCore { class ChimeraDuelSumValueGetter; }
namespace RPG::GameCore { class ChimeraDuelTurnIndexValueGetter; }
namespace RPG::GameCore { class ChimeraDuelValueCalculator; }
namespace RPG::GameCore { class ChimeraDuelWaitSummonUnitQueueCountValueGetter; }
namespace RPG::GameCore { class SimpleChimeraDuelValueGetter; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_1_4229CFF63555F4B5_GET__CONTEXTGETTER_OFFSET UNITYSDK_OFFSET(0x192576D0)
#define CLASS_1_4229CFF63555F4B5_GET__QUERY_OFFSET UNITYSDK_OFFSET(0x192576C0)
#define CLASS_1_4229CFF63555F4B5_METHOD_1_0AF0F15474011B00_OFFSET UNITYSDK_OFFSET(0x19259750)
#define CLASS_1_4229CFF63555F4B5_METHOD_1_14FE70C9B9646561_OFFSET UNITYSDK_OFFSET(0x192583E0)
#define CLASS_1_4229CFF63555F4B5_METHOD_1_1979474406148984_OFFSET UNITYSDK_OFFSET(0x19259390)
#define CLASS_1_4229CFF63555F4B5_METHOD_1_1A60FD39027989E0_OFFSET UNITYSDK_OFFSET(0x19258640)
#define CLASS_1_4229CFF63555F4B5_METHOD_1_30E3FC6ED964E3BD_OFFSET UNITYSDK_OFFSET(0x19259D20)
#define CLASS_1_4229CFF63555F4B5_METHOD_1_31966F1941496AC4_OFFSET UNITYSDK_OFFSET(0x19259CB0)
#define CLASS_1_4229CFF63555F4B5_METHOD_1_5A95A03CB271BFF5_OFFSET UNITYSDK_OFFSET(0x19259A00)
#define CLASS_1_4229CFF63555F4B5_METHOD_1_5C1CD65564A7C9E8_OFFSET UNITYSDK_OFFSET(0x19259FB0)
#define CLASS_1_4229CFF63555F4B5_METHOD_1_8BDA5F88CEF3C27D_OFFSET UNITYSDK_OFFSET(0x19258330)
#define CLASS_1_4229CFF63555F4B5_METHOD_1_9B39F7D7C1FF70D6_OFFSET UNITYSDK_OFFSET(0x192576E0)
#define CLASS_1_4229CFF63555F4B5_METHOD_1_B2749822E4761D5C_OFFSET UNITYSDK_OFFSET(0x192598F0)
#define CLASS_1_4229CFF63555F4B5_METHOD_1_DE674D8545616C69_OFFSET UNITYSDK_OFFSET(0x19259EF0)
#define CLASS_1_4229CFF63555F4B5_METHOD_1_E7AB3C27DF42F5BE_OFFSET UNITYSDK_OFFSET(0x19257750)
#define CLASS_1_4229CFF63555F4B5_METHOD_1_E9BF19228E3C8BBF_OFFSET UNITYSDK_OFFSET(0x19259660)
#define CLASS_1_4229CFF63555F4B5_METHOD_1_F6FCE321BC6B35F3_OFFSET UNITYSDK_OFFSET(0x1925A600)
#define CLASS_1_4229CFF63555F4B5_METHOD_1_FA66415B48D4FEBA_OFFSET UNITYSDK_OFFSET(0x19257C50)
#define CLASS_1_4229CFF63555F4B5_METHOD_1_FE98CA78AC29BC5B_OFFSET UNITYSDK_OFFSET(0x1925A870)
#define CLASS_1_4229CFF63555F4B5__CTOR_OFFSET UNITYSDK_OFFSET(0x19257740)

inline static constexpr unsigned int Class_1_4229CFF63555F4B5_TypeDefinitionIndex = 77107;

class Class_1_4229CFF63555F4B5 : public ::System::Object
{
public:
	::System::Func_1<::Class_1_43BD383C98B4C0C5_208*>* __ContextGetter_k__BackingField; // 0x10
	::Class_1_A92BC063ED2379EB* __Query_k__BackingField; // 0x18

	::System::Void _ctor(::Class_1_A92BC063ED2379EB* a1, ::System::Func_1<::Class_1_43BD383C98B4C0C5_208*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::System::Func_1<::Class_1_43BD383C98B4C0C5_208*>*))((::PBYTE)hIl2Cpp + CLASS_1_4229CFF63555F4B5__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_A92BC063ED2379EB* get__Query()
	{
		return ((::Class_1_A92BC063ED2379EB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4229CFF63555F4B5_GET__QUERY_OFFSET))(this);
	}

	::System::Func_1<::Class_1_43BD383C98B4C0C5_208*>* get__ContextGetter()
	{
		return ((::System::Func_1<::Class_1_43BD383C98B4C0C5_208*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4229CFF63555F4B5_GET__CONTEXTGETTER_OFFSET))(this);
	}

	::Class_1_43BD383C98B4C0C5_208* Method_1_9B39F7D7C1FF70D6()
	{
		return ((::Class_1_43BD383C98B4C0C5_208*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4229CFF63555F4B5_METHOD_1_9B39F7D7C1FF70D6_OFFSET))(this);
	}

	::System::Single Method_1_E7AB3C27DF42F5BE(::RPG::GameCore::BaseChimeraDuelValueGetter* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::BaseChimeraDuelValueGetter*))((::PBYTE)hIl2Cpp + CLASS_1_4229CFF63555F4B5_METHOD_1_E7AB3C27DF42F5BE_OFFSET))(this, a1);
	}

	::System::Single Method_1_FA66415B48D4FEBA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4229CFF63555F4B5_METHOD_1_FA66415B48D4FEBA_OFFSET))(this);
	}

	::System::Single Method_1_30E3FC6ED964E3BD(::RPG::GameCore::ChimeraDuelWaitSummonUnitQueueCountValueGetter* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::ChimeraDuelWaitSummonUnitQueueCountValueGetter*))((::PBYTE)hIl2Cpp + CLASS_1_4229CFF63555F4B5_METHOD_1_30E3FC6ED964E3BD_OFFSET))(this, a1);
	}

	::System::Single Method_1_8BDA5F88CEF3C27D(::RPG::GameCore::ChimeraDuelCasterAttributeValueGetter* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::ChimeraDuelCasterAttributeValueGetter*))((::PBYTE)hIl2Cpp + CLASS_1_4229CFF63555F4B5_METHOD_1_8BDA5F88CEF3C27D_OFFSET))(this, a1);
	}

	::System::Single Method_1_14FE70C9B9646561(::RPG::GameCore::ChimeraDuelChimeraCasterAttributeDivideValueGetter* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::ChimeraDuelChimeraCasterAttributeDivideValueGetter*))((::PBYTE)hIl2Cpp + CLASS_1_4229CFF63555F4B5_METHOD_1_14FE70C9B9646561_OFFSET))(this, a1);
	}

	::System::Single Method_1_1A60FD39027989E0(::RPG::GameCore::ChimeraDuelExcelValueGetter* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::ChimeraDuelExcelValueGetter*))((::PBYTE)hIl2Cpp + CLASS_1_4229CFF63555F4B5_METHOD_1_1A60FD39027989E0_OFFSET))(this, a1);
	}

	::System::Single Method_1_1979474406148984(::RPG::GameCore::ChimeraDuelGlobalDynamicValueGetter* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::ChimeraDuelGlobalDynamicValueGetter*))((::PBYTE)hIl2Cpp + CLASS_1_4229CFF63555F4B5_METHOD_1_1979474406148984_OFFSET))(this, a1);
	}

	static ::System::String* Method_1_FE98CA78AC29BC5B(::Class_2_B66C1067C0468FBB* a1, ::RPG::GameCore::ChimeraDuelAppendKeyType a2)
	{
		return ((::System::String*(*)(::Class_2_B66C1067C0468FBB*, ::RPG::GameCore::ChimeraDuelAppendKeyType))((::PBYTE)hIl2Cpp + CLASS_1_4229CFF63555F4B5_METHOD_1_FE98CA78AC29BC5B_OFFSET))(a1, a2);
	}

	::System::Single Method_1_E9BF19228E3C8BBF(::RPG::GameCore::ChimeraDuelSelectionCountValueGetter* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::ChimeraDuelSelectionCountValueGetter*))((::PBYTE)hIl2Cpp + CLASS_1_4229CFF63555F4B5_METHOD_1_E9BF19228E3C8BBF_OFFSET))(this, a1);
	}

	::System::Single Method_1_0AF0F15474011B00(::RPG::GameCore::ChimeraDuelStatusGetter* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::ChimeraDuelStatusGetter*))((::PBYTE)hIl2Cpp + CLASS_1_4229CFF63555F4B5_METHOD_1_0AF0F15474011B00_OFFSET))(this, a1);
	}

	::System::Single Method_1_B2749822E4761D5C(::RPG::GameCore::ChimeraDuelSumValueGetter* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::ChimeraDuelSumValueGetter*))((::PBYTE)hIl2Cpp + CLASS_1_4229CFF63555F4B5_METHOD_1_B2749822E4761D5C_OFFSET))(this, a1);
	}

	::System::Single Method_1_5A95A03CB271BFF5(::RPG::GameCore::ChimeraDuelValueCalculator* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::ChimeraDuelValueCalculator*))((::PBYTE)hIl2Cpp + CLASS_1_4229CFF63555F4B5_METHOD_1_5A95A03CB271BFF5_OFFSET))(this, a1);
	}

	::System::Single Method_1_31966F1941496AC4(::RPG::GameCore::SimpleChimeraDuelValueGetter* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::SimpleChimeraDuelValueGetter*))((::PBYTE)hIl2Cpp + CLASS_1_4229CFF63555F4B5_METHOD_1_31966F1941496AC4_OFFSET))(this, a1);
	}

	::System::Single Method_1_DE674D8545616C69(::RPG::GameCore::ChimeraDuelTurnIndexValueGetter* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::ChimeraDuelTurnIndexValueGetter*))((::PBYTE)hIl2Cpp + CLASS_1_4229CFF63555F4B5_METHOD_1_DE674D8545616C69_OFFSET))(this, a1);
	}

	::System::Single Method_1_5C1CD65564A7C9E8(::RPG::GameCore::ChimeraDuelMasterIDValueGetter* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::ChimeraDuelMasterIDValueGetter*))((::PBYTE)hIl2Cpp + CLASS_1_4229CFF63555F4B5_METHOD_1_5C1CD65564A7C9E8_OFFSET))(this, a1);
	}

	::System::Single Method_1_F6FCE321BC6B35F3(::RPG::GameCore::ChimeraDuelChimeraDynamicValueGetter* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::ChimeraDuelChimeraDynamicValueGetter*))((::PBYTE)hIl2Cpp + CLASS_1_4229CFF63555F4B5_METHOD_1_F6FCE321BC6B35F3_OFFSET))(this, a1);
	}
};
