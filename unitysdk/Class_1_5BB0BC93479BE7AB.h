#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_5BB0BC93479BE7AB_ADD_ONCHANGED_OFFSET UNITYSDK_OFFSET(0x17AC77D0)
#define CLASS_1_5BB0BC93479BE7AB_METHOD_1_59123F0B27AA996C_OFFSET UNITYSDK_OFFSET(0x17AC7B40)
#define CLASS_1_5BB0BC93479BE7AB_METHOD_1_597C70C069DD35BF_OFFSET UNITYSDK_OFFSET(0x17AC7890)
#define CLASS_1_5BB0BC93479BE7AB_METHOD_1_ABFE6A357B89C69A_OFFSET UNITYSDK_OFFSET(0x17AC7C90)
#define CLASS_1_5BB0BC93479BE7AB_METHOD_1_DCA1C4D2EA007EDB_OFFSET UNITYSDK_OFFSET(0x17AC7A30)
#define CLASS_1_5BB0BC93479BE7AB_METHOD_1_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x17AC7BD0)
#define CLASS_1_5BB0BC93479BE7AB_REMOVE_ONCHANGED_OFFSET UNITYSDK_OFFSET(0x17AC7830)
#define CLASS_1_5BB0BC93479BE7AB__CTOR_OFFSET UNITYSDK_OFFSET(0x17AC7D80)

inline static constexpr unsigned int Class_1_5BB0BC93479BE7AB_TypeDefinitionIndex = 56150;

class Class_1_5BB0BC93479BE7AB : public ::System::Object
{
public:
	::System::Action* OnChanged; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::RPG::GameCore::FixPoint>* MEEPDDMNLCH; // 0x18
	::RPG::GameCore::FixPoint IGAMHKCHEHK; // 0x20
	::System::Boolean FJMFKJEIOIO; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5BB0BC93479BE7AB__CTOR_OFFSET))(this);
	}

	::System::Void add_OnChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_5BB0BC93479BE7AB_ADD_ONCHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_OnChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_5BB0BC93479BE7AB_REMOVE_ONCHANGED_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_597C70C069DD35BF()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5BB0BC93479BE7AB_METHOD_1_597C70C069DD35BF_OFFSET))(this);
	}

	::System::Void Method_1_DCA1C4D2EA007EDB(::RPG::GameCore::StringHash a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_5BB0BC93479BE7AB_METHOD_1_DCA1C4D2EA007EDB_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_59123F0B27AA996C(::RPG::GameCore::StringHash a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + CLASS_1_5BB0BC93479BE7AB_METHOD_1_59123F0B27AA996C_OFFSET))(this, a1);
	}

	::System::Void Method_1_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5BB0BC93479BE7AB_METHOD_1_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Boolean Method_1_ABFE6A357B89C69A()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5BB0BC93479BE7AB_METHOD_1_ABFE6A357B89C69A_OFFSET))(this);
	}
};
