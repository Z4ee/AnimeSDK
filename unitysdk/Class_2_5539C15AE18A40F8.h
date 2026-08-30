#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class NotifyHandler; }
namespace RPG::Client { class RspHandler; }
namespace RPG::GameCore { class InteractRow; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class PropReqInteract; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_5539C15AE18A40F8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1789D6F0)
#define CLASS_2_5539C15AE18A40F8_METHOD_2_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x1789E270)
#define CLASS_2_5539C15AE18A40F8_METHOD_2_1917715161FC8111_OFFSET UNITYSDK_OFFSET(0x1789E070)
#define CLASS_2_5539C15AE18A40F8_METHOD_2_2045BA2947DBDBCE_1_OFFSET UNITYSDK_OFFSET(0x1789EB90)
#define CLASS_2_5539C15AE18A40F8_METHOD_2_2045BA2947DBDBCE_OFFSET UNITYSDK_OFFSET(0x1789F610)
#define CLASS_2_5539C15AE18A40F8_METHOD_2_50BAF321F0046F48_OFFSET UNITYSDK_OFFSET(0x1789E960)
#define CLASS_2_5539C15AE18A40F8_METHOD_2_92BE766FE7637517_OFFSET UNITYSDK_OFFSET(0x1789F400)
#define CLASS_2_5539C15AE18A40F8_METHOD_2_B927013BE4761B3A_OFFSET UNITYSDK_OFFSET(0x1789EAE0)
#define CLASS_2_5539C15AE18A40F8_METHOD_2_BB9D60C6EFED805B_OFFSET UNITYSDK_OFFSET(0x1789DB10)
#define CLASS_2_5539C15AE18A40F8_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x1789F540)
#define CLASS_2_5539C15AE18A40F8_METHOD_2_C7F40FA9FFBDBEED_OFFSET UNITYSDK_OFFSET(0x1789D900)
#define CLASS_2_5539C15AE18A40F8_METHOD_2_DFEC27F1F6CA5A80_OFFSET UNITYSDK_OFFSET(0x1789E4A0)
#define CLASS_2_5539C15AE18A40F8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1789EE00)
#define CLASS_2_5539C15AE18A40F8_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1789F0A0)
#define CLASS_2_5539C15AE18A40F8_TICK_OFFSET UNITYSDK_OFFSET(0x1789F0F0)
#define CLASS_2_5539C15AE18A40F8__CTOR_OFFSET UNITYSDK_OFFSET(0x1789D6E0)

inline static constexpr unsigned int Class_2_5539C15AE18A40F8_TypeDefinitionIndex = 53437;

class Class_2_5539C15AE18A40F8 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* HKBOGHBKDCN; // 0x0
	// static const ::System::String* LBGEBJOFEJH; // 0x0
	// static const ::System::String* HMHCLNDLJLJ; // 0x0
	// static const ::System::String* NAHLDAAJNCP; // 0x0
	::Class_1_5F51D4049EA87B7B* MEAIKNNPKPI; // 0x18
	::RPG::GameCore::PropReqInteract* OFKGLJOAMLD; // 0x20
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
	::RPG::GameCore::PropComponent* NKILIBDMOMC; // 0x30
	::Class_1_5F51D4049EA87B7B* OLJHOFCBCMN; // 0x38
	::RPG::Client::RspHandler* CLKKFICMNDI; // 0x40
	::RPG::Client::NotifyHandler* GHCGCOFNFHI; // 0x48
	::System::UInt32 ECJHBGCDFHE; // 0x50
	::System::UInt32 IDOEBJDGHBF; // 0x54

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropReqInteract* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropReqInteract*))((::PBYTE)hIl2Cpp + CLASS_2_5539C15AE18A40F8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5539C15AE18A40F8_DISPOSE_OFFSET))(this);
	}

	::RPG::GameCore::PropComponent* Method_2_C7F40FA9FFBDBEED()
	{
		return ((::RPG::GameCore::PropComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5539C15AE18A40F8_METHOD_2_C7F40FA9FFBDBEED_OFFSET))(this);
	}

	::System::Void Method_2_BB9D60C6EFED805B(::RPG::GameCore::InteractRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::InteractRow*))((::PBYTE)hIl2Cpp + CLASS_2_5539C15AE18A40F8_METHOD_2_BB9D60C6EFED805B_OFFSET))(this, a1);
	}

	::System::Void Method_2_1917715161FC8111(::RPG::GameCore::InteractRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::InteractRow*))((::PBYTE)hIl2Cpp + CLASS_2_5539C15AE18A40F8_METHOD_2_1917715161FC8111_OFFSET))(this, a1);
	}

	::System::Void Method_2_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5539C15AE18A40F8_METHOD_2_078D85152011B919_OFFSET))(this);
	}

	::System::Void Method_2_DFEC27F1F6CA5A80()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5539C15AE18A40F8_METHOD_2_DFEC27F1F6CA5A80_OFFSET))(this);
	}

	::System::Boolean Method_2_50BAF321F0046F48(::RPG::GameCore::InteractRow* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::InteractRow*))((::PBYTE)hIl2Cpp + CLASS_2_5539C15AE18A40F8_METHOD_2_50BAF321F0046F48_OFFSET))(this, a1);
	}

	::System::Void Method_2_B927013BE4761B3A(::RPG::GameCore::InteractRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::InteractRow*))((::PBYTE)hIl2Cpp + CLASS_2_5539C15AE18A40F8_METHOD_2_B927013BE4761B3A_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5539C15AE18A40F8_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5539C15AE18A40F8_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5539C15AE18A40F8_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_92BE766FE7637517(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5539C15AE18A40F8_METHOD_2_92BE766FE7637517_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5539C15AE18A40F8_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void Method_2_2045BA2947DBDBCE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5539C15AE18A40F8_METHOD_2_2045BA2947DBDBCE_OFFSET))(this);
	}

	::System::Void Method_2_2045BA2947DBDBCE_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5539C15AE18A40F8_METHOD_2_2045BA2947DBDBCE_1_OFFSET))(this);
	}
};
