#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueMagicScepterDataItem; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_8314BFE1E2AE3501___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10567400)
#define CLASS_2_8314BFE1E2AE3501___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10567440)
#define CLASS_2_8314BFE1E2AE3501___C___SETUPVIEW_B__11_0_OFFSET UNITYSDK_OFFSET(0x10567450)

inline static constexpr unsigned int Class_2_8314BFE1E2AE3501___c_TypeDefinitionIndex = 59227;

class Class_2_8314BFE1E2AE3501___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::RPG::Client::RogueMagicScepterDataItem*>** StaticGet___9__11_0()
	{
		return (::System::Comparison_1<::RPG::Client::RogueMagicScepterDataItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8314BFE1E2AE3501___c_TypeDefinitionIndex)->GetStaticField(0x27840);
	}
	static ::Class_2_8314BFE1E2AE3501___c** StaticGet___9()
	{
		return (::Class_2_8314BFE1E2AE3501___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8314BFE1E2AE3501___c_TypeDefinitionIndex)->GetStaticField(0x27848);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_8314BFE1E2AE3501___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8314BFE1E2AE3501___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __SetupView_b__11_0(::RPG::Client::RogueMagicScepterDataItem* a, ::RPG::Client::RogueMagicScepterDataItem* b)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueMagicScepterDataItem*, ::RPG::Client::RogueMagicScepterDataItem*))((::PBYTE)hIl2Cpp + CLASS_2_8314BFE1E2AE3501___C___SETUPVIEW_B__11_0_OFFSET))(this, a, b);
	}
};
