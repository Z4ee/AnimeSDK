#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class ChimeraWaitSecond; }

#define CLASS_1_F1BFB86EE01C9177_GET_CANBEREMOVED_OFFSET UNITYSDK_OFFSET(0x1289EAA0)
#define CLASS_1_F1BFB86EE01C9177_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0x1289EA10)
#define CLASS_1_F1BFB86EE01C9177_METHOD_1_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0x1289E910)
#define CLASS_1_F1BFB86EE01C9177_METHOD_1_8F9DF3D751E1E0BF_OFFSET UNITYSDK_OFFSET(0x1289E8D0)
#define CLASS_1_F1BFB86EE01C9177_SET_CANBEREMOVED_OFFSET UNITYSDK_OFFSET(0x1289EAB0)
#define CLASS_1_F1BFB86EE01C9177__CTOR_OFFSET UNITYSDK_OFFSET(0x1289E8A0)

inline static constexpr unsigned int Class_1_F1BFB86EE01C9177_TypeDefinitionIndex = 71894;

class Class_1_F1BFB86EE01C9177 : public ::System::Object
{
public:
	::RPG::Client::Promises::Promise* Field_1_1; // 0x10
	::RPG::GameCore::ChimeraWaitSecond* Field_1_0; // 0x18
	::System::Single Field_1_2; // 0x20
	::System::Boolean _CanBeRemoved_k__BackingField; // 0x24

	::System::Void _ctor(::RPG::GameCore::ChimeraWaitSecond* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraWaitSecond*))((::PBYTE)hIl2Cpp + CLASS_1_F1BFB86EE01C9177__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::Promise* Method_1_8F9DF3D751E1E0BF()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1BFB86EE01C9177_METHOD_1_8F9DF3D751E1E0BF_OFFSET))(this);
	}

	::System::Void Method_1_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1BFB86EE01C9177_METHOD_1_572E53F76E315839_OFFSET))(this);
	}

	::System::Void Method_1_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F1BFB86EE01C9177_METHOD_1_479759059E440327_OFFSET))(this, a1);
	}

	::System::Boolean get_CanBeRemoved()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1BFB86EE01C9177_GET_CANBEREMOVED_OFFSET))(this);
	}

	::System::Void set_CanBeRemoved(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F1BFB86EE01C9177_SET_CANBEREMOVED_OFFSET))(this, value);
	}
};
