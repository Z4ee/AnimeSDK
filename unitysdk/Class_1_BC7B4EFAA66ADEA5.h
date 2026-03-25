#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelAppendKeyType.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_171;
class Class_1_C4FD36003027AC99;
class Class_2_49CAB3DE74280C58;
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

#define CLASS_1_BC7B4EFAA66ADEA5_GET__CONTEXTGETTER_OFFSET UNITYSDK_OFFSET(0x87B0180)
#define CLASS_1_BC7B4EFAA66ADEA5_GET__QUERY_OFFSET UNITYSDK_OFFSET(0x87B0170)
#define CLASS_1_BC7B4EFAA66ADEA5_METHOD_1_06DB548668AA88E8_OFFSET UNITYSDK_OFFSET(0x87B1060)
#define CLASS_1_BC7B4EFAA66ADEA5_METHOD_1_0AF0F15474011B00_OFFSET UNITYSDK_OFFSET(0x87B2200)
#define CLASS_1_BC7B4EFAA66ADEA5_METHOD_1_1979474406148984_OFFSET UNITYSDK_OFFSET(0x87B1DF0)
#define CLASS_1_BC7B4EFAA66ADEA5_METHOD_1_2DB334CAD65A86FB_OFFSET UNITYSDK_OFFSET(0x87B0190)
#define CLASS_1_BC7B4EFAA66ADEA5_METHOD_1_30E3FC6ED964E3BD_OFFSET UNITYSDK_OFFSET(0x87B27F0)
#define CLASS_1_BC7B4EFAA66ADEA5_METHOD_1_31966F1941496AC4_OFFSET UNITYSDK_OFFSET(0x87B2790)
#define CLASS_1_BC7B4EFAA66ADEA5_METHOD_1_3708090ED3FBE87D_OFFSET UNITYSDK_OFFSET(0x87B23A0)
#define CLASS_1_BC7B4EFAA66ADEA5_METHOD_1_43B12BF66E03E4A2_OFFSET UNITYSDK_OFFSET(0x87B01F0)
#define CLASS_1_BC7B4EFAA66ADEA5_METHOD_1_5A95A03CB271BFF5_OFFSET UNITYSDK_OFFSET(0x87B2480)
#define CLASS_1_BC7B4EFAA66ADEA5_METHOD_1_602E588370918875_OFFSET UNITYSDK_OFFSET(0x87B1330)
#define CLASS_1_BC7B4EFAA66ADEA5_METHOD_1_89248EBA05021FAD_OFFSET UNITYSDK_OFFSET(0x87B3150)
#define CLASS_1_BC7B4EFAA66ADEA5_METHOD_1_8BDA5F88CEF3C27D_OFFSET UNITYSDK_OFFSET(0x87B0FB0)
#define CLASS_1_BC7B4EFAA66ADEA5_METHOD_1_C7ED994399BED449_OFFSET UNITYSDK_OFFSET(0x87B2F20)
#define CLASS_1_BC7B4EFAA66ADEA5_METHOD_1_C80EA6637207C680_OFFSET UNITYSDK_OFFSET(0x87B0860)
#define CLASS_1_BC7B4EFAA66ADEA5_METHOD_1_D26921A5C6265C4A_OFFSET UNITYSDK_OFFSET(0x87B2A80)
#define CLASS_1_BC7B4EFAA66ADEA5_METHOD_1_DE674D8545616C69_OFFSET UNITYSDK_OFFSET(0x87B29C0)
#define CLASS_1_BC7B4EFAA66ADEA5_METHOD_1_E9BF19228E3C8BBF_OFFSET UNITYSDK_OFFSET(0x87B2110)
#define CLASS_1_BC7B4EFAA66ADEA5__CTOR_OFFSET UNITYSDK_OFFSET(0x87B01E0)

inline static constexpr unsigned int Class_1_BC7B4EFAA66ADEA5_TypeDefinitionIndex = 63120;

class Class_1_BC7B4EFAA66ADEA5 : public ::System::Object
{
public:
	::System::Func_1<::Class_1_43BD383C98B4C0C5_171*>* __ContextGetter_k__BackingField; // 0x10
	::Class_1_C4FD36003027AC99* __Query_k__BackingField; // 0x18

