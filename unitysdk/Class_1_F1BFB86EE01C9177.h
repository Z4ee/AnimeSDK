#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class ChimeraWaitSecond; }

#define CLASS_1_F1BFB86EE01C9177_GET_CANBEREMOVED_OFFSET UNITYSDK_OFFSET(0xC16CDD0)
#define CLASS_1_F1BFB86EE01C9177_METHOD_1_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0xC16CCB0)
#define CLASS_1_F1BFB86EE01C9177_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0xC16CD40)
#define CLASS_1_F1BFB86EE01C9177_METHOD_1_8F9DF3D751E1E0BF_OFFSET UNITYSDK_OFFSET(0xC16CC70)
#define CLASS_1_F1BFB86EE01C9177_SET_CANBEREMOVED_OFFSET UNITYSDK_OFFSET(0xC16CDE0)
#define CLASS_1_F1BFB86EE01C9177__CTOR_OFFSET UNITYSDK_OFFSET(0xC16CC40)

inline static constexpr unsigned int Class_1_F1BFB86EE01C9177_TypeDefinitionIndex = 77927;

class Class_1_F1BFB86EE01C9177 : public ::System::Object
{
public:
	::RPG::GameCore::ChimeraWaitSecond* IGHAHBNLIJA; // 0x10
	::RPG::Client::Promises::Promise* KKHPFDBFKHH; // 0x18
	::System::Boolean _CanBeRemoved_k__BackingField; // 0x20
	::System::Single LLNIGIGFCEA; // 0x24

	::System::Void _ctor(::RPG::GameCore::ChimeraWaitSecond* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraWaitSecond*))((::PBYTE)hIl2Cpp + CLASS_1_F1BFB86EE01C9177__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::Promise* Method_1_8F9DF3D751E1E0BF()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1BFB86EE01C9177_METHOD_1_8F9DF3D751E1E0BF_OFFSET))(this);
	}

	::System::Void Method_1_2C95AFAD0256302F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1BFB86EE01C9177_METHOD_1_2C95AFAD0256302F_OFFSET))(this);
	}

	::System::Void Method_1_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F1BFB86EE01C9177_METHOD_1_479759059E440327_OFFSET))(this, a1);
	}

	::System::Boolean get_CanBeRemoved()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1BFB86EE01C9177_GET_CANBEREMOVED_OFFSET))(this);
	}

	::System::Void set_CanBeRemoved(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F1BFB86EE01C9177_SET_CANBEREMOVED_OFFSET))(this, a1);
	}
};
