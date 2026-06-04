#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG::Client { class RelicItemData; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_BE3841977FBB4ED9___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA55EA40)
#define CLASS_2_BE3841977FBB4ED9___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA55EA80)
#define CLASS_2_BE3841977FBB4ED9___C___GETORCREATEHIGHSCORERELICDATASBYRELICTYPE_B__13_0_OFFSET UNITYSDK_OFFSET(0xA55EA90)

inline static constexpr unsigned int Class_2_BE3841977FBB4ED9___c_TypeDefinitionIndex = 62539;

class Class_2_BE3841977FBB4ED9___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::System::ValueTuple_2<::System::Single, ::RPG::Client::RelicItemData*>>** StaticGet___9__13_0()
	{
		return (::System::Comparison_1<::System::ValueTuple_2<::System::Single, ::RPG::Client::RelicItemData*>>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_BE3841977FBB4ED9___c_TypeDefinitionIndex)->GetStaticField(0x63A40);
	}
	static ::Class_2_BE3841977FBB4ED9___c** StaticGet___9()
	{
		return (::Class_2_BE3841977FBB4ED9___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_BE3841977FBB4ED9___c_TypeDefinitionIndex)->GetStaticField(0x63A48);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_BE3841977FBB4ED9___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE3841977FBB4ED9___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __GetOrCreateHighScoreRelicDatasByRelicType_b__13_0(::System::ValueTuple_2<::System::Single, ::RPG::Client::RelicItemData*> a1, ::System::ValueTuple_2<::System::Single, ::RPG::Client::RelicItemData*> a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::System::Single, ::RPG::Client::RelicItemData*>, ::System::ValueTuple_2<::System::Single, ::RPG::Client::RelicItemData*>))((::PBYTE)hIl2Cpp + CLASS_2_BE3841977FBB4ED9___C___GETORCREATEHIGHSCORERELICDATASBYRELICTYPE_B__13_0_OFFSET))(this, a1, a2);
	}
};