	::System::Void _ctor(::Class_1_C4FD36003027AC99* a1, ::System::Func_1<::Class_1_43BD383C98B4C0C5_171*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C4FD36003027AC99*, ::System::Func_1<::Class_1_43BD383C98B4C0C5_171*>*))((::PBYTE)hIl2Cpp + CLASS_1_BC7B4EFAA66ADEA5__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_C4FD36003027AC99* get__Query()
	{
		return ((::Class_1_C4FD36003027AC99*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BC7B4EFAA66ADEA5_GET__QUERY_OFFSET))(this);
	}

	::System::Func_1<::Class_1_43BD383C98B4C0C5_171*>* get__ContextGetter()
	{
		return ((::System::Func_1<::Class_1_43BD383C98B4C0C5_171*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BC7B4EFAA66ADEA5_GET__CONTEXTGETTER_OFFSET))(this);
	}

	::Class_1_43BD383C98B4C0C5_171* Method_1_2DB334CAD65A86FB()
	{
		return ((::Class_1_43BD383C98B4C0C5_171*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BC7B4EFAA66ADEA5_METHOD_1_2DB334CAD65A86FB_OFFSET))(this);
	}

	::System::Single Method_1_43B12BF66E03E4A2(::RPG::GameCore::BaseChimeraDuelValueGetter* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::BaseChimeraDuelValueGetter*))((::PBYTE)hIl2Cpp + CLASS_1_BC7B4EFAA66ADEA5_METHOD_1_43B12BF66E03E4A2_OFFSET))(this, a1);
	}

	::System::Single Method_1_C80EA6637207C680()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BC7B4EFAA66ADEA5_METHOD_1_C80EA6637207C680_OFFSET))(this);
	}

	::System::Single Method_1_30E3FC6ED964E3BD(::RPG::GameCore::ChimeraDuelWaitSummonUnitQueueCountValueGetter* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::ChimeraDuelWaitSummonUnitQueueCountValueGetter*))((::PBYTE)hIl2Cpp + CLASS_1_BC7B4EFAA66ADEA5_METHOD_1_30E3FC6ED964E3BD_OFFSET))(this, a1);
	}

	::System::Single Method_1_8BDA5F88CEF3C27D(::RPG::GameCore::ChimeraDuelCasterAttributeValueGetter* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::ChimeraDuelCasterAttributeValueGetter*))((::PBYTE)hIl2Cpp + CLASS_1_BC7B4EFAA66ADEA5_METHOD_1_8BDA5F88CEF3C27D_OFFSET))(this, a1);
	}

	::System::Single Method_1_06DB548668AA88E8(::RPG::GameCore::ChimeraDuelChimeraCasterAttributeDivideValueGetter* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::ChimeraDuelChimeraCasterAttributeDivideValueGetter*))((::PBYTE)hIl2Cpp + CLASS_1_BC7B4EFAA66ADEA5_METHOD_1_06DB548668AA88E8_OFFSET))(this, a1);
	}

	::System::Single Method_1_602E588370918875(::RPG::GameCore::ChimeraDuelExcelValueGetter* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::ChimeraDuelExcelValueGetter*))((::PBYTE)hIl2Cpp + CLASS_1_BC7B4EFAA66ADEA5_METHOD_1_602E588370918875_OFFSET))(this, a1);
	}

	::System::Single Method_1_1979474406148984(::RPG::GameCore::ChimeraDuelGlobalDynamicValueGetter* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::ChimeraDuelGlobalDynamicValueGetter*))((::PBYTE)hIl2Cpp + CLASS_1_BC7B4EFAA66ADEA5_METHOD_1_1979474406148984_OFFSET))(this, a1);
	}

	static ::System::String* Method_1_89248EBA05021FAD(::Class_2_49CAB3DE74280C58* a1, ::RPG::GameCore::ChimeraDuelAppendKeyType a2)
	{
		return ((::System::String*(*)(::Class_2_49CAB3DE74280C58*, ::RPG::GameCore::ChimeraDuelAppendKeyType))((::PBYTE)hIl2Cpp + CLASS_1_BC7B4EFAA66ADEA5_METHOD_1_89248EBA05021FAD_OFFSET))(a1, a2);
	}

	::System::Single Method_1_E9BF19228E3C8BBF(::RPG::GameCore::ChimeraDuelSelectionCountValueGetter* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::ChimeraDuelSelectionCountValueGetter*))((::PBYTE)hIl2Cpp + CLASS_1_BC7B4EFAA66ADEA5_METHOD_1_E9BF19228E3C8BBF_OFFSET))(this, a1);
	}

	::System::Single Method_1_0AF0F15474011B00(::RPG::GameCore::ChimeraDuelStatusGetter* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::ChimeraDuelStatusGetter*))((::PBYTE)hIl2Cpp + CLASS_1_BC7B4EFAA66ADEA5_METHOD_1_0AF0F15474011B00_OFFSET))(this, a1);
	}

	::System::Single Method_1_3708090ED3FBE87D(::RPG::GameCore::ChimeraDuelSumValueGetter* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::ChimeraDuelSumValueGetter*))((::PBYTE)hIl2Cpp + CLASS_1_BC7B4EFAA66ADEA5_METHOD_1_3708090ED3FBE87D_OFFSET))(this, a1);
	}

	::System::Single Method_1_5A95A03CB271BFF5(::RPG::GameCore::ChimeraDuelValueCalculator* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::ChimeraDuelValueCalculator*))((::PBYTE)hIl2Cpp + CLASS_1_BC7B4EFAA66ADEA5_METHOD_1_5A95A03CB271BFF5_OFFSET))(this, a1);
	}

	::System::Single Method_1_31966F1941496AC4(::RPG::GameCore::SimpleChimeraDuelValueGetter* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::SimpleChimeraDuelValueGetter*))((::PBYTE)hIl2Cpp + CLASS_1_BC7B4EFAA66ADEA5_METHOD_1_31966F1941496AC4_OFFSET))(this, a1);
	}

	::System::Single Method_1_DE674D8545616C69(::RPG::GameCore::ChimeraDuelTurnIndexValueGetter* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::ChimeraDuelTurnIndexValueGetter*))((::PBYTE)hIl2Cpp + CLASS_1_BC7B4EFAA66ADEA5_METHOD_1_DE674D8545616C69_OFFSET))(this, a1);
	}

	::System::Single Method_1_D26921A5C6265C4A(::RPG::GameCore::ChimeraDuelMasterIDValueGetter* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::ChimeraDuelMasterIDValueGetter*))((::PBYTE)hIl2Cpp + CLASS_1_BC7B4EFAA66ADEA5_METHOD_1_D26921A5C6265C4A_OFFSET))(this, a1);
	}

	::System::Single Method_1_C7ED994399BED449(::RPG::GameCore::ChimeraDuelChimeraDynamicValueGetter* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::ChimeraDuelChimeraDynamicValueGetter*))((::PBYTE)hIl2Cpp + CLASS_1_BC7B4EFAA66ADEA5_METHOD_1_C7ED994399BED449_OFFSET))(this, a1);
	}
};
